#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_FrameLocator_98aef2ee5b_decl.h>
#include <php_native_playwright_src_NativePlaywright_Injected_9eb67510a3_decl.h>
#include <php_native_playwright_src_NativePlaywright_Locator_206b2f41f4_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Response_f8b49507a2_decl.h>
#include <php_native_playwright_src_NativePlaywright_TimeoutError_7a8c4a04a5_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

extern php::Str php_nativeplaywright__frame____construct_arg_2_default_value();
extern php::Bool php_nativeplaywright__frame__utilcall_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__goto_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__expectnavigation_arg_1_default_value();
extern php::Str php_nativeplaywright__frame__waitforloadstate_arg_0_default_value();
extern php::Array php_nativeplaywright__frame__waitforloadstate_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__waitforurl_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__setcontent_arg_1_default_value();
extern php::Var php_nativeplaywright__frame__evaluate_arg_1_default_value();
extern php::Var php_nativeplaywright__frame__waitforfunction_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__waitforfunction_arg_2_default_value();
extern php::Array php_nativeplaywright__frame__locator_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__getbytext_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__getbyrole_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__getbylabel_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__getbyplaceholder_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__getbyalttext_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__getbytitle_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__click_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__dblclick_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__tap_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__fill_arg_2_default_value();
extern php::Array php_nativeplaywright__frame__type_arg_2_default_value();
extern php::Array php_nativeplaywright__frame__press_arg_2_default_value();
extern php::Array php_nativeplaywright__frame__hover_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__focus_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__check_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__uncheck_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__setchecked_arg_2_default_value();
extern php::Array php_nativeplaywright__frame__selectoption_arg_2_default_value();
extern php::Array php_nativeplaywright__frame__setinputfiles_arg_2_default_value();
extern php::Array php_nativeplaywright__frame__draganddrop_arg_2_default_value();
extern php::Array php_nativeplaywright__frame__dispatchevent_arg_2_default_value();
extern php::Array php_nativeplaywright__frame__dispatchevent_arg_3_default_value();
extern php::Array php_nativeplaywright__frame__textcontent_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__innertext_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__innerhtml_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__getattribute_arg_2_default_value();
extern php::Array php_nativeplaywright__frame__inputvalue_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__isenabled_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__isdisabled_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__iseditable_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__ischecked_arg_1_default_value();
extern php::Array php_nativeplaywright__frame__waitforselector_arg_1_default_value();
extern php::Var php_nativeplaywright__frame__evalonselector_arg_2_default_value();
extern php::Var php_nativeplaywright__frame__evalonselectorall_arg_2_default_value();

