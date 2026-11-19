#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>

extern php::Str php_nativeplaywright__dialog__accept_arg_0_default_value();

extern void php_nativeplaywright__dialog____construct(php::Object &this_, php::Object page, php::Str type, php::Str message, php::Str defaultValue);
extern php::Str php_nativeplaywright__dialog__type(php::Object &this_);
extern php::Str php_nativeplaywright__dialog__message(php::Object &this_);
extern php::Str php_nativeplaywright__dialog__defaultvalue(php::Object &this_);
extern php::Object php_nativeplaywright__dialog__page(php::Object &this_);
extern php::Bool php_nativeplaywright__dialog__ishandled(php::Object &this_);
extern void php_nativeplaywright__dialog__accept(php::Object &this_, php::Str promptText = php_nativeplaywright__dialog__accept_arg_0_default_value());
extern void php_nativeplaywright__dialog__dismiss(php::Object &this_);
extern void php_nativeplaywright__dialog__handle(php::Object &this_, php::Bool accept, php::Str text);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

