#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>

extern php::Var php_pwlite_spawn(php::Str exe, php::Array args, php::Str userDataDir);
extern php::Bool php_pwlite_write(php::Var _php__var__pipe, php::Str json);
extern php::Var php_pwlite_read(php::Var _php__var__pipe, php::Float timeout);
extern php::Int php_pwlite_fd(php::Var _php__var__pipe);
extern php::Int php_pwlite_pid(php::Var _php__var__pipe);
extern void php_pwlite_close(php::Var _php__var__pipe, php::Bool graceful);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

