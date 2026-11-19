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
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_FrameLocator_98aef2ee5b_decl.h>
#include <php_native_playwright_src_NativePlaywright_Frame_07e74a6952_decl.h>
#include <php_native_playwright_src_NativePlaywright_Locator_206b2f41f4_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_TimeoutError_7a8c4a04a5_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

namespace typephp_project_native_playwright {

zend_never_inline void typephp_request_init_class_constant_46d7b0c562158cb5b3b4() {
do {
class_const__nativeplaywright__locator__DELAYS = php::Array{
    php::Var(0L), 
    php::Var(20L), 
    php::Var(50L), 
    php::Var(100L), 
    php::Var(100L), 
    php::Var(500L)
};
php::updateConstant("NativePlaywright\\Locator", "DELAYS", php::Array{
    php::Var(0L), 
    php::Var(20L), 
    php::Var(50L), 
    php::Var(100L), 
    php::Var(100L), 
    php::Var(500L)
});
} while(0);
}

zend_never_inline void typephp_request_clean_class_constant_46d7b0c562158cb5b3b4() {
class_const__nativeplaywright__locator__DELAYS.unset();
php::updateConstant("NativePlaywright\\Locator", "DELAYS", php::null);
}

}  // namespace typephp_project_native_playwright
