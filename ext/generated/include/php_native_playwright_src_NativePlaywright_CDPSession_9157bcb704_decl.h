#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>

extern php::Array php_nativeplaywright__cdpsession__send_arg_1_default_value();

extern void php_nativeplaywright__cdpsession____construct(php::Object &this_, php::Object t, php::Str sessionId, php::Float timeout);
extern php::Array php_nativeplaywright__cdpsession__send(php::Object &this_, php::Str method, php::Array params = php_nativeplaywright__cdpsession__send_arg_1_default_value());
extern void php_nativeplaywright__cdpsession__on(php::Object &this_, php::Str method, php::Object handler);
extern void php_nativeplaywright__cdpsession__detach(php::Object &this_);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

