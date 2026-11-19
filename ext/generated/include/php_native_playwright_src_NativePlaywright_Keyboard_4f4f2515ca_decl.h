#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>

extern php::Array php_nativeplaywright__keyboard__press_arg_1_default_value();
extern php::Array php_nativeplaywright__keyboard__type_arg_1_default_value();

extern void php_nativeplaywright__keyboard____construct(php::Object &this_, php::Object page);
extern php::Int php_nativeplaywright__keyboard__modifiers(php::Object &this_);
extern php::Array php_nativeplaywright__keyboard__layout(php::Object &this_);
extern php::Int php_nativeplaywright__keyboard__bit(php::Object &this_, php::Str key);
extern php::Str php_nativeplaywright__keyboard__resolvekey(php::Object &this_, php::Str key);
extern php::Array php_nativeplaywright__keyboard__description(php::Object &this_, php::Str key);
extern void php_nativeplaywright__keyboard__down(php::Object &this_, php::Str key);
extern php::Str php_nativeplaywright__keyboard__editingcommand(php::Object &this_, php::Str code);
extern void php_nativeplaywright__keyboard__up(php::Object &this_, php::Str key);
extern void php_nativeplaywright__keyboard__press(php::Object &this_, php::Str keys, php::Array options = php_nativeplaywright__keyboard__press_arg_1_default_value());
extern void php_nativeplaywright__keyboard__type(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__keyboard__type_arg_1_default_value());
extern void php_nativeplaywright__keyboard__inserttext(php::Object &this_, php::Str text);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

