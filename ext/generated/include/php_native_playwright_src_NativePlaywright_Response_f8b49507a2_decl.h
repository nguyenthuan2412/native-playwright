#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Frame_07e74a6952_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Request_db667c6252_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

extern php::Str php_nativeplaywright__response____construct_arg_6_default_value();
extern php::Int php_nativeplaywright__response____construct_arg_7_default_value();
extern php::Array php_nativeplaywright__response____construct_arg_8_default_value();
extern php::Bool php_nativeplaywright__response____construct_arg_9_default_value();

extern void php_nativeplaywright__response____construct(php::Object &this_, php::Object page, php::Object request, php::Str url, php::Int status, php::Str statusText, php::Array headers, php::Str remoteIp = php_nativeplaywright__response____construct_arg_6_default_value(), php::Int remotePort = php_nativeplaywright__response____construct_arg_7_default_value(), php::Array securityDetails = php_nativeplaywright__response____construct_arg_8_default_value(), php::Bool fromServiceWorker = php_nativeplaywright__response____construct_arg_9_default_value());
extern php::Str php_nativeplaywright__response__url(php::Object &this_);
extern php::Int php_nativeplaywright__response__status(php::Object &this_);
extern php::Str php_nativeplaywright__response__statustext(php::Object &this_);
extern php::Bool php_nativeplaywright__response__ok(php::Object &this_);
extern php::Array php_nativeplaywright__response__headers(php::Object &this_);
extern php::Array php_nativeplaywright__response__allheaders(php::Object &this_);
extern php::Var php_nativeplaywright__response__headervalue(php::Object &this_, php::Str name);
extern php::Array php_nativeplaywright__response__headervalues(php::Object &this_, php::Str name);
extern php::Object php_nativeplaywright__response__request(php::Object &this_);
extern php::Object php_nativeplaywright__response__frame(php::Object &this_);
extern php::Bool php_nativeplaywright__response__fromserviceworker(php::Object &this_);
extern php::Var php_nativeplaywright__response__serveraddr(php::Object &this_);
extern php::Var php_nativeplaywright__response__securitydetails(php::Object &this_);
extern php::Var php_nativeplaywright__response__finished(php::Object &this_);
extern php::Str php_nativeplaywright__response__body(php::Object &this_);
extern php::Str php_nativeplaywright__response__text(php::Object &this_);
extern php::Var php_nativeplaywright__response__json(php::Object &this_);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

