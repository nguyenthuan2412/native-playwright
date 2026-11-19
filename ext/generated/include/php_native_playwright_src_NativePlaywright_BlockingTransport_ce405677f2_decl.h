#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_TimeoutError_7a8c4a04a5_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>
#include <php_native_playwright_src_NativePlaywright_Waiter_65d6396c74_decl.h>

extern php::Str php_nativeplaywright__blockingtransport__await_arg_2_default_value();

extern php::Object php_nativeplaywright__blockingtransport__newwaiter(php::Object &this_);
extern php::Var php_nativeplaywright__blockingtransport__await(php::Object &this_, php::Object w, php::Float timeout, php::Str what = php_nativeplaywright__blockingtransport__await_arg_2_default_value());
extern void php_nativeplaywright__blockingtransport__pump(php::Object &this_, php::Float timeout);
extern void php_nativeplaywright__blockingtransport__sleep(php::Object &this_, php::Float seconds);
extern void php_nativeplaywright__blockingtransport__async(php::Object &this_, php::Object fn);
extern void php_nativeplaywright__blockingtransport__close(php::Object &this_);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

