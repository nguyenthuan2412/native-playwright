#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Browser_5c08077592_decl.h>
#include <php_native_playwright_src_NativePlaywright_CDPSession_9157bcb704_decl.h>
#include <php_native_playwright_src_NativePlaywright_EventEmitter_2f3b042d92_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Locator_206b2f41f4_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_RouteHandler_a91721537d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

extern php::Bool php_nativeplaywright__browsercontext____construct_arg_4_default_value();
extern php::Array php_nativeplaywright__browsercontext__expectpage_arg_1_default_value();
extern php::Var php_nativeplaywright__browsercontext__cookies_arg_0_default_value();
extern php::Array php_nativeplaywright__browsercontext__clearcookies_arg_0_default_value();
extern php::Array php_nativeplaywright__browsercontext__storagestate_arg_0_default_value();
extern php::Array php_nativeplaywright__browsercontext__grantpermissions_arg_1_default_value();
extern php::Var php_nativeplaywright__browsercontext__scriptsource_arg_1_default_value();
extern php::Var php_nativeplaywright__browsercontext__addinitscript_arg_1_default_value();
extern php::Array php_nativeplaywright__browsercontext__route_arg_2_default_value();
extern php::Object php_nativeplaywright__browsercontext__unroute_arg_1_default_value();
extern php::Object php_nativeplaywright__browsercontext__off_arg_1_default_value();
extern php::Str php_nativeplaywright__browsercontext__removealllisteners_arg_0_default_value();
extern php::Object php_nativeplaywright__browsercontext__waitforevent_arg_1_default_value();
extern php::Var php_nativeplaywright__browsercontext__waitforevent_arg_2_default_value();
extern php::Object php_nativeplaywright__browsercontext__expectevent_arg_1_default_value();
extern php::Object php_nativeplaywright__browsercontext__expectevent_arg_2_default_value();
extern php::Var php_nativeplaywright__browsercontext__expectevent_arg_3_default_value();

