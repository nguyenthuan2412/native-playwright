#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_BrowserContext_cd971a2234_decl.h>
#include <php_native_playwright_src_NativePlaywright_BrowserType_4c5677b1e9_decl.h>
#include <php_native_playwright_src_NativePlaywright_CDPSession_9157bcb704_decl.h>
#include <php_native_playwright_src_NativePlaywright_Connection_0606cc101d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Download_e51727d17f_decl.h>
#include <php_native_playwright_src_NativePlaywright_EventEmitter_2f3b042d92_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>

extern php::Array php_nativeplaywright__browser__launch_arg_0_default_value();
extern php::Array php_nativeplaywright__browser__send_arg_1_default_value();
extern php::Array php_nativeplaywright__browser__newcontext_arg_0_default_value();
extern php::Array php_nativeplaywright__browser__newpage_arg_0_default_value();
extern php::Object php_nativeplaywright__browser__off_arg_1_default_value();
extern php::Str php_nativeplaywright__browser__removealllisteners_arg_0_default_value();
extern php::Object php_nativeplaywright__browser__waitforevent_arg_1_default_value();
extern php::Var php_nativeplaywright__browser__waitforevent_arg_2_default_value();
extern php::Object php_nativeplaywright__browser__expectevent_arg_1_default_value();
extern php::Object php_nativeplaywright__browser__expectevent_arg_2_default_value();
extern php::Var php_nativeplaywright__browser__expectevent_arg_3_default_value();

extern void php_nativeplaywright__browser____construct(php::Object &this_, php::Object t, php::Object conn, php::Array launchOptions);
extern php::Object php_nativeplaywright__browser__launch(php::Object &this_, php::Array options = php_nativeplaywright__browser__launch_arg_0_default_value());
extern void php_nativeplaywright__browser__initialize(php::Object &this_, php::Float timeout);
extern php::Object php_nativeplaywright__browser__transport(php::Object &this_);
extern php::Float php_nativeplaywright__browser__defaulttimeout(php::Object &this_);
extern php::Var php_nativeplaywright__browser__launchoption(php::Object &this_, php::Str name);
extern php::Float php_nativeplaywright__browser__slowmo(php::Object &this_);
extern php::Str php_nativeplaywright__browser__defaultuseragent(php::Object &this_);
extern php::Array php_nativeplaywright__browser__send(php::Object &this_, php::Str method, php::Array params = php_nativeplaywright__browser__send_arg_1_default_value());
extern php::Object php_nativeplaywright__browser__connection(php::Object &this_);
extern php::Int php_nativeplaywright__browser__pid(php::Object &this_);
extern php::Str php_nativeplaywright__browser__version(php::Object &this_);
extern php::Object php_nativeplaywright__browser__browsertype(php::Object &this_);
extern php::Bool php_nativeplaywright__browser__isconnected(php::Object &this_);
extern php::Array php_nativeplaywright__browser__contexts(php::Object &this_);
extern php::Object php_nativeplaywright__browser__newcontext(php::Object &this_, php::Array options = php_nativeplaywright__browser__newcontext_arg_0_default_value());
extern php::Object php_nativeplaywright__browser__newpage(php::Object &this_, php::Array options = php_nativeplaywright__browser__newpage_arg_0_default_value());
extern php::Object php_nativeplaywright__browser__usedefaultcontext(php::Object &this_, php::Array options);
extern php::Object php_nativeplaywright__browser__createpage(php::Object &this_, php::Object ctx);
extern void php_nativeplaywright__browser__contextclosed(php::Object &this_, php::Object ctx);
extern void php_nativeplaywright__browser__onprotocolevent(php::Object &this_, php::Str method, php::Array p);
extern php::Object php_nativeplaywright__browser__pageforframe(php::Object &this_, php::Str frameId);
extern void php_nativeplaywright__browser__attachpage(php::Object &this_, php::Str sid, php::Array info);
extern void php_nativeplaywright__browser__diddisconnect(php::Object &this_);
extern void php_nativeplaywright__browser__close(php::Object &this_);
extern php::Object php_nativeplaywright__browser__newbrowsercdpsession(php::Object &this_);
extern void php_nativeplaywright__browser__on(php::Object &this_, php::Str event, php::Object handler);
extern void php_nativeplaywright__browser__once(php::Object &this_, php::Str event, php::Object handler);
extern void php_nativeplaywright__browser__off(php::Object &this_, php::Str event, php::Object handler = php_nativeplaywright__browser__off_arg_1_default_value());
extern void php_nativeplaywright__browser__removealllisteners(php::Object &this_, php::Str event = php_nativeplaywright__browser__removealllisteners_arg_0_default_value());
extern php::Int php_nativeplaywright__browser__listenercount(php::Object &this_, php::Str event);
extern void php_nativeplaywright__browser__onlisteneradded(php::Object &this_, php::Str event);
extern void php_nativeplaywright__browser__emit(php::Object &this_, php::Str event, php::Var arg);
extern php::Var php_nativeplaywright__browser__waitforevent(php::Object &this_, php::Str event, php::Object predicate = php_nativeplaywright__browser__waitforevent_arg_1_default_value(), php::Var timeout = php_nativeplaywright__browser__waitforevent_arg_2_default_value());
extern php::Var php_nativeplaywright__browser__expectevent(php::Object &this_, php::Str event, php::Object action = php_nativeplaywright__browser__expectevent_arg_1_default_value(), php::Object predicate = php_nativeplaywright__browser__expectevent_arg_2_default_value(), php::Var timeout = php_nativeplaywright__browser__expectevent_arg_3_default_value());
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

