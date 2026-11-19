#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Frame_07e74a6952_decl.h>
#include <php_native_playwright_src_NativePlaywright_Locator_206b2f41f4_decl.h>

extern php::Array php_nativeplaywright__framelocator__locator_arg_1_default_value();
extern php::Array php_nativeplaywright__framelocator__getbytext_arg_1_default_value();
extern php::Array php_nativeplaywright__framelocator__getbyrole_arg_1_default_value();
extern php::Array php_nativeplaywright__framelocator__getbylabel_arg_1_default_value();
extern php::Array php_nativeplaywright__framelocator__getbyplaceholder_arg_1_default_value();
extern php::Array php_nativeplaywright__framelocator__getbyalttext_arg_1_default_value();
extern php::Array php_nativeplaywright__framelocator__getbytitle_arg_1_default_value();

extern void php_nativeplaywright__framelocator____construct(php::Object &this_, php::Object frame, php::Str frameSelector);
extern php::Object php_nativeplaywright__framelocator__inside(php::Object &this_, php::Str sel);
extern php::Object php_nativeplaywright__framelocator__locator(php::Object &this_, php::Var selector, php::Array options = php_nativeplaywright__framelocator__locator_arg_1_default_value());
extern php::Object php_nativeplaywright__framelocator__getbytext(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__framelocator__getbytext_arg_1_default_value());
extern php::Object php_nativeplaywright__framelocator__getbyrole(php::Object &this_, php::Str role, php::Array options = php_nativeplaywright__framelocator__getbyrole_arg_1_default_value());
extern php::Object php_nativeplaywright__framelocator__getbylabel(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__framelocator__getbylabel_arg_1_default_value());
extern php::Object php_nativeplaywright__framelocator__getbyplaceholder(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__framelocator__getbyplaceholder_arg_1_default_value());
extern php::Object php_nativeplaywright__framelocator__getbyalttext(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__framelocator__getbyalttext_arg_1_default_value());
extern php::Object php_nativeplaywright__framelocator__getbytitle(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__framelocator__getbytitle_arg_1_default_value());
extern php::Object php_nativeplaywright__framelocator__getbytestid(php::Object &this_, php::Str testId);
extern php::Object php_nativeplaywright__framelocator__framelocator(php::Object &this_, php::Str selector);
extern php::Object php_nativeplaywright__framelocator__first(php::Object &this_);
extern php::Object php_nativeplaywright__framelocator__last(php::Object &this_);
extern php::Object php_nativeplaywright__framelocator__nth(php::Object &this_, php::Int index);
extern php::Object php_nativeplaywright__framelocator__owner(php::Object &this_);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