extern void php_nativeplaywright__frame____construct(php::Object &this_, php::Object page, php::Str id, php::Str parentId = php_nativeplaywright__frame____construct_arg_2_default_value());
extern php::Object php_nativeplaywright__frame__page(php::Object &this_);
extern php::Str php_nativeplaywright__frame__url(php::Object &this_);
extern php::Str php_nativeplaywright__frame__name(php::Object &this_);
extern php::Bool php_nativeplaywright__frame__isdetached(php::Object &this_);
extern php::Object php_nativeplaywright__frame__parentframe(php::Object &this_);
extern php::Array php_nativeplaywright__frame__childframes(php::Object &this_);
extern void php_nativeplaywright__frame__resetcontexts(php::Object &this_);
extern void php_nativeplaywright__frame__contextdestroyed(php::Object &this_, php::Int id);
extern php::Bool php_nativeplaywright__frame__iscontextlost(php::Object &this_, php::Str msg);
extern php::Int php_nativeplaywright__frame__ensureutil(php::Object &this_);
extern php::Array php_nativeplaywright__frame__utilcall(php::Object &this_, php::Str expression, php::Bool byValue = php_nativeplaywright__frame__utilcall_arg_1_default_value());
extern php::Var php_nativeplaywright__frame__utilvalue(php::Object &this_, php::Str expression);
extern php::Int php_nativeplaywright__frame__maincontextid(php::Object &this_);
extern php::Str php_nativeplaywright__frame__adopttomain(php::Object &this_, php::Str objectId);
extern php::Array php_nativeplaywright__frame__offset(php::Object &this_);
extern php::Str php_nativeplaywright__frame__lifecyclename(php::Object &this_, php::Str waitUntil);
extern php::Bool php_nativeplaywright__frame__lifecyclereached(php::Object &this_, php::Str loaderId, php::Str event);
extern php::Object php_nativeplaywright__frame__goto(php::Object &this_, php::Str url, php::Array options = php_nativeplaywright__frame__goto_arg_1_default_value());
extern void php_nativeplaywright__frame__waitforloader(php::Object &this_, php::Str loaderId, php::Str event, php::Float deadline, php::Float timeout, php::Str api);
extern php::Object php_nativeplaywright__frame__expectnavigation(php::Object &this_, php::Object action, php::Array options = php_nativeplaywright__frame__expectnavigation_arg_1_default_value());
extern void php_nativeplaywright__frame__waitforloadstate(php::Object &this_, php::Str state = php_nativeplaywright__frame__waitforloadstate_arg_0_default_value(), php::Array options = php_nativeplaywright__frame__waitforloadstate_arg_1_default_value());
extern void php_nativeplaywright__frame__waitforurl(php::Object &this_, php::Var url, php::Array options = php_nativeplaywright__frame__waitforurl_arg_1_default_value());
extern php::Str php_nativeplaywright__frame__title(php::Object &this_);
extern php::Str php_nativeplaywright__frame__content(php::Object &this_);
extern void php_nativeplaywright__frame__setcontent(php::Object &this_, php::Str html, php::Array options = php_nativeplaywright__frame__setcontent_arg_1_default_value());
extern php::Var php_nativeplaywright__frame__evaluate(php::Object &this_, php::Str js, php::Var arg = php_nativeplaywright__frame__evaluate_arg_1_default_value());
extern php::Var php_nativeplaywright__frame__waitforfunction(php::Object &this_, php::Str js, php::Var arg = php_nativeplaywright__frame__waitforfunction_arg_1_default_value(), php::Array options = php_nativeplaywright__frame__waitforfunction_arg_2_default_value());
extern void php_nativeplaywright__frame__addscripttag(php::Object &this_, php::Array options);
extern void php_nativeplaywright__frame__addstyletag(php::Object &this_, php::Array options);
extern php::Object php_nativeplaywright__frame__locator(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__locator_arg_1_default_value());
extern php::Object php_nativeplaywright__frame__getbytext(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__frame__getbytext_arg_1_default_value());
extern php::Object php_nativeplaywright__frame__getbyrole(php::Object &this_, php::Str role, php::Array options = php_nativeplaywright__frame__getbyrole_arg_1_default_value());
extern php::Object php_nativeplaywright__frame__getbylabel(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__frame__getbylabel_arg_1_default_value());
extern php::Object php_nativeplaywright__frame__getbyplaceholder(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__frame__getbyplaceholder_arg_1_default_value());
extern php::Object php_nativeplaywright__frame__getbyalttext(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__frame__getbyalttext_arg_1_default_value());
extern php::Object php_nativeplaywright__frame__getbytitle(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__frame__getbytitle_arg_1_default_value());
extern php::Object php_nativeplaywright__frame__getbytestid(php::Object &this_, php::Str testId);
extern php::Object php_nativeplaywright__frame__framelocator(php::Object &this_, php::Str selector);
extern void php_nativeplaywright__frame__click(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__click_arg_1_default_value());
extern void php_nativeplaywright__frame__dblclick(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__dblclick_arg_1_default_value());
extern void php_nativeplaywright__frame__tap(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__tap_arg_1_default_value());
extern void php_nativeplaywright__frame__fill(php::Object &this_, php::Str selector, php::Str value, php::Array options = php_nativeplaywright__frame__fill_arg_2_default_value());
extern void php_nativeplaywright__frame__type(php::Object &this_, php::Str selector, php::Str text, php::Array options = php_nativeplaywright__frame__type_arg_2_default_value());
extern void php_nativeplaywright__frame__press(php::Object &this_, php::Str selector, php::Str key, php::Array options = php_nativeplaywright__frame__press_arg_2_default_value());
extern void php_nativeplaywright__frame__hover(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__hover_arg_1_default_value());
extern void php_nativeplaywright__frame__focus(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__focus_arg_1_default_value());
extern void php_nativeplaywright__frame__check(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__check_arg_1_default_value());
extern void php_nativeplaywright__frame__uncheck(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__uncheck_arg_1_default_value());
extern void php_nativeplaywright__frame__setchecked(php::Object &this_, php::Str selector, php::Bool checked, php::Array options = php_nativeplaywright__frame__setchecked_arg_2_default_value());
extern php::Array php_nativeplaywright__frame__selectoption(php::Object &this_, php::Str selector, php::Var values, php::Array options = php_nativeplaywright__frame__selectoption_arg_2_default_value());
extern void php_nativeplaywright__frame__setinputfiles(php::Object &this_, php::Str selector, php::Var files, php::Array options = php_nativeplaywright__frame__setinputfiles_arg_2_default_value());
extern void php_nativeplaywright__frame__draganddrop(php::Object &this_, php::Str source, php::Str target, php::Array options = php_nativeplaywright__frame__draganddrop_arg_2_default_value());
extern void php_nativeplaywright__frame__dispatchevent(php::Object &this_, php::Str selector, php::Str type, php::Array eventInit = php_nativeplaywright__frame__dispatchevent_arg_2_default_value(), php::Array options = php_nativeplaywright__frame__dispatchevent_arg_3_default_value());
extern php::Var php_nativeplaywright__frame__textcontent(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__textcontent_arg_1_default_value());
extern php::Str php_nativeplaywright__frame__innertext(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__innertext_arg_1_default_value());
extern php::Str php_nativeplaywright__frame__innerhtml(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__innerhtml_arg_1_default_value());
extern php::Var php_nativeplaywright__frame__getattribute(php::Object &this_, php::Str selector, php::Str name, php::Array options = php_nativeplaywright__frame__getattribute_arg_2_default_value());
extern php::Str php_nativeplaywright__frame__inputvalue(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__inputvalue_arg_1_default_value());
extern php::Bool php_nativeplaywright__frame__isvisible(php::Object &this_, php::Str selector);
extern php::Bool php_nativeplaywright__frame__ishidden(php::Object &this_, php::Str selector);
extern php::Bool php_nativeplaywright__frame__isenabled(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__isenabled_arg_1_default_value());
extern php::Bool php_nativeplaywright__frame__isdisabled(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__isdisabled_arg_1_default_value());
extern php::Bool php_nativeplaywright__frame__iseditable(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__iseditable_arg_1_default_value());
extern php::Bool php_nativeplaywright__frame__ischecked(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__ischecked_arg_1_default_value());
extern php::Object php_nativeplaywright__frame__waitforselector(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__frame__waitforselector_arg_1_default_value());
extern php::Var php_nativeplaywright__frame__evalonselector(php::Object &this_, php::Str selector, php::Str js, php::Var arg = php_nativeplaywright__frame__evalonselector_arg_2_default_value());
extern php::Var php_nativeplaywright__frame__evalonselectorall(php::Object &this_, php::Str selector, php::Str js, php::Var arg = php_nativeplaywright__frame__evalonselectorall_arg_2_default_value());
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

