#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_FrameLocator_98aef2ee5b_decl.h>
#include <php_native_playwright_src_NativePlaywright_Frame_07e74a6952_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_TimeoutError_7a8c4a04a5_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

extern php::Bool php_nativeplaywright__locator__bytext_arg_1_default_value();
extern php::Bool php_nativeplaywright__locator__bylabel_arg_1_default_value();
extern php::Bool php_nativeplaywright__locator__byattr_arg_2_default_value();
extern php::Array php_nativeplaywright__locator__byrole_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__locator_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__filter_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__getbytext_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__getbyrole_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__getbylabel_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__getbyplaceholder_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__getbyalttext_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__getbytitle_arg_1_default_value();
extern php::Bool php_nativeplaywright__locator__read_arg_4_default_value();
extern php::Array php_nativeplaywright__locator__click_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__dblclick_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__tap_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__hover_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__fill_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__clear_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__presssequentially_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__type_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__press_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__focus_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__blur_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__check_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__uncheck_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__setchecked_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__selectoption_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__selecttext_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__setinputfiles_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__dragto_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__scrollintoviewifneeded_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__dispatchevent_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__dispatchevent_arg_2_default_value();
extern php::Array php_nativeplaywright__locator__screenshot_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__textcontent_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__innertext_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__innerhtml_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__getattribute_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__inputvalue_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__isenabled_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__isdisabled_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__iseditable_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__ischecked_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__boundingbox_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__ariasnapshot_arg_0_default_value();
extern php::Array php_nativeplaywright__locator__waitfor_arg_0_default_value();
extern php::Var php_nativeplaywright__locator__evaluate_arg_1_default_value();
extern php::Array php_nativeplaywright__locator__evaluate_arg_2_default_value();
extern php::Var php_nativeplaywright__locator__evaluateall_arg_1_default_value();

