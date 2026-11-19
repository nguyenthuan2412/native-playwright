// Low-level part of native_playwright: only what PHP cannot do cheaply.
// Spawns Chrome with --remote-debugging-pipe (fd 3 = in, fd 4 = out),
// writes/reads '\0'-delimited CDP frames on non-blocking fds.
// Everything else (JSON, routing, Swoole coroutines, Page API) is TypePHP code.
#include <phpx.h>

#include <cerrno>
#include <cstring>
#include <string>
#include <vector>

#include <fcntl.h>
#include <ftw.h>
#include <poll.h>
#include <signal.h>
#include <spawn.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <unistd.h>

extern char **environ;

using namespace php;

static constexpr size_t READ_CHUNK = 65536;

static double now_sec() {
    timeval tv;
    gettimeofday(&tv, nullptr);
    return tv.tv_sec + tv.tv_usec / 1e6;
}

static int rm_cb(const char *p, const struct stat *, int, struct FTW *) {
    return remove(p);
}

class ChromePipe : public Box {
  public:
    pid_t pid = -1;
    int rfd = -1;  // we read  <- chrome fd 4
    int wfd = -1;  // we write -> chrome fd 3
    std::string buf;
    std::string tmpProfile;
    bool eof = false;

    void close(bool graceful) {
        if (graceful && wfd >= 0) {
            static const char msg[] = "{\"id\":0,\"method\":\"Browser.close\"}";
            ssize_t w = ::write(wfd, msg, sizeof(msg));  // includes trailing '\0'
            (void) w;
        }
        if (wfd >= 0) { ::close(wfd); wfd = -1; }
        if (rfd >= 0) { ::close(rfd); rfd = -1; }
        if (pid > 0) {
            int st;
            double deadline = now_sec() + (graceful ? 3.0 : 0.0);
            for (;;) {
                pid_t r = waitpid(pid, &st, WNOHANG);
                if (r == pid || (r < 0 && errno != EINTR)) break;
                if (now_sec() >= deadline) {
                    kill(pid, SIGKILL);
                    waitpid(pid, &st, 0);
                    break;
                }
                usleep(10000);
            }
            pid = -1;
        }
        if (!tmpProfile.empty()) {
            nftw(tmpProfile.c_str(), rm_cb, 16, FTW_DEPTH | FTW_PHYS);
            tmpProfile.clear();
        }
        std::string().swap(buf);
    }

    ~ChromePipe() override {
        close(true);
    }
};

static int dup_high(int fd) {
    // Keep pipe ends above 4 so dup2(x, 3/4) in the child never clobbers them.
    int n = fcntl(fd, F_DUPFD_CLOEXEC, 10);
    ::close(fd);
    return n;
}

static void set_nonblock(int fd) {
    fcntl(fd, F_SETFL, fcntl(fd, F_GETFL) | O_NONBLOCK);
}

