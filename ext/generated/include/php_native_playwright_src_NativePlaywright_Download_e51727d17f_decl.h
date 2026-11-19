#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_BrowserContext_cd971a2234_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>

extern void php_nativeplaywright__download____construct(php::Object &this_, php::Object page, php::Object context, php::Str guid, php::Str url, php::Str suggestedFilename, php::Str dir);
extern php::Str php_nativeplaywright__download__guid(php::Object &this_);
extern php::Str php_nativeplaywright__download__url(php::Object &this_);
extern php::Str php_nativeplaywright__download__suggestedfilename(php::Object &this_);
extern php::Object php_nativeplaywright__download__page(php::Object &this_);
extern void php_nativeplaywright__download__waitdone(php::Object &this_);
extern php::Var php_nativeplaywright__download__path(php::Object &this_);
extern php::Var php_nativeplaywright__download__failure(php::Object &this_);
extern void php_nativeplaywright__download__saveas(php::Object &this_, php::Str path);
extern php::Var php_nativeplaywright__download__createreadstream(php::Object &this_);
extern void php_nativeplaywright__download__cancel(php::Object &this_);
extern void php_nativeplaywright__download__delete(php::Object &this_);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