extern void php_nativeplaywright__browsercontext____construct(php::Object &this_, php::Object browser, php::Object t, php::Str id, php::Array options, php::Bool isDefault = php_nativeplaywright__browsercontext____construct_arg_4_default_value());
extern void php_nativeplaywright__browsercontext__initialize(php::Object &this_);
extern php::Object php_nativeplaywright__browsercontext__transport(php::Object &this_);
extern php::Float php_nativeplaywright__browsercontext__defaulttimeout(php::Object &this_);
extern php::Str php_nativeplaywright__browsercontext__id(php::Object &this_);
extern php::Array php_nativeplaywright__browsercontext__options(php::Object &this_);
extern php::Object php_nativeplaywright__browsercontext__browser(php::Object &this_);
extern php::Str php_nativeplaywright__browsercontext__baseurl(php::Object &this_);
extern php::Float php_nativeplaywright__browsercontext__defaulttimeoutms(php::Object &this_);
extern php::Float php_nativeplaywright__browsercontext__defaultnavigationtimeoutms(php::Object &this_);
extern void php_nativeplaywright__browsercontext__setdefaulttimeout(php::Object &this_, php::Float ms);
extern void php_nativeplaywright__browsercontext__setdefaultnavigationtimeout(php::Object &this_, php::Float ms);
extern php::Bool php_nativeplaywright__browsercontext__haslisteners(php::Object &this_, php::Str event);
extern void php_nativeplaywright__browsercontext__emitfrompage(php::Object &this_, php::Str event, php::Var arg);
extern php::Object php_nativeplaywright__browsercontext__newpage(php::Object &this_);
extern php::Array php_nativeplaywright__browsercontext__pages(php::Object &this_);
extern void php_nativeplaywright__browsercontext__didcreatepage(php::Object &this_, php::Object page);
extern void php_nativeplaywright__browsercontext__pageclosed(php::Object &this_, php::Object page);
extern void php_nativeplaywright__browsercontext__setowner(php::Object &this_, php::Object page);
extern php::Bool php_nativeplaywright__browsercontext__ownedby(php::Object &this_, php::Object page);
extern php::Object php_nativeplaywright__browsercontext__expectpage(php::Object &this_, php::Object action, php::Array options = php_nativeplaywright__browsercontext__expectpage_arg_1_default_value());
extern php::Array php_nativeplaywright__browsercontext__cookieout(php::Object &this_, php::Array c);
extern php::Array php_nativeplaywright__browsercontext__ctxparam(php::Object &this_);
extern php::Array php_nativeplaywright__browsercontext__cookies(php::Object &this_, php::Var urls = php_nativeplaywright__browsercontext__cookies_arg_0_default_value());
extern php::Bool php_nativeplaywright__browsercontext__cookiematchesany(php::Object &this_, php::Array c, php::Array urls);
extern void php_nativeplaywright__browsercontext__addcookies(php::Object &this_, php::Array cookies);
extern void php_nativeplaywright__browsercontext__clearcookies(php::Object &this_, php::Array options = php_nativeplaywright__browsercontext__clearcookies_arg_0_default_value());
extern php::Array php_nativeplaywright__browsercontext__storagestate(php::Object &this_, php::Array options = php_nativeplaywright__browsercontext__storagestate_arg_0_default_value());
extern php::Array php_nativeplaywright__browsercontext__permissionparams(php::Object &this_, php::Array permissions, php::Str origin);
extern void php_nativeplaywright__browsercontext__grantpermissions(php::Object &this_, php::Array permissions, php::Array options = php_nativeplaywright__browsercontext__grantpermissions_arg_1_default_value());
extern void php_nativeplaywright__browsercontext__clearpermissions(php::Object &this_);
extern php::Var php_nativeplaywright__browsercontext__geolocation(php::Object &this_);
extern void php_nativeplaywright__browsercontext__setgeolocation(php::Object &this_, php::Var geo);
extern php::Array php_nativeplaywright__browsercontext__extrahttpheaders(php::Object &this_);
extern void php_nativeplaywright__browsercontext__setextrahttpheaders(php::Object &this_, php::Array headers);
extern php::Bool php_nativeplaywright__browsercontext__isoffline(php::Object &this_);
extern void php_nativeplaywright__browsercontext__setoffline(php::Object &this_, php::Bool offline);
extern php::Var php_nativeplaywright__browsercontext__httpcredentials(php::Object &this_);
extern php::Str php_nativeplaywright__browsercontext__scriptsource(php::Object &this_, php::Var script, php::Var arg = php_nativeplaywright__browsercontext__scriptsource_arg_1_default_value());
extern php::Array php_nativeplaywright__browsercontext__initscripts(php::Object &this_);
extern void php_nativeplaywright__browsercontext__addinitscript(php::Object &this_, php::Var script, php::Var arg = php_nativeplaywright__browsercontext__addinitscript_arg_1_default_value());
extern php::Array php_nativeplaywright__browsercontext__bindingnames(php::Object &this_);
extern php::Object php_nativeplaywright__browsercontext__binding(php::Object &this_, php::Str name);
extern void php_nativeplaywright__browsercontext__exposebinding(php::Object &this_, php::Str name, php::Object fn);
extern void php_nativeplaywright__browsercontext__exposefunction(php::Object &this_, php::Str name, php::Object fn);
extern php::Bool php_nativeplaywright__browsercontext__hasroutes(php::Object &this_);
extern php::Array php_nativeplaywright__browsercontext__routehandlers(php::Object &this_);
extern void php_nativeplaywright__browsercontext__route(php::Object &this_, php::Var url, php::Object handler, php::Array options = php_nativeplaywright__browsercontext__route_arg_2_default_value());
extern void php_nativeplaywright__browsercontext__unroute(php::Object &this_, php::Var url, php::Object handler = php_nativeplaywright__browsercontext__unroute_arg_1_default_value());
extern void php_nativeplaywright__browsercontext__unrouteall(php::Object &this_);
extern php::Object php_nativeplaywright__browsercontext__newcdpsession(php::Object &this_, php::Object page);
extern php::Str php_nativeplaywright__browsercontext__downloaddir(php::Object &this_);
extern php::Bool php_nativeplaywright__browsercontext__isclosed(php::Object &this_);
extern void php_nativeplaywright__browsercontext__close(php::Object &this_);
extern void php_nativeplaywright__browsercontext__on(php::Object &this_, php::Str event, php::Object handler);
extern void php_nativeplaywright__browsercontext__once(php::Object &this_, php::Str event, php::Object handler);
extern void php_nativeplaywright__browsercontext__off(php::Object &this_, php::Str event, php::Object handler = php_nativeplaywright__browsercontext__off_arg_1_default_value());
extern void php_nativeplaywright__browsercontext__removealllisteners(php::Object &this_, php::Str event = php_nativeplaywright__browsercontext__removealllisteners_arg_0_default_value());
extern php::Int php_nativeplaywright__browsercontext__listenercount(php::Object &this_, php::Str event);
extern void php_nativeplaywright__browsercontext__onlisteneradded(php::Object &this_, php::Str event);
extern void php_nativeplaywright__browsercontext__emit(php::Object &this_, php::Str event, php::Var arg);
extern php::Var php_nativeplaywright__browsercontext__waitforevent(php::Object &this_, php::Str event, php::Object predicate = php_nativeplaywright__browsercontext__waitforevent_arg_1_default_value(), php::Var timeout = php_nativeplaywright__browsercontext__waitforevent_arg_2_default_value());
extern php::Var php_nativeplaywright__browsercontext__expectevent(php::Object &this_, php::Str event, php::Object action = php_nativeplaywright__browsercontext__expectevent_arg_1_default_value(), php::Object predicate = php_nativeplaywright__browsercontext__expectevent_arg_2_default_value(), php::Var timeout = php_nativeplaywright__browsercontext__expectevent_arg_3_default_value());
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

