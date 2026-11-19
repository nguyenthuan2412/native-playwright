#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_BlockingTransport_ce405677f2_decl.h>
#include <php_native_playwright_src_NativePlaywright_BrowserContext_cd971a2234_decl.h>
#include <php_native_playwright_src_NativePlaywright_Browser_5c08077592_decl.h>
#include <php_native_playwright_src_NativePlaywright_Connection_0606cc101d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_SwooleTransport_b44c3f18aa_decl.h>

extern php::Array php_nativeplaywright__browsertype__launch_arg_0_default_value();
extern php::Array php_nativeplaywright__browsertype__launchpersistentcontext_arg_1_default_value();

extern php::Str php_nativeplaywright__browsertype__name(php::Object &this_);
extern php::Str php_nativeplaywright__browsertype__executablepath(php::Object &this_);
extern php::Array php_nativeplaywright__browsertype__buildargs(php::Object &this_, php::Array options);
extern php::Object php_nativeplaywright__browsertype__launch(php::Object &this_, php::Array options = php_nativeplaywright__browsertype__launch_arg_0_default_value());
extern php::Object php_nativeplaywright__browsertype__start(php::Object &this_, php::Array options, php::Str userDataDir);
extern php::Object php_nativeplaywright__browsertype__launchpersistentcontext(php::Object &this_, php::Str userDataDir, php::Array options = php_nativeplaywright__browsertype__launchpersistentcontext_arg_1_default_value());
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
extern php::Var class_const__nativeplaywright__browsertype__DEFAULT_ARGS;

extern php::Var class_const__nativeplaywright__browsertype__DISABLED_FEATURES;

}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