// Returns a ChromePipe resource, or an error string.
var php_pwlite_spawn(Str exe, Array args, Str userDataDir) {
    auto *p = new ChromePipe();
    std::string udd;
    if (userDataDir.length() > 0) {
        udd = std::string(userDataDir.data(), userDataDir.length());
    } else {
        const char *td = getenv("TMPDIR");
        std::string tmpl = std::string(td && *td ? td : "/tmp") + "/pwlite-XXXXXX";
        std::vector<char> t(tmpl.begin(), tmpl.end());
        t.push_back('\0');
        if (!mkdtemp(t.data())) {
            delete p;
            return Str(std::string("mkdtemp: ") + strerror(errno));
        }
        udd = t.data();
        p->tmpProfile = udd;
    }

    std::vector<std::string> sargs;
    sargs.push_back(std::string(exe.data(), exe.length()));
    sargs.push_back("--remote-debugging-pipe");
    sargs.push_back("--user-data-dir=" + udd);
    for (auto it = args.begin(); it != args.end(); it++) {
        { auto s = it.value().toString(); sargs.push_back(std::string(s.data(), s.length())); }
    }
    std::vector<char *> argv;
    for (auto &s : sargs) argv.push_back(s.data());
    argv.push_back(nullptr);

    int in[2], out[2];
    if (pipe(in) < 0 || pipe(out) < 0) {
        delete p;
        return Str(std::string("pipe: ") + strerror(errno));
    }
    in[0] = dup_high(in[0]);
    in[1] = dup_high(in[1]);
    out[0] = dup_high(out[0]);
    out[1] = dup_high(out[1]);

    posix_spawn_file_actions_t fa;
    posix_spawnattr_t at;
    posix_spawn_file_actions_init(&fa);
    posix_spawnattr_init(&at);
    posix_spawn_file_actions_addopen(&fa, 0, "/dev/null", O_RDONLY, 0);
    posix_spawn_file_actions_addopen(&fa, 1, "/dev/null", O_WRONLY, 0);
    posix_spawn_file_actions_addopen(&fa, 2, "/dev/null", O_WRONLY, 0);
    posix_spawn_file_actions_adddup2(&fa, in[0], 3);
    posix_spawn_file_actions_adddup2(&fa, out[1], 4);
    short flags = POSIX_SPAWN_SETSIGMASK | POSIX_SPAWN_SETSIGDEF;
#ifdef POSIX_SPAWN_CLOEXEC_DEFAULT
    // macOS: do not leak Swoole sockets/eventfds into Chrome.
    flags |= POSIX_SPAWN_CLOEXEC_DEFAULT;
    posix_spawn_file_actions_addinherit_np(&fa, 3);
    posix_spawn_file_actions_addinherit_np(&fa, 4);
#endif
    sigset_t none, all;
    sigemptyset(&none);
    sigfillset(&all);
    posix_spawnattr_setsigmask(&at, &none);
    posix_spawnattr_setsigdefault(&at, &all);
    posix_spawnattr_setflags(&at, flags);

    pid_t pid;
    int err = posix_spawn(&pid, argv[0], &fa, &at, argv.data(), environ);
    posix_spawn_file_actions_destroy(&fa);
    posix_spawnattr_destroy(&at);
    ::close(in[0]);
    ::close(out[1]);
    if (err != 0) {
        ::close(in[1]);
        ::close(out[0]);
        delete p;
        return Str(std::string("spawn ") + sargs[0] + ": " + strerror(err));
    }
    p->pid = pid;
    p->wfd = in[1];
    p->rfd = out[0];
    set_nonblock(p->rfd);
    set_nonblock(p->wfd);
    return {p};
}

// Write one CDP message (the '\0' terminator is appended here).
Bool php_pwlite_write(var box, Str json) {
    auto *p = box.toBox<ChromePipe>();
    if (p->wfd < 0) return false;
    const char *d = json.data();
    size_t n = json.length() + 1;  // zend strings are NUL-terminated
    while (n > 0) {
        ssize_t w = ::write(p->wfd, d, n);
        if (w > 0) { d += w; n -= (size_t) w; continue; }
        if (w < 0 && errno == EINTR) continue;
        if (w < 0 && errno == EAGAIN) {
            pollfd pfd{p->wfd, POLLOUT, 0};
            poll(&pfd, 1, 1000);
            continue;
        }
        return false;
    }
    return true;
}

// Wait up to $timeout seconds (0 = don't wait), then return all complete frames.
// Returns null once the pipe hit EOF and no frames remain.
var php_pwlite_read(var box, Float timeout) {
    auto *p = box.toBox<ChromePipe>();
    Array frames;
    if (p->rfd < 0) return nullptr;
    if (timeout > 0 && !p->eof) {
        pollfd pfd{p->rfd, POLLIN, 0};
        int r;
        do { r = poll(&pfd, 1, (int) (timeout * 1000)); } while (r < 0 && errno == EINTR);
        if (r <= 0) return frames;
    }
    while (!p->eof) {
        size_t old = p->buf.size();
        p->buf.resize(old + READ_CHUNK);
        ssize_t r = ::read(p->rfd, &p->buf[old], READ_CHUNK);
        p->buf.resize(old + (r > 0 ? (size_t) r : 0));
        if (r > 0) continue;
        if (r < 0 && errno == EINTR) continue;
        if (r < 0 && errno == EAGAIN) break;
        p->eof = true;
    }
    size_t start = 0, nul;
    while ((nul = p->buf.find('\0', start)) != std::string::npos) {
        if (nul > start) frames.append(Variant(p->buf.data() + start, nul - start));
        start = nul + 1;
    }
    if (start > 0) p->buf.erase(0, start);
    if (p->buf.empty() && p->buf.capacity() > 4 * READ_CHUNK) {
        std::string().swap(p->buf);  // give back memory after big frames (screenshots)
    }
    if (p->eof && frames.count() == 0) return nullptr;
    return frames;
}

Int php_pwlite_fd(var box) {
    return box.toBox<ChromePipe>()->rfd;
}

Int php_pwlite_pid(var box) {
    return box.toBox<ChromePipe>()->pid;
}

void php_pwlite_close(var box, Bool graceful) {
    box.toBox<ChromePipe>()->close(graceful);
}
