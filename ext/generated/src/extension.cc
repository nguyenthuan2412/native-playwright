#include <cstring>
#include <phpx.h>
#include <phpx_helper.h>
#include <phpx_big_int.h>
#include <phpx_big_float.h>
#include <phpx_decimal.h>
#include <phpx_python.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <phpx_std.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_native_pipe_a3a10585cb_decl.h>
#include <php_native_playwright_src_NativePlaywright_BlockingTransport_ce405677f2_decl.h>
#include <php_native_playwright_src_NativePlaywright_Browser_5c08077592_decl.h>
#include <php_native_playwright_src_NativePlaywright_BrowserContext_cd971a2234_decl.h>
#include <php_native_playwright_src_NativePlaywright_BrowserType_4c5677b1e9_decl.h>
#include <php_native_playwright_src_NativePlaywright_CDPSession_9157bcb704_decl.h>
#include <php_native_playwright_src_NativePlaywright_Connection_0606cc101d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Dialog_73c802b322_decl.h>
#include <php_native_playwright_src_NativePlaywright_Frame_07e74a6952_decl.h>
#include <php_native_playwright_src_NativePlaywright_FrameLocator_98aef2ee5b_decl.h>
#include <php_native_playwright_src_NativePlaywright_Keyboard_4f4f2515ca_decl.h>
#include <php_native_playwright_src_NativePlaywright_Locator_206b2f41f4_decl.h>
#include <php_native_playwright_src_NativePlaywright_Mouse_1796713ced_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Request_db667c6252_decl.h>
#include <php_native_playwright_src_NativePlaywright_Response_f8b49507a2_decl.h>
#include <php_native_playwright_src_NativePlaywright_Route_83d7a76f49_decl.h>
#include <php_native_playwright_src_NativePlaywright_RouteHandler_a91721537d_decl.h>
#include <php_native_playwright_src_NativePlaywright_SwooleTransport_b44c3f18aa_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>
#include <php_src_NativePlaywright_BlockingTransport_arginfo.h>
#include <php_src_NativePlaywright_BrowserContext_arginfo.h>
#include <php_src_NativePlaywright_BrowserType_arginfo.h>
#include <php_src_NativePlaywright_Browser_arginfo.h>
#include <php_src_NativePlaywright_CDPSession_arginfo.h>
#include <php_src_NativePlaywright_Connection_arginfo.h>
#include <php_src_NativePlaywright_ConsoleMessage_arginfo.h>
#include <php_src_NativePlaywright_Dialog_arginfo.h>
#include <php_src_NativePlaywright_Download_arginfo.h>
#include <php_src_NativePlaywright_EventEmitter_arginfo.h>
#include <php_src_NativePlaywright_Exception_arginfo.h>
#include <php_src_NativePlaywright_FileChooser_arginfo.h>
#include <php_src_NativePlaywright_FrameLocator_arginfo.h>
#include <php_src_NativePlaywright_Frame_arginfo.h>
#include <php_src_NativePlaywright_Injected_arginfo.h>
#include <php_src_NativePlaywright_JSError_arginfo.h>
#include <php_src_NativePlaywright_Keyboard_arginfo.h>
#include <php_src_NativePlaywright_Locator_arginfo.h>
#include <php_src_NativePlaywright_Mouse_arginfo.h>
#include <php_src_NativePlaywright_Page_arginfo.h>
#include <php_src_NativePlaywright_Playwright_arginfo.h>
#include <php_src_NativePlaywright_Request_arginfo.h>
#include <php_src_NativePlaywright_Response_arginfo.h>
#include <php_src_NativePlaywright_RouteHandler_arginfo.h>
#include <php_src_NativePlaywright_Route_arginfo.h>
#include <php_src_NativePlaywright_SwooleTransport_arginfo.h>
#include <php_src_NativePlaywright_TimeoutError_arginfo.h>
#include <php_src_NativePlaywright_Touchscreen_arginfo.h>
#include <php_src_NativePlaywright_Transport_arginfo.h>
#include <php_src_NativePlaywright_Util_arginfo.h>
#include <php_src_NativePlaywright_Waiter_arginfo.h>
#include <php_src_native_pipe_arginfo.h>
#include <new>
namespace typephp_project_native_playwright {

// global vars 
// class register functions 
static zend_class_entry *php_class_entry_NativePlaywright_Transport = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_BlockingTransport = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Browser = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_BrowserContext = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_BrowserType = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_CDPSession = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Connection = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_ConsoleMessage = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Dialog = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Download = nullptr;
static zend_class_entry *php_class_entry_RuntimeException = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Exception = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_FileChooser = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Frame = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_FrameLocator = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Injected = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_JSError = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Keyboard = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Locator = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Mouse = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Page = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Playwright = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Request = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Response = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Route = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_RouteHandler = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_SwooleTransport = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_TimeoutError = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Touchscreen = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Util = nullptr;
static zend_class_entry *php_class_entry_NativePlaywright_Waiter = nullptr;
// request-local caches 
struct php_request_cache_storage final {
    php_request_cache_storage() = default;
    php_request_cache_storage(const php_request_cache_storage &) = delete;
    php_request_cache_storage(php_request_cache_storage &&) = delete;
    php_request_cache_storage &operator=(const php_request_cache_storage &) = delete;
    php_request_cache_storage &operator=(php_request_cache_storage &&) = delete;
    zend_class_entry *class_map[1]{};
    zend_function *func_map[74]{};
    php::PropertyCacheSlot property_cache_map[124]{};
    php::MethodCallCacheSlot method_call_cache_map[109]{};
    php::FunctionCallCacheSlot function_call_cache_map[30]{};
    uint8_t function_resolution_cache_map[270]{};
};
static THREAD_LOCAL php_request_cache_storage *php_request_cache = nullptr;
// class entry 
static php::PersistentCacheSlot<zend_class_entry *> php_persistent_class_map[31]{};
// func 
static php::PersistentCacheSlot<zend_function *> php_persistent_func_map[79]{};
// property 
static php::PersistentCacheSlot<uint32_t> php_persistent_property_map[176]{};
// functions 
zend_class_entry *get_class(RequestClassId class_id, const php::Str &class_name) {
    const auto index = static_cast<uint32_t>(class_id);
    auto &slot = php_request_cache->class_map[index];
    if (UNEXPECTED(slot == nullptr)) {
        slot = php::getClassEntrySafe(class_name);
    }
    return slot;
}

zend_function *get_func(RequestFuncId func_id, const php::Str &func_name) {
    const auto index = static_cast<uint32_t>(func_id);
    auto &slot = php_request_cache->func_map[index];
    if (UNEXPECTED(slot == nullptr)) {
        slot = php::getFunction(func_name);
    }
    return slot;
}

zend_function *get_method(RequestFuncId func_id, const php::Str &method_name, RequestClassId class_id, const php::Str &class_name) {
    const auto index = static_cast<uint32_t>(func_id);
    auto &slot = php_request_cache->func_map[index];
    if (UNEXPECTED(slot == nullptr)) {
        auto ce = get_class(class_id, class_name);
        slot = php::getMethod(ce, method_name);
    }
    return slot;
}

zend_class_entry *get_persistent_class(PersistentClassId class_id, const php::Str &class_name) {
    const auto index = static_cast<uint32_t>(class_id);
    return php::getPersistentCache(php_persistent_class_map[index], [&]() {
        return php::getClassEntrySafe(class_name);
    });
}

zend_function *get_persistent_func(PersistentFuncId func_id, const php::Str &func_name) {
    const auto index = static_cast<uint32_t>(func_id);
    return php::getPersistentCache(php_persistent_func_map[index], [&]() {
        return php::getFunction(func_name);
    });
}

zend_function *get_persistent_method(PersistentFuncId func_id, const php::Str &method_name, PersistentClassId class_id, const php::Str &class_name) {
    const auto index = static_cast<uint32_t>(func_id);
    return php::getPersistentCache(php_persistent_func_map[index], [&]() {
        auto ce = get_persistent_class(class_id, class_name);
        return php::getMethod(ce, method_name);
    });
}

uint32_t get_persistent_prop(PersistentPropertyId prop_id, const php::Str &prop_name, const php::Str &class_name) {
    const auto index = static_cast<uint32_t>(prop_id);
    auto value = php::getPersistentCache(php_persistent_property_map[index], [&]() {
        return php::getPropertyOffset(class_name, prop_name) + 1024;
    });
    return value - 1024;
}

php::PropertyCacheSlot &get_property_cache(PropertyCacheId cache_id) noexcept {
    return php_request_cache->property_cache_map[static_cast<uint32_t>(cache_id)];
}

php::MethodCallCacheSlot &get_method_call_cache(MethodCallCacheId cache_id) noexcept {
    return php_request_cache->method_call_cache_map[static_cast<uint32_t>(cache_id)];
}

php::FunctionCallCacheSlot &get_function_call_cache(FunctionCallCacheId cache_id) noexcept {
    return php_request_cache->function_call_cache_map[static_cast<uint32_t>(cache_id)];
}

uint8_t &get_function_resolution_cache(FunctionResolutionCacheId cache_id) noexcept {
    return php_request_cache->function_resolution_cache_map[static_cast<uint32_t>(cache_id)];
}

// literal strings 
static php::Str _literal_strings[] = {
php::Str{ZEND_STRL("NativePlaywright\\JSON_UNESCAPED_SLASHES"), true}, // [0]
php::Str{ZEND_STRL("NativePlaywright\\JSON_UNESCAPED_UNICODE"), true}, // [1]
php::Str{ZEND_STRL("NativePlaywright\\JSON_PRESERVE_ZERO_FRACTION"), true}, // [2]
php::Str{ZEND_STRL("operation"), true}, // [3]
php::Str{ZEND_STRL("function (v) { const seen = new WeakSet(); const ser = (x, d) => { if (x === undefined) return undefined; if (x === null) return null; "), true}, // [4]
php::Str{ZEND_STRL("const t = typeof x; if (t === \"number\" || t === \"string\" || t === \"boolean\") return x; if (t === \"bigint\") return x.toString(); "), true}, // [5]
php::Str{ZEND_STRL("if (t === \"function\" || t === \"symbol\") return undefined; if (x instanceof Date) return x.toISOString(); if (x instanceof RegExp) return String(x); "), true}, // [6]
php::Str{ZEND_STRL("if (x instanceof Error) return { name: x.name, message: x.message, stack: x.stack }; "), true}, // [7]
php::Str{ZEND_STRL("if ((typeof Node !== \"undefined\" && x instanceof Node) || x === globalThis || (typeof Window !== \"undefined\" && x instanceof Window)) return undefined; "), true}, // [8]
php::Str{ZEND_STRL("if (seen.has(x) || d > 100) return undefined; seen.add(x); let out; "), true}, // [9]
php::Str{ZEND_STRL("if (Array.isArray(x) || ArrayBuffer.isView(x)) out = Array.from(x, e => { const r = ser(e, d + 1); return r === undefined ? null : r; }); "), true}, // [10]
php::Str{ZEND_STRL("else if (x instanceof Map) { out = {}; for (const [k, e] of x) { const r = ser(e, d + 1); if (r !== undefined) out[String(k)] = r; } } "), true}, // [11]
php::Str{ZEND_STRL("else if (x instanceof Set) out = [...x].map(e => { const r = ser(e, d + 1); return r === undefined ? null : r; }); "), true}, // [12]
php::Str{ZEND_STRL("else { out = {}; for (const k of Object.keys(x)) { const r = ser(x[k], d + 1); if (r !== undefined) out[k] = r; } } "), true}, // [13]
php::Str{ZEND_STRL("seen.delete(x); return out; }; return ser(v, 0); }"), true}, // [14]
php::Str{ZEND_STRL("__pwlite_util"), true}, // [15]
php::Str{ZEND_STRL("(() => {\nif (globalThis.__pwlite) return true;\nconst norm = s => (s || '').replace(/[\\u200b\\u00ad]/g, '').replace(/\\s+/g, ' ').trim();\nconst SKIP = new Set(['SCRIPT', 'STYLE', 'NOSCRIPT', 'TEMPLATE', 'HEAD', 'TITLE', 'META', 'LINK']);\n\n// ---------------------------------------------------------------- parsing\nfunction readQuoted(s, i) {\n  const q = s[i]; let j = i + 1, out = '';\n  while (j < s.length && s[j] !== q) { if (s[j] === '\\\\') { out += s[j + 1] \?\? ''; j += 2; } else out += s[j++]; }\n  if (q === '\"') { try { out = JSON.parse(s.slice(i, j + 1)); } catch (e) {} }\n  return { value: out, end: j + 1 };\n}\nfunction splitChain(sel) {\n  const parts = []; let cur = '', q = null, depth = 0;\n  for (let i = 0; i < sel.length; i++) {\n    const c = sel[i];\n    if (q) { cur += c; if (c === '\\\\') { cur += sel[++i] \?\? ''; } else if (c === q) q = null; continue; }\n    if (c === '\"' || c === \"'\" || c === '`') { q = c; cur += c; continue; }\n    if (c === '[' || c === '(') depth++;\n    else if (c === ']' || c === ')') depth--;\n    if (depth === 0 && c === '>' && sel[i + 1] === '>') { parts.push(cur.trim()); cur = ''; i++; continue; }\n    cur += c;\n  }\n  if (cur.trim()) parts.push(cur.trim());\n  return parts.map(parsePart);\n}\nconst ENGINES = new Set(['css', 'text', 'xpath', 'id', 'data-testid', 'data-test-id', 'data-test', 'role', 'nth', 'visible',\n  'internal:text', 'internal:has-text', 'internal:has-not-text', 'internal:has', 'internal:has-not', 'internal:and',\n  'internal:or', 'internal:label', 'internal:attr', 'internal:role', 'internal:testid', 'internal:control']);\nfunction parsePart(p) {\n  const m = /^([a-zA-Z_:\\-]+)\\s*=\\s*([\\s\\S]*)$/.exec(p);\n  if (m && ENGINES.has(m[1])) return { engine: m[1], body: m[2] };\n  if (p.startsWith('//') || p.startsWith('..') || p.startsWith('(//')) return { engine: 'xpath', body: p };\n  if (p.startsWith('\"') || p.startsWith(\"'\")) return { engine: 'text', body: p };\n  return { engine: 'css', body: p };\n}\n// text matcher: /re/flags | \"exact\"s | \"substring\"i | bare substring (ci)\nfunction matcher(body, quotedExact) {\n  body = body.trim();\n  const rm = /^\\/([\\s\\S]*)\\/([a-z]*)$/.exec(body);\n  if (rm) { const re = new RegExp(rm[1], rm[2]); return t => { re.lastIndex = 0; return re.test(t); }; }\n  if (body[0] === '\"' || body[0] === \"'\") {\n    const { value, end } = readQuoted(body, 0);\n    const suffix = body.slice(end);\n    const v = norm(value);\n    if (suffix === 's' || (suffix === '' && quotedExact)) return t => norm(t) === v;\n    const lv = v.toLowerCase(); return t => norm(t).toLowerCase().includes(lv);\n  }\n  const lv = norm(body).toLowerCase(); return t => norm(t).toLowerCase().includes(lv);\n}\n// [name=\"value\"i] list -> [{name, value(matcher|null), raw}]\nfunction parseAttrs(s) {\n  const out = []; let i = 0;\n  while (i < s.length) {\n    if (s[i] !== '[') { i++; continue; }\n    let j = i + 1, name = '';\n    while (j < s.length && !'=]'.includes(s[j])) name += s[j++];\n    let raw = null;\n    if (s[j] === '=') {\n      j++;\n      if (s[j] === '\"' || s[j] === \"'\") { const r = readQuoted(s, j); let e = r.end; while (/[is]/.test(s[e] \?\? '')) e++; raw = s.slice(j, e); j = e; }\n      else if (s[j] === '/') { let e = j + 1; while (e < s.length && s[e] !== '/') { if (s[e] === '\\\\') e++; e++; } e++; while (/[a-z]/.test(s[e] \?\? '')) e++; raw = s.slice(j, e); j = e; }\n      else { let v = ''; while (j < s.length && s[j] !== ']') v += s[j++]; raw = v.trim(); }\n    }\n    while (j < s.length && s[j] !== ']') j++;\n    out.push({ name: name.trim(), raw });\n    i = j + 1;\n  }\n  return out;\n}\n\n// ---------------------------------------------------------------- traversal\nfunction* deep(root) {\n  const stack = [];\n  const pushKids = n => { const k = n.children; for (let i = k.length - 1; i >= 0; i--) stack.push(k[i]); };\n  if (root.shadowRoot) pushKids(root.shadowRoot);\n  pushKids(root.nodeType === 9 ? root.documentElement ? { children: [root.documentElement] } : { children: [] } : root);\n  while (stack.length) {\n    const e = stack.pop(); yield e;\n    if (e.shadowRoot) pushKids(e.shadowRoot);\n    pushKids(e);\n  }\n}\nfunction parentOf(n) { return n.parentElement || (n.parentNode && n.parentNode.host) || null; }\nfunction composedContains(a, b) { for (let n = b; n; n = parentOf(n)) if (n === a) return true; return false; }\nfunction sortDoc(arr) { return [...new Set(arr)].sort((a, b) => a === b ? 0 : (a.compareDocumentPosition(b) & 2) ? 1 : -1); }\n\nfunction elementText(el, cache) {\n  let t = cache.get(el);\n  if (t === undefined) {\n    if (el.nodeName === 'INPUT' && ['button', 'submit', 'reset'].includes(el.type)) t = el.value;\n    else {\n      t = '';\n      const walk = n => { for (let c = n.firstChild; c; c = c.nextSibling) { if (c.nodeType === 3) t += c.nodeValue; else if (c.nodeType === 1 && !SKIP.has(c.nodeName)) walk(c); } if (n.shadowRoot) walk(n.shadowRoot); };\n      walk(el);\n    }\n    t = norm(t); cache.set(el, t);\n  }\n  return t;\n}\n\n// ---------------------------------------------------------------- visibility & state\nfunction isVisible(el) {\n  if (!el.isConnected) return false;\n  const st = getComputedStyle(el);\n  if (st.display === 'contents') {\n    for (let c = el.firstChild; c; c = c.nextSibling) {\n      if (c.nodeType === 1 && isVisible(c)) return true;\n      if (c.nodeType === 3 && c.nodeValue.trim()) { const r = document.createRange(); r.selectNodeContents(c); const b = r.getBoundingClientRect(); if (b.width > 0 && b.height > 0) return true; }\n    }\n    return false;\n  }\n  if (el.checkVisibility && !el.checkVisibility()) return false;\n  if (st.visibility !== 'visible') return false;\n  const r = el.getBoundingClientRect();\n  return r.width > 0 && r.height > 0;\n}\nfunction ariaDisabled(el) { for (let n = el; n; n = parentOf(n)) if (n.getAttribute && n.getAttribute('aria-disabled') === 'true') return true; return false; }\nconst FORM = new Set(['BUTTON', 'INPUT', 'SELECT', 'TEXTAREA', 'OPTION', 'OPTGROUP', 'FIELDSET']);\nfunction isDisabled(el) { return (FORM.has(el.nodeName) && el.matches(':disabled')) || ariaDisabled(el); }\nfunction isEditableEl(el) {\n  if (isDisabled(el)) return false;\n  if (['INPUT', 'TEXTAREA', 'SELECT'].includes(el.nodeName)) return !el.readOnly && el.getAttribute('aria-readonly') !== 'true';\n  if (el.isContentEditable) return true;\n  return el.hasAttribute('role') && el.getAttribute('aria-readonly') !== 'true';\n}\nfunction checkedState(el) {\n  if (el.nodeName === 'INPUT' && (el.type === 'checkbox' || el.type === 'radio')) return el.checked;\n  const role = getRole(el);\n  if (['checkbox', 'radio', 'switch', 'menuitemcheckbox', 'menuitemradio', 'option', 'treeitem'].includes(role)) {\n    const a = el.getAttribute('aria-checked'); if (a === 'true') return true; if (a === 'mixed') return 'mixed'; return false;\n  }\n  if (el.nodeName === 'LABEL' && el.control) return checkedState(el.control);\n  throw new Error('Not a checkbox or radio button');\n}\n\n// ---------------------------------------------------------------- ARIA\nconst INPUT_ROLES = { button: 'button', image: 'button', reset: 'button', submit: 'button', checkbox: 'checkbox', radio: 'radio',\n  range: 'slider', number: 'spinbutton', search: 'searchbox', email: 'textbox', tel: 'textbox', text: 'textbox', url: 'textbox', password: 'textbox', '': 'textbox' };\nfunction implicitRole(el) {\n  const n = el.nodeName;\n  switch (n) {\n    case 'A': case 'AREA': return el.hasAttribute('href') ? 'link' : null;\n    case 'ARTICLE': return 'article'; case 'ASIDE': return 'complementary'; case 'BUTTON': return 'button';\n    case 'DATALIST': return 'listbox'; case 'DD': return 'definition'; case 'DETAILS': return 'group'; case 'DIALOG': return 'dialog';\n    case 'DT': return 'term'; case 'FIELDSET': return 'group'; case 'FIGURE': return 'figure';\n    case 'FOOTER': return el.closest('article,aside,main,nav,section') ? null : 'contentinfo';\n    case 'HEADER': return el.closest('article,aside,main,nav,section') ? null : 'banner';\n    case 'FORM': return (el.hasAttribute('aria-label') || el.hasAttribute('aria-labelledby') || el.hasAttribute('name')) ? 'form' : null;\n    case 'H1': case 'H2': case 'H3': case 'H4': case 'H5': case 'H6': return 'heading';\n    case 'HR': return 'separator';\n    case 'IMG': return el.getAttribute('alt') === '' && !el.hasAttribute('title') ? 'presentation' : 'img';\n    case 'INPUT': {\n      const t = (el.getAttribute('type') || '').toLowerCase();\n      if (t === 'hidden' || t === 'file' || t === 'color' || t === 'date') return null;\n      if (el.hasAttribute('list') && ['text', 'search', 'tel', 'url', 'email', ''].includes(t)) return 'combobox';\n      return INPUT_ROLES[t] \?\? 'textbox';\n    }\n    case 'LI': return 'listitem'; case 'MAIN': return 'main'; case 'MATH': return 'math'; case 'MENU': return 'list';\n    case 'METER': return 'meter'; case 'NAV': return 'navigation'; case 'OL': case 'UL': return 'list';\n    case 'OPTGROUP': return 'group'; case 'OPTION': return 'option'; case 'OUTPUT': return 'status'; case 'P': return 'paragraph';\n    case 'PROGRESS': return 'progressbar';\n    case 'SECTION': return (el.hasAttribute('aria-label') || el.hasAttribute('aria-labelledby')) ? 'region' : null;\n    case 'SELECT': return (el.multiple || el.size > 1) ? 'listbox' : 'combobox';\n    case 'SUMMARY': return 'button'; case 'TABLE': return 'table'; case 'TBODY': case 'THEAD': case 'TFOOT': return 'rowgroup';\n    case 'TD': return 'cell'; case 'TEXTAREA': return 'textbox'; case 'TH': return el.getAttribute('scope') === 'row' ? 'rowheader' : 'columnheader';\n    case 'TR': return 'row'; case 'BLOCKQUOTE': return 'blockquote'; case 'CAPTION': return 'caption'; case 'CODE': return 'code';\n    case 'DEL': return 'deletion'; case 'INS': return 'insertion'; case 'EM': return 'emphasis'; case 'STRONG': return 'strong';\n    case 'SVG': return 'img';\n  }\n  return null;\n}\nfunction getRole(el) {\n  const explicit = (el.getAttribute('role') || '').trim().split(/\\s+/)[0];\n  if (explicit) return explicit === 'none' ? 'presentation' : explicit;\n  return implicitRole(el);\n}\nconst NAME_FROM_CONTENT = new Set(['button', 'cell', 'checkbox', 'columnheader', 'gridcell', 'heading', 'link', 'menuitem',\n  'menuitemcheckbox', 'menuitemradio', 'option', 'radio', 'row', 'rowheader', 'switch', 'tab', 'tooltip', 'treeitem', 'listitem', 'term']);\nfunction textAlt(n) {\n  let t = '';\n  for (let c = n.firstChild; c; c = c.nextSibling) {\n    if (c.nodeType === 3) t += c.nodeValue;\n    else if (c.nodeType === 1 && !SKIP.has(c.nodeName)) {\n      if (c.getAttribute('aria-hidden') === 'true') continue;\n      if (c.hasAttribute('aria-label')) t += ' ' + c.getAttribute('aria-label') + ' ';\n      else if (c.nodeName === 'IMG') t += ' ' + (c.getAttribute('alt') || '') + ' ';\n      else { const d = getComputedStyle(c).display; const block = d !== 'inline'; t += (block ? ' ' : '') + textAlt(c) + (block ? ' ' : ''); }\n    }\n  }\n  if (n.shadowRoot) t += textAlt(n.shadowRoot);\n  return t;\n}\nfunction accessibleName(el) {\n  const lb = el.getAttribute('aria-labelledby');\n  if (lb) { const t = lb.split(/\\s+/).map(id => { const r = el.getRootNode().getElementById?.(id) || document.getElementById(id); return r ? textAlt(r) : ''; }).join(' '); if (norm(t)) return norm(t); }\n  const al = el.getAttribute('aria-label'); if (al && norm(al)) return norm(al);\n  const n = el.nodeName;\n  if (n === 'INPUT' || n === 'TEXTAREA' || n === 'SELECT' || n === 'METER' || n === 'PROGRESS' || n === 'OUTPUT') {\n    if (n === 'INPUT' && ['button', 'submit', 'reset'].includes(el.type)) return norm(el.value || (el.type === 'submit' ? 'Submit' : el.type === 'reset' ? 'Reset' : ''));\n    if (n === 'INPUT' && el.type === 'image') return norm(el.alt || el.value || 'Submit');\n    const labels = el.labels ? [...el.labels].map(l => textAlt(l)).join(' ') : '';\n    if (norm(labels)) return norm(labels);\n    return norm(el.getAttribute('title') || el.getAttribute('placeholder') || '');\n  }\n  if (n === 'IMG' || n === 'AREA') return norm(el.getAttribute('alt') || el.getAttribute('title') || '');\n  if (n === 'FIELDSET') { const lg = el.querySelector(':scope > legend'); if (lg) return norm(textAlt(lg)); }\n  if (n === 'TABLE') { const c = el.querySelector(':scope > caption'); if (c) return norm(textAlt(c)); }\n  if (n === 'FIGURE') { const c = el.querySelector(':scope > figcaption'); if (c) return norm(textAlt(c)); }\n  const role = getRole(el);\n  if (NAME_FROM_CONTENT.has(role)) { const t = norm(textAlt(el)); if (t) return t; }\n  return norm(el.getAttribute('title') || '');\n}\nfunction isAriaHidden(el) {\n  for (let n = el; n; n = parentOf(n)) {\n    if (n.getAttribute && n.getAttribute('aria-hidden') === 'true') return true;\n    if (n.nodeType === 1) { const st = getComputedStyle(n); if (st.display === 'none') return true; if (n === el && st.visibility !== 'visible') return true; }\n  }\n  return false;\n}\nfunction roleProp(el, prop) {\n  switch (prop) {\n    case 'checked': try { return checkedState(el); } catch { return false; }\n    case 'disabled': return isDisabled(el);\n    case 'expanded': { const v = el.getAttribute('aria-expanded'); return v === null ? (el.nodeName === 'DETAILS' ? el.open : undefined) : v === 'true'; }\n    case 'pressed': { const v = el.getAttribute('aria-pressed'); return v === 'mixed' ? 'mixed' : v === 'true'; }\n    case 'selected': { const v = el.getAttribute('aria-selected'); if (v !== null) return v === 'true'; return el.nodeName === 'OPTION' ? el.selected : false; }\n    case 'level': { const v = el.getAttribute('aria-level'); if (v) return +v; const m = /^H(\\d)$/.exec(el.nodeName); return m ? +m[1] : undefined; }\n  }\n}\n\n// ---------------------------------------------------------------- engines\nfunction runEngine(part, roots, prevRoots, cache) {\n  const { engine, body } = part;\n  const out = [];\n  const fromRoots = fn => { for (const r of roots) for (const e of fn(r)) out.push(e); return roots.length > 1 ? sortDoc(out) : out; };\n  switch (engine) {\n    case 'css': return fromRoots(r => cssQuery(r, body, cache));\n    case 'xpath': return fromRoots(r => {\n      const doc = r.nodeType === 9 ? r : r.ownerDocument; let x = body;\n      if (r.nodeType !== 9 && x.startsWith('/')) x = '.' + x;\n      const res = doc.evaluate(x, r, null, XPathResult.ORDERED_NODE_SNAPSHOT_TYPE, null);\n      const a = []; for (let i = 0; i < res.snapshotLength; i++) { const n = res.snapshotItem(i); if (n.nodeType === 1) a.push(n); } return a;\n    });\n    case 'text': case 'internal:text': {\n      const m = matcher(body, engine === 'text');\n      return fromRoots(r => {\n        const matched = [];\n        for (const e of deep(r)) if (!SKIP.has(e.nodeName) && m(elementText(e, cache))) matched.push(e);\n        const hasMatchedChild = new Set();\n        for (const e of matched) for (let p = parentOf(e); p; p = parentOf(p)) { if (hasMatchedChild.has(p)) break; hasMatchedChild.add(p); }\n        return matched.filter(e => !hasMatchedChild.has(e));\n      });\n    }\n    case 'id': case 'data-testid': case 'data-test-id': case 'data-test': {\n      const attr = engine === 'id' ? 'id' : engine; const v = body.replace(/^[\"']|[\"']$/g, '');\n      return fromRoots(r => { const a = []; for (const e of deep(r)) if (e.getAttribute(attr) === v) a.push(e); return a; });\n    }\n    case 'internal:attr': case 'internal:testid': {\n      const [{ name, raw }] = parseAttrs(body); const m = matcher(raw \?\? '', false);\n      return fromRoots(r => { const a = []; for (const e of deep(r)) { const v = e.getAttribute(name); if (v !== null && m(v)) a.push(e); } return a; });\n    }\n    case 'internal:label': {\n      const m = matcher(body, false);\n      return fromRoots(r => {\n        const a = [];\n        for (const e of deep(r)) {\n          const texts = [];\n          if (e.labels) for (const l of e.labels) texts.push(elementText(l, cache));\n          const lb = e.getAttribute('aria-labelledby');\n          if (lb) for (const id of lb.split(/\\s+/)) { const t = document.getElementById(id); if (t) texts.push(elementText(t, cache)); }\n          const al = e.getAttribute('aria-label'); if (al) texts.push(al);\n          if (texts.some(t => m(t))) a.push(e);\n        }\n        return a;\n      });\n    }\n    case 'role': case 'internal:role': {\n      const role = /^[\\w-]+/.exec(body)[0].toLowerCase();\n      const attrs = parseAttrs(body.slice(role.length));\n      let includeHidden = false; const checks = [];\n      for (const { name, raw } of attrs) {\n        if (name === 'include-hidden') { includeHidden = raw === null || raw === 'true'; continue; }\n        if (name === 'name') { const m = matcher(raw, engine === 'role'); checks.push(e => m(accessibleName(e))); continue; }\n        const want = raw === 'true' ? true : raw === 'false' ? false : raw === 'mixed' ? 'mixed' : /^\\d+$/.test(raw) ? +raw : raw;\n        checks.push(e => { const v = roleProp(e, name); return name === 'checked' && want === true ? v === true : v === want || (want === false && !v); });\n      }\n      return fromRoots(r => {\n        const a = [];\n        for (const e of deep(r)) {\n          if (getRole(e) !== role) continue;\n          if (!includeHidden && isAriaHidden(e)) continue;\n          if (checks.every(c => c(e))) a.push(e);\n        }\n        return a;\n      });\n    }\n    default: throw new Error('Unknown selector engine \"' + engine + '\"');\n  }\n}\nconst PSEUDO = /:(visible|has-text|text-is|text-matches|text)(?:\\(((?:\"(?:[^\"\\\\]|\\\\.)*\"|'(?:[^'\\\\]|\\\\.)*'|[^)])*)\\))?/g;\nfunction cssQuery(root, css, cache) {\n  const extras = [];\n  const clean = css.replace(PSEUDO, (all, name, arg) => { extras.push([name, arg]); return ''; }).trim() || '*';\n  const out = [];\n  const visit = r => {\n    for (const e of r.querySelectorAll(clean)) out.push(e);\n    for (const e of r.querySelectorAll('*')) if (e.shadowRoot) visit(e.shadowRoot);\n  };\n  if (root.shadowRoot) visit(root.shadowRoot);\n  visit(root);\n  if (!extras.length) return out;\n  return out.filter(e => extras.every(([name, arg]) => {\n    if (name === 'visible') return isVisible(e);\n    const a = arg === undefined ? '' : arg.trim();\n    const unq = a[0] === '\"' || a[0] === \"'\" ? readQuoted(a, 0).value : a;\n    const t = elementText(e, cache);\n    if (name === 'has-text' || name === 'text') return t.toLowerCase().includes(norm(unq).toLowerCase());\n    if (name === 'text-is') return t === norm(unq);\n    if (name === 'text-matches') return new RegExp(unq).test(t);\n    return true;\n  }));\n}\n\nfunction query(selector, root) {\n  const cache = new Map();\n  let roots = [root || document], prev = roots;\n  for (const part of splitChain(selector)) {\n    const { engine, body } = part;\n    if (engine === 'nth') { const i = +body; const e = i < 0 ? roots[roots.length + i] : roots[i]; prev = roots; roots = e ? [e] : []; continue; }\n    if (engine === 'visible') { const want = body !== 'false'; roots = roots.filter(e => isVisible(e) === want); continue; }\n    if (engine === 'internal:has-text' || engine === 'internal:has-not-text') {\n      const m = matcher(body, false); const neg = engine === 'internal:has-not-text';\n      roots = roots.filter(e => m(elementText(e, cache)) !== neg); continue;\n    }\n    if (engine === 'internal:has' || engine === 'internal:has-not') {\n      const inner = JSON.parse(body); const neg = engine === 'internal:has-not';\n      roots = roots.filter(e => (query(inner, e).length > 0) !== neg); continue;\n    }\n    if (engine === 'internal:and') { const other = new Set(prev.flatMap(r => query(JSON.parse(body), r))); roots = roots.filter(e => other.has(e)); continue; }\n    if (engine === 'internal:or') { roots = sortDoc([...roots, ...prev.flatMap(r => query(JSON.parse(body), r))]); continue; }\n    if (engine === 'internal:control') throw new Error('internal:control must be handled by the driver');\n    prev = roots;\n    roots = runEngine(part, roots, prev, cache);\n  }\n  return roots;\n}\n\nfunction describe(el) {\n  let s = '<' + el.nodeName.toLowerCase();\n  for (const a of ['id', 'class', 'name', 'type', 'role', 'data-testid', 'aria-label']) { const v = el.getAttribute(a); if (v) s += ` ${a}=\"${v.slice(0, 40)}\"`; }\n  const t = norm(el.textContent).slice(0, 40);\n  return s + '>' + t + (t ? '\342\200\246' : '');\n}\nconst raf = () => new Promise(r => requestAnimationFrame(() => r()));\nfunction inViewport(r) { return r.top >= 0 && r.left >= 0 && r.bottom <= innerHeight && r.right <= innerWidth; }\nfunction hitTarget(el, x, y) {\n  let hit = (el.getRootNode().elementFromPoint ? el.getRootNode() : document).elementFromPoint(x, y);\n  while (hit && hit.shadowRoot) { const inner = hit.shadowRoot.elementFromPoint(x, y); if (!inner || inner === hit) break; hit = inner; }\n  if (!hit) return 'nothing';\n  if (composedContains(el, hit)) return null;\n  if (el.nodeName === 'LABEL' && el.control && composedContains(el.control, hit)) return null;\n  if (hit.nodeName === 'LABEL' && hit.control === el) return null;\n  return describe(hit);\n}\nconst NEEDS_ENABLED = new Set(['click', 'dblclick', 'check', 'uncheck', 'tap', 'fill', 'selectOption', 'clear', 'setInputFiles', 'selectText', 'dragTo']);\n\nconst api = {\n  query, describe,\n  one(sel, strict) {\n    const els = query(sel);\n    if (strict && els.length > 1) throw new Error(`strict mode violation: \"${sel}\" resolved to ${els.length} elements:\\n` + els.slice(0, 10).map((e, i) => `    ${i + 1}) ${describe(e)}`).join('\\n'));\n    return els[0] || null;\n  },\n  // returns {status:'ok', x, y, box} | {status:'retry', reason}\n  async prepare(sel, strict, action, opts) {\n    const el = api.one(sel, strict);\n    if (!el) return { status: 'retry', reason: 'waiting for ' + sel };\n    if (!el.isConnected) return { status: 'retry', reason: 'element is not attached to the DOM' };\n    if (!opts.force) {\n      if (!isVisible(el)) return { status: 'retry', reason: 'element is not visible' };\n      if (NEEDS_ENABLED.has(action) && isDisabled(el)) return { status: 'retry', reason: 'element is not enabled' };\n      if ((action === 'fill' || action === 'clear') && !isEditableEl(el)) return { status: 'retry', reason: 'element is not editable' };\n    }\n    let r = el.getBoundingClientRect();\n    if (!inViewport(r)) { el.scrollIntoView({ block: 'center', inline: 'center', behavior: 'instant' }); r = el.getBoundingClientRect(); }\n    if (!opts.force && action !== 'fill' && action !== 'focus') {\n      await raf(); await raf();\n      const r2 = el.getBoundingClientRect();\n      if (r2.x !== r.x || r2.y !== r.y || r2.width !== r.width || r2.height !== r.height) return { status: 'retry', reason: 'element is not stable' };\n      r = r2;\n    }\n    const x = r.left + (opts.position ? opts.position.x : r.width / 2);\n    const y = r.top + (opts.position ? opts.position.y : r.height / 2);\n    if (!opts.force && action !== 'fill' && action !== 'focus' && action !== 'screenshot' && action !== 'setInputFiles') {\n      const blocker = hitTarget(el, x, y);\n      if (blocker) return { status: 'retry', reason: blocker + ' intercepts pointer events' };\n    }\n    return { status: 'ok', x, y, box: { x: r.left, y: r.top, width: r.width, height: r.height } };\n  },\n  fill(sel, strict, value, force) {\n    const el = api.one(sel, strict);\n    if (!el) return 'retry';\n    if (!force && (!isVisible(el) || !isEditableEl(el))) return 'retry';\n    const n = el.nodeName;\n    if (n === 'INPUT') {\n      const t = el.type.toLowerCase();\n      if (['checkbox', 'radio', 'file', 'button', 'submit', 'reset', 'image', 'hidden'].includes(t)) throw new Error(`Input of type \"${t}\" cannot be filled`);\n      if (t === 'number' && value !== '' && isNaN(Number(value))) throw new Error('Cannot type text into input[type=number]');\n      if (['color', 'date', 'time', 'datetime-local', 'month', 'range', 'week'].includes(t)) {\n        el.focus(); el.value = value;\n        if (el.value !== value) throw new Error('Malformed value');\n        el.dispatchEvent(new Event('input', { bubbles: true, composed: true })); el.dispatchEvent(new Event('change', { bubbles: true }));\n        return 'done';\n      }\n      el.focus(); el.select(); return 'type';\n    }\n    if (n === 'TEXTAREA') { el.focus(); el.select(); return 'type'; }\n    if (el.isContentEditable) {\n      el.focus(); const range = document.createRange(); range.selectNodeContents(el);\n      const s = getSelection(); s.removeAllRanges(); s.addRange(range); return 'type';\n    }\n    throw new Error('Element is not an <input>, <textarea> or [contenteditable] element');\n  },\n  selectOption(sel, strict, opts, force) {\n    const el = api.one(sel, strict);\n    if (!el) return null;\n    if (!force && (!isVisible(el) || isDisabled(el))) return null;\n    if (el.nodeName !== 'SELECT') throw new Error('Element is not a <select> element');\n    const options = [...el.options]; const picked = [];\n    for (const o of opts) {\n      const opt = options.find(x => (o.value !== undefined && x.value === o.value) || (o.label !== undefined && x.label === o.label) || (o.index !== undefined && x.index === o.index) || (o.any !== undefined && (x.value === o.any || x.label === o.any)));\n      if (!opt) return null;\n      picked.push(opt);\n      if (!el.multiple) break;\n    }\n    for (const x of options) x.selected = picked.includes(x);\n    el.dispatchEvent(new Event('input', { bubbles: true, composed: true })); el.dispatchEvent(new Event('change', { bubbles: true }));\n    return picked.map(x => x.value);\n  },\n  // read-only queries; non-strict ones return arrays\n  read(sel, strict, op, arg) {\n    if (op === 'count') return query(sel).length;\n    if (op === 'allTextContents') return query(sel).map(e => e.textContent);\n    if (op === 'allInnerTexts') return query(sel).map(e => e.innerText);\n    const el = api.one(sel, strict);\n    if (op === 'isVisible') return !!el && isVisible(el);\n    if (op === 'isHidden') return !el || !isVisible(el);\n    if (!el) return { missing: true };\n    switch (op) {\n      case 'textContent': return el.textContent;\n      case 'innerText': return el.innerText;\n      case 'innerHTML': return el.innerHTML;\n      case 'getAttribute': return el.getAttribute(arg);\n      case 'inputValue':\n        if (!['INPUT', 'TEXTAREA', 'SELECT'].includes(el.nodeName)) throw new Error('Not an input element');\n        return el.value;\n      case 'isEnabled': return !isDisabled(el);\n      case 'isDisabled': return isDisabled(el);\n      case 'isEditable': return isEditableEl(el);\n      case 'isChecked': return checkedState(el) === true;\n      case 'boundingBox': { if (!isVisible(el)) return null; const r = el.getBoundingClientRect(); return { x: r.left, y: r.top, width: r.width, height: r.height }; }\n      case 'focus': el.focus(); return true;\n      case 'blur': el.blur(); return true;\n      case 'scrollIntoView': el.scrollIntoView({ block: 'center', inline: 'center', behavior: 'instant' }); return true;\n      case 'selectText':\n        if (el.select) { el.focus(); el.select(); } else { const r = document.createRange(); r.selectNodeContents(el); const s = getSelection(); s.removeAllRanges(); s.addRange(r); el.focus?.(); }\n        return true;\n      case 'dispatchEvent': {\n        const { type, init } = arg; const i = Object.assign({ bubbles: true, cancelable: true, composed: true }, init || {});\n        const C = /^(click|dblclick|mouse|contextmenu|auxclick)/.test(type) ? MouseEvent : /^pointer/.test(type) ? PointerEvent\n          : /^key/.test(type) ? KeyboardEvent : /^(focus|blur)/.test(type) ? FocusEvent : /^drag|^drop/.test(type) ? DragEvent : /^touch/.test(type) ? TouchEvent : Event;\n        el.dispatchEvent(new C(type, i)); return true;\n      }\n      case 'isFileInput': return el.nodeName === 'INPUT' && el.type === 'file';\n      case 'ariaSnapshot': return snapshot(el, 0);\n    }\n    throw new Error('unknown op ' + op);\n  },\n  // state: attached | detached | visible | hidden\n  async waitState(sel, strict, state, ms) {\n    const end = Date.now() + ms;\n    for (;;) {\n      const el = api.one(sel, strict);\n      const ok = state === 'attached' ? !!el : state === 'detached' ? !el : state === 'visible' ? !!el && isVisible(el) : !el || !isVisible(el);\n      if (ok) return true;\n      if (Date.now() >= end) return false;\n      await new Promise(r => setTimeout(r, 16));\n    }\n  },\n};\nfunction snapshot(el, depth) {\n  const role = getRole(el); let out = '';\n  const pad = '  '.repeat(depth);\n  if (role && role !== 'presentation' && role !== 'generic' && !isAriaHidden(el)) {\n    const name = accessibleName(el); out += `${pad}- ${role}${name ? ` \"${name}\"` : ''}\\n`; depth++;\n  }\n  for (const c of el.children) out += snapshot(c, depth);\n  return out;\n}\nObject.defineProperty(globalThis, '__pwlite', { value: api, enumerable: false });\nreturn true;\n})()"), true}, // [16]
php::Str{ZEND_STRL("none"), true}, // [17]
php::Str{ZEND_STRL("failed"), true}, // [18]
php::Str{ZEND_STRL("inProgress"), true}, // [19]
php::Str{ZEND_STRL("load"), true}, // [20]
php::Str{ZEND_STRL(" >> internal:control=enter-frame >> "), true}, // [21]
php::Str{ZEND_STRL("data-testid"), true}, // [22]
php::Str{ZEND_STRL("--headless"), true}, // [23]
php::Str{ZEND_STRL("--no-startup-window"), true}, // [24]
php::Str{ZEND_STRL("--no-first-run"), true}, // [25]
php::Str{ZEND_STRL("--no-default-browser-check"), true}, // [26]
php::Str{ZEND_STRL("--disable-gpu"), true}, // [27]
php::Str{ZEND_STRL("--in-process-gpu"), true}, // [28]
php::Str{ZEND_STRL("--disable-extensions"), true}, // [29]
php::Str{ZEND_STRL("--disable-component-extensions-with-background-pages"), true}, // [30]
php::Str{ZEND_STRL("--disable-component-update"), true}, // [31]
php::Str{ZEND_STRL("--disable-background-networking"), true}, // [32]
php::Str{ZEND_STRL("--disable-background-timer-throttling"), true}, // [33]
php::Str{ZEND_STRL("--disable-backgrounding-occluded-windows"), true}, // [34]
php::Str{ZEND_STRL("--disable-renderer-backgrounding"), true}, // [35]
php::Str{ZEND_STRL("--disable-breakpad"), true}, // [36]
php::Str{ZEND_STRL("--disable-crash-reporter"), true}, // [37]
php::Str{ZEND_STRL("--disable-client-side-phishing-detection"), true}, // [38]
php::Str{ZEND_STRL("--disable-sync"), true}, // [39]
php::Str{ZEND_STRL("--disable-default-apps"), true}, // [40]
php::Str{ZEND_STRL("--disable-dev-shm-usage"), true}, // [41]
php::Str{ZEND_STRL("--disable-hang-monitor"), true}, // [42]
php::Str{ZEND_STRL("--disable-ipc-flooding-protection"), true}, // [43]
php::Str{ZEND_STRL("--disable-popup-blocking"), true}, // [44]
php::Str{ZEND_STRL("--disable-prompt-on-repost"), true}, // [45]
php::Str{ZEND_STRL("--disable-field-trial-config"), true}, // [46]
php::Str{ZEND_STRL("--disable-search-engine-choice-screen"), true}, // [47]
php::Str{ZEND_STRL("--metrics-recording-only"), true}, // [48]
php::Str{ZEND_STRL("--mute-audio"), true}, // [49]
php::Str{ZEND_STRL("--password-store=basic"), true}, // [50]
php::Str{ZEND_STRL("--use-mock-keychain"), true}, // [51]
php::Str{ZEND_STRL("--hide-scrollbars"), true}, // [52]
php::Str{ZEND_STRL("--force-color-profile=srgb"), true}, // [53]
php::Str{ZEND_STRL("--no-service-autorun"), true}, // [54]
php::Str{ZEND_STRL("--export-tagged-pdf"), true}, // [55]
php::Str{ZEND_STRL("--allow-pre-commit-input"), true}, // [56]
php::Str{ZEND_STRL("Translate"), true}, // [57]
php::Str{ZEND_STRL("OptimizationHints"), true}, // [58]
php::Str{ZEND_STRL("MediaRouter"), true}, // [59]
php::Str{ZEND_STRL("DialMediaRouteProvider"), true}, // [60]
php::Str{ZEND_STRL("InterestFeedContentSuggestions"), true}, // [61]
php::Str{ZEND_STRL("AutofillServerCommunication"), true}, // [62]
php::Str{ZEND_STRL("BackForwardCache"), true}, // [63]
php::Str{ZEND_STRL("PaintHolding"), true}, // [64]
php::Str{ZEND_STRL("LensOverlay"), true}, // [65]
php::Str{ZEND_STRL("HttpsUpgrades"), true}, // [66]
php::Str{ZEND_STRL("AcceptCHFrame"), true}, // [67]
php::Str{ZEND_STRL("CertificateTransparencyComponentUpdater"), true}, // [68]
php::Str{ZEND_STRL("ThirdPartyStoragePartitioning"), true}, // [69]
php::Str{ZEND_STRL("SpareRendererForSitePerProcess"), true}, // [70]
php::Str{ZEND_STRL("NativePlaywright\\is_string"), true}, // [71]
php::Str{ZEND_STRL("is_string"), true}, // [72]
php::Str{ZEND_STRL("pipe"), true}, // [73]
php::Str{ZEND_STRL("NativePlaywright\\Connection"), true}, // [74]
php::Str{ZEND_STRL("NativePlaywright\\Exception"), true}, // [75]
php::Str{ZEND_STRL("closed"), true}, // [76]
php::Str{ZEND_STRL(": Target page, context or browser has been closed"), true}, // [77]
php::Str{ZEND_STRL("nextId"), true}, // [78]
php::Str{ZEND_STRL("{\"id\":"), true}, // [79]
php::Str{ZEND_STRL(",\"method\":"), true}, // [80]
php::Str{ZEND_STRL("NativePlaywright\\json_encode"), true}, // [81]
php::Str{ZEND_STRL("json_encode"), true}, // [82]
php::Str{ZEND_STRL(",\"params\":"), true}, // [83]
php::Str{ZEND_STRL("{}"), true}, // [84]
php::Str{ZEND_STRL("JSON_FLAGS"), true}, // [85]
php::Str{ZEND_STRL(",\"sessionId\":"), true}, // [86]
php::Str{ZEND_STRL("}"), true}, // [87]
php::Str{ZEND_STRL("NativePlaywright\\Connection::send"), true}, // [88]
php::Str{ZEND_STRL("int"), true}, // [89]
php::Str{ZEND_STRL("NativePlaywright\\Connection::read"), true}, // [90]
php::Str{ZEND_STRL("?array"), true}, // [91]
php::Str{ZEND_STRL("NativePlaywright\\json_decode"), true}, // [92]
php::Str{ZEND_STRL("json_decode"), true}, // [93]
php::Str{ZEND_STRL("NativePlaywright\\is_array"), true}, // [94]
php::Str{ZEND_STRL("is_array"), true}, // [95]
php::Str{ZEND_STRL("NativePlaywright\\Connection::__construct"), true}, // [96]
php::Str{ZEND_STRL("executable"), true}, // [97]
php::Str{ZEND_STRL("string"), true}, // [98]
php::Str{ZEND_STRL("userDataDir"), true}, // [99]
php::Str{ZEND_STRL("method"), true}, // [100]
php::Str{ZEND_STRL("sessionId"), true}, // [101]
php::Str{ZEND_STRL("timeout"), true}, // [102]
php::Str{ZEND_STRL("float"), true}, // [103]
php::Str{ZEND_STRL("NativePlaywright\\Connection::close"), true}, // [104]
php::Str{ZEND_STRL("graceful"), true}, // [105]
php::Str{ZEND_STRL("bool"), true}, // [106]
php::Str{ZEND_STRL("done"), true}, // [107]
php::Str{ZEND_STRL("NativePlaywright\\Waiter"), true}, // [108]
php::Str{ZEND_STRL("value"), true}, // [109]
php::Str{ZEND_STRL("wake"), true}, // [110]
php::Str{ZEND_STRL("channel"), true}, // [111]
php::Str{ZEND_STRL("push"), true}, // [112]
php::Str{ZEND_STRL("error"), true}, // [113]
php::Str{ZEND_STRL("Throwable"), true}, // [114]
php::Str{ZEND_STRL("NativePlaywright\\Transport"), true}, // [115]
php::Str{ZEND_STRL("conn"), true}, // [116]
php::Str{ZEND_STRL("newWaiter"), true}, // [117]
php::Str{ZEND_STRL("id"), true}, // [118]
php::Str{ZEND_STRL("send"), true}, // [119]
php::Str{ZEND_STRL("waiters"), true}, // [120]
php::Str{ZEND_STRL("sendAsync"), true}, // [121]
php::Str{ZEND_STRL("await"), true}, // [122]
php::Str{ZEND_STRL("NativePlaywright\\Transport::sendAsync"), true}, // [123]
php::Str{ZEND_STRL("NativePlaywright\\Transport::unwrap"), true}, // [124]
php::Str{ZEND_STRL("message"), true}, // [125]
php::Str{ZEND_STRL("protocol error"), true}, // [126]
php::Str{ZEND_STRL("data"), true}, // [127]
php::Str{ZEND_STRL(" "), true}, // [128]
php::Str{ZEND_STRL(": "), true}, // [129]
php::Str{ZEND_STRL("code"), true}, // [130]
php::Str{ZEND_STRL("result"), true}, // [131]
php::Str{ZEND_STRL("seq"), true}, // [132]
php::Str{ZEND_STRL("listeners"), true}, // [133]
php::Str{ZEND_STRL("NativePlaywright\\Transport::on"), true}, // [134]
php::Str{ZEND_STRL("closeListeners"), true}, // [135]
php::Str{ZEND_STRL("resolve"), true}, // [136]
php::Str{ZEND_STRL("params"), true}, // [137]
php::Str{ZEND_STRL("NativePlaywright\\trigger_error"), true}, // [138]
php::Str{ZEND_STRL("trigger_error"), true}, // [139]
php::Str{ZEND_STRL("native_playwright listener error: "), true}, // [140]
php::Str{ZEND_STRL("getMessage"), true}, // [141]
php::Str{ZEND_STRL("NativePlaywright\\E_USER_WARNING"), true}, // [142]
php::Str{ZEND_STRL("Target page, context or browser has been closed"), true}, // [143]
php::Str{ZEND_STRL("reject"), true}, // [144]
php::Str{ZEND_STRL("NativePlaywright\\Transport::call"), true}, // [145]
php::Str{ZEND_STRL("NativePlaywright\\Transport::callMany"), true}, // [146]
php::Str{ZEND_STRL("ignoreErrors"), true}, // [147]
php::Str{ZEND_STRL("Closure"), true}, // [148]
php::Str{ZEND_STRL("NativePlaywright\\Transport::off"), true}, // [149]
php::Str{ZEND_STRL("NativePlaywright\\Transport::offSession"), true}, // [150]
php::Str{ZEND_STRL("NativePlaywright\\microtime"), true}, // [151]
php::Str{ZEND_STRL("microtime"), true}, // [152]
php::Str{ZEND_STRL("NativePlaywright\\sprintf"), true}, // [153]
php::Str{ZEND_STRL("sprintf"), true}, // [154]
php::Str{ZEND_STRL("%s: Timeout %dms exceeded."), true}, // [155]
php::Str{ZEND_STRL("NativePlaywright\\round"), true}, // [156]
php::Str{ZEND_STRL("round"), true}, // [157]
php::Str{ZEND_STRL("pump"), true}, // [158]
php::Str{ZEND_STRL("NativePlaywright\\TimeoutError"), true}, // [159]
php::Str{ZEND_STRL("head"), true}, // [160]
php::Str{ZEND_STRL("NativePlaywright\\BlockingTransport"), true}, // [161]
php::Str{ZEND_STRL("NativePlaywright\\count"), true}, // [162]
php::Str{ZEND_STRL("count"), true}, // [163]
php::Str{ZEND_STRL("queue"), true}, // [164]
php::Str{ZEND_STRL("read"), true}, // [165]
php::Str{ZEND_STRL("handleClosed"), true}, // [166]
php::Str{ZEND_STRL("handleMessage"), true}, // [167]
php::Str{ZEND_STRL("NativePlaywright\\usleep"), true}, // [168]
php::Str{ZEND_STRL("usleep"), true}, // [169]
php::Str{ZEND_STRL("NativePlaywright\\BlockingTransport::pump"), true}, // [170]
php::Str{ZEND_STRL("close"), true}, // [171]
php::Str{ZEND_STRL("NativePlaywright\\BlockingTransport::await"), true}, // [172]
php::Str{ZEND_STRL("what"), true}, // [173]
php::Str{ZEND_STRL("NativePlaywright\\BlockingTransport::sleep"), true}, // [174]
php::Str{ZEND_STRL("seconds"), true}, // [175]
php::Str{ZEND_STRL("__construct"), true}, // [176]
php::Str{ZEND_STRL("NativePlaywright\\SwooleTransport"), true}, // [177]
php::Str{ZEND_STRL("Swoole\\Coroutine::create"), true}, // [178]
php::Str{ZEND_STRL("readLoop"), true}, // [179]
php::Str{ZEND_STRL("Swoole\\Coroutine\\Channel"), true}, // [180]
php::Str{ZEND_STRL("fd"), true}, // [181]
php::Str{ZEND_STRL("Swoole\\Coroutine\\System::waitEvent"), true}, // [182]
php::Str{ZEND_STRL("pop"), true}, // [183]
php::Str{ZEND_STRL("Swoole\\Coroutine::sleep"), true}, // [184]
php::Str{ZEND_STRL("native_playwright handler error: "), true}, // [185]
php::Str{ZEND_STRL("closing"), true}, // [186]
php::Str{ZEND_STRL("Browser.close"), true}, // [187]
php::Str{ZEND_STRL("NativePlaywright\\SwooleTransport::await"), true}, // [188]
php::Str{ZEND_STRL("NativePlaywright\\SwooleTransport::sleep"), true}, // [189]
php::Str{ZEND_STRL("**"), true}, // [190]
php::Str{ZEND_STRL("**/*"), true}, // [191]
php::Str{ZEND_STRL("NativePlaywright\\Util::isRegex"), true}, // [192]
php::Str{ZEND_STRL("s"), true}, // [193]
php::Str{ZEND_STRL("NativePlaywright\\preg_match"), true}, // [194]
php::Str{ZEND_STRL("preg_match"), true}, // [195]
php::Str{ZEND_STRL("NativePlaywright\\str_contains"), true}, // [196]
php::Str{ZEND_STRL("str_contains"), true}, // [197]
php::Str{ZEND_STRL("://"), true}, // [198]
php::Str{ZEND_STRL("NativePlaywright\\str_starts_with"), true}, // [199]
php::Str{ZEND_STRL("str_starts_with"), true}, // [200]
php::Str{ZEND_STRL("*"), true}, // [201]
php::Str{ZEND_STRL("NativePlaywright\\Util::resolveUrl"), true}, // [202]
php::Str{ZEND_STRL("url"), true}, // [203]
php::Str{ZEND_STRL("NativePlaywright\\Util::globToRegex"), true}, // [204]
php::Str{ZEND_STRL("glob"), true}, // [205]
php::Str{ZEND_STRL("NativePlaywright\\Util::urlMatches"), true}, // [206]
php::Str{ZEND_STRL("pattern"), true}, // [207]
php::Str{ZEND_STRL("string|Closure"), true}, // [208]
php::Str{ZEND_STRL("NativePlaywright\\strlen"), true}, // [209]
php::Str{ZEND_STRL("strlen"), true}, // [210]
php::Str{ZEND_STRL("/"), true}, // [211]
php::Str{ZEND_STRL("#"), true}, // [212]
php::Str{ZEND_STRL("~"), true}, // [213]
php::Str{ZEND_STRL("NativePlaywright\\strrpos"), true}, // [214]
php::Str{ZEND_STRL("strrpos"), true}, // [215]
php::Str{ZEND_STRL("NativePlaywright\\substr"), true}, // [216]
php::Str{ZEND_STRL("substr"), true}, // [217]
php::Str{ZEND_STRL("/^[imsxuUXJ]*$/"), true}, // [218]
php::Str{ZEND_STRL("error_reporting"), true}, // [219]
php::Str{ZEND_STRL("\\"), true}, // [220]
php::Str{ZEND_STRL("NativePlaywright\\preg_quote"), true}, // [221]
php::Str{ZEND_STRL("preg_quote"), true}, // [222]
php::Str{ZEND_STRL("(?:.*/)?"), true}, // [223]
php::Str{ZEND_STRL(".*"), true}, // [224]
php::Str{ZEND_STRL("[^/]*"), true}, // [225]
php::Str{ZEND_STRL("?"), true}, // [226]
php::Str{ZEND_STRL("\\?"), true}, // [227]
php::Str{ZEND_STRL("{"), true}, // [228]
php::Str{ZEND_STRL("(?:"), true}, // [229]
php::Str{ZEND_STRL(")"), true}, // [230]
php::Str{ZEND_STRL(","), true}, // [231]
php::Str{ZEND_STRL("|"), true}, // [232]
php::Str{ZEND_STRL("#^"), true}, // [233]
php::Str{ZEND_STRL("$#"), true}, // [234]
php::Str{ZEND_STRL("#^[a-z][a-z0-9+.-]*:#i"), true}, // [235]
php::Str{ZEND_STRL("NativePlaywright\\parse_url"), true}, // [236]
php::Str{ZEND_STRL("parse_url"), true}, // [237]
php::Str{ZEND_STRL("scheme"), true}, // [238]
php::Str{ZEND_STRL("host"), true}, // [239]
php::Str{ZEND_STRL("port"), true}, // [240]
php::Str{ZEND_STRL(":"), true}, // [241]
php::Str{ZEND_STRL("//"), true}, // [242]
php::Str{ZEND_STRL("path"), true}, // [243]
php::Str{ZEND_STRL("unserializableValue"), true}, // [244]
php::Str{ZEND_STRL("NaN"), true}, // [245]
php::Str{ZEND_STRL("NativePlaywright\\NAN"), true}, // [246]
php::Str{ZEND_STRL("Infinity"), true}, // [247]
php::Str{ZEND_STRL("NativePlaywright\\INF"), true}, // [248]
php::Str{ZEND_STRL("-Infinity"), true}, // [249]
php::Str{ZEND_STRL("-0"), true}, // [250]
php::Str{ZEND_STRL("NativePlaywright\\ltrim"), true}, // [251]
php::Str{ZEND_STRL("ltrim"), true}, // [252]
php::Str{ZEND_STRL("/^(async\\s+)?function\\b/"), true}, // [253]
php::Str{ZEND_STRL("/^(async\\s*)?(\\([^)]*\\)|[A-Za-z_$][\\w$]*)\\s*=>/"), true}, // [254]
php::Str{ZEND_STRL("name"), true}, // [255]
php::Str{ZEND_STRL("NativePlaywright\\Util"), true}, // [256]
php::Str{ZEND_STRL("NativePlaywright\\strtolower"), true}, // [257]
php::Str{ZEND_STRL("strtolower"), true}, // [258]
php::Str{ZEND_STRL("NativePlaywright\\is_int"), true}, // [259]
php::Str{ZEND_STRL("is_int"), true}, // [260]
php::Str{ZEND_STRL("NativePlaywright\\is_float"), true}, // [261]
php::Str{ZEND_STRL("is_float"), true}, // [262]
php::Str{ZEND_STRL("NativePlaywright\\trim"), true}, // [263]
php::Str{ZEND_STRL("trim"), true}, // [264]
php::Str{ZEND_STRL("/^([\\d.]+)\\s*(px|in|cm|mm)?$/"), true}, // [265]
php::Str{ZEND_STRL("Invalid length: "), true}, // [266]
php::Str{ZEND_STRL("px"), true}, // [267]
php::Str{ZEND_STRL("in"), true}, // [268]
php::Str{ZEND_STRL("cm"), true}, // [269]
php::Str{ZEND_STRL("mm"), true}, // [270]
php::Str{ZEND_STRL("NativePlaywright\\pathinfo"), true}, // [271]
php::Str{ZEND_STRL("pathinfo"), true}, // [272]
php::Str{ZEND_STRL("NativePlaywright\\PATHINFO_EXTENSION"), true}, // [273]
php::Str{ZEND_STRL("html"), true}, // [274]
php::Str{ZEND_STRL("htm"), true}, // [275]
php::Str{ZEND_STRL("text/html"), true}, // [276]
php::Str{ZEND_STRL("js"), true}, // [277]
php::Str{ZEND_STRL("mjs"), true}, // [278]
php::Str{ZEND_STRL("application/javascript"), true}, // [279]
php::Str{ZEND_STRL("css"), true}, // [280]
php::Str{ZEND_STRL("text/css"), true}, // [281]
php::Str{ZEND_STRL("json"), true}, // [282]
php::Str{ZEND_STRL("application/json"), true}, // [283]
php::Str{ZEND_STRL("png"), true}, // [284]
php::Str{ZEND_STRL("image/png"), true}, // [285]
php::Str{ZEND_STRL("jpg"), true}, // [286]
php::Str{ZEND_STRL("jpeg"), true}, // [287]
php::Str{ZEND_STRL("image/jpeg"), true}, // [288]
php::Str{ZEND_STRL("gif"), true}, // [289]
php::Str{ZEND_STRL("image/gif"), true}, // [290]
php::Str{ZEND_STRL("svg"), true}, // [291]
php::Str{ZEND_STRL("image/svg+xml"), true}, // [292]
php::Str{ZEND_STRL("webp"), true}, // [293]
php::Str{ZEND_STRL("image/webp"), true}, // [294]
php::Str{ZEND_STRL("txt"), true}, // [295]
php::Str{ZEND_STRL("text/plain"), true}, // [296]
php::Str{ZEND_STRL("pdf"), true}, // [297]
php::Str{ZEND_STRL("application/pdf"), true}, // [298]
php::Str{ZEND_STRL("wasm"), true}, // [299]
php::Str{ZEND_STRL("application/wasm"), true}, // [300]
php::Str{ZEND_STRL("xml"), true}, // [301]
php::Str{ZEND_STRL("application/xml"), true}, // [302]
php::Str{ZEND_STRL("application/octet-stream"), true}, // [303]
php::Str{ZEND_STRL("baseURL"), true}, // [304]
php::Str{ZEND_STRL("base"), true}, // [305]
php::Str{ZEND_STRL("NativePlaywright\\Util::isFunction"), true}, // [306]
php::Str{ZEND_STRL("NativePlaywright\\Util::mimeType"), true}, // [307]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator"), true}, // [308]
php::Str{ZEND_STRL("frame"), true}, // [309]
php::Str{ZEND_STRL("frameSelector"), true}, // [310]
php::Str{ZEND_STRL("NativePlaywright\\Locator"), true}, // [311]
php::Str{ZEND_STRL("selector"), true}, // [312]
php::Str{ZEND_STRL("inside"), true}, // [313]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator::inside"), true}, // [314]
php::Str{ZEND_STRL("sel"), true}, // [315]
php::Str{ZEND_STRL("filter"), true}, // [316]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator::locator"), true}, // [317]
php::Str{ZEND_STRL("string|Locator"), true}, // [318]
php::Str{ZEND_STRL("exact"), true}, // [319]
php::Str{ZEND_STRL("placeholder"), true}, // [320]
php::Str{ZEND_STRL("alt"), true}, // [321]
php::Str{ZEND_STRL("title"), true}, // [322]
php::Str{ZEND_STRL(" >> nth=0"), true}, // [323]
php::Str{ZEND_STRL(" >> nth=-1"), true}, // [324]
php::Str{ZEND_STRL(" >> nth="), true}, // [325]
php::Str{ZEND_STRL("NativePlaywright\\Frame"), true}, // [326]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator::__construct"), true}, // [327]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator::getByText"), true}, // [328]
php::Str{ZEND_STRL("text"), true}, // [329]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator::getByRole"), true}, // [330]
php::Str{ZEND_STRL("role"), true}, // [331]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator::getByLabel"), true}, // [332]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator::getByPlaceholder"), true}, // [333]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator::getByAltText"), true}, // [334]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator::getByTitle"), true}, // [335]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator::getByTestId"), true}, // [336]
php::Str{ZEND_STRL("testId"), true}, // [337]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator::frameLocator"), true}, // [338]
php::Str{ZEND_STRL("NativePlaywright\\FrameLocator::nth"), true}, // [339]
php::Str{ZEND_STRL("index"), true}, // [340]
php::Str{ZEND_STRL("NativePlaywright\\Keyboard"), true}, // [341]
php::Str{ZEND_STRL("modifiers"), true}, // [342]
php::Str{ZEND_STRL("layout"), true}, // [343]
php::Str{ZEND_STRL("Backspace"), true}, // [344]
php::Str{ZEND_STRL("Tab"), true}, // [345]
php::Str{ZEND_STRL("Enter"), true}, // [346]
php::Str{ZEND_STRL("\r"), true}, // [347]
php::Str{ZEND_STRL("ShiftLeft"), true}, // [348]
php::Str{ZEND_STRL("Shift"), true}, // [349]
php::Str{ZEND_STRL("ControlLeft"), true}, // [350]
php::Str{ZEND_STRL("Control"), true}, // [351]
php::Str{ZEND_STRL("AltLeft"), true}, // [352]
php::Str{ZEND_STRL("Alt"), true}, // [353]
php::Str{ZEND_STRL("Pause"), true}, // [354]
php::Str{ZEND_STRL("CapsLock"), true}, // [355]
php::Str{ZEND_STRL("Escape"), true}, // [356]
php::Str{ZEND_STRL("Space"), true}, // [357]
php::Str{ZEND_STRL("PageUp"), true}, // [358]
php::Str{ZEND_STRL("PageDown"), true}, // [359]
php::Str{ZEND_STRL("End"), true}, // [360]
php::Str{ZEND_STRL("Home"), true}, // [361]
php::Str{ZEND_STRL("ArrowLeft"), true}, // [362]
php::Str{ZEND_STRL("ArrowUp"), true}, // [363]
php::Str{ZEND_STRL("ArrowRight"), true}, // [364]
php::Str{ZEND_STRL("ArrowDown"), true}, // [365]
php::Str{ZEND_STRL("Insert"), true}, // [366]
php::Str{ZEND_STRL("Delete"), true}, // [367]
php::Str{ZEND_STRL("MetaLeft"), true}, // [368]
php::Str{ZEND_STRL("Meta"), true}, // [369]
php::Str{ZEND_STRL("ContextMenu"), true}, // [370]
php::Str{ZEND_STRL("NumLock"), true}, // [371]
php::Str{ZEND_STRL("ScrollLock"), true}, // [372]
php::Str{ZEND_STRL("Semicolon"), true}, // [373]
php::Str{ZEND_STRL(";"), true}, // [374]
php::Str{ZEND_STRL("Equal"), true}, // [375]
php::Str{ZEND_STRL("="), true}, // [376]
php::Str{ZEND_STRL("+"), true}, // [377]
php::Str{ZEND_STRL("Comma"), true}, // [378]
php::Str{ZEND_STRL("<"), true}, // [379]
php::Str{ZEND_STRL("Minus"), true}, // [380]
php::Str{ZEND_STRL("-"), true}, // [381]
php::Str{ZEND_STRL("_"), true}, // [382]
php::Str{ZEND_STRL("Period"), true}, // [383]
php::Str{ZEND_STRL("."), true}, // [384]
php::Str{ZEND_STRL(">"), true}, // [385]
php::Str{ZEND_STRL("Slash"), true}, // [386]
php::Str{ZEND_STRL("Backquote"), true}, // [387]
php::Str{ZEND_STRL("`"), true}, // [388]
php::Str{ZEND_STRL("BracketLeft"), true}, // [389]
php::Str{ZEND_STRL("["), true}, // [390]
php::Str{ZEND_STRL("Backslash"), true}, // [391]
php::Str{ZEND_STRL("BracketRight"), true}, // [392]
php::Str{ZEND_STRL("]"), true}, // [393]
php::Str{ZEND_STRL("Quote"), true}, // [394]
php::Str{ZEND_STRL("'"), true}, // [395]
php::Str{ZEND_STRL("\""), true}, // [396]
php::Str{ZEND_STRL("F"), true}, // [397]
php::Str{ZEND_STRL(")!@#$%^&*("), true}, // [398]
php::Str{ZEND_STRL("Digit"), true}, // [399]
php::Str{ZEND_STRL("NativePlaywright\\ord"), true}, // [400]
php::Str{ZEND_STRL("ord"), true}, // [401]
php::Str{ZEND_STRL("a"), true}, // [402]
php::Str{ZEND_STRL("z"), true}, // [403]
php::Str{ZEND_STRL("NativePlaywright\\chr"), true}, // [404]
php::Str{ZEND_STRL("chr"), true}, // [405]
php::Str{ZEND_STRL("Key"), true}, // [406]
php::Str{ZEND_STRL("NativePlaywright\\strtoupper"), true}, // [407]
php::Str{ZEND_STRL("strtoupper"), true}, // [408]
php::Str{ZEND_STRL("Left"), true}, // [409]
php::Str{ZEND_STRL("Right"), true}, // [410]
php::Str{ZEND_STRL("ControlOrMeta"), true}, // [411]
php::Str{ZEND_STRL("NativePlaywright\\PHP_OS_FAMILY"), true}, // [412]
php::Str{ZEND_STRL("Darwin"), true}, // [413]
php::Str{ZEND_STRL("NativePlaywright\\mb_strlen"), true}, // [414]
php::Str{ZEND_STRL("mb_strlen"), true}, // [415]
php::Str{ZEND_STRL("key"), true}, // [416]
php::Str{ZEND_STRL("keyCode"), true}, // [417]
php::Str{ZEND_STRL("location"), true}, // [418]
php::Str{ZEND_STRL("Unknown key: \""), true}, // [419]
php::Str{ZEND_STRL("description"), true}, // [420]
php::Str{ZEND_STRL("pressed"), true}, // [421]
php::Str{ZEND_STRL("NativePlaywright\\Keyboard::bit"), true}, // [422]
php::Str{ZEND_STRL("keyDown"), true}, // [423]
php::Str{ZEND_STRL("rawKeyDown"), true}, // [424]
php::Str{ZEND_STRL("type"), true}, // [425]
php::Str{ZEND_STRL("windowsVirtualKeyCode"), true}, // [426]
php::Str{ZEND_STRL("unmodifiedText"), true}, // [427]
php::Str{ZEND_STRL("autoRepeat"), true}, // [428]
php::Str{ZEND_STRL("isKeypad"), true}, // [429]
php::Str{ZEND_STRL("editingCommand"), true}, // [430]
php::Str{ZEND_STRL("NativePlaywright\\Keyboard::editingCommand"), true}, // [431]
php::Str{ZEND_STRL("commands"), true}, // [432]
php::Str{ZEND_STRL("page"), true}, // [433]
php::Str{ZEND_STRL("Input.dispatchKeyEvent"), true}, // [434]
php::Str{ZEND_STRL("KeyA"), true}, // [435]
php::Str{ZEND_STRL("selectAll"), true}, // [436]
php::Str{ZEND_STRL("KeyC"), true}, // [437]
php::Str{ZEND_STRL("copy"), true}, // [438]
php::Str{ZEND_STRL("KeyX"), true}, // [439]
php::Str{ZEND_STRL("cut"), true}, // [440]
php::Str{ZEND_STRL("KeyV"), true}, // [441]
php::Str{ZEND_STRL("paste"), true}, // [442]
php::Str{ZEND_STRL("KeyZ"), true}, // [443]
php::Str{ZEND_STRL("redo"), true}, // [444]
php::Str{ZEND_STRL("undo"), true}, // [445]
php::Str{ZEND_STRL("keyUp"), true}, // [446]
php::Str{ZEND_STRL("NativePlaywright\\explode"), true}, // [447]
php::Str{ZEND_STRL("explode"), true}, // [448]
php::Str{ZEND_STRL("NativePlaywright\\str_ends_with"), true}, // [449]
php::Str{ZEND_STRL("str_ends_with"), true}, // [450]
php::Str{ZEND_STRL("++"), true}, // [451]
php::Str{ZEND_STRL("NativePlaywright\\array_merge"), true}, // [452]
php::Str{ZEND_STRL("array_merge"), true}, // [453]
php::Str{ZEND_STRL("NativePlaywright\\array_values"), true}, // [454]
php::Str{ZEND_STRL("array_values"), true}, // [455]
php::Str{ZEND_STRL("NativePlaywright\\array_filter"), true}, // [456]
php::Str{ZEND_STRL("array_filter"), true}, // [457]
php::Str{ZEND_STRL("{closure}"), true}, // [458]
php::Str{ZEND_STRL("p"), true}, // [459]
php::Str{ZEND_STRL("down"), true}, // [460]
php::Str{ZEND_STRL("NativePlaywright\\Keyboard::down"), true}, // [461]
php::Str{ZEND_STRL("delay"), true}, // [462]
php::Str{ZEND_STRL("waitForTimeout"), true}, // [463]
php::Str{ZEND_STRL("up"), true}, // [464]
php::Str{ZEND_STRL("NativePlaywright\\Keyboard::up"), true}, // [465]
php::Str{ZEND_STRL("NativePlaywright\\mb_str_split"), true}, // [466]
php::Str{ZEND_STRL("mb_str_split"), true}, // [467]
php::Str{ZEND_STRL("press"), true}, // [468]
php::Str{ZEND_STRL("NativePlaywright\\Keyboard::press"), true}, // [469]
php::Str{ZEND_STRL("keys"), true}, // [470]
php::Str{ZEND_STRL("\n"), true}, // [471]
php::Str{ZEND_STRL("insertText"), true}, // [472]
php::Str{ZEND_STRL("NativePlaywright\\Keyboard::insertText"), true}, // [473]
php::Str{ZEND_STRL("Input.insertText"), true}, // [474]
php::Str{ZEND_STRL("NativePlaywright\\Page"), true}, // [475]
php::Str{ZEND_STRL("NativePlaywright\\Keyboard::resolveKey"), true}, // [476]
php::Str{ZEND_STRL("NativePlaywright\\Keyboard::description"), true}, // [477]
php::Str{ZEND_STRL("NativePlaywright\\Keyboard::type"), true}, // [478]
php::Str{ZEND_STRL("NativePlaywright\\Mouse"), true}, // [479]
php::Str{ZEND_STRL("left"), true}, // [480]
php::Str{ZEND_STRL("right"), true}, // [481]
php::Str{ZEND_STRL("middle"), true}, // [482]
php::Str{ZEND_STRL("NativePlaywright\\max"), true}, // [483]
php::Str{ZEND_STRL("max"), true}, // [484]
php::Str{ZEND_STRL("steps"), true}, // [485]
php::Str{ZEND_STRL("x"), true}, // [486]
php::Str{ZEND_STRL("y"), true}, // [487]
php::Str{ZEND_STRL("Input.dispatchMouseEvent"), true}, // [488]
php::Str{ZEND_STRL("mouseMoved"), true}, // [489]
php::Str{ZEND_STRL("button"), true}, // [490]
php::Str{ZEND_STRL("buttons"), true}, // [491]
php::Str{ZEND_STRL("keyboard"), true}, // [492]
php::Str{ZEND_STRL("mousePressed"), true}, // [493]
php::Str{ZEND_STRL("clickCount"), true}, // [494]
php::Str{ZEND_STRL("mouseReleased"), true}, // [495]
php::Str{ZEND_STRL("move"), true}, // [496]
php::Str{ZEND_STRL("sendMany"), true}, // [497]
php::Str{ZEND_STRL("click"), true}, // [498]
php::Str{ZEND_STRL("mouseWheel"), true}, // [499]
php::Str{ZEND_STRL("deltaX"), true}, // [500]
php::Str{ZEND_STRL("deltaY"), true}, // [501]
php::Str{ZEND_STRL("NativePlaywright\\Mouse::bit"), true}, // [502]
php::Str{ZEND_STRL("b"), true}, // [503]
php::Str{ZEND_STRL("NativePlaywright\\Mouse::move"), true}, // [504]
php::Str{ZEND_STRL("NativePlaywright\\Mouse::click"), true}, // [505]
php::Str{ZEND_STRL("NativePlaywright\\Mouse::dblclick"), true}, // [506]
php::Str{ZEND_STRL("NativePlaywright\\Mouse::wheel"), true}, // [507]
php::Str{ZEND_STRL("NativePlaywright\\Touchscreen"), true}, // [508]
php::Str{ZEND_STRL("Input.dispatchTouchEvent"), true}, // [509]
php::Str{ZEND_STRL("touchStart"), true}, // [510]
php::Str{ZEND_STRL("touchPoints"), true}, // [511]
php::Str{ZEND_STRL("touchEnd"), true}, // [512]
php::Str{ZEND_STRL("NativePlaywright\\Touchscreen::tap"), true}, // [513]
php::Str{ZEND_STRL("NativePlaywright\\JSError"), true}, // [514]
php::Str{ZEND_STRL("stack"), true}, // [515]
php::Str{ZEND_STRL("NativePlaywright\\JSError::__construct"), true}, // [516]
php::Str{ZEND_STRL("NativePlaywright\\FileChooser"), true}, // [517]
php::Str{ZEND_STRL("multiple"), true}, // [518]
php::Str{ZEND_STRL("DOM.setFileInputFiles"), true}, // [519]
php::Str{ZEND_STRL("files"), true}, // [520]
php::Str{ZEND_STRL("backendNodeId"), true}, // [521]
php::Str{ZEND_STRL("NativePlaywright\\FileChooser::setFiles"), true}, // [522]
php::Str{ZEND_STRL("string|array"), true}, // [523]
php::Str{ZEND_STRL("NativePlaywright\\FileChooser::__construct"), true}, // [524]
php::Str{ZEND_STRL("NativePlaywright\\ConsoleMessage"), true}, // [525]
php::Str{ZEND_STRL("args"), true}, // [526]
php::Str{ZEND_STRL("NativePlaywright\\ConsoleMessage::__construct"), true}, // [527]
php::Str{ZEND_STRL("NativePlaywright\\Dialog"), true}, // [528]
php::Str{ZEND_STRL("defaultValue"), true}, // [529]
php::Str{ZEND_STRL("handled"), true}, // [530]
php::Str{ZEND_STRL("handle"), true}, // [531]
php::Str{ZEND_STRL("Cannot accept/dismiss dialog which is already handled!"), true}, // [532]
php::Str{ZEND_STRL("accept"), true}, // [533]
php::Str{ZEND_STRL("prompt"), true}, // [534]
php::Str{ZEND_STRL("promptText"), true}, // [535]
php::Str{ZEND_STRL("Page.handleJavaScriptDialog"), true}, // [536]
php::Str{ZEND_STRL("NativePlaywright\\Dialog::__construct"), true}, // [537]
php::Str{ZEND_STRL("NativePlaywright\\Dialog::accept"), true}, // [538]
php::Str{ZEND_STRL("NativePlaywright\\Dialog::handle"), true}, // [539]
php::Str{ZEND_STRL("NativePlaywright\\Response"), true}, // [540]
php::Str{ZEND_STRL("status"), true}, // [541]
php::Str{ZEND_STRL("statusText"), true}, // [542]
php::Str{ZEND_STRL("headers"), true}, // [543]
php::Str{ZEND_STRL("NativePlaywright\\Response::headerValue"), true}, // [544]
php::Str{ZEND_STRL("?string"), true}, // [545]
php::Str{ZEND_STRL("headerValue"), true}, // [546]
php::Str{ZEND_STRL("request"), true}, // [547]
php::Str{ZEND_STRL("NativePlaywright\\Response::frame"), true}, // [548]
php::Str{ZEND_STRL("?Frame"), true}, // [549]
php::Str{ZEND_STRL("fromServiceWorker"), true}, // [550]
php::Str{ZEND_STRL("remoteIp"), true}, // [551]
php::Str{ZEND_STRL("ipAddress"), true}, // [552]
php::Str{ZEND_STRL("remotePort"), true}, // [553]
php::Str{ZEND_STRL("NativePlaywright\\Response::serverAddr"), true}, // [554]
php::Str{ZEND_STRL("securityDetails"), true}, // [555]
php::Str{ZEND_STRL("NativePlaywright\\Response::securityDetails"), true}, // [556]
php::Str{ZEND_STRL("NativePlaywright\\Response::finished"), true}, // [557]
php::Str{ZEND_STRL("waitForCondition"), true}, // [558]
php::Str{ZEND_STRL("finished"), true}, // [559]
php::Str{ZEND_STRL("NativePlaywright\\Request"), true}, // [560]
php::Str{ZEND_STRL("timeoutSeconds"), true}, // [561]
php::Str{ZEND_STRL("response.finished"), true}, // [562]
php::Str{ZEND_STRL("failure"), true}, // [563]
php::Str{ZEND_STRL("body"), true}, // [564]
php::Str{ZEND_STRL("NativePlaywright\\Response::body"), true}, // [565]
php::Str{ZEND_STRL("Network.getResponseBody"), true}, // [566]
php::Str{ZEND_STRL("requestId"), true}, // [567]
php::Str{ZEND_STRL("base64Encoded"), true}, // [568]
php::Str{ZEND_STRL("NativePlaywright\\base64_decode"), true}, // [569]
php::Str{ZEND_STRL("base64_decode"), true}, // [570]
php::Str{ZEND_STRL("NativePlaywright\\JSON_THROW_ON_ERROR"), true}, // [571]
php::Str{ZEND_STRL("NativePlaywright\\Response::__construct"), true}, // [572]
php::Str{ZEND_STRL("NativePlaywright\\Response::headerValues"), true}, // [573]
php::Str{ZEND_STRL("startTime"), true}, // [574]
php::Str{ZEND_STRL("redirectedTo"), true}, // [575]
php::Str{ZEND_STRL("NativePlaywright\\Request::__construct"), true}, // [576]
php::Str{ZEND_STRL("postData"), true}, // [577]
php::Str{ZEND_STRL("NativePlaywright\\Request::headerValue"), true}, // [578]
php::Str{ZEND_STRL("GET"), true}, // [579]
php::Str{ZEND_STRL("Network.getRequestPostData"), true}, // [580]
php::Str{ZEND_STRL("NativePlaywright\\Request::postData"), true}, // [581]
php::Str{ZEND_STRL("content-type"), true}, // [582]
php::Str{ZEND_STRL("application/x-www-form-urlencoded"), true}, // [583]
php::Str{ZEND_STRL("NativePlaywright\\parse_str"), true}, // [584]
php::Str{ZEND_STRL("parse_str"), true}, // [585]
php::Str{ZEND_STRL("resourceType"), true}, // [586]
php::Str{ZEND_STRL("isNavigation"), true}, // [587]
php::Str{ZEND_STRL("frameId"), true}, // [588]
php::Str{ZEND_STRL("frameById"), true}, // [589]
php::Str{ZEND_STRL("redirectedFrom"), true}, // [590]
php::Str{ZEND_STRL("response"), true}, // [591]
php::Str{ZEND_STRL("errorText"), true}, // [592]
php::Str{ZEND_STRL("NativePlaywright\\Request::failure"), true}, // [593]
php::Str{ZEND_STRL("endTime"), true}, // [594]
php::Str{ZEND_STRL("responseEnd"), true}, // [595]
php::Str{ZEND_STRL("requestBodySize"), true}, // [596]
php::Str{ZEND_STRL("encodedLength"), true}, // [597]
php::Str{ZEND_STRL("responseBodySize"), true}, // [598]
php::Str{ZEND_STRL("NativePlaywright\\Route"), true}, // [599]
php::Str{ZEND_STRL("Route is already handled! ("), true}, // [600]
php::Str{ZEND_STRL("claim"), true}, // [601]
php::Str{ZEND_STRL("abort"), true}, // [602]
php::Str{ZEND_STRL("Aborted"), true}, // [603]
php::Str{ZEND_STRL("aborted"), true}, // [604]
php::Str{ZEND_STRL("AccessDenied"), true}, // [605]
php::Str{ZEND_STRL("accessdenied"), true}, // [606]
php::Str{ZEND_STRL("AddressUnreachable"), true}, // [607]
php::Str{ZEND_STRL("addressunreachable"), true}, // [608]
php::Str{ZEND_STRL("BlockedByClient"), true}, // [609]
php::Str{ZEND_STRL("blockedbyclient"), true}, // [610]
php::Str{ZEND_STRL("BlockedByResponse"), true}, // [611]
php::Str{ZEND_STRL("blockedbyresponse"), true}, // [612]
php::Str{ZEND_STRL("ConnectionAborted"), true}, // [613]
php::Str{ZEND_STRL("connectionaborted"), true}, // [614]
php::Str{ZEND_STRL("ConnectionClosed"), true}, // [615]
php::Str{ZEND_STRL("connectionclosed"), true}, // [616]
php::Str{ZEND_STRL("ConnectionFailed"), true}, // [617]
php::Str{ZEND_STRL("connectionfailed"), true}, // [618]
php::Str{ZEND_STRL("ConnectionRefused"), true}, // [619]
php::Str{ZEND_STRL("connectionrefused"), true}, // [620]
php::Str{ZEND_STRL("ConnectionReset"), true}, // [621]
php::Str{ZEND_STRL("connectionreset"), true}, // [622]
php::Str{ZEND_STRL("InternetDisconnected"), true}, // [623]
php::Str{ZEND_STRL("internetdisconnected"), true}, // [624]
php::Str{ZEND_STRL("NameNotResolved"), true}, // [625]
php::Str{ZEND_STRL("namenotresolved"), true}, // [626]
php::Str{ZEND_STRL("TimedOut"), true}, // [627]
php::Str{ZEND_STRL("timedout"), true}, // [628]
php::Str{ZEND_STRL("Failed"), true}, // [629]
php::Str{ZEND_STRL("Fetch.failRequest"), true}, // [630]
php::Str{ZEND_STRL("interceptId"), true}, // [631]
php::Str{ZEND_STRL("errorReason"), true}, // [632]
php::Str{ZEND_STRL("continue"), true}, // [633]
php::Str{ZEND_STRL("fallbackOverrides"), true}, // [634]
php::Str{ZEND_STRL("NativePlaywright\\base64_encode"), true}, // [635]
php::Str{ZEND_STRL("base64_encode"), true}, // [636]
php::Str{ZEND_STRL("Fetch.continueRequest"), true}, // [637]
php::Str{ZEND_STRL("Route is already handled! (fallback)"), true}, // [638]
php::Str{ZEND_STRL("fellBack"), true}, // [639]
php::Str{ZEND_STRL("fulfill"), true}, // [640]
php::Str{ZEND_STRL("NativePlaywright\\array_key_exists"), true}, // [641]
php::Str{ZEND_STRL("array_key_exists"), true}, // [642]
php::Str{ZEND_STRL("contentType"), true}, // [643]
php::Str{ZEND_STRL("NativePlaywright\\file_get_contents"), true}, // [644]
php::Str{ZEND_STRL("file_get_contents"), true}, // [645]
php::Str{ZEND_STRL("content-length"), true}, // [646]
php::Str{ZEND_STRL("Fetch.fulfillRequest"), true}, // [647]
php::Str{ZEND_STRL("responseCode"), true}, // [648]
php::Str{ZEND_STRL("responseHeaders"), true}, // [649]
php::Str{ZEND_STRL("NativePlaywright\\Route::__construct"), true}, // [650]
php::Str{ZEND_STRL("NativePlaywright\\Route::claim"), true}, // [651]
php::Str{ZEND_STRL("op"), true}, // [652]
php::Str{ZEND_STRL("NativePlaywright\\Route::abort"), true}, // [653]
php::Str{ZEND_STRL("errorCode"), true}, // [654]
php::Str{ZEND_STRL("NativePlaywright\\RouteHandler::__construct"), true}, // [655]
php::Str{ZEND_STRL("NativePlaywright\\RouteHandler"), true}, // [656]
php::Str{ZEND_STRL("times"), true}, // [657]
php::Str{ZEND_STRL("NativePlaywright\\RouteHandler::matches"), true}, // [658]
php::Str{ZEND_STRL("NativePlaywright\\CDPSession"), true}, // [659]
php::Str{ZEND_STRL("t"), true}, // [660]
php::Str{ZEND_STRL("call"), true}, // [661]
php::Str{ZEND_STRL("subs"), true}, // [662]
php::Str{ZEND_STRL("on"), true}, // [663]
php::Str{ZEND_STRL("m"), true}, // [664]
php::Str{ZEND_STRL("array"), true}, // [665]
php::Str{ZEND_STRL("async"), true}, // [666]
php::Str{ZEND_STRL("off"), true}, // [667]
php::Str{ZEND_STRL("NativePlaywright\\CDPSession::__construct"), true}, // [668]
php::Str{ZEND_STRL("NativePlaywright\\CDPSession::send"), true}, // [669]
php::Str{ZEND_STRL("NativePlaywright\\CDPSession::on"), true}, // [670]
php::Str{ZEND_STRL("NativePlaywright\\Download"), true}, // [671]
php::Str{ZEND_STRL("guid"), true}, // [672]
php::Str{ZEND_STRL("suggestedFilename"), true}, // [673]
php::Str{ZEND_STRL("state"), true}, // [674]
php::Str{ZEND_STRL("download"), true}, // [675]
php::Str{ZEND_STRL("waitDone"), true}, // [676]
php::Str{ZEND_STRL("completed"), true}, // [677]
php::Str{ZEND_STRL("dir"), true}, // [678]
php::Str{ZEND_STRL("NativePlaywright\\Download::path"), true}, // [679]
php::Str{ZEND_STRL("NativePlaywright\\Download::failure"), true}, // [680]
php::Str{ZEND_STRL("Download failed: "), true}, // [681]
php::Str{ZEND_STRL("NativePlaywright\\dirname"), true}, // [682]
php::Str{ZEND_STRL("dirname"), true}, // [683]
php::Str{ZEND_STRL("NativePlaywright\\is_dir"), true}, // [684]
php::Str{ZEND_STRL("is_dir"), true}, // [685]
php::Str{ZEND_STRL("NativePlaywright\\mkdir"), true}, // [686]
php::Str{ZEND_STRL("mkdir"), true}, // [687]
php::Str{ZEND_STRL("NativePlaywright\\copy"), true}, // [688]
php::Str{ZEND_STRL("Cannot save download to "), true}, // [689]
php::Str{ZEND_STRL("NativePlaywright\\fopen"), true}, // [690]
php::Str{ZEND_STRL("fopen"), true}, // [691]
php::Str{ZEND_STRL("rb"), true}, // [692]
php::Str{ZEND_STRL("context"), true}, // [693]
php::Str{ZEND_STRL("browser"), true}, // [694]
php::Str{ZEND_STRL("Browser.cancelDownload"), true}, // [695]
php::Str{ZEND_STRL("browserContextId"), true}, // [696]
php::Str{ZEND_STRL("NativePlaywright\\is_file"), true}, // [697]
php::Str{ZEND_STRL("is_file"), true}, // [698]
php::Str{ZEND_STRL("NativePlaywright\\unlink"), true}, // [699]
php::Str{ZEND_STRL("unlink"), true}, // [700]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext"), true}, // [701]
php::Str{ZEND_STRL("NativePlaywright\\Download::__construct"), true}, // [702]
php::Str{ZEND_STRL("NativePlaywright\\Download::saveAs"), true}, // [703]
php::Str{ZEND_STRL("mouse"), true}, // [704]
php::Str{ZEND_STRL("touchscreen"), true}, // [705]
php::Str{ZEND_STRL("listenerId"), true}, // [706]
php::Str{ZEND_STRL("onProtocolEvent"), true}, // [707]
php::Str{ZEND_STRL("NativePlaywright\\Page::send"), true}, // [708]
php::Str{ZEND_STRL("?float"), true}, // [709]
php::Str{ZEND_STRL("callMany"), true}, // [710]
php::Str{ZEND_STRL("Runtime.releaseObject"), true}, // [711]
php::Str{ZEND_STRL("objectId"), true}, // [712]
php::Str{ZEND_STRL("callFunction"), true}, // [713]
php::Str{ZEND_STRL("async function (...a) { return ("), true}, // [714]
php::Str{ZEND_STRL(")(await ("), true}, // [715]
php::Str{ZEND_STRL(").apply(this, a)); }"), true}, // [716]
php::Str{ZEND_STRL("functionDeclaration"), true}, // [717]
php::Str{ZEND_STRL("arguments"), true}, // [718]
php::Str{ZEND_STRL("returnByValue"), true}, // [719]
php::Str{ZEND_STRL("awaitPromise"), true}, // [720]
php::Str{ZEND_STRL("executionContextId"), true}, // [721]
php::Str{ZEND_STRL("Runtime.callFunctionOn"), true}, // [722]
php::Str{ZEND_STRL("exceptionDetails"), true}, // [723]
php::Str{ZEND_STRL("evaluate: "), true}, // [724]
php::Str{ZEND_STRL("exception"), true}, // [725]
php::Str{ZEND_STRL("defaultTimeout"), true}, // [726]
php::Str{ZEND_STRL("defaultTimeoutMs"), true}, // [727]
php::Str{ZEND_STRL("NativePlaywright\\Page::timeoutSeconds"), true}, // [728]
php::Str{ZEND_STRL("defaultNavigationTimeout"), true}, // [729]
php::Str{ZEND_STRL("defaultNavigationTimeoutMs"), true}, // [730]
php::Str{ZEND_STRL("NativePlaywright\\Page::navigationTimeoutSeconds"), true}, // [731]
php::Str{ZEND_STRL("pokes"), true}, // [732]
php::Str{ZEND_STRL("slowMo"), true}, // [733]
php::Str{ZEND_STRL("NativePlaywright\\Page::waitForTimeout"), true}, // [734]
php::Str{ZEND_STRL("ms"), true}, // [735]
php::Str{ZEND_STRL("options"), true}, // [736]
php::Str{ZEND_STRL("Page.enable"), true}, // [737]
php::Str{ZEND_STRL("Page.getFrameTree"), true}, // [738]
php::Str{ZEND_STRL("Page.setLifecycleEventsEnabled"), true}, // [739]
php::Str{ZEND_STRL("enabled"), true}, // [740]
php::Str{ZEND_STRL("Runtime.enable"), true}, // [741]
php::Str{ZEND_STRL("Network.enable"), true}, // [742]
php::Str{ZEND_STRL("networkBufferSize"), true}, // [743]
php::Str{ZEND_STRL("maxTotalBufferSize"), true}, // [744]
php::Str{ZEND_STRL("networkResourceBufferSize"), true}, // [745]
php::Str{ZEND_STRL("maxResourceBufferSize"), true}, // [746]
php::Str{ZEND_STRL("emulationCalls"), true}, // [747]
php::Str{ZEND_STRL("initScripts"), true}, // [748]
php::Str{ZEND_STRL("Page.addScriptToEvaluateOnNewDocument"), true}, // [749]
php::Str{ZEND_STRL("source"), true}, // [750]
php::Str{ZEND_STRL("bindingNames"), true}, // [751]
php::Str{ZEND_STRL("Runtime.addBinding"), true}, // [752]
php::Str{ZEND_STRL("__pwlite_b_"), true}, // [753]
php::Str{ZEND_STRL("NativePlaywright\\Page::bindingScript"), true}, // [754]
php::Str{ZEND_STRL("needsInterception"), true}, // [755]
php::Str{ZEND_STRL("Fetch.enable"), true}, // [756]
php::Str{ZEND_STRL("fetchParams"), true}, // [757]
php::Str{ZEND_STRL("fetchEnabled"), true}, // [758]
php::Str{ZEND_STRL("Runtime.runIfWaitingForDebugger"), true}, // [759]
php::Str{ZEND_STRL("loadFrameTree"), true}, // [760]
php::Str{ZEND_STRL("frameTree"), true}, // [761]
php::Str{ZEND_STRL("NativePlaywright\\Page::initialize"), true}, // [762]
php::Str{ZEND_STRL("viewport"), true}, // [763]
php::Str{ZEND_STRL("width"), true}, // [764]
php::Str{ZEND_STRL("height"), true}, // [765]
php::Str{ZEND_STRL("Emulation.setDeviceMetricsOverride"), true}, // [766]
php::Str{ZEND_STRL("metrics"), true}, // [767]
php::Str{ZEND_STRL("hasTouch"), true}, // [768]
php::Str{ZEND_STRL("isMobile"), true}, // [769]
php::Str{ZEND_STRL("Emulation.setTouchEmulationEnabled"), true}, // [770]
php::Str{ZEND_STRL("maxTouchPoints"), true}, // [771]
php::Str{ZEND_STRL("userAgent"), true}, // [772]
php::Str{ZEND_STRL("defaultUserAgent"), true}, // [773]
php::Str{ZEND_STRL("locale"), true}, // [774]
php::Str{ZEND_STRL("acceptLanguage"), true}, // [775]
php::Str{ZEND_STRL("Network.setUserAgentOverride"), true}, // [776]
php::Str{ZEND_STRL("Emulation.setLocaleOverride"), true}, // [777]
php::Str{ZEND_STRL("timezoneId"), true}, // [778]
php::Str{ZEND_STRL("Emulation.setTimezoneOverride"), true}, // [779]
php::Str{ZEND_STRL("geolocation"), true}, // [780]
php::Str{ZEND_STRL("Emulation.setGeolocationOverride"), true}, // [781]
php::Str{ZEND_STRL("latitude"), true}, // [782]
php::Str{ZEND_STRL("longitude"), true}, // [783]
php::Str{ZEND_STRL("accuracy"), true}, // [784]
php::Str{ZEND_STRL("media"), true}, // [785]
php::Str{ZEND_STRL("colorScheme"), true}, // [786]
php::Str{ZEND_STRL("light"), true}, // [787]
php::Str{ZEND_STRL("reducedMotion"), true}, // [788]
php::Str{ZEND_STRL("forcedColors"), true}, // [789]
php::Str{ZEND_STRL("Emulation.setEmulatedMedia"), true}, // [790]
php::Str{ZEND_STRL("mediaParams"), true}, // [791]
php::Str{ZEND_STRL("javaScriptEnabled"), true}, // [792]
php::Str{ZEND_STRL("Emulation.setScriptExecutionDisabled"), true}, // [793]
php::Str{ZEND_STRL("bypassCSP"), true}, // [794]
php::Str{ZEND_STRL("Page.setBypassCSP"), true}, // [795]
php::Str{ZEND_STRL("ignoreHTTPSErrors"), true}, // [796]
php::Str{ZEND_STRL("Security.setIgnoreCertificateErrors"), true}, // [797]
php::Str{ZEND_STRL("ignore"), true}, // [798]
php::Str{ZEND_STRL("extraHTTPHeaders"), true}, // [799]
php::Str{ZEND_STRL("Network.setExtraHTTPHeaders"), true}, // [800]
php::Str{ZEND_STRL("isOffline"), true}, // [801]
php::Str{ZEND_STRL("Network.emulateNetworkConditions"), true}, // [802]
php::Str{ZEND_STRL("offline"), true}, // [803]
php::Str{ZEND_STRL("latency"), true}, // [804]
php::Str{ZEND_STRL("downloadThroughput"), true}, // [805]
php::Str{ZEND_STRL("uploadThroughput"), true}, // [806]
php::Str{ZEND_STRL("deviceScaleFactor"), true}, // [807]
php::Str{ZEND_STRL("mobile"), true}, // [808]
php::Str{ZEND_STRL("screen"), true}, // [809]
php::Str{ZEND_STRL("screenWidth"), true}, // [810]
php::Str{ZEND_STRL("screenHeight"), true}, // [811]
php::Str{ZEND_STRL("prefers-color-scheme"), true}, // [812]
php::Str{ZEND_STRL("prefers-reduced-motion"), true}, // [813]
php::Str{ZEND_STRL("forced-colors"), true}, // [814]
php::Str{ZEND_STRL("features"), true}, // [815]
php::Str{ZEND_STRL("frames"), true}, // [816]
php::Str{ZEND_STRL("parentId"), true}, // [817]
php::Str{ZEND_STRL("urlFragment"), true}, // [818]
php::Str{ZEND_STRL("loaderId"), true}, // [819]
php::Str{ZEND_STRL("mainFrameId"), true}, // [820]
php::Str{ZEND_STRL("childFrames"), true}, // [821]
php::Str{ZEND_STRL("Page.frameAttached"), true}, // [822]
php::Str{ZEND_STRL("Page.frameNavigated"), true}, // [823]
php::Str{ZEND_STRL("Page.navigatedWithinDocument"), true}, // [824]
php::Str{ZEND_STRL("Page.frameDetached"), true}, // [825]
php::Str{ZEND_STRL("Page.lifecycleEvent"), true}, // [826]
php::Str{ZEND_STRL("Runtime.executionContextCreated"), true}, // [827]
php::Str{ZEND_STRL("Runtime.executionContextDestroyed"), true}, // [828]
php::Str{ZEND_STRL("Runtime.executionContextsCleared"), true}, // [829]
php::Str{ZEND_STRL("Runtime.consoleAPICalled"), true}, // [830]
php::Str{ZEND_STRL("Runtime.exceptionThrown"), true}, // [831]
php::Str{ZEND_STRL("Runtime.bindingCalled"), true}, // [832]
php::Str{ZEND_STRL("Page.javascriptDialogOpening"), true}, // [833]
php::Str{ZEND_STRL("Page.fileChooserOpened"), true}, // [834]
php::Str{ZEND_STRL("Network.requestWillBeSent"), true}, // [835]
php::Str{ZEND_STRL("Network.responseReceived"), true}, // [836]
php::Str{ZEND_STRL("Network.loadingFinished"), true}, // [837]
php::Str{ZEND_STRL("Network.loadingFailed"), true}, // [838]
php::Str{ZEND_STRL("Fetch.requestPaused"), true}, // [839]
php::Str{ZEND_STRL("Fetch.authRequired"), true}, // [840]
php::Str{ZEND_STRL("Inspector.targetCrashed"), true}, // [841]
php::Str{ZEND_STRL("parentFrameId"), true}, // [842]
php::Str{ZEND_STRL("emit"), true}, // [843]
php::Str{ZEND_STRL("frameattached"), true}, // [844]
php::Str{ZEND_STRL("detachFrame"), true}, // [845]
php::Str{ZEND_STRL("NativePlaywright\\Page::detachFrame"), true}, // [846]
php::Str{ZEND_STRL("framenavigated"), true}, // [847]
php::Str{ZEND_STRL("poke"), true}, // [848]
php::Str{ZEND_STRL("sameDocumentNavigations"), true}, // [849]
php::Str{ZEND_STRL("reason"), true}, // [850]
php::Str{ZEND_STRL("swap"), true}, // [851]
php::Str{ZEND_STRL("init"), true}, // [852]
php::Str{ZEND_STRL("lifecycleLoader"), true}, // [853]
php::Str{ZEND_STRL("lifecycle"), true}, // [854]
php::Str{ZEND_STRL("DOMContentLoaded"), true}, // [855]
php::Str{ZEND_STRL("domcontentloaded"), true}, // [856]
php::Str{ZEND_STRL("auxData"), true}, // [857]
php::Str{ZEND_STRL("isDefault"), true}, // [858]
php::Str{ZEND_STRL("mainContext"), true}, // [859]
php::Str{ZEND_STRL("utilContext"), true}, // [860]
php::Str{ZEND_STRL("contextDestroyed"), true}, // [861]
php::Str{ZEND_STRL("resetContexts"), true}, // [862]
php::Str{ZEND_STRL("onConsole"), true}, // [863]
php::Str{ZEND_STRL("NativePlaywright\\preg_replace"), true}, // [864]
php::Str{ZEND_STRL("preg_replace"), true}, // [865]
php::Str{ZEND_STRL("/^Uncaught /"), true}, // [866]
php::Str{ZEND_STRL("className"), true}, // [867]
php::Str{ZEND_STRL("Error"), true}, // [868]
php::Str{ZEND_STRL("/^([A-Za-z_$][\\w$]*): (.*)$/s"), true}, // [869]
php::Str{ZEND_STRL("pageerror"), true}, // [870]
php::Str{ZEND_STRL("emitFromPage"), true}, // [871]
php::Str{ZEND_STRL("weberror"), true}, // [872]
php::Str{ZEND_STRL("onBindingCalled"), true}, // [873]
php::Str{ZEND_STRL("onDialog"), true}, // [874]
php::Str{ZEND_STRL("filechooser"), true}, // [875]
php::Str{ZEND_STRL("mode"), true}, // [876]
php::Str{ZEND_STRL("selectMultiple"), true}, // [877]
php::Str{ZEND_STRL("onRequest"), true}, // [878]
php::Str{ZEND_STRL("onResponse"), true}, // [879]
php::Str{ZEND_STRL("requests"), true}, // [880]
php::Str{ZEND_STRL("encodedDataLength"), true}, // [881]
php::Str{ZEND_STRL("emitBoth"), true}, // [882]
php::Str{ZEND_STRL("requestfinished"), true}, // [883]
php::Str{ZEND_STRL("requestfailed"), true}, // [884]
php::Str{ZEND_STRL("onRequestPaused"), true}, // [885]
php::Str{ZEND_STRL("httpCredentials"), true}, // [886]
php::Str{ZEND_STRL("CancelAuth"), true}, // [887]
php::Str{ZEND_STRL("ProvideCredentials"), true}, // [888]
php::Str{ZEND_STRL("username"), true}, // [889]
php::Str{ZEND_STRL("password"), true}, // [890]
php::Str{ZEND_STRL("Fetch.continueWithAuth"), true}, // [891]
php::Str{ZEND_STRL("authChallengeResponse"), true}, // [892]
php::Str{ZEND_STRL("crash"), true}, // [893]
php::Str{ZEND_STRL("detached"), true}, // [894]
php::Str{ZEND_STRL("framedetached"), true}, // [895]
php::Str{ZEND_STRL("listenerCount"), true}, // [896]
php::Str{ZEND_STRL("console"), true}, // [897]
php::Str{ZEND_STRL("hasListeners"), true}, // [898]
php::Str{ZEND_STRL("NativePlaywright\\is_bool"), true}, // [899]
php::Str{ZEND_STRL("is_bool"), true}, // [900]
php::Str{ZEND_STRL("true"), true}, // [901]
php::Str{ZEND_STRL("false"), true}, // [902]
php::Str{ZEND_STRL("NativePlaywright\\is_null"), true}, // [903]
php::Str{ZEND_STRL("is_null"), true}, // [904]
php::Str{ZEND_STRL("null"), true}, // [905]
php::Str{ZEND_STRL("NativePlaywright\\is_scalar"), true}, // [906]
php::Str{ZEND_STRL("is_scalar"), true}, // [907]
php::Str{ZEND_STRL("undefined"), true}, // [908]
php::Str{ZEND_STRL("callFrames"), true}, // [909]
php::Str{ZEND_STRL("stackTrace"), true}, // [910]
php::Str{ZEND_STRL("lineNumber"), true}, // [911]
php::Str{ZEND_STRL("columnNumber"), true}, // [912]
php::Str{ZEND_STRL("warning"), true}, // [913]
php::Str{ZEND_STRL("NativePlaywright\\implode"), true}, // [914]
php::Str{ZEND_STRL("implode"), true}, // [915]
php::Str{ZEND_STRL("defaultPrompt"), true}, // [916]
php::Str{ZEND_STRL("dialog"), true}, // [917]
php::Str{ZEND_STRL("beforeunload"), true}, // [918]
php::Str{ZEND_STRL("dismiss"), true}, // [919]
php::Str{ZEND_STRL("redirectResponse"), true}, // [920]
php::Str{ZEND_STRL("makeResponse"), true}, // [921]
php::Str{ZEND_STRL("other"), true}, // [922]
php::Str{ZEND_STRL("document"), true}, // [923]
php::Str{ZEND_STRL("navRequests"), true}, // [924]
php::Str{ZEND_STRL("NativePlaywright\\array_shift"), true}, // [925]
php::Str{ZEND_STRL("array_shift"), true}, // [926]
php::Str{ZEND_STRL("remoteIPAddress"), true}, // [927]
php::Str{ZEND_STRL("NativePlaywright\\Page::navigationResponse"), true}, // [928]
php::Str{ZEND_STRL("?Response"), true}, // [929]
php::Str{ZEND_STRL("routes"), true}, // [930]
php::Str{ZEND_STRL("hasRoutes"), true}, // [931]
php::Str{ZEND_STRL("urlPattern"), true}, // [932]
php::Str{ZEND_STRL("Request"), true}, // [933]
php::Str{ZEND_STRL("requestStage"), true}, // [934]
php::Str{ZEND_STRL("patterns"), true}, // [935]
php::Str{ZEND_STRL("handleAuthRequests"), true}, // [936]
php::Str{ZEND_STRL("Fetch.disable"), true}, // [937]
php::Str{ZEND_STRL("networkId"), true}, // [938]
php::Str{ZEND_STRL("NativePlaywright\\array_reverse"), true}, // [939]
php::Str{ZEND_STRL("array_reverse"), true}, // [940]
php::Str{ZEND_STRL("routeHandlers"), true}, // [941]
php::Str{ZEND_STRL("matches"), true}, // [942]
php::Str{ZEND_STRL("expired"), true}, // [943]
php::Str{ZEND_STRL("handler"), true}, // [944]
php::Str{ZEND_STRL("isHandled"), true}, // [945]
php::Str{ZEND_STRL("native_playwright route handler error: "), true}, // [946]
php::Str{ZEND_STRL("syncInterception"), true}, // [947]
php::Str{ZEND_STRL("NativePlaywright\\Page::route"), true}, // [948]
php::Str{ZEND_STRL("h"), true}, // [949]
php::Str{ZEND_STRL("RouteHandler"), true}, // [950]
php::Str{ZEND_STRL("NativePlaywright\\Page::unroute"), true}, // [951]
php::Str{ZEND_STRL("(() => { const n = "), true}, // [952]
php::Str{ZEND_STRL("; const b = globalThis[\"__pwlite_b_\" + n]; if (!b || globalThis[n]) return; "), true}, // [953]
php::Str{ZEND_STRL("const cbs = new Map(); let seq = 0; const d = globalThis.__pwliteDeliver || (globalThis.__pwliteDeliver = {}); "), true}, // [954]
php::Str{ZEND_STRL("d[n] = (id, ok, v) => { const c = cbs.get(id); if (!c) return; cbs.delete(id); ok ? c[0](v) : c[1](new Error(v)); }; "), true}, // [955]
php::Str{ZEND_STRL("Object.defineProperty(globalThis, n, { configurable: true, value: (...args) => new Promise((res, rej) => { const id = ++seq; cbs.set(id, [res, rej]); b(JSON.stringify({ id, args })); }) }); })()"), true}, // [956]
php::Str{ZEND_STRL("bindings"), true}, // [957]
php::Str{ZEND_STRL("installBinding"), true}, // [958]
php::Str{ZEND_STRL("exposeBinding"), true}, // [959]
php::Str{ZEND_STRL("evaluate"), true}, // [960]
php::Str{ZEND_STRL("binding"), true}, // [961]
php::Str{ZEND_STRL("payload"), true}, // [962]
php::Str{ZEND_STRL("mainFrame"), true}, // [963]
php::Str{ZEND_STRL("globalThis.__pwliteDeliver["), true}, // [964]
php::Str{ZEND_STRL("]("), true}, // [965]
php::Str{ZEND_STRL(", "), true}, // [966]
php::Str{ZEND_STRL("Runtime.evaluate"), true}, // [967]
php::Str{ZEND_STRL("expression"), true}, // [968]
php::Str{ZEND_STRL("contextId"), true}, // [969]
php::Str{ZEND_STRL("NativePlaywright\\Page::addInitScript"), true}, // [970]
php::Str{ZEND_STRL("script"), true}, // [971]
php::Str{ZEND_STRL("pageClosed"), true}, // [972]
php::Str{ZEND_STRL("removeAllListeners"), true}, // [973]
php::Str{ZEND_STRL("runBeforeUnload"), true}, // [974]
php::Str{ZEND_STRL("Page.close"), true}, // [975]
php::Str{ZEND_STRL("Target.closeTarget"), true}, // [976]
php::Str{ZEND_STRL("targetId"), true}, // [977]
php::Str{ZEND_STRL("isClosed"), true}, // [978]
php::Str{ZEND_STRL("page.close"), true}, // [979]
php::Str{ZEND_STRL("didClose"), true}, // [980]
php::Str{ZEND_STRL("ownedBy"), true}, // [981]
php::Str{ZEND_STRL("opener"), true}, // [982]
php::Str{ZEND_STRL("popup"), true}, // [983]
php::Str{ZEND_STRL("fileChooserIntercepted"), true}, // [984]
php::Str{ZEND_STRL("Page.setInterceptFileChooserDialog"), true}, // [985]
php::Str{ZEND_STRL("Page has no main frame (closed?)"), true}, // [986]
php::Str{ZEND_STRL("NativePlaywright\\Page::frameById"), true}, // [987]
php::Str{ZEND_STRL("NativePlaywright\\Page::frame"), true}, // [988]
php::Str{ZEND_STRL("goto"), true}, // [989]
php::Str{ZEND_STRL("waitUntil"), true}, // [990]
php::Str{ZEND_STRL("networkidle"), true}, // [991]
php::Str{ZEND_STRL("networkIdle"), true}, // [992]
php::Str{ZEND_STRL("commit"), true}, // [993]
php::Str{ZEND_STRL("lifecycleReached"), true}, // [994]
php::Str{ZEND_STRL("navigationTimeoutSeconds"), true}, // [995]
php::Str{ZEND_STRL("page.navigation"), true}, // [996]
php::Str{ZEND_STRL("navigationResponse"), true}, // [997]
php::Str{ZEND_STRL("NativePlaywright\\Page::historyNavigate"), true}, // [998]
php::Str{ZEND_STRL("historyNavigate"), true}, // [999]
php::Str{ZEND_STRL("Page.reload"), true}, // [1000]
php::Str{ZEND_STRL("Page.getNavigationHistory"), true}, // [1001]
php::Str{ZEND_STRL("currentIndex"), true}, // [1002]
php::Str{ZEND_STRL("entries"), true}, // [1003]
php::Str{ZEND_STRL("Page.navigateToHistoryEntry"), true}, // [1004]
php::Str{ZEND_STRL("entryId"), true}, // [1005]
php::Str{ZEND_STRL("goHistory"), true}, // [1006]
php::Str{ZEND_STRL("waitForLoadState"), true}, // [1007]
php::Str{ZEND_STRL("waitForURL"), true}, // [1008]
php::Str{ZEND_STRL("NativePlaywright\\Page::waitForURL"), true}, // [1009]
php::Str{ZEND_STRL("expectNavigation"), true}, // [1010]
php::Str{ZEND_STRL("sleep"), true}, // [1011]
php::Str{ZEND_STRL("r"), true}, // [1012]
php::Str{ZEND_STRL("expectEvent"), true}, // [1013]
php::Str{ZEND_STRL("NativePlaywright\\Page::expectRequest"), true}, // [1014]
php::Str{ZEND_STRL("urlOrPredicate"), true}, // [1015]
php::Str{ZEND_STRL("Response"), true}, // [1016]
php::Str{ZEND_STRL("NativePlaywright\\Page::expectResponse"), true}, // [1017]
php::Str{ZEND_STRL("expectRequest"), true}, // [1018]
php::Str{ZEND_STRL("NativePlaywright\\Page::waitForRequest"), true}, // [1019]
php::Str{ZEND_STRL("expectResponse"), true}, // [1020]
php::Str{ZEND_STRL("NativePlaywright\\Page::waitForResponse"), true}, // [1021]
php::Str{ZEND_STRL("predicate"), true}, // [1022]
php::Str{ZEND_STRL("content"), true}, // [1023]
php::Str{ZEND_STRL("setContent"), true}, // [1024]
php::Str{ZEND_STRL("waitForFunction"), true}, // [1025]
php::Str{ZEND_STRL("addScriptTag"), true}, // [1026]
php::Str{ZEND_STRL("addStyleTag"), true}, // [1027]
php::Str{ZEND_STRL("locator"), true}, // [1028]
php::Str{ZEND_STRL("getByText"), true}, // [1029]
php::Str{ZEND_STRL("getByRole"), true}, // [1030]
php::Str{ZEND_STRL("getByLabel"), true}, // [1031]
php::Str{ZEND_STRL("getByPlaceholder"), true}, // [1032]
php::Str{ZEND_STRL("getByAltText"), true}, // [1033]
php::Str{ZEND_STRL("getByTitle"), true}, // [1034]
php::Str{ZEND_STRL("getByTestId"), true}, // [1035]
php::Str{ZEND_STRL("frameLocator"), true}, // [1036]
php::Str{ZEND_STRL("dblclick"), true}, // [1037]
php::Str{ZEND_STRL("tap"), true}, // [1038]
php::Str{ZEND_STRL("fill"), true}, // [1039]
php::Str{ZEND_STRL("hover"), true}, // [1040]
php::Str{ZEND_STRL("focus"), true}, // [1041]
php::Str{ZEND_STRL("check"), true}, // [1042]
php::Str{ZEND_STRL("uncheck"), true}, // [1043]
php::Str{ZEND_STRL("setChecked"), true}, // [1044]
php::Str{ZEND_STRL("selectOption"), true}, // [1045]
php::Str{ZEND_STRL("NativePlaywright\\Page::selectOption"), true}, // [1046]
php::Str{ZEND_STRL("values"), true}, // [1047]
php::Str{ZEND_STRL("setInputFiles"), true}, // [1048]
php::Str{ZEND_STRL("NativePlaywright\\Page::setInputFiles"), true}, // [1049]
php::Str{ZEND_STRL("dragAndDrop"), true}, // [1050]
php::Str{ZEND_STRL("dispatchEvent"), true}, // [1051]
php::Str{ZEND_STRL("textContent"), true}, // [1052]
php::Str{ZEND_STRL("NativePlaywright\\Page::textContent"), true}, // [1053]
php::Str{ZEND_STRL("innerText"), true}, // [1054]
php::Str{ZEND_STRL("innerHTML"), true}, // [1055]
php::Str{ZEND_STRL("getAttribute"), true}, // [1056]
php::Str{ZEND_STRL("NativePlaywright\\Page::getAttribute"), true}, // [1057]
php::Str{ZEND_STRL("inputValue"), true}, // [1058]
php::Str{ZEND_STRL("isVisible"), true}, // [1059]
php::Str{ZEND_STRL("isHidden"), true}, // [1060]
php::Str{ZEND_STRL("isEnabled"), true}, // [1061]
php::Str{ZEND_STRL("isDisabled"), true}, // [1062]
php::Str{ZEND_STRL("isEditable"), true}, // [1063]
php::Str{ZEND_STRL("isChecked"), true}, // [1064]
php::Str{ZEND_STRL("waitForSelector"), true}, // [1065]
php::Str{ZEND_STRL("evalOnSelector"), true}, // [1066]
php::Str{ZEND_STRL("evalOnSelectorAll"), true}, // [1067]
php::Str{ZEND_STRL("NativePlaywright\\Page::viewportSize"), true}, // [1068]
php::Str{ZEND_STRL("extraHeaders"), true}, // [1069]
php::Str{ZEND_STRL("applyExtraHeaders"), true}, // [1070]
php::Str{ZEND_STRL("Page.bringToFront"), true}, // [1071]
php::Str{ZEND_STRL("HeapProfiler.collectGarbage"), true}, // [1072]
php::Str{ZEND_STRL("/\\.jpe?g$/i"), true}, // [1073]
php::Str{ZEND_STRL("format"), true}, // [1074]
php::Str{ZEND_STRL("fromSurface"), true}, // [1075]
php::Str{ZEND_STRL("fullPage"), true}, // [1076]
php::Str{ZEND_STRL("captureBeyondViewport"), true}, // [1077]
php::Str{ZEND_STRL("quality"), true}, // [1078]
php::Str{ZEND_STRL("scale"), true}, // [1079]
php::Str{ZEND_STRL("device"), true}, // [1080]
php::Str{ZEND_STRL("Page.getLayoutMetrics"), true}, // [1081]
php::Str{ZEND_STRL("cssContentSize"), true}, // [1082]
php::Str{ZEND_STRL("contentSize"), true}, // [1083]
php::Str{ZEND_STRL("clip"), true}, // [1084]
php::Str{ZEND_STRL("cssLayoutViewport"), true}, // [1085]
php::Str{ZEND_STRL("layoutViewport"), true}, // [1086]
php::Str{ZEND_STRL("pageX"), true}, // [1087]
php::Str{ZEND_STRL("pageY"), true}, // [1088]
php::Str{ZEND_STRL("omitBackground"), true}, // [1089]
php::Str{ZEND_STRL("Emulation.setDefaultBackgroundColorOverride"), true}, // [1090]
php::Str{ZEND_STRL("g"), true}, // [1091]
php::Str{ZEND_STRL("color"), true}, // [1092]
php::Str{ZEND_STRL("Page.captureScreenshot"), true}, // [1093]
php::Str{ZEND_STRL("NativePlaywright\\file_put_contents"), true}, // [1094]
php::Str{ZEND_STRL("file_put_contents"), true}, // [1095]
php::Str{ZEND_STRL("letter"), true}, // [1096]
php::Str{ZEND_STRL("legal"), true}, // [1097]
php::Str{ZEND_STRL("tabloid"), true}, // [1098]
php::Str{ZEND_STRL("ledger"), true}, // [1099]
php::Str{ZEND_STRL("a0"), true}, // [1100]
php::Str{ZEND_STRL("a1"), true}, // [1101]
php::Str{ZEND_STRL("a2"), true}, // [1102]
php::Str{ZEND_STRL("a3"), true}, // [1103]
php::Str{ZEND_STRL("a4"), true}, // [1104]
php::Str{ZEND_STRL("a5"), true}, // [1105]
php::Str{ZEND_STRL("a6"), true}, // [1106]
php::Str{ZEND_STRL("Unknown paper format: "), true}, // [1107]
php::Str{ZEND_STRL("margin"), true}, // [1108]
php::Str{ZEND_STRL("landscape"), true}, // [1109]
php::Str{ZEND_STRL("displayHeaderFooter"), true}, // [1110]
php::Str{ZEND_STRL("headerTemplate"), true}, // [1111]
php::Str{ZEND_STRL("footerTemplate"), true}, // [1112]
php::Str{ZEND_STRL("printBackground"), true}, // [1113]
php::Str{ZEND_STRL("paperWidth"), true}, // [1114]
php::Str{ZEND_STRL("paperHeight"), true}, // [1115]
php::Str{ZEND_STRL("top"), true}, // [1116]
php::Str{ZEND_STRL("marginTop"), true}, // [1117]
php::Str{ZEND_STRL("bottom"), true}, // [1118]
php::Str{ZEND_STRL("marginBottom"), true}, // [1119]
php::Str{ZEND_STRL("marginLeft"), true}, // [1120]
php::Str{ZEND_STRL("marginRight"), true}, // [1121]
php::Str{ZEND_STRL("pageRanges"), true}, // [1122]
php::Str{ZEND_STRL("preferCSSPageSize"), true}, // [1123]
php::Str{ZEND_STRL("tagged"), true}, // [1124]
php::Str{ZEND_STRL("generateTaggedPDF"), true}, // [1125]
php::Str{ZEND_STRL("outline"), true}, // [1126]
php::Str{ZEND_STRL("generateDocumentOutline"), true}, // [1127]
php::Str{ZEND_STRL("Page.printToPDF"), true}, // [1128]
php::Str{ZEND_STRL("handlers"), true}, // [1129]
php::Str{ZEND_STRL("handlerSeq"), true}, // [1130]
php::Str{ZEND_STRL("onListenerAdded"), true}, // [1131]
php::Str{ZEND_STRL("NativePlaywright\\Page::listenerCount"), true}, // [1132]
php::Str{ZEND_STRL("transport"), true}, // [1133]
php::Str{ZEND_STRL("NativePlaywright\\Page::waitForEvent"), true}, // [1134]
php::Str{ZEND_STRL("waiting for event \""), true}, // [1135]
php::Str{ZEND_STRL("NativePlaywright\\Page::expectEvent"), true}, // [1136]
php::Str{ZEND_STRL("NativePlaywright\\Browser"), true}, // [1137]
php::Str{ZEND_STRL("NativePlaywright\\Page::__construct"), true}, // [1138]
php::Str{ZEND_STRL("NativePlaywright\\Page::releaseObject"), true}, // [1139]
php::Str{ZEND_STRL("NativePlaywright\\Page::callOn"), true}, // [1140]
php::Str{ZEND_STRL("fn"), true}, // [1141]
php::Str{ZEND_STRL("NativePlaywright\\Page::callFunction"), true}, // [1142]
php::Str{ZEND_STRL("NativePlaywright\\Page::setDefaultTimeout"), true}, // [1143]
php::Str{ZEND_STRL("NativePlaywright\\Page::setDefaultNavigationTimeout"), true}, // [1144]
php::Str{ZEND_STRL("NativePlaywright\\Page::waitForCondition"), true}, // [1145]
php::Str{ZEND_STRL("NativePlaywright\\Page::loadFrameTree"), true}, // [1146]
php::Str{ZEND_STRL("parent"), true}, // [1147]
php::Str{ZEND_STRL("NativePlaywright\\Page::onProtocolEvent"), true}, // [1148]
php::Str{ZEND_STRL("NativePlaywright\\Page::emitBoth"), true}, // [1149]
php::Str{ZEND_STRL("event"), true}, // [1150]
php::Str{ZEND_STRL("NativePlaywright\\Page::exposeBinding"), true}, // [1151]
php::Str{ZEND_STRL("NativePlaywright\\Page::exposeFunction"), true}, // [1152]
php::Str{ZEND_STRL("NativePlaywright\\Page::installBinding"), true}, // [1153]
php::Str{ZEND_STRL("NativePlaywright\\Page::onListenerAdded"), true}, // [1154]
php::Str{ZEND_STRL("NativePlaywright\\Page::goto"), true}, // [1155]
php::Str{ZEND_STRL("NativePlaywright\\Page::goHistory"), true}, // [1156]
php::Str{ZEND_STRL("delta"), true}, // [1157]
php::Str{ZEND_STRL("NativePlaywright\\Page::waitForLoadState"), true}, // [1158]
php::Str{ZEND_STRL("NativePlaywright\\Page::setContent"), true}, // [1159]
php::Str{ZEND_STRL("NativePlaywright\\Page::evaluate"), true}, // [1160]
php::Str{ZEND_STRL("NativePlaywright\\Page::waitForFunction"), true}, // [1161]
php::Str{ZEND_STRL("NativePlaywright\\Page::locator"), true}, // [1162]
php::Str{ZEND_STRL("NativePlaywright\\Page::getByText"), true}, // [1163]
php::Str{ZEND_STRL("NativePlaywright\\Page::getByRole"), true}, // [1164]
php::Str{ZEND_STRL("NativePlaywright\\Page::getByLabel"), true}, // [1165]
php::Str{ZEND_STRL("NativePlaywright\\Page::getByPlaceholder"), true}, // [1166]
php::Str{ZEND_STRL("NativePlaywright\\Page::getByAltText"), true}, // [1167]
php::Str{ZEND_STRL("NativePlaywright\\Page::getByTitle"), true}, // [1168]
php::Str{ZEND_STRL("NativePlaywright\\Page::getByTestId"), true}, // [1169]
php::Str{ZEND_STRL("NativePlaywright\\Page::frameLocator"), true}, // [1170]
php::Str{ZEND_STRL("NativePlaywright\\Page::click"), true}, // [1171]
php::Str{ZEND_STRL("NativePlaywright\\Page::dblclick"), true}, // [1172]
php::Str{ZEND_STRL("NativePlaywright\\Page::tap"), true}, // [1173]
php::Str{ZEND_STRL("NativePlaywright\\Page::fill"), true}, // [1174]
php::Str{ZEND_STRL("NativePlaywright\\Page::type"), true}, // [1175]
php::Str{ZEND_STRL("NativePlaywright\\Page::press"), true}, // [1176]
php::Str{ZEND_STRL("NativePlaywright\\Page::hover"), true}, // [1177]
php::Str{ZEND_STRL("NativePlaywright\\Page::focus"), true}, // [1178]
php::Str{ZEND_STRL("NativePlaywright\\Page::check"), true}, // [1179]
php::Str{ZEND_STRL("NativePlaywright\\Page::uncheck"), true}, // [1180]
php::Str{ZEND_STRL("NativePlaywright\\Page::setChecked"), true}, // [1181]
php::Str{ZEND_STRL("checked"), true}, // [1182]
php::Str{ZEND_STRL("NativePlaywright\\Page::dragAndDrop"), true}, // [1183]
php::Str{ZEND_STRL("target"), true}, // [1184]
php::Str{ZEND_STRL("NativePlaywright\\Page::dispatchEvent"), true}, // [1185]
php::Str{ZEND_STRL("NativePlaywright\\Page::innerText"), true}, // [1186]
php::Str{ZEND_STRL("NativePlaywright\\Page::innerHTML"), true}, // [1187]
php::Str{ZEND_STRL("NativePlaywright\\Page::inputValue"), true}, // [1188]
php::Str{ZEND_STRL("NativePlaywright\\Page::isVisible"), true}, // [1189]
php::Str{ZEND_STRL("NativePlaywright\\Page::isHidden"), true}, // [1190]
php::Str{ZEND_STRL("NativePlaywright\\Page::isEnabled"), true}, // [1191]
php::Str{ZEND_STRL("NativePlaywright\\Page::isDisabled"), true}, // [1192]
php::Str{ZEND_STRL("NativePlaywright\\Page::isEditable"), true}, // [1193]
php::Str{ZEND_STRL("NativePlaywright\\Page::isChecked"), true}, // [1194]
php::Str{ZEND_STRL("NativePlaywright\\Page::waitForSelector"), true}, // [1195]
php::Str{ZEND_STRL("NativePlaywright\\Page::evalOnSelector"), true}, // [1196]
php::Str{ZEND_STRL("NativePlaywright\\Page::evalOnSelectorAll"), true}, // [1197]
php::Str{ZEND_STRL("NativePlaywright\\Page::on"), true}, // [1198]
php::Str{ZEND_STRL("NativePlaywright\\Page::once"), true}, // [1199]
php::Str{ZEND_STRL("NativePlaywright\\Page::off"), true}, // [1200]
php::Str{ZEND_STRL("NativePlaywright\\Page::removeAllListeners"), true}, // [1201]
php::Str{ZEND_STRL("NativePlaywright\\Page::emit"), true}, // [1202]
php::Str{ZEND_STRL("NativePlaywright\\Frame::parentFrame"), true}, // [1203]
php::Str{ZEND_STRL("injectedContext"), true}, // [1204]
php::Str{ZEND_STRL("Cannot find context"), true}, // [1205]
php::Str{ZEND_STRL("Execution context was destroyed"), true}, // [1206]
php::Str{ZEND_STRL("Inspected target navigated or closed"), true}, // [1207]
php::Str{ZEND_STRL("Cannot find default execution context"), true}, // [1208]
php::Str{ZEND_STRL("No frame for given id"), true}, // [1209]
php::Str{ZEND_STRL("Frame with the given id was not found"), true}, // [1210]
php::Str{ZEND_STRL("__pwlite is not defined"), true}, // [1211]
php::Str{ZEND_STRL("Page.createIsolatedWorld"), true}, // [1212]
php::Str{ZEND_STRL("worldName"), true}, // [1213]
php::Str{ZEND_STRL("grantUniveralAccess"), true}, // [1214]
php::Str{ZEND_STRL("Failed to inject: "), true}, // [1215]
php::Str{ZEND_STRL("ensureUtil"), true}, // [1216]
php::Str{ZEND_STRL("NativePlaywright\\Frame::isContextLost"), true}, // [1217]
php::Str{ZEND_STRL("msg"), true}, // [1218]
php::Str{ZEND_STRL("/^Error: /"), true}, // [1219]
php::Str{ZEND_STRL("\n    at "), true}, // [1220]
php::Str{ZEND_STRL("utilCall"), true}, // [1221]
php::Str{ZEND_STRL("waiting for execution context"), true}, // [1222]
php::Str{ZEND_STRL("node"), true}, // [1223]
php::Str{ZEND_STRL("DOM.describeNode"), true}, // [1224]
php::Str{ZEND_STRL("releaseObject"), true}, // [1225]
php::Str{ZEND_STRL("DOM.resolveNode"), true}, // [1226]
php::Str{ZEND_STRL("mainContextId"), true}, // [1227]
php::Str{ZEND_STRL("object"), true}, // [1228]
php::Str{ZEND_STRL("parentFrame"), true}, // [1229]
php::Str{ZEND_STRL("DOM.getFrameOwner"), true}, // [1230]
php::Str{ZEND_STRL("DOM.getBoxModel"), true}, // [1231]
php::Str{ZEND_STRL("model"), true}, // [1232]
php::Str{ZEND_STRL("Unsupported waitUntil option: "), true}, // [1233]
php::Str{ZEND_STRL(" (use load|domcontentloaded|networkidle|commit)"), true}, // [1234]
php::Str{ZEND_STRL("referer"), true}, // [1235]
php::Str{ZEND_STRL("referrer"), true}, // [1236]
php::Str{ZEND_STRL("Page.navigate"), true}, // [1237]
php::Str{ZEND_STRL("page.goto: "), true}, // [1238]
php::Str{ZEND_STRL(" at "), true}, // [1239]
php::Str{ZEND_STRL("waitForLoader"), true}, // [1240]
php::Str{ZEND_STRL("NativePlaywright\\Frame::waitForLoader"), true}, // [1241]
php::Str{ZEND_STRL("deadline"), true}, // [1242]
php::Str{ZEND_STRL("page.goto"), true}, // [1243]
php::Str{ZEND_STRL("NativePlaywright\\Frame::goto"), true}, // [1244]
php::Str{ZEND_STRL("Navigating frame was detached!"), true}, // [1245]
php::Str{ZEND_STRL("page.waitForNavigation"), true}, // [1246]
php::Str{ZEND_STRL("NativePlaywright\\Frame::expectNavigation"), true}, // [1247]
php::Str{ZEND_STRL("page.waitForLoadState"), true}, // [1248]
php::Str{ZEND_STRL("page.waitForURL"), true}, // [1249]
php::Str{ZEND_STRL("NativePlaywright\\Frame::waitForURL"), true}, // [1250]
php::Str{ZEND_STRL("utilValue"), true}, // [1251]
php::Str{ZEND_STRL("document.title"), true}, // [1252]
php::Str{ZEND_STRL("(() => { let s = \"\"; if (document.doctype) s = new XMLSerializer().serializeToString(document.doctype); "), true}, // [1253]
php::Str{ZEND_STRL("if (document.documentElement) s += document.documentElement.outerHTML; return s; })()"), true}, // [1254]
php::Str{ZEND_STRL("(() => { document.open(); document.write("), true}, // [1255]
php::Str{ZEND_STRL("); document.close(); return true; })()"), true}, // [1256]
php::Str{ZEND_STRL("\"interactive\",\"complete\""), true}, // [1257]
php::Str{ZEND_STRL("\"complete\""), true}, // [1258]
php::Str{ZEND_STRL("].includes(document.readyState)"), true}, // [1259]
php::Str{ZEND_STRL("page.setContent: Timeout exceeded."), true}, // [1260]
php::Str{ZEND_STRL("page.evaluate: "), true}, // [1261]
php::Str{ZEND_STRL("function () { return this; }"), true}, // [1262]
php::Str{ZEND_STRL("() => ("), true}, // [1263]
php::Str{ZEND_STRL("polling"), true}, // [1264]
php::Str{ZEND_STRL("raf"), true}, // [1265]
php::Str{ZEND_STRL("new Promise(r => requestAnimationFrame(() => r()))"), true}, // [1266]
php::Str{ZEND_STRL("new Promise(r => setTimeout(r, "), true}, // [1267]
php::Str{ZEND_STRL("))"), true}, // [1268]
php::Str{ZEND_STRL("NativePlaywright\\min"), true}, // [1269]
php::Str{ZEND_STRL("min"), true}, // [1270]
php::Str{ZEND_STRL("async (arg) => { const fn = ("), true}, // [1271]
php::Str{ZEND_STRL("); const end = Date.now() + "), true}, // [1272]
php::Str{ZEND_STRL("; "), true}, // [1273]
php::Str{ZEND_STRL("for (;;) { const v = await fn(arg); if (v) return { ok: true, v }; if (Date.now() >= end) return { ok: false }; await "), true}, // [1274]
php::Str{ZEND_STRL("; } }"), true}, // [1275]
php::Str{ZEND_STRL("ok"), true}, // [1276]
php::Str{ZEND_STRL("v"), true}, // [1277]
php::Str{ZEND_STRL("page.waitForFunction: Timeout %dms exceeded."), true}, // [1278]
php::Str{ZEND_STRL("\n//# sourceURL="), true}, // [1279]
php::Str{ZEND_STRL("async (o) => { const s = document.createElement(\"script\"); if (o.type) s.type = o.type; "), true}, // [1280]
php::Str{ZEND_STRL("if (o.url) { s.src = o.url; const p = new Promise((res, rej) => { s.onload = res; s.onerror = () => rej(new Error(\"Failed to load script \" + o.url)); }); document.head.appendChild(s); await p; } "), true}, // [1281]
php::Str{ZEND_STRL("else { s.text = o.content; document.head.appendChild(s); } }"), true}, // [1282]
php::Str{ZEND_STRL("async (o) => { let el; if (o.url) { el = document.createElement(\"link\"); el.rel = \"stylesheet\"; el.href = o.url; "), true}, // [1283]
php::Str{ZEND_STRL("const p = new Promise((res, rej) => { el.onload = res; el.onerror = () => rej(new Error(\"Failed to load stylesheet \" + o.url)); }); document.head.appendChild(el); await p; } "), true}, // [1284]
php::Str{ZEND_STRL("else { el = document.createElement(\"style\"); el.textContent = o.content; document.head.appendChild(el); } }"), true}, // [1285]
php::Str{ZEND_STRL("pressSequentially"), true}, // [1286]
php::Str{ZEND_STRL("NativePlaywright\\Frame::selectOption"), true}, // [1287]
php::Str{ZEND_STRL("NativePlaywright\\Frame::setInputFiles"), true}, // [1288]
php::Str{ZEND_STRL("dragTo"), true}, // [1289]
php::Str{ZEND_STRL("NativePlaywright\\Frame::textContent"), true}, // [1290]
php::Str{ZEND_STRL("NativePlaywright\\Frame::getAttribute"), true}, // [1291]
php::Str{ZEND_STRL("waitFor"), true}, // [1292]
php::Str{ZEND_STRL("visible"), true}, // [1293]
php::Str{ZEND_STRL("hidden"), true}, // [1294]
php::Str{ZEND_STRL("NativePlaywright\\Frame::waitForSelector"), true}, // [1295]
php::Str{ZEND_STRL("?Locator"), true}, // [1296]
php::Str{ZEND_STRL("evaluateAll"), true}, // [1297]
php::Str{ZEND_STRL("NativePlaywright\\Frame::__construct"), true}, // [1298]
php::Str{ZEND_STRL("NativePlaywright\\Frame::contextDestroyed"), true}, // [1299]
php::Str{ZEND_STRL("NativePlaywright\\Frame::utilCall"), true}, // [1300]
php::Str{ZEND_STRL("byValue"), true}, // [1301]
php::Str{ZEND_STRL("NativePlaywright\\Frame::utilValue"), true}, // [1302]
php::Str{ZEND_STRL("NativePlaywright\\Frame::adoptToMain"), true}, // [1303]
php::Str{ZEND_STRL("NativePlaywright\\Frame::lifecycleName"), true}, // [1304]
php::Str{ZEND_STRL("NativePlaywright\\Frame::lifecycleReached"), true}, // [1305]
php::Str{ZEND_STRL("api"), true}, // [1306]
php::Str{ZEND_STRL("NativePlaywright\\Frame::waitForLoadState"), true}, // [1307]
php::Str{ZEND_STRL("NativePlaywright\\Frame::setContent"), true}, // [1308]
php::Str{ZEND_STRL("NativePlaywright\\Frame::evaluate"), true}, // [1309]
php::Str{ZEND_STRL("NativePlaywright\\Frame::waitForFunction"), true}, // [1310]
php::Str{ZEND_STRL("NativePlaywright\\Frame::locator"), true}, // [1311]
php::Str{ZEND_STRL("NativePlaywright\\Frame::getByText"), true}, // [1312]
php::Str{ZEND_STRL("NativePlaywright\\Frame::getByRole"), true}, // [1313]
php::Str{ZEND_STRL("NativePlaywright\\Frame::getByLabel"), true}, // [1314]
php::Str{ZEND_STRL("NativePlaywright\\Frame::getByPlaceholder"), true}, // [1315]
php::Str{ZEND_STRL("NativePlaywright\\Frame::getByAltText"), true}, // [1316]
php::Str{ZEND_STRL("NativePlaywright\\Frame::getByTitle"), true}, // [1317]
php::Str{ZEND_STRL("NativePlaywright\\Frame::getByTestId"), true}, // [1318]
php::Str{ZEND_STRL("NativePlaywright\\Frame::frameLocator"), true}, // [1319]
php::Str{ZEND_STRL("NativePlaywright\\Frame::click"), true}, // [1320]
php::Str{ZEND_STRL("NativePlaywright\\Frame::dblclick"), true}, // [1321]
php::Str{ZEND_STRL("NativePlaywright\\Frame::tap"), true}, // [1322]
php::Str{ZEND_STRL("NativePlaywright\\Frame::fill"), true}, // [1323]
php::Str{ZEND_STRL("NativePlaywright\\Frame::type"), true}, // [1324]
php::Str{ZEND_STRL("NativePlaywright\\Frame::press"), true}, // [1325]
php::Str{ZEND_STRL("NativePlaywright\\Frame::hover"), true}, // [1326]
php::Str{ZEND_STRL("NativePlaywright\\Frame::focus"), true}, // [1327]
php::Str{ZEND_STRL("NativePlaywright\\Frame::check"), true}, // [1328]
php::Str{ZEND_STRL("NativePlaywright\\Frame::uncheck"), true}, // [1329]
php::Str{ZEND_STRL("NativePlaywright\\Frame::setChecked"), true}, // [1330]
php::Str{ZEND_STRL("NativePlaywright\\Frame::dragAndDrop"), true}, // [1331]
php::Str{ZEND_STRL("NativePlaywright\\Frame::dispatchEvent"), true}, // [1332]
php::Str{ZEND_STRL("NativePlaywright\\Frame::innerText"), true}, // [1333]
php::Str{ZEND_STRL("NativePlaywright\\Frame::innerHTML"), true}, // [1334]
php::Str{ZEND_STRL("NativePlaywright\\Frame::inputValue"), true}, // [1335]
php::Str{ZEND_STRL("NativePlaywright\\Frame::isVisible"), true}, // [1336]
php::Str{ZEND_STRL("NativePlaywright\\Frame::isHidden"), true}, // [1337]
php::Str{ZEND_STRL("NativePlaywright\\Frame::isEnabled"), true}, // [1338]
php::Str{ZEND_STRL("NativePlaywright\\Frame::isDisabled"), true}, // [1339]
php::Str{ZEND_STRL("NativePlaywright\\Frame::isEditable"), true}, // [1340]
php::Str{ZEND_STRL("NativePlaywright\\Frame::isChecked"), true}, // [1341]
php::Str{ZEND_STRL("NativePlaywright\\Frame::evalOnSelector"), true}, // [1342]
php::Str{ZEND_STRL("NativePlaywright\\Frame::evalOnSelectorAll"), true}, // [1343]
php::Str{ZEND_STRL("Locator@"), true}, // [1344]
php::Str{ZEND_STRL("i"), true}, // [1345]
php::Str{ZEND_STRL("/[^imsu]/"), true}, // [1346]
php::Str{ZEND_STRL("NativePlaywright\\str_replace"), true}, // [1347]
php::Str{ZEND_STRL("str_replace"), true}, // [1348]
php::Str{ZEND_STRL("\\/"), true}, // [1349]
php::Str{ZEND_STRL("internal:text="), true}, // [1350]
php::Str{ZEND_STRL("internal:label="), true}, // [1351]
php::Str{ZEND_STRL("internal:attr=["), true}, // [1352]
php::Str{ZEND_STRL("internal:testid=["), true}, // [1353]
php::Str{ZEND_STRL("testIdAttribute"), true}, // [1354]
php::Str{ZEND_STRL("s]"), true}, // [1355]
php::Str{ZEND_STRL("internal:role="), true}, // [1356]
php::Str{ZEND_STRL("disabled"), true}, // [1357]
php::Str{ZEND_STRL("selected"), true}, // [1358]
php::Str{ZEND_STRL("expanded"), true}, // [1359]
php::Str{ZEND_STRL("level"), true}, // [1360]
php::Str{ZEND_STRL("[level="), true}, // [1361]
php::Str{ZEND_STRL("includeHidden"), true}, // [1362]
php::Str{ZEND_STRL("[include-hidden=true]"), true}, // [1363]
php::Str{ZEND_STRL("[name="), true}, // [1364]
php::Str{ZEND_STRL(" >> "), true}, // [1365]
php::Str{ZEND_STRL("chain"), true}, // [1366]
php::Str{ZEND_STRL("NativePlaywright\\Locator::chain"), true}, // [1367]
php::Str{ZEND_STRL("NativePlaywright\\Locator::locator"), true}, // [1368]
php::Str{ZEND_STRL("hasText"), true}, // [1369]
php::Str{ZEND_STRL(" >> internal:has-text="), true}, // [1370]
php::Str{ZEND_STRL("hasNotText"), true}, // [1371]
php::Str{ZEND_STRL(" >> internal:has-not-text="), true}, // [1372]
php::Str{ZEND_STRL("has"), true}, // [1373]
php::Str{ZEND_STRL(" >> internal:has="), true}, // [1374]
php::Str{ZEND_STRL("hasNot"), true}, // [1375]
php::Str{ZEND_STRL(" >> internal:has-not="), true}, // [1376]
php::Str{ZEND_STRL(" >> visible="), true}, // [1377]
php::Str{ZEND_STRL("internal:and="), true}, // [1378]
php::Str{ZEND_STRL("internal:or="), true}, // [1379]
php::Str{ZEND_STRL("nth="), true}, // [1380]
php::Str{ZEND_STRL("nth"), true}, // [1381]
php::Str{ZEND_STRL("NativePlaywright\\array_pop"), true}, // [1382]
php::Str{ZEND_STRL("array_pop"), true}, // [1383]
php::Str{ZEND_STRL("__pwlite.one("), true}, // [1384]
php::Str{ZEND_STRL(", true)"), true}, // [1385]
php::Str{ZEND_STRL("NativePlaywright\\Locator::resolve"), true}, // [1386]
php::Str{ZEND_STRL("Selector \""), true}, // [1387]
php::Str{ZEND_STRL("\" does not resolve to an <iframe>"), true}, // [1388]
php::Str{ZEND_STRL("waiting for "), true}, // [1389]
php::Str{ZEND_STRL("waiting for frame"), true}, // [1390]
php::Str{ZEND_STRL("retry"), true}, // [1391]
php::Str{ZEND_STRL("/^Runtime\\.\\w+: /"), true}, // [1392]
php::Str{ZEND_STRL("waiting for navigation to finish"), true}, // [1393]
php::Str{ZEND_STRL("%s: Timeout %dms exceeded.\nCall log:\n  - %s"), true}, // [1394]
php::Str{ZEND_STRL("force"), true}, // [1395]
php::Str{ZEND_STRL("position"), true}, // [1396]
php::Str{ZEND_STRL("retrying"), true}, // [1397]
php::Str{ZEND_STRL("f"), true}, // [1398]
php::Str{ZEND_STRL("Frame"), true}, // [1399]
php::Str{ZEND_STRL("__pwlite.prepare("), true}, // [1400]
php::Str{ZEND_STRL(", true, "), true}, // [1401]
php::Str{ZEND_STRL("offset"), true}, // [1402]
php::Str{ZEND_STRL("box"), true}, // [1403]
php::Str{ZEND_STRL("__pwlite.read("), true}, // [1404]
php::Str{ZEND_STRL("missing"), true}, // [1405]
php::Str{ZEND_STRL("prepare"), true}, // [1406]
php::Str{ZEND_STRL("locator.click"), true}, // [1407]
php::Str{ZEND_STRL("trial"), true}, // [1408]
php::Str{ZEND_STRL("withModifiers"), true}, // [1409]
php::Str{ZEND_STRL("afterAction"), true}, // [1410]
php::Str{ZEND_STRL("locator.dblclick"), true}, // [1411]
php::Str{ZEND_STRL("locator.tap"), true}, // [1412]
php::Str{ZEND_STRL("locator.hover"), true}, // [1413]
php::Str{ZEND_STRL("locator.fill"), true}, // [1414]
php::Str{ZEND_STRL("__pwlite.fill("), true}, // [1415]
php::Str{ZEND_STRL("waiting for element to be visible, enabled and editable"), true}, // [1416]
php::Str{ZEND_STRL("locator.focus"), true}, // [1417]
php::Str{ZEND_STRL("locator.blur"), true}, // [1418]
php::Str{ZEND_STRL("blur"), true}, // [1419]
php::Str{ZEND_STRL("locator.check"), true}, // [1420]
php::Str{ZEND_STRL("locator.uncheck"), true}, // [1421]
php::Str{ZEND_STRL(": Clicking the checkbox did not change its state"), true}, // [1422]
php::Str{ZEND_STRL("NativePlaywright\\array_is_list"), true}, // [1423]
php::Str{ZEND_STRL("array_is_list"), true}, // [1424]
php::Str{ZEND_STRL("any"), true}, // [1425]
php::Str{ZEND_STRL("locator.selectOption"), true}, // [1426]
php::Str{ZEND_STRL("__pwlite.selectOption("), true}, // [1427]
php::Str{ZEND_STRL("waiting for element and option(s) to be available"), true}, // [1428]
php::Str{ZEND_STRL("NativePlaywright\\Locator::selectOption"), true}, // [1429]
php::Str{ZEND_STRL("locator.selectText"), true}, // [1430]
php::Str{ZEND_STRL("selectText"), true}, // [1431]
php::Str{ZEND_STRL("locator.setInputFiles"), true}, // [1432]
php::Str{ZEND_STRL("callOn"), true}, // [1433]
php::Str{ZEND_STRL("function(){return this.nodeName===\"INPUT\"&&this.type===\"file\"}"), true}, // [1434]
php::Str{ZEND_STRL("Node is not an HTMLInputElement[type=file]"), true}, // [1435]
php::Str{ZEND_STRL("NativePlaywright\\Locator::setInputFiles"), true}, // [1436]
php::Str{ZEND_STRL("buffer"), true}, // [1437]
php::Str{ZEND_STRL("NativePlaywright\\sys_get_temp_dir"), true}, // [1438]
php::Str{ZEND_STRL("sys_get_temp_dir"), true}, // [1439]
php::Str{ZEND_STRL("/pwlite-upload-"), true}, // [1440]
php::Str{ZEND_STRL("NativePlaywright\\bin2hex"), true}, // [1441]
php::Str{ZEND_STRL("bin2hex"), true}, // [1442]
php::Str{ZEND_STRL("NativePlaywright\\random_bytes"), true}, // [1443]
php::Str{ZEND_STRL("random_bytes"), true}, // [1444]
php::Str{ZEND_STRL("NativePlaywright\\basename"), true}, // [1445]
php::Str{ZEND_STRL("basename"), true}, // [1446]
php::Str{ZEND_STRL("file"), true}, // [1447]
php::Str{ZEND_STRL("NativePlaywright\\realpath"), true}, // [1448]
php::Str{ZEND_STRL("realpath"), true}, // [1449]
php::Str{ZEND_STRL("File not found: "), true}, // [1450]
php::Str{ZEND_STRL("NativePlaywright\\Locator::materializeFiles"), true}, // [1451]
php::Str{ZEND_STRL("locator.dragTo"), true}, // [1452]
php::Str{ZEND_STRL("sourcePosition"), true}, // [1453]
php::Str{ZEND_STRL("targetPosition"), true}, // [1454]
php::Str{ZEND_STRL("locator.scrollIntoViewIfNeeded"), true}, // [1455]
php::Str{ZEND_STRL("scrollIntoView"), true}, // [1456]
php::Str{ZEND_STRL("locator.dispatchEvent"), true}, // [1457]
php::Str{ZEND_STRL("locator.screenshot"), true}, // [1458]
php::Str{ZEND_STRL("screenshot"), true}, // [1459]
php::Str{ZEND_STRL("locator.count"), true}, // [1460]
php::Str{ZEND_STRL("locator.textContent"), true}, // [1461]
php::Str{ZEND_STRL("NativePlaywright\\Locator::textContent"), true}, // [1462]
php::Str{ZEND_STRL("locator.innerText"), true}, // [1463]
php::Str{ZEND_STRL("locator.innerHTML"), true}, // [1464]
php::Str{ZEND_STRL("locator.getAttribute"), true}, // [1465]
php::Str{ZEND_STRL("NativePlaywright\\Locator::getAttribute"), true}, // [1466]
php::Str{ZEND_STRL("locator.inputValue"), true}, // [1467]
php::Str{ZEND_STRL("locator.allTextContents"), true}, // [1468]
php::Str{ZEND_STRL("allTextContents"), true}, // [1469]
php::Str{ZEND_STRL("locator.allInnerTexts"), true}, // [1470]
php::Str{ZEND_STRL("allInnerTexts"), true}, // [1471]
php::Str{ZEND_STRL("locator.isVisible"), true}, // [1472]
php::Str{ZEND_STRL("locator.isHidden"), true}, // [1473]
php::Str{ZEND_STRL("locator.isEnabled"), true}, // [1474]
php::Str{ZEND_STRL("locator.isDisabled"), true}, // [1475]
php::Str{ZEND_STRL("locator.isEditable"), true}, // [1476]
php::Str{ZEND_STRL("locator.isChecked"), true}, // [1477]
php::Str{ZEND_STRL("locator.boundingBox"), true}, // [1478]
php::Str{ZEND_STRL(", true, \"boundingBox\", null)"), true}, // [1479]
php::Str{ZEND_STRL("NativePlaywright\\Locator::boundingBox"), true}, // [1480]
php::Str{ZEND_STRL("locator.ariaSnapshot"), true}, // [1481]
php::Str{ZEND_STRL("ariaSnapshot"), true}, // [1482]
php::Str{ZEND_STRL("locator.waitFor"), true}, // [1483]
php::Str{ZEND_STRL("__pwlite.waitState("), true}, // [1484]
php::Str{ZEND_STRL(" to be "), true}, // [1485]
php::Str{ZEND_STRL("locator.evaluate"), true}, // [1486]
php::Str{ZEND_STRL("adoptToMain"), true}, // [1487]
php::Str{ZEND_STRL("(el) => ("), true}, // [1488]
php::Str{ZEND_STRL("locator.evaluateAll: frame is not available"), true}, // [1489]
php::Str{ZEND_STRL("__pwlite.query("), true}, // [1490]
php::Str{ZEND_STRL("Runtime.getProperties"), true}, // [1491]
php::Str{ZEND_STRL("ownProperties"), true}, // [1492]
php::Str{ZEND_STRL("NativePlaywright\\is_numeric"), true}, // [1493]
php::Str{ZEND_STRL("is_numeric"), true}, // [1494]
php::Str{ZEND_STRL("function(arg, ...els) { return ("), true}, // [1495]
php::Str{ZEND_STRL(")(els, arg); }"), true}, // [1496]
php::Str{ZEND_STRL("NativePlaywright\\Locator::__construct"), true}, // [1497]
php::Str{ZEND_STRL("NativePlaywright\\Locator::escapeText"), true}, // [1498]
php::Str{ZEND_STRL("NativePlaywright\\Locator::jsRegex"), true}, // [1499]
php::Str{ZEND_STRL("re"), true}, // [1500]
php::Str{ZEND_STRL("NativePlaywright\\Locator::byText"), true}, // [1501]
php::Str{ZEND_STRL("NativePlaywright\\Locator::byLabel"), true}, // [1502]
php::Str{ZEND_STRL("NativePlaywright\\Locator::byAttr"), true}, // [1503]
php::Str{ZEND_STRL("attr"), true}, // [1504]
php::Str{ZEND_STRL("NativePlaywright\\Locator::byTestId"), true}, // [1505]
php::Str{ZEND_STRL("NativePlaywright\\Locator::byRole"), true}, // [1506]
php::Str{ZEND_STRL("NativePlaywright\\Locator::nth"), true}, // [1507]
php::Str{ZEND_STRL("NativePlaywright\\Locator::getByText"), true}, // [1508]
php::Str{ZEND_STRL("NativePlaywright\\Locator::getByRole"), true}, // [1509]
php::Str{ZEND_STRL("NativePlaywright\\Locator::getByLabel"), true}, // [1510]
php::Str{ZEND_STRL("NativePlaywright\\Locator::getByPlaceholder"), true}, // [1511]
php::Str{ZEND_STRL("NativePlaywright\\Locator::getByAltText"), true}, // [1512]
php::Str{ZEND_STRL("NativePlaywright\\Locator::getByTitle"), true}, // [1513]
php::Str{ZEND_STRL("NativePlaywright\\Locator::getByTestId"), true}, // [1514]
php::Str{ZEND_STRL("NativePlaywright\\Locator::frameLocator"), true}, // [1515]
php::Str{ZEND_STRL("NativePlaywright\\Locator::describe"), true}, // [1516]
php::Str{ZEND_STRL("NativePlaywright\\Locator::retrying"), true}, // [1517]
php::Str{ZEND_STRL("NativePlaywright\\Locator::prepare"), true}, // [1518]
php::Str{ZEND_STRL("action"), true}, // [1519]
php::Str{ZEND_STRL("NativePlaywright\\Locator::read"), true}, // [1520]
php::Str{ZEND_STRL("wait"), true}, // [1521]
php::Str{ZEND_STRL("NativePlaywright\\Locator::fill"), true}, // [1522]
php::Str{ZEND_STRL("NativePlaywright\\Locator::pressSequentially"), true}, // [1523]
php::Str{ZEND_STRL("NativePlaywright\\Locator::type"), true}, // [1524]
php::Str{ZEND_STRL("NativePlaywright\\Locator::press"), true}, // [1525]
php::Str{ZEND_STRL("NativePlaywright\\Locator::setChecked"), true}, // [1526]
php::Str{ZEND_STRL("NativePlaywright\\Locator::dispatchEvent"), true}, // [1527]
php::Str{ZEND_STRL("NativePlaywright\\Locator::evaluate"), true}, // [1528]
php::Str{ZEND_STRL("NativePlaywright\\Locator::evaluateAll"), true}, // [1529]
php::Str{ZEND_STRL("acceptDownloads"), true}, // [1530]
php::Str{ZEND_STRL("launchOption"), true}, // [1531]
php::Str{ZEND_STRL("downloadsPath"), true}, // [1532]
php::Str{ZEND_STRL("/pwlite-dl-"), true}, // [1533]
php::Str{ZEND_STRL("ownsDownloadDir"), true}, // [1534]
php::Str{ZEND_STRL("downloadDir"), true}, // [1535]
php::Str{ZEND_STRL("allowAndName"), true}, // [1536]
php::Str{ZEND_STRL("deny"), true}, // [1537]
php::Str{ZEND_STRL("behavior"), true}, // [1538]
php::Str{ZEND_STRL("downloadPath"), true}, // [1539]
php::Str{ZEND_STRL("eventsEnabled"), true}, // [1540]
php::Str{ZEND_STRL("Browser.setDownloadBehavior"), true}, // [1541]
php::Str{ZEND_STRL("permissions"), true}, // [1542]
php::Str{ZEND_STRL("Browser.grantPermissions"), true}, // [1543]
php::Str{ZEND_STRL("permissionParams"), true}, // [1544]
php::Str{ZEND_STRL("storageState"), true}, // [1545]
php::Str{ZEND_STRL("cookies"), true}, // [1546]
php::Str{ZEND_STRL("addCookies"), true}, // [1547]
php::Str{ZEND_STRL("origins"), true}, // [1548]
php::Str{ZEND_STRL("localStorage"), true}, // [1549]
php::Str{ZEND_STRL("(() => { if (location.origin !== "), true}, // [1550]
php::Str{ZEND_STRL("origin"), true}, // [1551]
php::Str{ZEND_STRL(") return; "), true}, // [1552]
php::Str{ZEND_STRL("try { if (sessionStorage.getItem(\"__pwlite_ss\")) return; sessionStorage.setItem(\"__pwlite_ss\", \"1\"); "), true}, // [1553]
php::Str{ZEND_STRL("const items = "), true}, // [1554]
php::Str{ZEND_STRL("; for (const k in items) localStorage.setItem(k, items[k]); } catch (e) {} })()"), true}, // [1555]
php::Str{ZEND_STRL("browserContext.newPage: Target page, context or browser has been closed"), true}, // [1556]
php::Str{ZEND_STRL("createPage"), true}, // [1557]
php::Str{ZEND_STRL("pages"), true}, // [1558]
php::Str{ZEND_STRL("owner"), true}, // [1559]
php::Str{ZEND_STRL("domain"), true}, // [1560]
php::Str{ZEND_STRL("session"), true}, // [1561]
php::Str{ZEND_STRL("expires"), true}, // [1562]
php::Str{ZEND_STRL("httpOnly"), true}, // [1563]
php::Str{ZEND_STRL("secure"), true}, // [1564]
php::Str{ZEND_STRL("sameSite"), true}, // [1565]
php::Str{ZEND_STRL("Lax"), true}, // [1566]
php::Str{ZEND_STRL("Storage.getCookies"), true}, // [1567]
php::Str{ZEND_STRL("ctxParam"), true}, // [1568]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::cookies"), true}, // [1569]
php::Str{ZEND_STRL("urls"), true}, // [1570]
php::Str{ZEND_STRL("https"), true}, // [1571]
php::Str{ZEND_STRL("localhost"), true}, // [1572]
php::Str{ZEND_STRL("Cookie should have a url or a domain/path pair"), true}, // [1573]
php::Str{ZEND_STRL("Storage.setCookies"), true}, // [1574]
php::Str{ZEND_STRL("Storage.clearCookies"), true}, // [1575]
php::Str{ZEND_STRL("() => { try { const o = location.origin; if (!o || o === \"null\") return null; "), true}, // [1576]
php::Str{ZEND_STRL("return { origin: o, localStorage: Object.keys(localStorage).map(k => ({ name: k, value: localStorage.getItem(k) })) }; } catch (e) { return null; } }"), true}, // [1577]
php::Str{ZEND_STRL("NativePlaywright\\JSON_PRETTY_PRINT"), true}, // [1578]
php::Str{ZEND_STRL("midi"), true}, // [1579]
php::Str{ZEND_STRL("midiSysex"), true}, // [1580]
php::Str{ZEND_STRL("midi-sysex"), true}, // [1581]
php::Str{ZEND_STRL("notifications"), true}, // [1582]
php::Str{ZEND_STRL("videoCapture"), true}, // [1583]
php::Str{ZEND_STRL("camera"), true}, // [1584]
php::Str{ZEND_STRL("audioCapture"), true}, // [1585]
php::Str{ZEND_STRL("microphone"), true}, // [1586]
php::Str{ZEND_STRL("backgroundSync"), true}, // [1587]
php::Str{ZEND_STRL("background-sync"), true}, // [1588]
php::Str{ZEND_STRL("sensors"), true}, // [1589]
php::Str{ZEND_STRL("ambient-light-sensor"), true}, // [1590]
php::Str{ZEND_STRL("accelerometer"), true}, // [1591]
php::Str{ZEND_STRL("gyroscope"), true}, // [1592]
php::Str{ZEND_STRL("magnetometer"), true}, // [1593]
php::Str{ZEND_STRL("clipboardReadWrite"), true}, // [1594]
php::Str{ZEND_STRL("clipboard-read"), true}, // [1595]
php::Str{ZEND_STRL("clipboardSanitizedWrite"), true}, // [1596]
php::Str{ZEND_STRL("clipboard-write"), true}, // [1597]
php::Str{ZEND_STRL("paymentHandler"), true}, // [1598]
php::Str{ZEND_STRL("payment-handler"), true}, // [1599]
php::Str{ZEND_STRL("storageAccess"), true}, // [1600]
php::Str{ZEND_STRL("storage-access"), true}, // [1601]
php::Str{ZEND_STRL("localFonts"), true}, // [1602]
php::Str{ZEND_STRL("local-fonts"), true}, // [1603]
php::Str{ZEND_STRL("localNetworkAccess"), true}, // [1604]
php::Str{ZEND_STRL("local-network-access"), true}, // [1605]
php::Str{ZEND_STRL("idleDetection"), true}, // [1606]
php::Str{ZEND_STRL("idle-detection"), true}, // [1607]
php::Str{ZEND_STRL("wakeLockScreen"), true}, // [1608]
php::Str{ZEND_STRL("screen-wake-lock"), true}, // [1609]
php::Str{ZEND_STRL("Unknown permission: "), true}, // [1610]
php::Str{ZEND_STRL("NativePlaywright\\array_keys"), true}, // [1611]
php::Str{ZEND_STRL("array_keys"), true}, // [1612]
php::Str{ZEND_STRL("Browser.resetPermissions"), true}, // [1613]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::geolocation"), true}, // [1614]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::setGeolocation"), true}, // [1615]
php::Str{ZEND_STRL("geo"), true}, // [1616]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::httpCredentials"), true}, // [1617]
php::Str{ZEND_STRL("("), true}, // [1618]
php::Str{ZEND_STRL(")("), true}, // [1619]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::scriptSource"), true}, // [1620]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::addInitScript"), true}, // [1621]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::binding"), true}, // [1622]
php::Str{ZEND_STRL("?Closure"), true}, // [1623]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::route"), true}, // [1624]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::unroute"), true}, // [1625]
php::Str{ZEND_STRL("newCDPSession"), true}, // [1626]
php::Str{ZEND_STRL("Target.disposeBrowserContext"), true}, // [1627]
php::Str{ZEND_STRL("NativePlaywright\\glob"), true}, // [1628]
php::Str{ZEND_STRL("/*"), true}, // [1629]
php::Str{ZEND_STRL("NativePlaywright\\rmdir"), true}, // [1630]
php::Str{ZEND_STRL("rmdir"), true}, // [1631]
php::Str{ZEND_STRL("contextClosed"), true}, // [1632]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::listenerCount"), true}, // [1633]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::waitForEvent"), true}, // [1634]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::expectEvent"), true}, // [1635]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::__construct"), true}, // [1636]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::setDefaultTimeout"), true}, // [1637]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::setDefaultNavigationTimeout"), true}, // [1638]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::hasListeners"), true}, // [1639]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::emitFromPage"), true}, // [1640]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::permissionParams"), true}, // [1641]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::setOffline"), true}, // [1642]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::exposeBinding"), true}, // [1643]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::exposeFunction"), true}, // [1644]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::on"), true}, // [1645]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::once"), true}, // [1646]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::off"), true}, // [1647]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::removeAllListeners"), true}, // [1648]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::onListenerAdded"), true}, // [1649]
php::Str{ZEND_STRL("NativePlaywright\\BrowserContext::emit"), true}, // [1650]
php::Str{ZEND_STRL("chromium"), true}, // [1651]
php::Str{ZEND_STRL("NativePlaywright\\getenv"), true}, // [1652]
php::Str{ZEND_STRL("getenv"), true}, // [1653]
php::Str{ZEND_STRL("NATIVE_PLAYWRIGHT_CHROME"), true}, // [1654]
php::Str{ZEND_STRL("NativePlaywright\\BrowserType::executablePath"), true}, // [1655]
php::Str{ZEND_STRL("/usr/lib/chromium/chromium-headless-shell"), true}, // [1656]
php::Str{ZEND_STRL("/usr/bin/chromium-headless-shell"), true}, // [1657]
php::Str{ZEND_STRL("/usr/bin/chrome-headless-shell"), true}, // [1658]
php::Str{ZEND_STRL("/opt/google/chrome-headless-shell/chrome-headless-shell"), true}, // [1659]
php::Str{ZEND_STRL("/usr/lib/chromium/chromium"), true}, // [1660]
php::Str{ZEND_STRL("/usr/bin/chromium"), true}, // [1661]
php::Str{ZEND_STRL("/usr/bin/chromium-browser"), true}, // [1662]
php::Str{ZEND_STRL("/usr/bin/google-chrome"), true}, // [1663]
php::Str{ZEND_STRL("/opt/google/chrome/chrome"), true}, // [1664]
php::Str{ZEND_STRL("/Applications/Google Chrome.app/Contents/MacOS/Google Chrome"), true}, // [1665]
php::Str{ZEND_STRL("/Applications/Chromium.app/Contents/MacOS/Chromium"), true}, // [1666]
php::Str{ZEND_STRL("NativePlaywright\\is_executable"), true}, // [1667]
php::Str{ZEND_STRL("is_executable"), true}, // [1668]
php::Str{ZEND_STRL("Chromium not found; set NATIVE_PLAYWRIGHT_CHROME or pass executablePath"), true}, // [1669]
php::Str{ZEND_STRL("NativePlaywright\\BrowserType"), true}, // [1670]
php::Str{ZEND_STRL("ignoreDefaultArgs"), true}, // [1671]
php::Str{ZEND_STRL("NativePlaywright\\in_array"), true}, // [1672]
php::Str{ZEND_STRL("in_array"), true}, // [1673]
php::Str{ZEND_STRL("headless"), true}, // [1674]
php::Str{ZEND_STRL("siteIsolation"), true}, // [1675]
php::Str{ZEND_STRL("--disable-site-isolation-trials"), true}, // [1676]
php::Str{ZEND_STRL("IsolateOrigins"), true}, // [1677]
php::Str{ZEND_STRL("site-per-process"), true}, // [1678]
php::Str{ZEND_STRL("--disable-features="), true}, // [1679]
php::Str{ZEND_STRL("Linux"), true}, // [1680]
php::Str{ZEND_STRL("--no-zygote"), true}, // [1681]
php::Str{ZEND_STRL("chromiumSandbox"), true}, // [1682]
php::Str{ZEND_STRL("--no-sandbox"), true}, // [1683]
php::Str{ZEND_STRL("server"), true}, // [1684]
php::Str{ZEND_STRL("proxy"), true}, // [1685]
php::Str{ZEND_STRL("--proxy-server="), true}, // [1686]
php::Str{ZEND_STRL("bypass"), true}, // [1687]
php::Str{ZEND_STRL("--proxy-bypass-list="), true}, // [1688]
php::Str{ZEND_STRL("start"), true}, // [1689]
php::Str{ZEND_STRL("executablePath"), true}, // [1690]
php::Str{ZEND_STRL("buildArgs"), true}, // [1691]
php::Str{ZEND_STRL("swoole"), true}, // [1692]
php::Str{ZEND_STRL("NativePlaywright\\extension_loaded"), true}, // [1693]
php::Str{ZEND_STRL("extension_loaded"), true}, // [1694]
php::Str{ZEND_STRL("Swoole\\Coroutine::getCid"), true}, // [1695]
php::Str{ZEND_STRL("initialize"), true}, // [1696]
php::Str{ZEND_STRL("browserType.launch: "), true}, // [1697]
php::Str{ZEND_STRL("useDefaultContext"), true}, // [1698]
php::Str{ZEND_STRL("NativePlaywright\\BrowserType::start"), true}, // [1699]
php::Str{ZEND_STRL("NativePlaywright\\BrowserType::launchPersistentContext"), true}, // [1700]
php::Str{ZEND_STRL("onClose"), true}, // [1701]
php::Str{ZEND_STRL("didDisconnect"), true}, // [1702]
php::Str{ZEND_STRL("launch"), true}, // [1703]
php::Str{ZEND_STRL("Browser.getVersion"), true}, // [1704]
php::Str{ZEND_STRL("Target.setAutoAttach"), true}, // [1705]
php::Str{ZEND_STRL("autoAttach"), true}, // [1706]
php::Str{ZEND_STRL("waitForDebuggerOnStart"), true}, // [1707]
php::Str{ZEND_STRL("flatten"), true}, // [1708]
php::Str{ZEND_STRL("version"), true}, // [1709]
php::Str{ZEND_STRL("product"), true}, // [1710]
php::Str{ZEND_STRL("HeadlessChrome"), true}, // [1711]
php::Str{ZEND_STRL("Chrome"), true}, // [1712]
php::Str{ZEND_STRL("launchOptions"), true}, // [1713]
php::Str{ZEND_STRL("pid"), true}, // [1714]
php::Str{ZEND_STRL("NativePlaywright\\Browser::pid"), true}, // [1715]
php::Str{ZEND_STRL("NativePlaywright\\strpos"), true}, // [1716]
php::Str{ZEND_STRL("strpos"), true}, // [1717]
php::Str{ZEND_STRL("NativePlaywright\\Browser::version"), true}, // [1718]
php::Str{ZEND_STRL("contexts"), true}, // [1719]
php::Str{ZEND_STRL("defaultContext"), true}, // [1720]
php::Str{ZEND_STRL("NativePlaywright\\array_unshift"), true}, // [1721]
php::Str{ZEND_STRL("array_unshift"), true}, // [1722]
php::Str{ZEND_STRL("disposeOnDetach"), true}, // [1723]
php::Str{ZEND_STRL("proxyServer"), true}, // [1724]
php::Str{ZEND_STRL("proxyBypassList"), true}, // [1725]
php::Str{ZEND_STRL("Target.createBrowserContext"), true}, // [1726]
php::Str{ZEND_STRL("newContext"), true}, // [1727]
php::Str{ZEND_STRL("newPage"), true}, // [1728]
php::Str{ZEND_STRL("setOwner"), true}, // [1729]
php::Str{ZEND_STRL("about:blank"), true}, // [1730]
php::Str{ZEND_STRL("Target.createTarget"), true}, // [1731]
php::Str{ZEND_STRL("pageWaiters"), true}, // [1732]
php::Str{ZEND_STRL("browserContext.newPage"), true}, // [1733]
php::Str{ZEND_STRL("Target.attachedToTarget"), true}, // [1734]
php::Str{ZEND_STRL("Target.detachedFromTarget"), true}, // [1735]
php::Str{ZEND_STRL("Browser.downloadWillBegin"), true}, // [1736]
php::Str{ZEND_STRL("Browser.downloadProgress"), true}, // [1737]
php::Str{ZEND_STRL("targetInfo"), true}, // [1738]
php::Str{ZEND_STRL("attachPage"), true}, // [1739]
php::Str{ZEND_STRL("sessions"), true}, // [1740]
php::Str{ZEND_STRL("offSession"), true}, // [1741]
php::Str{ZEND_STRL("pageForFrame"), true}, // [1742]
php::Str{ZEND_STRL("downloads"), true}, // [1743]
php::Str{ZEND_STRL("emitDownload"), true}, // [1744]
php::Str{ZEND_STRL("receivedBytes"), true}, // [1745]
php::Str{ZEND_STRL("totalBytes"), true}, // [1746]
php::Str{ZEND_STRL("NativePlaywright\\Browser::pageForFrame"), true}, // [1747]
php::Str{ZEND_STRL("?Page"), true}, // [1748]
php::Str{ZEND_STRL("openerId"), true}, // [1749]
php::Str{ZEND_STRL("setOpener"), true}, // [1750]
php::Str{ZEND_STRL("didCreatePage"), true}, // [1751]
php::Str{ZEND_STRL("emitPopup"), true}, // [1752]
php::Str{ZEND_STRL("disconnected"), true}, // [1753]
php::Str{ZEND_STRL("NativePlaywright\\Browser::listenerCount"), true}, // [1754]
php::Str{ZEND_STRL("NativePlaywright\\Browser::waitForEvent"), true}, // [1755]
php::Str{ZEND_STRL("NativePlaywright\\Browser::expectEvent"), true}, // [1756]
php::Str{ZEND_STRL("NativePlaywright\\Browser::initialize"), true}, // [1757]
php::Str{ZEND_STRL("NativePlaywright\\Browser::launchOption"), true}, // [1758]
php::Str{ZEND_STRL("NativePlaywright\\Browser::send"), true}, // [1759]
php::Str{ZEND_STRL("NativePlaywright\\Browser::onProtocolEvent"), true}, // [1760]
php::Str{ZEND_STRL("NativePlaywright\\Browser::attachPage"), true}, // [1761]
php::Str{ZEND_STRL("sid"), true}, // [1762]
php::Str{ZEND_STRL("NativePlaywright\\Browser::on"), true}, // [1763]
php::Str{ZEND_STRL("NativePlaywright\\Browser::once"), true}, // [1764]
php::Str{ZEND_STRL("NativePlaywright\\Browser::off"), true}, // [1765]
php::Str{ZEND_STRL("NativePlaywright\\Browser::removeAllListeners"), true}, // [1766]
php::Str{ZEND_STRL("NativePlaywright\\Browser::onListenerAdded"), true}, // [1767]
php::Str{ZEND_STRL("NativePlaywright\\Browser::emit"), true}, // [1768]
php::Str{ZEND_STRL("Mozilla/5.0 (iPhone; CPU iPhone OS 17_0 like Mac OS X) AppleWebKit/605.1.15 (KHTML, like Gecko) Version/17.0 Mobile/15E148 Safari/604.1"), true}, // [1769]
php::Str{ZEND_STRL("Mozilla/5.0 (Linux; Android 14; Pixel 7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/130.0.0.0 Mobile Safari/537.36"), true}, // [1770]
php::Str{ZEND_STRL("iPhone 15"), true}, // [1771]
php::Str{ZEND_STRL("iPhone 13"), true}, // [1772]
php::Str{ZEND_STRL("iPhone SE"), true}, // [1773]
php::Str{ZEND_STRL("iPad Pro 11"), true}, // [1774]
php::Str{ZEND_STRL("iPhone"), true}, // [1775]
php::Str{ZEND_STRL("iPad"), true}, // [1776]
php::Str{ZEND_STRL("Pixel 7"), true}, // [1777]
php::Str{ZEND_STRL("Galaxy S9+"), true}, // [1778]
php::Str{ZEND_STRL("Desktop Chrome"), true}, // [1779]
php::Str{ZEND_STRL("Desktop Chrome HiDPI"), true}, // [1780]
php::Str{ZEND_STRL("Unknown device: "), true}, // [1781]
php::Str{ZEND_STRL("NativePlaywright\\Playwright::setTestIdAttribute"), true}, // [1782]
php::Str{ZEND_STRL("NativePlaywright\\Playwright::devices"), true}, // [1783]
php::Str{ZEND_STRL("pwlite_spawn"), true}, // [1784]
php::Str{ZEND_STRL("exe"), true}, // [1785]
php::Str{ZEND_STRL("pwlite_write"), true}, // [1786]
php::Str{ZEND_STRL("pwlite_read"), true}, // [1787]
php::Str{ZEND_STRL("pwlite_close"), true}, // [1788]
};

ZEND_ATTRIBUTE_CONST php::Str &get_str(uint32_t index) noexcept {
    return _literal_strings[index];
}

}  // namespace typephp_project_native_playwright

