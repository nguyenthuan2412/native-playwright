#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>

extern void php_nativeplaywright__consolemessage____construct(php::Object &this_, php::Object page, php::Str type, php::Str text, php::Array args, php::Array location);
extern php::Str php_nativeplaywright__consolemessage__type(php::Object &this_);
extern php::Str php_nativeplaywright__consolemessage__text(php::Object &this_);
extern php::Array php_nativeplaywright__consolemessage__args(php::Object &this_);
extern php::Array php_nativeplaywright__consolemessage__location(php::Object &this_);
extern php::Object php_nativeplaywright__consolemessage__page(php::Object &this_);
extern php::Str php_nativeplaywright__consolemessage____tostring(php::Object &this_);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

