#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_native_pipe_a3a10585cb_decl.h>

extern php::Array php_nativeplaywright__connection____construct_arg_1_default_value();
extern php::Str php_nativeplaywright__connection____construct_arg_2_default_value();
extern php::Array php_nativeplaywright__connection__send_arg_1_default_value();
extern php::Str php_nativeplaywright__connection__send_arg_2_default_value();
extern php::Float php_nativeplaywright__connection__read_arg_0_default_value();
extern php::Bool php_nativeplaywright__connection__close_arg_0_default_value();

extern void php_nativeplaywright__connection____construct(php::Object &this_, php::Str executable, php::Array args = php_nativeplaywright__connection____construct_arg_1_default_value(), php::Str userDataDir = php_nativeplaywright__connection____construct_arg_2_default_value());
extern php::Int php_nativeplaywright__connection__send(php::Object &this_, php::Str method, php::Array params = php_nativeplaywright__connection__send_arg_1_default_value(), php::Str sessionId = php_nativeplaywright__connection__send_arg_2_default_value());
extern php::Var php_nativeplaywright__connection__read(php::Object &this_, php::Float timeout = php_nativeplaywright__connection__read_arg_0_default_value());
extern php::Int php_nativeplaywright__connection__fd(php::Object &this_);
extern php::Int php_nativeplaywright__connection__pid(php::Object &this_);
extern php::Bool php_nativeplaywright__connection__isclosed(php::Object &this_);
extern void php_nativeplaywright__connection__close(php::Object &this_, php::Bool graceful = php_nativeplaywright__connection__close_arg_0_default_value());
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