// native/import stub callbacks 
ZEND_FUNCTION(pwlite_spawn) {
    PHPX_TRY {
        php::checkCallArgCount(3, 3, false);
        php::Var raw_arg_exe = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_exe.isString()))) {
            php::throwArgumentTypeError(raw_arg_exe, get_str(1784), 1, get_str(1785), get_str(98));
        }
        php::Str arg_exe = php::toString(raw_arg_exe);
        php::Array arg_args = php::toArray(php::getCallArg(1));
        php::Var raw_arg_userDataDir = php::getCallArg(2);
        if (UNEXPECTED(!(raw_arg_userDataDir.isString()))) {
            php::throwArgumentTypeError(raw_arg_userDataDir, get_str(1784), 3, get_str(99), get_str(98));
        }
        php::Str arg_userDataDir = php::toString(raw_arg_userDataDir);
        auto retval = php_pwlite_spawn(php::takeValue(arg_exe),php::takeValue(arg_args),php::takeValue(arg_userDataDir));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_FUNCTION(pwlite_write) {
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var arg__php__var__pipe = php::getCallArg(0);
        php::Var raw_arg_json = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_json.isString()))) {
            php::throwArgumentTypeError(raw_arg_json, get_str(1786), 2, get_str(282), get_str(98));
        }
        php::Str arg_json = php::toString(raw_arg_json);
        auto retval = php_pwlite_write(php::takeValue(arg__php__var__pipe),php::takeValue(arg_json));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_FUNCTION(pwlite_read) {
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var arg__php__var__pipe = php::getCallArg(0);
        php::Var raw_arg_timeout = php::getCallArg(1);
        if (UNEXPECTED(!((raw_arg_timeout.isFloat() || raw_arg_timeout.isInt())))) {
            php::throwArgumentTypeError(raw_arg_timeout, get_str(1787), 2, get_str(102), get_str(103));
        }
        php::Float arg_timeout = php::toFloat(raw_arg_timeout);
        auto retval = php_pwlite_read(php::takeValue(arg__php__var__pipe),arg_timeout);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_FUNCTION(pwlite_fd) {
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var arg__php__var__pipe = php::getCallArg(0);
        auto retval = php_pwlite_fd(php::takeValue(arg__php__var__pipe));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_FUNCTION(pwlite_pid) {
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var arg__php__var__pipe = php::getCallArg(0);
        auto retval = php_pwlite_pid(php::takeValue(arg__php__var__pipe));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_FUNCTION(pwlite_close) {
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var arg__php__var__pipe = php::getCallArg(0);
        php::Var raw_arg_graceful = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_graceful.isBool()))) {
            php::throwArgumentTypeError(raw_arg_graceful, get_str(1788), 2, get_str(105), get_str(106));
        }
        php::Bool arg_graceful = php::toBool(raw_arg_graceful);
        php_pwlite_close(php::takeValue(arg__php__var__pipe),arg_graceful);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

// default argument values 
php::Str php_nativeplaywright__blockingtransport__await_arg_2_default_value() {
return get_str(3);
}

php::Array php_nativeplaywright__browser__launch_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__browser__send_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__browser__newcontext_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__browser__newpage_arg_0_default_value() {
return php::Array{};
}

php::Bool php_nativeplaywright__browsercontext____construct_arg_4_default_value() {
return false;
}

php::Array php_nativeplaywright__browsercontext__expectpage_arg_1_default_value() {
return php::Array{};
}

php::Var php_nativeplaywright__browsercontext__cookies_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__browsercontext__clearcookies_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__browsercontext__storagestate_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__browsercontext__grantpermissions_arg_1_default_value() {
return php::Array{};
}

php::Var php_nativeplaywright__browsercontext__scriptsource_arg_1_default_value() {
return php::null;
}

php::Var php_nativeplaywright__browsercontext__addinitscript_arg_1_default_value() {
return php::null;
}

php::Array php_nativeplaywright__browsercontext__route_arg_2_default_value() {
return php::Array{};
}

php::Object php_nativeplaywright__browsercontext__unroute_arg_1_default_value() {
return php::Object{};
}

php::Array php_nativeplaywright__browsertype__launch_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__browsertype__launchpersistentcontext_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__cdpsession__send_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__connection____construct_arg_1_default_value() {
return php::Array{};
}

php::Str php_nativeplaywright__connection____construct_arg_2_default_value() {
return php::empty_string;
}

php::Array php_nativeplaywright__connection__send_arg_1_default_value() {
return php::Array{};
}

php::Str php_nativeplaywright__connection__send_arg_2_default_value() {
return php::empty_string;
}

php::Float php_nativeplaywright__connection__read_arg_0_default_value() {
return 0.0;
}

php::Bool php_nativeplaywright__connection__close_arg_0_default_value() {
return true;
}

php::Str php_nativeplaywright__dialog__accept_arg_0_default_value() {
return php::empty_string;
}

php::Str php_nativeplaywright__frame____construct_arg_2_default_value() {
return php::empty_string;
}

php::Bool php_nativeplaywright__frame__utilcall_arg_1_default_value() {
return true;
}

php::Array php_nativeplaywright__frame__goto_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__expectnavigation_arg_1_default_value() {
return php::Array{};
}

php::Str php_nativeplaywright__frame__waitforloadstate_arg_0_default_value() {
return get_str(20);
}

php::Array php_nativeplaywright__frame__waitforloadstate_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__waitforurl_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__setcontent_arg_1_default_value() {
return php::Array{};
}

php::Var php_nativeplaywright__frame__evaluate_arg_1_default_value() {
return php::null;
}

php::Var php_nativeplaywright__frame__waitforfunction_arg_1_default_value() {
return php::null;
}

php::Array php_nativeplaywright__frame__waitforfunction_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__locator_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__getbytext_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__getbyrole_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__getbylabel_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__getbyplaceholder_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__getbyalttext_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__getbytitle_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__click_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__dblclick_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__tap_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__fill_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__type_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__press_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__hover_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__focus_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__check_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__uncheck_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__setchecked_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__selectoption_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__setinputfiles_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__draganddrop_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__dispatchevent_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__dispatchevent_arg_3_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__textcontent_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__innertext_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__innerhtml_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__getattribute_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__inputvalue_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__isenabled_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__isdisabled_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__iseditable_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__ischecked_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__frame__waitforselector_arg_1_default_value() {
return php::Array{};
}

php::Var php_nativeplaywright__frame__evalonselector_arg_2_default_value() {
return php::null;
}

php::Var php_nativeplaywright__frame__evalonselectorall_arg_2_default_value() {
return php::null;
}

php::Array php_nativeplaywright__framelocator__locator_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__framelocator__getbytext_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__framelocator__getbyrole_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__framelocator__getbylabel_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__framelocator__getbyplaceholder_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__framelocator__getbyalttext_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__framelocator__getbytitle_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__keyboard__press_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__keyboard__type_arg_1_default_value() {
return php::Array{};
}

php::Bool php_nativeplaywright__locator__bytext_arg_1_default_value() {
return false;
}

php::Bool php_nativeplaywright__locator__bylabel_arg_1_default_value() {
return false;
}

php::Bool php_nativeplaywright__locator__byattr_arg_2_default_value() {
return false;
}

php::Array php_nativeplaywright__locator__byrole_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__locator_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__filter_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__getbytext_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__getbyrole_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__getbylabel_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__getbyplaceholder_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__getbyalttext_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__getbytitle_arg_1_default_value() {
return php::Array{};
}

php::Bool php_nativeplaywright__locator__read_arg_4_default_value() {
return true;
}

php::Array php_nativeplaywright__locator__click_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__dblclick_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__tap_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__hover_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__fill_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__clear_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__presssequentially_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__type_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__press_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__focus_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__blur_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__check_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__uncheck_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__setchecked_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__selectoption_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__selecttext_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__setinputfiles_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__dragto_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__scrollintoviewifneeded_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__dispatchevent_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__dispatchevent_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__screenshot_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__textcontent_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__innertext_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__innerhtml_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__getattribute_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__inputvalue_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__isenabled_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__isdisabled_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__iseditable_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__ischecked_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__boundingbox_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__ariasnapshot_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__locator__waitfor_arg_0_default_value() {
return php::Array{};
}

php::Var php_nativeplaywright__locator__evaluate_arg_1_default_value() {
return php::null;
}

php::Array php_nativeplaywright__locator__evaluate_arg_2_default_value() {
return php::Array{};
}

php::Var php_nativeplaywright__locator__evaluateall_arg_1_default_value() {
return php::null;
}

php::Array php_nativeplaywright__mouse__move_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__mouse__down_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__mouse__up_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__mouse__click_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__mouse__dblclick_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__send_arg_1_default_value() {
return php::Array{};
}

php::Var php_nativeplaywright__page__send_arg_2_default_value() {
return php::null;
}

php::Str php_nativeplaywright__page__callfunction_arg_2_default_value() {
return php::empty_string;
}

php::Int php_nativeplaywright__page__callfunction_arg_3_default_value() {
return 0L;
}

php::Array php_nativeplaywright__page__timeoutseconds_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__navigationtimeoutseconds_arg_0_default_value() {
return php::Array{};
}

php::Var php_nativeplaywright__page__initialize_arg_0_default_value() {
return php::null;
}

php::Str php_nativeplaywright__page__loadframetree_arg_1_default_value() {
return php::empty_string;
}

php::Array php_nativeplaywright__page__route_arg_2_default_value() {
return php::Array{};
}

php::Object php_nativeplaywright__page__unroute_arg_1_default_value() {
return php::Object{};
}

php::Var php_nativeplaywright__page__addinitscript_arg_1_default_value() {
return php::null;
}

php::Array php_nativeplaywright__page__close_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__goto_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__reload_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__goback_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__goforward_arg_0_default_value() {
return php::Array{};
}

php::Str php_nativeplaywright__page__waitforloadstate_arg_0_default_value() {
return get_str(20);
}

php::Array php_nativeplaywright__page__waitforloadstate_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__waitforurl_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__expectnavigation_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__expectrequest_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__expectresponse_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__waitforrequest_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__waitforresponse_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__expectpopup_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__expectdownload_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__expectconsolemessage_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__expectfilechooser_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__expectdialog_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__setcontent_arg_1_default_value() {
return php::Array{};
}

php::Var php_nativeplaywright__page__evaluate_arg_1_default_value() {
return php::null;
}

php::Var php_nativeplaywright__page__waitforfunction_arg_1_default_value() {
return php::null;
}

php::Array php_nativeplaywright__page__waitforfunction_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__locator_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__getbytext_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__getbyrole_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__getbylabel_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__getbyplaceholder_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__getbyalttext_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__getbytitle_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__click_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__dblclick_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__tap_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__fill_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__type_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__press_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__hover_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__focus_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__check_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__uncheck_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__setchecked_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__selectoption_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__setinputfiles_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__draganddrop_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__dispatchevent_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__dispatchevent_arg_3_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__textcontent_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__innertext_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__innerhtml_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__getattribute_arg_2_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__inputvalue_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__isenabled_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__isdisabled_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__iseditable_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__ischecked_arg_1_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__waitforselector_arg_1_default_value() {
return php::Array{};
}

php::Var php_nativeplaywright__page__evalonselector_arg_2_default_value() {
return php::null;
}

php::Var php_nativeplaywright__page__evalonselectorall_arg_2_default_value() {
return php::null;
}

php::Array php_nativeplaywright__page__emulatemedia_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__screenshot_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__page__pdf_arg_0_default_value() {
return php::Array{};
}

php::Object php_nativeplaywright__request____construct_arg_9_default_value() {
return php::Object{};
}

php::Str php_nativeplaywright__response____construct_arg_6_default_value() {
return php::empty_string;
}

php::Int php_nativeplaywright__response____construct_arg_7_default_value() {
return 0L;
}

php::Array php_nativeplaywright__response____construct_arg_8_default_value() {
return php::Array{};
}

php::Bool php_nativeplaywright__response____construct_arg_9_default_value() {
return false;
}

php::Str php_nativeplaywright__route__abort_arg_0_default_value() {
return get_str(18);
}

php::Array php_nativeplaywright__route__continue_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__route__fallback_arg_0_default_value() {
return php::Array{};
}

php::Array php_nativeplaywright__route__fulfill_arg_0_default_value() {
return php::Array{};
}

php::Int php_nativeplaywright__routehandler____construct_arg_2_default_value() {
return 0L;
}

php::Str php_nativeplaywright__swooletransport__await_arg_2_default_value() {
return get_str(3);
}

php::Str php_nativeplaywright__transport__await_arg_2_default_value() {
return get_str(3);
}

php::Array php_nativeplaywright__transport__sendasync_arg_1_default_value() {
return php::Array{};
}

php::Str php_nativeplaywright__transport__sendasync_arg_2_default_value() {
return php::empty_string;
}

php::Array php_nativeplaywright__transport__call_arg_1_default_value() {
return php::Array{};
}

php::Str php_nativeplaywright__transport__call_arg_2_default_value() {
return php::empty_string;
}

php::Float php_nativeplaywright__transport__call_arg_3_default_value() {
return 0.0;
}

php::Str php_nativeplaywright__transport__callmany_arg_1_default_value() {
return php::empty_string;
}

php::Bool php_nativeplaywright__transport__callmany_arg_2_default_value() {
return false;
}

php::Str php_nativeplaywright__util__urlmatches_arg_2_default_value() {
return php::empty_string;
}

php::Object php_nativeplaywright__browser__off_arg_1_default_value() {
return php::Object{};
}

php::Str php_nativeplaywright__browser__removealllisteners_arg_0_default_value() {
return php::empty_string;
}

php::Object php_nativeplaywright__browser__waitforevent_arg_1_default_value() {
return php::Object{};
}

php::Var php_nativeplaywright__browser__waitforevent_arg_2_default_value() {
return php::null;
}

php::Object php_nativeplaywright__browser__expectevent_arg_1_default_value() {
return php::Object{};
}

php::Object php_nativeplaywright__browser__expectevent_arg_2_default_value() {
return php::Object{};
}

php::Var php_nativeplaywright__browser__expectevent_arg_3_default_value() {
return php::null;
}

php::Object php_nativeplaywright__browsercontext__off_arg_1_default_value() {
return php::Object{};
}

php::Str php_nativeplaywright__browsercontext__removealllisteners_arg_0_default_value() {
return php::empty_string;
}

php::Object php_nativeplaywright__browsercontext__waitforevent_arg_1_default_value() {
return php::Object{};
}

php::Var php_nativeplaywright__browsercontext__waitforevent_arg_2_default_value() {
return php::null;
}

php::Object php_nativeplaywright__browsercontext__expectevent_arg_1_default_value() {
return php::Object{};
}

php::Object php_nativeplaywright__browsercontext__expectevent_arg_2_default_value() {
return php::Object{};
}

php::Var php_nativeplaywright__browsercontext__expectevent_arg_3_default_value() {
return php::null;
}

php::Object php_nativeplaywright__page__off_arg_1_default_value() {
return php::Object{};
}

php::Str php_nativeplaywright__page__removealllisteners_arg_0_default_value() {
return php::empty_string;
}

php::Object php_nativeplaywright__page__waitforevent_arg_1_default_value() {
return php::Object{};
}

php::Var php_nativeplaywright__page__waitforevent_arg_2_default_value() {
return php::null;
}

php::Object php_nativeplaywright__page__expectevent_arg_1_default_value() {
return php::Object{};
}

php::Object php_nativeplaywright__page__expectevent_arg_2_default_value() {
return php::Object{};
}

php::Var php_nativeplaywright__page__expectevent_arg_3_default_value() {
return php::null;
}

namespace typephp_project_native_playwright {

// constants 
// class 
static zend_object_handlers property_handlers_NativePlaywright_BlockingTransport;
static zend_object_handlers property_handlers_NativePlaywright_Browser;
static zend_object_handlers property_handlers_NativePlaywright_BrowserContext;
static zend_object_handlers property_handlers_NativePlaywright_BrowserType;
php::Var class_const__nativeplaywright__browsertype__DEFAULT_ARGS;
php::Var class_const__nativeplaywright__browsertype__DISABLED_FEATURES;
static zend_object_handlers property_handlers_NativePlaywright_CDPSession;
static zend_object_handlers property_handlers_NativePlaywright_Connection;
static zend_object_handlers property_handlers_NativePlaywright_ConsoleMessage;
static zend_object_handlers property_handlers_NativePlaywright_Dialog;
static zend_object_handlers property_handlers_NativePlaywright_Download;
static zend_object_handlers property_handlers_NativePlaywright_Exception;
static zend_object_handlers property_handlers_NativePlaywright_FileChooser;
static zend_object_handlers property_handlers_NativePlaywright_Frame;
static zend_object_handlers property_handlers_NativePlaywright_FrameLocator;
static zend_object_handlers property_handlers_NativePlaywright_Injected;
static zend_object_handlers property_handlers_NativePlaywright_JSError;
static zend_object_handlers property_handlers_NativePlaywright_Keyboard;
static zend_object_handlers property_handlers_NativePlaywright_Locator;
php::Var class_const__nativeplaywright__locator__DELAYS;
static zend_object_handlers property_handlers_NativePlaywright_Mouse;
static zend_object_handlers property_handlers_NativePlaywright_Page;
static zend_object_handlers property_handlers_NativePlaywright_Playwright;
static zend_object_handlers property_handlers_NativePlaywright_Request;
static zend_object_handlers property_handlers_NativePlaywright_Response;
static zend_object_handlers property_handlers_NativePlaywright_Route;
static zend_object_handlers property_handlers_NativePlaywright_RouteHandler;
static zend_object_handlers property_handlers_NativePlaywright_SwooleTransport;
static zend_object_handlers property_handlers_NativePlaywright_TimeoutError;
static zend_object_handlers property_handlers_NativePlaywright_Touchscreen;
static zend_object_handlers property_handlers_NativePlaywright_Transport;
static zend_object_handlers property_handlers_NativePlaywright_Util;
static zend_object_handlers property_handlers_NativePlaywright_Waiter;
// split request-lifecycle helpers
zend_never_inline void typephp_request_init_class_constant_e68eb928f0f74085463a();
zend_never_inline void typephp_request_clean_class_constant_e68eb928f0f74085463a();
zend_never_inline void typephp_request_init_class_constant_9b52741571a7b35918ab();
zend_never_inline void typephp_request_clean_class_constant_9b52741571a7b35918ab();
zend_never_inline void typephp_request_init_class_constant_46d7b0c562158cb5b3b4();
zend_never_inline void typephp_request_clean_class_constant_46d7b0c562158cb5b3b4();

// TypePHP compile-time trait-use metadata
static constexpr std::string_view php_trait_metadata_traits_0[] = {std::string_view{"NativePlaywright\\EventEmitter"}};
static constexpr std::string_view php_trait_metadata_traits_1[] = {std::string_view{"NativePlaywright\\EventEmitter"}};
static constexpr std::string_view php_trait_metadata_traits_3[] = {std::string_view{"NativePlaywright\\EventEmitter"}};
static constexpr typephp_trait_metadata_entry php_trait_metadata[] = {
    {std::string_view{"NativePlaywright\\Browser"}, php_trait_metadata_traits_0, 1, false},
    {std::string_view{"NativePlaywright\\BrowserContext"}, php_trait_metadata_traits_1, 1, false},
    {std::string_view{"NativePlaywright\\EventEmitter"}, nullptr, 0, true},
    {std::string_view{"NativePlaywright\\Page"}, php_trait_metadata_traits_3, 1, false},
};

// clang-format off
static const zend_function_entry ext_functions[] = {
    ZEND_RAW_FENTRY("pwlite_spawn", ZEND_FN(pwlite_spawn), arginfo_pwlite_spawn, ZEND_ACC_STRICT_TYPES, NULL, NULL)
    ZEND_RAW_FENTRY("pwlite_write", ZEND_FN(pwlite_write), arginfo_pwlite_write, ZEND_ACC_STRICT_TYPES, NULL, NULL)
    ZEND_RAW_FENTRY("pwlite_read", ZEND_FN(pwlite_read), arginfo_pwlite_read, ZEND_ACC_STRICT_TYPES, NULL, NULL)
    ZEND_RAW_FENTRY("pwlite_fd", ZEND_FN(pwlite_fd), arginfo_pwlite_fd, ZEND_ACC_STRICT_TYPES, NULL, NULL)
    ZEND_RAW_FENTRY("pwlite_pid", ZEND_FN(pwlite_pid), arginfo_pwlite_pid, ZEND_ACC_STRICT_TYPES, NULL, NULL)
    ZEND_RAW_FENTRY("pwlite_close", ZEND_FN(pwlite_close), arginfo_pwlite_close, ZEND_ACC_STRICT_TYPES, NULL, NULL)
    ZEND_FE_END
};
// clang-format on

PHP_MINIT_FUNCTION(typephp_native_playwright) {
// class/interface class entries
if (typephp_register_trait_metadata(module_number, php_trait_metadata, 4) != SUCCESS) {
    return FAILURE;
}
if (typephp_install_reflection_attribute_handlers() != SUCCESS) {
    typephp_unregister_trait_metadata(module_number);
    return FAILURE;
}
typephp_register_fiber_generator_class();
if (type == MODULE_TEMPORARY) {
    EG(current_module)->type = MODULE_PERSISTENT;
    zend_interned_strings_switch_storage(false);
}
php_class_entry_NativePlaywright_Transport = php_register_class_NativePlaywright_Transport();
const auto *base_property_handlers_NativePlaywright_Transport = php_class_entry_NativePlaywright_Transport->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Transport, &property_handlers_NativePlaywright_Transport);
property_handlers_NativePlaywright_Transport.read_property = base_property_handlers_NativePlaywright_Transport->read_property;
property_handlers_NativePlaywright_Transport.write_property = base_property_handlers_NativePlaywright_Transport->write_property;
php_class_entry_NativePlaywright_BlockingTransport = php_register_class_NativePlaywright_BlockingTransport(php_class_entry_NativePlaywright_Transport);
const auto *base_property_handlers_NativePlaywright_BlockingTransport = php_class_entry_NativePlaywright_BlockingTransport->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_BlockingTransport, &property_handlers_NativePlaywright_BlockingTransport);
property_handlers_NativePlaywright_BlockingTransport.read_property = base_property_handlers_NativePlaywright_BlockingTransport->read_property;
property_handlers_NativePlaywright_BlockingTransport.write_property = base_property_handlers_NativePlaywright_BlockingTransport->write_property;
php_class_entry_NativePlaywright_Browser = php_register_class_NativePlaywright_Browser();
const auto *base_property_handlers_NativePlaywright_Browser = php_class_entry_NativePlaywright_Browser->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Browser, &property_handlers_NativePlaywright_Browser);
property_handlers_NativePlaywright_Browser.read_property = base_property_handlers_NativePlaywright_Browser->read_property;
property_handlers_NativePlaywright_Browser.write_property = base_property_handlers_NativePlaywright_Browser->write_property;
php_class_entry_NativePlaywright_BrowserContext = php_register_class_NativePlaywright_BrowserContext();
const auto *base_property_handlers_NativePlaywright_BrowserContext = php_class_entry_NativePlaywright_BrowserContext->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_BrowserContext, &property_handlers_NativePlaywright_BrowserContext);
property_handlers_NativePlaywright_BrowserContext.read_property = base_property_handlers_NativePlaywright_BrowserContext->read_property;
property_handlers_NativePlaywright_BrowserContext.write_property = base_property_handlers_NativePlaywright_BrowserContext->write_property;
php_class_entry_NativePlaywright_BrowserType = php_register_class_NativePlaywright_BrowserType();
const auto *base_property_handlers_NativePlaywright_BrowserType = php_class_entry_NativePlaywright_BrowserType->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_BrowserType, &property_handlers_NativePlaywright_BrowserType);
property_handlers_NativePlaywright_BrowserType.read_property = base_property_handlers_NativePlaywright_BrowserType->read_property;
property_handlers_NativePlaywright_BrowserType.write_property = base_property_handlers_NativePlaywright_BrowserType->write_property;
php_class_entry_NativePlaywright_CDPSession = php_register_class_NativePlaywright_CDPSession();
const auto *base_property_handlers_NativePlaywright_CDPSession = php_class_entry_NativePlaywright_CDPSession->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_CDPSession, &property_handlers_NativePlaywright_CDPSession);
property_handlers_NativePlaywright_CDPSession.read_property = base_property_handlers_NativePlaywright_CDPSession->read_property;
property_handlers_NativePlaywright_CDPSession.write_property = base_property_handlers_NativePlaywright_CDPSession->write_property;
php_class_entry_NativePlaywright_Connection = php_register_class_NativePlaywright_Connection();
const auto *base_property_handlers_NativePlaywright_Connection = php_class_entry_NativePlaywright_Connection->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Connection, &property_handlers_NativePlaywright_Connection);
property_handlers_NativePlaywright_Connection.read_property = base_property_handlers_NativePlaywright_Connection->read_property;
property_handlers_NativePlaywright_Connection.write_property = base_property_handlers_NativePlaywright_Connection->write_property;
php_class_entry_NativePlaywright_ConsoleMessage = php_register_class_NativePlaywright_ConsoleMessage();
const auto *base_property_handlers_NativePlaywright_ConsoleMessage = php_class_entry_NativePlaywright_ConsoleMessage->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_ConsoleMessage, &property_handlers_NativePlaywright_ConsoleMessage);
property_handlers_NativePlaywright_ConsoleMessage.read_property = base_property_handlers_NativePlaywright_ConsoleMessage->read_property;
property_handlers_NativePlaywright_ConsoleMessage.write_property = base_property_handlers_NativePlaywright_ConsoleMessage->write_property;
php_class_entry_NativePlaywright_Dialog = php_register_class_NativePlaywright_Dialog();
const auto *base_property_handlers_NativePlaywright_Dialog = php_class_entry_NativePlaywright_Dialog->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Dialog, &property_handlers_NativePlaywright_Dialog);
property_handlers_NativePlaywright_Dialog.read_property = base_property_handlers_NativePlaywright_Dialog->read_property;
property_handlers_NativePlaywright_Dialog.write_property = base_property_handlers_NativePlaywright_Dialog->write_property;
php_class_entry_NativePlaywright_Download = php_register_class_NativePlaywright_Download();
const auto *base_property_handlers_NativePlaywright_Download = php_class_entry_NativePlaywright_Download->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Download, &property_handlers_NativePlaywright_Download);
property_handlers_NativePlaywright_Download.read_property = base_property_handlers_NativePlaywright_Download->read_property;
property_handlers_NativePlaywright_Download.write_property = base_property_handlers_NativePlaywright_Download->write_property;
php_class_entry_RuntimeException = php::getInternalClassEntrySafe("RuntimeException");
php_class_entry_NativePlaywright_Exception = php_register_class_NativePlaywright_Exception(php_class_entry_RuntimeException);
const auto *base_property_handlers_NativePlaywright_Exception = php_class_entry_NativePlaywright_Exception->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Exception, &property_handlers_NativePlaywright_Exception);
property_handlers_NativePlaywright_Exception.read_property = base_property_handlers_NativePlaywright_Exception->read_property;
property_handlers_NativePlaywright_Exception.write_property = base_property_handlers_NativePlaywright_Exception->write_property;
php_class_entry_NativePlaywright_FileChooser = php_register_class_NativePlaywright_FileChooser();
const auto *base_property_handlers_NativePlaywright_FileChooser = php_class_entry_NativePlaywright_FileChooser->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_FileChooser, &property_handlers_NativePlaywright_FileChooser);
property_handlers_NativePlaywright_FileChooser.read_property = base_property_handlers_NativePlaywright_FileChooser->read_property;
property_handlers_NativePlaywright_FileChooser.write_property = base_property_handlers_NativePlaywright_FileChooser->write_property;
php_class_entry_NativePlaywright_Frame = php_register_class_NativePlaywright_Frame();
const auto *base_property_handlers_NativePlaywright_Frame = php_class_entry_NativePlaywright_Frame->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Frame, &property_handlers_NativePlaywright_Frame);
property_handlers_NativePlaywright_Frame.read_property = base_property_handlers_NativePlaywright_Frame->read_property;
property_handlers_NativePlaywright_Frame.write_property = base_property_handlers_NativePlaywright_Frame->write_property;
php_class_entry_NativePlaywright_FrameLocator = php_register_class_NativePlaywright_FrameLocator();
const auto *base_property_handlers_NativePlaywright_FrameLocator = php_class_entry_NativePlaywright_FrameLocator->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_FrameLocator, &property_handlers_NativePlaywright_FrameLocator);
property_handlers_NativePlaywright_FrameLocator.read_property = base_property_handlers_NativePlaywright_FrameLocator->read_property;
property_handlers_NativePlaywright_FrameLocator.write_property = base_property_handlers_NativePlaywright_FrameLocator->write_property;
php_class_entry_NativePlaywright_Injected = php_register_class_NativePlaywright_Injected();
const auto *base_property_handlers_NativePlaywright_Injected = php_class_entry_NativePlaywright_Injected->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Injected, &property_handlers_NativePlaywright_Injected);
property_handlers_NativePlaywright_Injected.read_property = base_property_handlers_NativePlaywright_Injected->read_property;
property_handlers_NativePlaywright_Injected.write_property = base_property_handlers_NativePlaywright_Injected->write_property;
php_class_entry_NativePlaywright_JSError = php_register_class_NativePlaywright_JSError();
const auto *base_property_handlers_NativePlaywright_JSError = php_class_entry_NativePlaywright_JSError->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_JSError, &property_handlers_NativePlaywright_JSError);
property_handlers_NativePlaywright_JSError.read_property = base_property_handlers_NativePlaywright_JSError->read_property;
property_handlers_NativePlaywright_JSError.write_property = base_property_handlers_NativePlaywright_JSError->write_property;
php_class_entry_NativePlaywright_Keyboard = php_register_class_NativePlaywright_Keyboard();
const auto *base_property_handlers_NativePlaywright_Keyboard = php_class_entry_NativePlaywright_Keyboard->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Keyboard, &property_handlers_NativePlaywright_Keyboard);
property_handlers_NativePlaywright_Keyboard.read_property = base_property_handlers_NativePlaywright_Keyboard->read_property;
property_handlers_NativePlaywright_Keyboard.write_property = base_property_handlers_NativePlaywright_Keyboard->write_property;
php_class_entry_NativePlaywright_Locator = php_register_class_NativePlaywright_Locator();
const auto *base_property_handlers_NativePlaywright_Locator = php_class_entry_NativePlaywright_Locator->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Locator, &property_handlers_NativePlaywright_Locator);
property_handlers_NativePlaywright_Locator.read_property = base_property_handlers_NativePlaywright_Locator->read_property;
property_handlers_NativePlaywright_Locator.write_property = base_property_handlers_NativePlaywright_Locator->write_property;
php_class_entry_NativePlaywright_Mouse = php_register_class_NativePlaywright_Mouse();
const auto *base_property_handlers_NativePlaywright_Mouse = php_class_entry_NativePlaywright_Mouse->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Mouse, &property_handlers_NativePlaywright_Mouse);
property_handlers_NativePlaywright_Mouse.read_property = base_property_handlers_NativePlaywright_Mouse->read_property;
property_handlers_NativePlaywright_Mouse.write_property = base_property_handlers_NativePlaywright_Mouse->write_property;
php_class_entry_NativePlaywright_Page = php_register_class_NativePlaywright_Page();
const auto *base_property_handlers_NativePlaywright_Page = php_class_entry_NativePlaywright_Page->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Page, &property_handlers_NativePlaywright_Page);
property_handlers_NativePlaywright_Page.read_property = base_property_handlers_NativePlaywright_Page->read_property;
property_handlers_NativePlaywright_Page.write_property = base_property_handlers_NativePlaywright_Page->write_property;
php_class_entry_NativePlaywright_Playwright = php_register_class_NativePlaywright_Playwright();
const auto *base_property_handlers_NativePlaywright_Playwright = php_class_entry_NativePlaywright_Playwright->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Playwright, &property_handlers_NativePlaywright_Playwright);
property_handlers_NativePlaywright_Playwright.read_property = base_property_handlers_NativePlaywright_Playwright->read_property;
property_handlers_NativePlaywright_Playwright.write_property = base_property_handlers_NativePlaywright_Playwright->write_property;
php_class_entry_NativePlaywright_Request = php_register_class_NativePlaywright_Request();
const auto *base_property_handlers_NativePlaywright_Request = php_class_entry_NativePlaywright_Request->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Request, &property_handlers_NativePlaywright_Request);
property_handlers_NativePlaywright_Request.read_property = base_property_handlers_NativePlaywright_Request->read_property;
property_handlers_NativePlaywright_Request.write_property = base_property_handlers_NativePlaywright_Request->write_property;
php_class_entry_NativePlaywright_Response = php_register_class_NativePlaywright_Response();
const auto *base_property_handlers_NativePlaywright_Response = php_class_entry_NativePlaywright_Response->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Response, &property_handlers_NativePlaywright_Response);
property_handlers_NativePlaywright_Response.read_property = base_property_handlers_NativePlaywright_Response->read_property;
property_handlers_NativePlaywright_Response.write_property = base_property_handlers_NativePlaywright_Response->write_property;
php_class_entry_NativePlaywright_Route = php_register_class_NativePlaywright_Route();
const auto *base_property_handlers_NativePlaywright_Route = php_class_entry_NativePlaywright_Route->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Route, &property_handlers_NativePlaywright_Route);
property_handlers_NativePlaywright_Route.read_property = base_property_handlers_NativePlaywright_Route->read_property;
property_handlers_NativePlaywright_Route.write_property = base_property_handlers_NativePlaywright_Route->write_property;
php_class_entry_NativePlaywright_RouteHandler = php_register_class_NativePlaywright_RouteHandler();
const auto *base_property_handlers_NativePlaywright_RouteHandler = php_class_entry_NativePlaywright_RouteHandler->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_RouteHandler, &property_handlers_NativePlaywright_RouteHandler);
property_handlers_NativePlaywright_RouteHandler.read_property = base_property_handlers_NativePlaywright_RouteHandler->read_property;
property_handlers_NativePlaywright_RouteHandler.write_property = base_property_handlers_NativePlaywright_RouteHandler->write_property;
php_class_entry_NativePlaywright_SwooleTransport = php_register_class_NativePlaywright_SwooleTransport(php_class_entry_NativePlaywright_Transport);
const auto *base_property_handlers_NativePlaywright_SwooleTransport = php_class_entry_NativePlaywright_SwooleTransport->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_SwooleTransport, &property_handlers_NativePlaywright_SwooleTransport);
property_handlers_NativePlaywright_SwooleTransport.read_property = base_property_handlers_NativePlaywright_SwooleTransport->read_property;
property_handlers_NativePlaywright_SwooleTransport.write_property = base_property_handlers_NativePlaywright_SwooleTransport->write_property;
php_class_entry_NativePlaywright_TimeoutError = php_register_class_NativePlaywright_TimeoutError(php_class_entry_NativePlaywright_Exception);
const auto *base_property_handlers_NativePlaywright_TimeoutError = php_class_entry_NativePlaywright_TimeoutError->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_TimeoutError, &property_handlers_NativePlaywright_TimeoutError);
property_handlers_NativePlaywright_TimeoutError.read_property = base_property_handlers_NativePlaywright_TimeoutError->read_property;
property_handlers_NativePlaywright_TimeoutError.write_property = base_property_handlers_NativePlaywright_TimeoutError->write_property;
php_class_entry_NativePlaywright_Touchscreen = php_register_class_NativePlaywright_Touchscreen();
const auto *base_property_handlers_NativePlaywright_Touchscreen = php_class_entry_NativePlaywright_Touchscreen->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Touchscreen, &property_handlers_NativePlaywright_Touchscreen);
property_handlers_NativePlaywright_Touchscreen.read_property = base_property_handlers_NativePlaywright_Touchscreen->read_property;
property_handlers_NativePlaywright_Touchscreen.write_property = base_property_handlers_NativePlaywright_Touchscreen->write_property;
php_class_entry_NativePlaywright_Util = php_register_class_NativePlaywright_Util();
const auto *base_property_handlers_NativePlaywright_Util = php_class_entry_NativePlaywright_Util->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Util, &property_handlers_NativePlaywright_Util);
property_handlers_NativePlaywright_Util.read_property = base_property_handlers_NativePlaywright_Util->read_property;
property_handlers_NativePlaywright_Util.write_property = base_property_handlers_NativePlaywright_Util->write_property;
php_class_entry_NativePlaywright_Waiter = php_register_class_NativePlaywright_Waiter();
const auto *base_property_handlers_NativePlaywright_Waiter = php_class_entry_NativePlaywright_Waiter->default_object_handlers;
typephp_install_property_handlers(php_class_entry_NativePlaywright_Waiter, &property_handlers_NativePlaywright_Waiter);
property_handlers_NativePlaywright_Waiter.read_property = base_property_handlers_NativePlaywright_Waiter->read_property;
property_handlers_NativePlaywright_Waiter.write_property = base_property_handlers_NativePlaywright_Waiter->write_property;

