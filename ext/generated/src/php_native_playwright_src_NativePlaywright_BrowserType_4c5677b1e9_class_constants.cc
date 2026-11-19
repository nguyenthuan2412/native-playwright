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
#include <php_native_playwright_src_NativePlaywright_BlockingTransport_ce405677f2_decl.h>
#include <php_native_playwright_src_NativePlaywright_BrowserContext_cd971a2234_decl.h>
#include <php_native_playwright_src_NativePlaywright_BrowserType_4c5677b1e9_decl.h>
#include <php_native_playwright_src_NativePlaywright_Browser_5c08077592_decl.h>
#include <php_native_playwright_src_NativePlaywright_Connection_0606cc101d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_SwooleTransport_b44c3f18aa_decl.h>

namespace typephp_project_native_playwright {

zend_never_inline void typephp_request_init_class_constant_e68eb928f0f74085463a() {
do {
class_const__nativeplaywright__browsertype__DEFAULT_ARGS = php::Array{
    php::Var(get_str(23)), 
    php::Var(get_str(24)), 
    php::Var(get_str(25)), 
    php::Var(get_str(26)), 
    php::Var(get_str(27)), 
    php::Var(get_str(28)), 
    php::Var(get_str(29)), 
    php::Var(get_str(30)), 
    php::Var(get_str(31)), 
    php::Var(get_str(32)), 
    php::Var(get_str(33)), 
    php::Var(get_str(34)), 
    php::Var(get_str(35)), 
    php::Var(get_str(36)), 
    php::Var(get_str(37)), 
    php::Var(get_str(38)), 
    php::Var(get_str(39)), 
    php::Var(get_str(40)), 
    php::Var(get_str(41)), 
    php::Var(get_str(42)), 
    php::Var(get_str(43)), 
    php::Var(get_str(44)), 
    php::Var(get_str(45)), 
    php::Var(get_str(46)), 
    php::Var(get_str(47)), 
    php::Var(get_str(48)), 
    php::Var(get_str(49)), 
    php::Var(get_str(50)), 
    php::Var(get_str(51)), 
    php::Var(get_str(52)), 
    php::Var(get_str(53)), 
    php::Var(get_str(54)), 
    php::Var(get_str(55)), 
    php::Var(get_str(56))
};
php::updateConstant("NativePlaywright\\BrowserType", "DEFAULT_ARGS", php::Array{
    php::Var(get_str(23)), 
    php::Var(get_str(24)), 
    php::Var(get_str(25)), 
    php::Var(get_str(26)), 
    php::Var(get_str(27)), 
    php::Var(get_str(28)), 
    php::Var(get_str(29)), 
    php::Var(get_str(30)), 
    php::Var(get_str(31)), 
    php::Var(get_str(32)), 
    php::Var(get_str(33)), 
    php::Var(get_str(34)), 
    php::Var(get_str(35)), 
    php::Var(get_str(36)), 
    php::Var(get_str(37)), 
    php::Var(get_str(38)), 
    php::Var(get_str(39)), 
    php::Var(get_str(40)), 
    php::Var(get_str(41)), 
    php::Var(get_str(42)), 
    php::Var(get_str(43)), 
    php::Var(get_str(44)), 
    php::Var(get_str(45)), 
    php::Var(get_str(46)), 
    php::Var(get_str(47)), 
    php::Var(get_str(48)), 
    php::Var(get_str(49)), 
    php::Var(get_str(50)), 
    php::Var(get_str(51)), 
    php::Var(get_str(52)), 
    php::Var(get_str(53)), 
    php::Var(get_str(54)), 
    php::Var(get_str(55)), 
    php::Var(get_str(56))
});
} while(0);
}

zend_never_inline void typephp_request_clean_class_constant_e68eb928f0f74085463a() {
class_const__nativeplaywright__browsertype__DEFAULT_ARGS.unset();
php::updateConstant("NativePlaywright\\BrowserType", "DEFAULT_ARGS", php::null);
}

zend_never_inline void typephp_request_init_class_constant_9b52741571a7b35918ab() {
do {
class_const__nativeplaywright__browsertype__DISABLED_FEATURES = php::Array{
    php::Var(get_str(57)), 
    php::Var(get_str(58)), 
    php::Var(get_str(59)), 
    php::Var(get_str(60)), 
    php::Var(get_str(61)), 
    php::Var(get_str(62)), 
    php::Var(get_str(63)), 
    php::Var(get_str(64)), 
    php::Var(get_str(65)), 
    php::Var(get_str(66)), 
    php::Var(get_str(67)), 
    php::Var(get_str(68)), 
    php::Var(get_str(69)), 
    php::Var(get_str(70))
};
php::updateConstant("NativePlaywright\\BrowserType", "DISABLED_FEATURES", php::Array{
    php::Var(get_str(57)), 
    php::Var(get_str(58)), 
    php::Var(get_str(59)), 
    php::Var(get_str(60)), 
    php::Var(get_str(61)), 
    php::Var(get_str(62)), 
    php::Var(get_str(63)), 
    php::Var(get_str(64)), 
    php::Var(get_str(65)), 
    php::Var(get_str(66)), 
    php::Var(get_str(67)), 
    php::Var(get_str(68)), 
    php::Var(get_str(69)), 
    php::Var(get_str(70))
});
} while(0);
}

zend_never_inline void typephp_request_clean_class_constant_9b52741571a7b35918ab() {
class_const__nativeplaywright__browsertype__DISABLED_FEATURES.unset();
php::updateConstant("NativePlaywright\\BrowserType", "DISABLED_FEATURES", php::null);
}

}  // namespace typephp_project_native_playwright
