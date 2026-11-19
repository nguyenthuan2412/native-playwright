#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Request_db667c6252_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

extern php::Str php_nativeplaywright__route__abort_arg_0_default_value();
extern php::Array php_nativeplaywright__route__continue_arg_0_default_value();
extern php::Array php_nativeplaywright__route__fallback_arg_0_default_value();
extern php::Array php_nativeplaywright__route__fulfill_arg_0_default_value();

extern void php_nativeplaywright__route____construct(php::Object &this_, php::Object page, php::Str interceptId, php::Object request);
extern php::Object php_nativeplaywright__route__request(php::Object &this_);
extern php::Bool php_nativeplaywright__route__ishandled(php::Object &this_);
extern void php_nativeplaywright__route__claim(php::Object &this_, php::Str op);
extern void php_nativeplaywright__route__abort(php::Object &this_, php::Str errorCode = php_nativeplaywright__route__abort_arg_0_default_value());
extern void php_nativeplaywright__route__continue(php::Object &this_, php::Array overrides = php_nativeplaywright__route__continue_arg_0_default_value());
extern void php_nativeplaywright__route__fallback(php::Object &this_, php::Array overrides = php_nativeplaywright__route__fallback_arg_0_default_value());
extern void php_nativeplaywright__route__fulfill(php::Object &this_, php::Array options = php_nativeplaywright__route__fulfill_arg_0_default_value());
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