// register symbols
if (type == MODULE_TEMPORARY) {
    zend_interned_strings_switch_storage(true);
    EG(current_module)->type = MODULE_TEMPORARY;
}
return SUCCESS;
}

PHP_MSHUTDOWN_FUNCTION(typephp_native_playwright) {
for (auto &slot : php_persistent_class_map) {
    php::resetPersistentCache(slot);
}
for (auto &slot : php_persistent_func_map) {
    php::resetPersistentCache(slot);
}
for (auto &slot : php_persistent_property_map) {
    php::resetPersistentCache(slot);
}
typephp_unregister_fiber_generator_class();
typephp_unregister_trait_metadata(module_number);
typephp_uninstall_reflection_attribute_handlers();
return SUCCESS;
}

THREAD_LOCAL zval globals_array;
static void module_init() {
// register constants
// global vars 
// static property 
do {
php::setStaticProperty("NativePlaywright\\Keyboard", "layout", php::Array{});
} while (0);
do {
php::setStaticProperty("NativePlaywright\\Locator", "testIdAttribute", php::Var(get_str(22)));
} while (0);
// class array constants
typephp_request_init_class_constant_e68eb928f0f74085463a();
typephp_request_init_class_constant_9b52741571a7b35918ab();
typephp_request_init_class_constant_46d7b0c562158cb5b3b4();
}

