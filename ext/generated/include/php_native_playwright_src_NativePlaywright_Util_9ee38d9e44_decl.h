#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>

extern php::Str php_nativeplaywright__util__urlmatches_arg_2_default_value();

extern php::Bool php_nativeplaywright__util__urlmatches(php::Object &this_, php::Var pattern, php::Str url, php::Str baseURL = php_nativeplaywright__util__urlmatches_arg_2_default_value());
extern php::Bool php_nativeplaywright__util__isregex(php::Object &this_, php::Str s);
extern php::Str php_nativeplaywright__util__globtoregex(php::Object &this_, php::Str glob);
extern php::Str php_nativeplaywright__util__resolveurl(php::Object &this_, php::Str base, php::Str url);
extern php::Var php_nativeplaywright__util__remotevalue(php::Object &this_, php::Array ro);
extern php::Bool php_nativeplaywright__util__isfunction(php::Object &this_, php::Str js);
extern php::Array php_nativeplaywright__util__headersarray(php::Object &this_, php::Array headers);
extern php::Array php_nativeplaywright__util__lowerheaders(php::Object &this_, php::Array h);
extern php::Float php_nativeplaywright__util__toinches(php::Object &this_, php::Var v);
extern php::Str php_nativeplaywright__util__mimetype(php::Object &this_, php::Str path);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

