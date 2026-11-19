#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Connection_0606cc101d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Waiter_65d6396c74_decl.h>

extern php::Str php_nativeplaywright__transport__await_arg_2_default_value();
extern php::Array php_nativeplaywright__transport__sendasync_arg_1_default_value();
extern php::Str php_nativeplaywright__transport__sendasync_arg_2_default_value();
extern php::Array php_nativeplaywright__transport__call_arg_1_default_value();
extern php::Str php_nativeplaywright__transport__call_arg_2_default_value();
extern php::Float php_nativeplaywright__transport__call_arg_3_default_value();
extern php::Str php_nativeplaywright__transport__callmany_arg_1_default_value();
extern php::Bool php_nativeplaywright__transport__callmany_arg_2_default_value();

extern void php_nativeplaywright__transport____construct(php::Object &this_, php::Object conn);
extern php::Object php_nativeplaywright__transport__connection(php::Object &this_);
extern php::Bool php_nativeplaywright__transport__isclosed(php::Object &this_);
extern php::Object php_nativeplaywright__transport__sendasync(php::Object &this_, php::Str method, php::Array params = php_nativeplaywright__transport__sendasync_arg_1_default_value(), php::Str sessionId = php_nativeplaywright__transport__sendasync_arg_2_default_value());
extern php::Array php_nativeplaywright__transport__call(php::Object &this_, php::Str method, php::Array params = php_nativeplaywright__transport__call_arg_1_default_value(), php::Str sessionId = php_nativeplaywright__transport__call_arg_2_default_value(), php::Float timeout = php_nativeplaywright__transport__call_arg_3_default_value());
extern php::Array php_nativeplaywright__transport__callmany(php::Object &this_, php::Array calls, php::Str sessionId = php_nativeplaywright__transport__callmany_arg_1_default_value(), php::Bool ignoreErrors = php_nativeplaywright__transport__callmany_arg_2_default_value());
extern php::Array php_nativeplaywright__transport__unwrap(php::Object &this_, php::Str method, php::Array m);
extern php::Int php_nativeplaywright__transport__on(php::Object &this_, php::Str sessionId, php::Object fn);
extern void php_nativeplaywright__transport__off(php::Object &this_, php::Str sessionId, php::Int id);
extern void php_nativeplaywright__transport__offsession(php::Object &this_, php::Str sessionId);
extern void php_nativeplaywright__transport__onclose(php::Object &this_, php::Object fn);
extern void php_nativeplaywright__transport__handlemessage(php::Object &this_, php::Array m);
extern void php_nativeplaywright__transport__handleclosed(php::Object &this_);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