extern void php_nativeplaywright__locator____construct(php::Object &this_, php::Object frame, php::Str selector);
extern php::Str php_nativeplaywright__locator__selector(php::Object &this_);
extern php::Object php_nativeplaywright__locator__page(php::Object &this_);
extern php::Str php_nativeplaywright__locator____tostring(php::Object &this_);
extern php::Str php_nativeplaywright__locator__escapetext(php::Object &this_, php::Str text, php::Bool exact);
extern php::Str php_nativeplaywright__locator__jsregex(php::Object &this_, php::Str re);
extern php::Str php_nativeplaywright__locator__bytext(php::Object &this_, php::Str text, php::Bool exact = php_nativeplaywright__locator__bytext_arg_1_default_value());
extern php::Str php_nativeplaywright__locator__bylabel(php::Object &this_, php::Str text, php::Bool exact = php_nativeplaywright__locator__bylabel_arg_1_default_value());
extern php::Str php_nativeplaywright__locator__byattr(php::Object &this_, php::Str attr, php::Str text, php::Bool exact = php_nativeplaywright__locator__byattr_arg_2_default_value());
extern php::Str php_nativeplaywright__locator__bytestid(php::Object &this_, php::Str id);
extern php::Str php_nativeplaywright__locator__byrole(php::Object &this_, php::Str role, php::Array options = php_nativeplaywright__locator__byrole_arg_1_default_value());
extern php::Object php_nativeplaywright__locator__chain(php::Object &this_, php::Str sel);
extern php::Object php_nativeplaywright__locator__locator(php::Object &this_, php::Var selector, php::Array options = php_nativeplaywright__locator__locator_arg_1_default_value());
extern php::Object php_nativeplaywright__locator__filter(php::Object &this_, php::Array options = php_nativeplaywright__locator__filter_arg_0_default_value());
extern php::Object php_nativeplaywright__locator__and(php::Object &this_, php::Object other);
extern php::Object php_nativeplaywright__locator__or(php::Object &this_, php::Object other);
extern php::Object php_nativeplaywright__locator__nth(php::Object &this_, php::Int index);
extern php::Object php_nativeplaywright__locator__first(php::Object &this_);
extern php::Object php_nativeplaywright__locator__last(php::Object &this_);
extern php::Object php_nativeplaywright__locator__getbytext(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__locator__getbytext_arg_1_default_value());
extern php::Object php_nativeplaywright__locator__getbyrole(php::Object &this_, php::Str role, php::Array options = php_nativeplaywright__locator__getbyrole_arg_1_default_value());
extern php::Object php_nativeplaywright__locator__getbylabel(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__locator__getbylabel_arg_1_default_value());
extern php::Object php_nativeplaywright__locator__getbyplaceholder(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__locator__getbyplaceholder_arg_1_default_value());
extern php::Object php_nativeplaywright__locator__getbyalttext(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__locator__getbyalttext_arg_1_default_value());
extern php::Object php_nativeplaywright__locator__getbytitle(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__locator__getbytitle_arg_1_default_value());
extern php::Object php_nativeplaywright__locator__getbytestid(php::Object &this_, php::Str testId);
extern php::Object php_nativeplaywright__locator__framelocator(php::Object &this_, php::Str selector);
extern php::Object php_nativeplaywright__locator__contentframe(php::Object &this_);
extern php::Object php_nativeplaywright__locator__describe(php::Object &this_, php::Str description);
extern php::Array php_nativeplaywright__locator__all(php::Object &this_);
extern php::Var php_nativeplaywright__locator__resolve(php::Object &this_);
extern php::Str php_nativeplaywright__locator__js(php::Object &this_, php::Var v);
extern php::Float php_nativeplaywright__locator__timeout(php::Object &this_, php::Array options);
extern php::Var php_nativeplaywright__locator__retrying(php::Object &this_, php::Str api, php::Array options, php::Object attempt);
extern php::Array php_nativeplaywright__locator__prepare(php::Object &this_, php::Str api, php::Str action, php::Array options);
extern php::Var php_nativeplaywright__locator__read(php::Object &this_, php::Str api, php::Str op, php::Var arg, php::Array options, php::Bool wait = php_nativeplaywright__locator__read_arg_4_default_value());
extern void php_nativeplaywright__locator__withmodifiers(php::Object &this_, php::Array options, php::Object fn);
extern void php_nativeplaywright__locator__click(php::Object &this_, php::Array options = php_nativeplaywright__locator__click_arg_0_default_value());
extern void php_nativeplaywright__locator__dblclick(php::Object &this_, php::Array options = php_nativeplaywright__locator__dblclick_arg_0_default_value());
extern void php_nativeplaywright__locator__tap(php::Object &this_, php::Array options = php_nativeplaywright__locator__tap_arg_0_default_value());
extern void php_nativeplaywright__locator__hover(php::Object &this_, php::Array options = php_nativeplaywright__locator__hover_arg_0_default_value());
extern void php_nativeplaywright__locator__fill(php::Object &this_, php::Str value, php::Array options = php_nativeplaywright__locator__fill_arg_1_default_value());
extern void php_nativeplaywright__locator__clear(php::Object &this_, php::Array options = php_nativeplaywright__locator__clear_arg_0_default_value());
extern void php_nativeplaywright__locator__presssequentially(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__locator__presssequentially_arg_1_default_value());
extern void php_nativeplaywright__locator__type(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__locator__type_arg_1_default_value());
extern void php_nativeplaywright__locator__press(php::Object &this_, php::Str key, php::Array options = php_nativeplaywright__locator__press_arg_1_default_value());
extern void php_nativeplaywright__locator__focus(php::Object &this_, php::Array options = php_nativeplaywright__locator__focus_arg_0_default_value());
extern void php_nativeplaywright__locator__blur(php::Object &this_, php::Array options = php_nativeplaywright__locator__blur_arg_0_default_value());
extern void php_nativeplaywright__locator__check(php::Object &this_, php::Array options = php_nativeplaywright__locator__check_arg_0_default_value());
extern void php_nativeplaywright__locator__uncheck(php::Object &this_, php::Array options = php_nativeplaywright__locator__uncheck_arg_0_default_value());
extern void php_nativeplaywright__locator__setchecked(php::Object &this_, php::Bool checked, php::Array options = php_nativeplaywright__locator__setchecked_arg_1_default_value());
extern php::Array php_nativeplaywright__locator__selectoption(php::Object &this_, php::Var values, php::Array options = php_nativeplaywright__locator__selectoption_arg_1_default_value());
extern void php_nativeplaywright__locator__selecttext(php::Object &this_, php::Array options = php_nativeplaywright__locator__selecttext_arg_0_default_value());
extern void php_nativeplaywright__locator__setinputfiles(php::Object &this_, php::Var files, php::Array options = php_nativeplaywright__locator__setinputfiles_arg_1_default_value());
extern php::Array php_nativeplaywright__locator__materializefiles(php::Object &this_, php::Var files);
extern void php_nativeplaywright__locator__dragto(php::Object &this_, php::Object target, php::Array options = php_nativeplaywright__locator__dragto_arg_1_default_value());
extern void php_nativeplaywright__locator__scrollintoviewifneeded(php::Object &this_, php::Array options = php_nativeplaywright__locator__scrollintoviewifneeded_arg_0_default_value());
extern void php_nativeplaywright__locator__dispatchevent(php::Object &this_, php::Str type, php::Array eventInit = php_nativeplaywright__locator__dispatchevent_arg_1_default_value(), php::Array options = php_nativeplaywright__locator__dispatchevent_arg_2_default_value());
extern php::Str php_nativeplaywright__locator__screenshot(php::Object &this_, php::Array options = php_nativeplaywright__locator__screenshot_arg_0_default_value());
extern void php_nativeplaywright__locator__highlight(php::Object &this_);
extern php::Int php_nativeplaywright__locator__count(php::Object &this_);
extern php::Var php_nativeplaywright__locator__textcontent(php::Object &this_, php::Array options = php_nativeplaywright__locator__textcontent_arg_0_default_value());
extern php::Str php_nativeplaywright__locator__innertext(php::Object &this_, php::Array options = php_nativeplaywright__locator__innertext_arg_0_default_value());
extern php::Str php_nativeplaywright__locator__innerhtml(php::Object &this_, php::Array options = php_nativeplaywright__locator__innerhtml_arg_0_default_value());
extern php::Var php_nativeplaywright__locator__getattribute(php::Object &this_, php::Str name, php::Array options = php_nativeplaywright__locator__getattribute_arg_1_default_value());
extern php::Str php_nativeplaywright__locator__inputvalue(php::Object &this_, php::Array options = php_nativeplaywright__locator__inputvalue_arg_0_default_value());
extern php::Array php_nativeplaywright__locator__alltextcontents(php::Object &this_);
extern php::Array php_nativeplaywright__locator__allinnertexts(php::Object &this_);
extern php::Bool php_nativeplaywright__locator__isvisible(php::Object &this_);
extern php::Bool php_nativeplaywright__locator__ishidden(php::Object &this_);
extern php::Bool php_nativeplaywright__locator__isenabled(php::Object &this_, php::Array options = php_nativeplaywright__locator__isenabled_arg_0_default_value());
extern php::Bool php_nativeplaywright__locator__isdisabled(php::Object &this_, php::Array options = php_nativeplaywright__locator__isdisabled_arg_0_default_value());
extern php::Bool php_nativeplaywright__locator__iseditable(php::Object &this_, php::Array options = php_nativeplaywright__locator__iseditable_arg_0_default_value());
extern php::Bool php_nativeplaywright__locator__ischecked(php::Object &this_, php::Array options = php_nativeplaywright__locator__ischecked_arg_0_default_value());
extern php::Var php_nativeplaywright__locator__boundingbox(php::Object &this_, php::Array options = php_nativeplaywright__locator__boundingbox_arg_0_default_value());
extern php::Str php_nativeplaywright__locator__ariasnapshot(php::Object &this_, php::Array options = php_nativeplaywright__locator__ariasnapshot_arg_0_default_value());
extern void php_nativeplaywright__locator__waitfor(php::Object &this_, php::Array options = php_nativeplaywright__locator__waitfor_arg_0_default_value());
extern php::Var php_nativeplaywright__locator__evaluate(php::Object &this_, php::Str js, php::Var arg = php_nativeplaywright__locator__evaluate_arg_1_default_value(), php::Array options = php_nativeplaywright__locator__evaluate_arg_2_default_value());
extern php::Var php_nativeplaywright__locator__evaluateall(php::Object &this_, php::Str js, php::Var arg = php_nativeplaywright__locator__evaluateall_arg_1_default_value());
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
extern php::Var class_const__nativeplaywright__locator__DELAYS;

}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