static void module_clean() {
// class array constants
typephp_request_clean_class_constant_e68eb928f0f74085463a();
typephp_request_clean_class_constant_9b52741571a7b35918ab();
typephp_request_clean_class_constant_46d7b0c562158cb5b3b4();
}

PHP_RINIT_FUNCTION(typephp_native_playwright) {
if (UNEXPECTED(php_request_cache != nullptr)) {
    php_error_docref(nullptr, E_WARNING, "TypePHP request cache is already initialized");
    return FAILURE;
}
php_request_cache = new (std::nothrow) php_request_cache_storage{};
if (UNEXPECTED(php_request_cache == nullptr)) {
    php_error_docref(nullptr, E_WARNING, "Unable to allocate TypePHP request cache");
    return FAILURE;
}
php::request_init();
module_init();
return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION(typephp_native_playwright) {
if (php_request_cache == nullptr) {
return SUCCESS;
}
php::request_shutdown();
module_clean();
delete php_request_cache;
php_request_cache = nullptr;
    return SUCCESS;
}
PHP_MINFO_FUNCTION(typephp_native_playwright) {
    php_info_print_table_start();
    php_info_print_table_header(2, "native_playwright support", "enabled");
    php_info_print_table_row(2, "Description", "Native CDP browser automation (no Node.js), Swoole-coroutine aware");
    php_info_print_table_row(2, "Transport", "Chrome --remote-debugging-pipe");
    php_info_print_table_end();
}

zend_module_entry typephp_native_playwright_module_entry = {
    STANDARD_MODULE_HEADER,
    "native_playwright",
    ext_functions,
    PHP_MINIT(typephp_native_playwright),
    PHP_MSHUTDOWN(typephp_native_playwright),
    PHP_RINIT(typephp_native_playwright),
    PHP_RSHUTDOWN(typephp_native_playwright),
    PHP_MINFO(typephp_native_playwright),
    "0.1.0",
    STANDARD_MODULE_PROPERTIES,
};

ZEND_GET_MODULE(typephp_native_playwright);
}  // namespace typephp_project_native_playwright
