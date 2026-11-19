#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Keyboard_4f4f2515ca_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>

extern php::Array php_nativeplaywright__mouse__move_arg_2_default_value();
extern php::Array php_nativeplaywright__mouse__down_arg_0_default_value();
extern php::Array php_nativeplaywright__mouse__up_arg_0_default_value();
extern php::Array php_nativeplaywright__mouse__click_arg_2_default_value();
extern php::Array php_nativeplaywright__mouse__dblclick_arg_2_default_value();

extern void php_nativeplaywright__mouse____construct(php::Object &this_, php::Object page, php::Object keyboard);
extern php::Int php_nativeplaywright__mouse__bit(php::Object &this_, php::Str b);
extern void php_nativeplaywright__mouse__move(php::Object &this_, php::Float x, php::Float y, php::Array options = php_nativeplaywright__mouse__move_arg_2_default_value());
extern void php_nativeplaywright__mouse__down(php::Object &this_, php::Array options = php_nativeplaywright__mouse__down_arg_0_default_value());
extern void php_nativeplaywright__mouse__up(php::Object &this_, php::Array options = php_nativeplaywright__mouse__up_arg_0_default_value());
extern void php_nativeplaywright__mouse__click(php::Object &this_, php::Float x, php::Float y, php::Array options = php_nativeplaywright__mouse__click_arg_2_default_value());
extern void php_nativeplaywright__mouse__dblclick(php::Object &this_, php::Float x, php::Float y, php::Array options = php_nativeplaywright__mouse__dblclick_arg_2_default_value());
extern void php_nativeplaywright__mouse__wheel(php::Object &this_, php::Float deltaX, php::Float deltaY);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

