#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Frame_07e74a6952_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Response_f8b49507a2_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

extern php::Object php_nativeplaywright__request____construct_arg_9_default_value();

extern void php_nativeplaywright__request____construct(php::Object &this_, php::Object page, php::Str id, php::Str url, php::Str method, php::Array headers, php::Var postData, php::Str resourceType, php::Str frameId, php::Bool isNavigation, php::Object redirectedFrom = php_nativeplaywright__request____construct_arg_9_default_value());
extern php::Str php_nativeplaywright__request__url(php::Object &this_);
extern php::Str php_nativeplaywright__request__method(php::Object &this_);
extern php::Array php_nativeplaywright__request__headers(php::Object &this_);
extern php::Array php_nativeplaywright__request__allheaders(php::Object &this_);
extern php::Var php_nativeplaywright__request__headervalue(php::Object &this_, php::Str name);
extern php::Var php_nativeplaywright__request__postdata(php::Object &this_);
extern php::Var php_nativeplaywright__request__postdatajson(php::Object &this_);
extern php::Str php_nativeplaywright__request__resourcetype(php::Object &this_);
extern php::Bool php_nativeplaywright__request__isnavigationrequest(php::Object &this_);
extern php::Str php_nativeplaywright__request__frameid(php::Object &this_);
extern php::Object php_nativeplaywright__request__frame(php::Object &this_);
extern php::Object php_nativeplaywright__request__page(php::Object &this_);
extern php::Object php_nativeplaywright__request__redirectedfrom(php::Object &this_);
extern php::Object php_nativeplaywright__request__redirectedto(php::Object &this_);
extern php::Object php_nativeplaywright__request__response(php::Object &this_);
extern php::Var php_nativeplaywright__request__failure(php::Object &this_);
extern php::Array php_nativeplaywright__request__timing(php::Object &this_);
extern php::Array php_nativeplaywright__request__sizes(php::Object &this_);
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

