#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

extern php::Int php_nativeplaywright__routehandler____construct_arg_2_default_value();

extern void php_nativeplaywright__routehandler____construct(php::Object &this_, php::Var url, php::Object handler, php::Int times = php_nativeplaywright__routehandler____construct_arg_2_default_value());
extern php::Bool php_nativeplaywright__routehandler__matches(php::Object &this_, php::Str url, php::Str baseURL);
extern php::Bool php_nativeplaywright__routehandler__expired(php::Object &this_);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

