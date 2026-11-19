#pragma once

#include <phpx.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_BrowserContext_cd971a2234_decl.h>
#include <php_native_playwright_src_NativePlaywright_Browser_5c08077592_decl.h>
#include <php_native_playwright_src_NativePlaywright_CDPSession_9157bcb704_decl.h>
#include <php_native_playwright_src_NativePlaywright_ConsoleMessage_4dcce5e3f4_decl.h>
#include <php_native_playwright_src_NativePlaywright_Dialog_73c802b322_decl.h>
#include <php_native_playwright_src_NativePlaywright_Download_e51727d17f_decl.h>
#include <php_native_playwright_src_NativePlaywright_EventEmitter_2f3b042d92_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_FileChooser_b15955ae9f_decl.h>
#include <php_native_playwright_src_NativePlaywright_FrameLocator_98aef2ee5b_decl.h>
#include <php_native_playwright_src_NativePlaywright_Frame_07e74a6952_decl.h>
#include <php_native_playwright_src_NativePlaywright_Injected_9eb67510a3_decl.h>
#include <php_native_playwright_src_NativePlaywright_JSError_49ec4d0857_decl.h>
#include <php_native_playwright_src_NativePlaywright_Keyboard_4f4f2515ca_decl.h>
#include <php_native_playwright_src_NativePlaywright_Locator_206b2f41f4_decl.h>
#include <php_native_playwright_src_NativePlaywright_Mouse_1796713ced_decl.h>
#include <php_native_playwright_src_NativePlaywright_Request_db667c6252_decl.h>
#include <php_native_playwright_src_NativePlaywright_Response_f8b49507a2_decl.h>
#include <php_native_playwright_src_NativePlaywright_RouteHandler_a91721537d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Route_83d7a76f49_decl.h>
#include <php_native_playwright_src_NativePlaywright_TimeoutError_7a8c4a04a5_decl.h>
#include <php_native_playwright_src_NativePlaywright_Touchscreen_177469a54f_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

extern php::Array php_nativeplaywright__page__send_arg_1_default_value();
extern php::Var php_nativeplaywright__page__send_arg_2_default_value();
extern php::Str php_nativeplaywright__page__callfunction_arg_2_default_value();
extern php::Int php_nativeplaywright__page__callfunction_arg_3_default_value();
extern php::Array php_nativeplaywright__page__timeoutseconds_arg_0_default_value();
extern php::Array php_nativeplaywright__page__navigationtimeoutseconds_arg_0_default_value();
extern php::Var php_nativeplaywright__page__initialize_arg_0_default_value();
extern php::Str php_nativeplaywright__page__loadframetree_arg_1_default_value();
extern php::Array php_nativeplaywright__page__route_arg_2_default_value();
extern php::Object php_nativeplaywright__page__unroute_arg_1_default_value();
extern php::Var php_nativeplaywright__page__addinitscript_arg_1_default_value();
extern php::Array php_nativeplaywright__page__close_arg_0_default_value();
extern php::Array php_nativeplaywright__page__goto_arg_1_default_value();
extern php::Array php_nativeplaywright__page__reload_arg_0_default_value();
extern php::Array php_nativeplaywright__page__goback_arg_0_default_value();
extern php::Array php_nativeplaywright__page__goforward_arg_0_default_value();
extern php::Str php_nativeplaywright__page__waitforloadstate_arg_0_default_value();
extern php::Array php_nativeplaywright__page__waitforloadstate_arg_1_default_value();
extern php::Array php_nativeplaywright__page__waitforurl_arg_1_default_value();
extern php::Array php_nativeplaywright__page__expectnavigation_arg_1_default_value();
extern php::Array php_nativeplaywright__page__expectrequest_arg_2_default_value();
extern php::Array php_nativeplaywright__page__expectresponse_arg_2_default_value();
extern php::Array php_nativeplaywright__page__waitforrequest_arg_1_default_value();
extern php::Array php_nativeplaywright__page__waitforresponse_arg_1_default_value();
extern php::Array php_nativeplaywright__page__expectpopup_arg_1_default_value();
extern php::Array php_nativeplaywright__page__expectdownload_arg_1_default_value();
extern php::Array php_nativeplaywright__page__expectconsolemessage_arg_1_default_value();
extern php::Array php_nativeplaywright__page__expectfilechooser_arg_1_default_value();
extern php::Array php_nativeplaywright__page__expectdialog_arg_1_default_value();
extern php::Array php_nativeplaywright__page__setcontent_arg_1_default_value();
extern php::Var php_nativeplaywright__page__evaluate_arg_1_default_value();
extern php::Var php_nativeplaywright__page__waitforfunction_arg_1_default_value();
extern php::Array php_nativeplaywright__page__waitforfunction_arg_2_default_value();
extern php::Array php_nativeplaywright__page__locator_arg_1_default_value();
extern php::Array php_nativeplaywright__page__getbytext_arg_1_default_value();
extern php::Array php_nativeplaywright__page__getbyrole_arg_1_default_value();
extern php::Array php_nativeplaywright__page__getbylabel_arg_1_default_value();
extern php::Array php_nativeplaywright__page__getbyplaceholder_arg_1_default_value();
extern php::Array php_nativeplaywright__page__getbyalttext_arg_1_default_value();
extern php::Array php_nativeplaywright__page__getbytitle_arg_1_default_value();
extern php::Array php_nativeplaywright__page__click_arg_1_default_value();
extern php::Array php_nativeplaywright__page__dblclick_arg_1_default_value();
extern php::Array php_nativeplaywright__page__tap_arg_1_default_value();
extern php::Array php_nativeplaywright__page__fill_arg_2_default_value();
extern php::Array php_nativeplaywright__page__type_arg_2_default_value();
extern php::Array php_nativeplaywright__page__press_arg_2_default_value();
extern php::Array php_nativeplaywright__page__hover_arg_1_default_value();
extern php::Array php_nativeplaywright__page__focus_arg_1_default_value();
extern php::Array php_nativeplaywright__page__check_arg_1_default_value();
extern php::Array php_nativeplaywright__page__uncheck_arg_1_default_value();
extern php::Array php_nativeplaywright__page__setchecked_arg_2_default_value();
extern php::Array php_nativeplaywright__page__selectoption_arg_2_default_value();
extern php::Array php_nativeplaywright__page__setinputfiles_arg_2_default_value();
extern php::Array php_nativeplaywright__page__draganddrop_arg_2_default_value();
extern php::Array php_nativeplaywright__page__dispatchevent_arg_2_default_value();
extern php::Array php_nativeplaywright__page__dispatchevent_arg_3_default_value();
extern php::Array php_nativeplaywright__page__textcontent_arg_1_default_value();
extern php::Array php_nativeplaywright__page__innertext_arg_1_default_value();
extern php::Array php_nativeplaywright__page__innerhtml_arg_1_default_value();
extern php::Array php_nativeplaywright__page__getattribute_arg_2_default_value();
extern php::Array php_nativeplaywright__page__inputvalue_arg_1_default_value();
extern php::Array php_nativeplaywright__page__isenabled_arg_1_default_value();
extern php::Array php_nativeplaywright__page__isdisabled_arg_1_default_value();
extern php::Array php_nativeplaywright__page__iseditable_arg_1_default_value();
extern php::Array php_nativeplaywright__page__ischecked_arg_1_default_value();
extern php::Array php_nativeplaywright__page__waitforselector_arg_1_default_value();
extern php::Var php_nativeplaywright__page__evalonselector_arg_2_default_value();
extern php::Var php_nativeplaywright__page__evalonselectorall_arg_2_default_value();
extern php::Array php_nativeplaywright__page__emulatemedia_arg_0_default_value();
extern php::Array php_nativeplaywright__page__screenshot_arg_0_default_value();
extern php::Array php_nativeplaywright__page__pdf_arg_0_default_value();
extern php::Object php_nativeplaywright__page__off_arg_1_default_value();
extern php::Str php_nativeplaywright__page__removealllisteners_arg_0_default_value();
extern php::Object php_nativeplaywright__page__waitforevent_arg_1_default_value();
extern php::Var php_nativeplaywright__page__waitforevent_arg_2_default_value();
extern php::Object php_nativeplaywright__page__expectevent_arg_1_default_value();
extern php::Object php_nativeplaywright__page__expectevent_arg_2_default_value();
extern php::Var php_nativeplaywright__page__expectevent_arg_3_default_value();

extern void php_nativeplaywright__page____construct(php::Object &this_, php::Object browser, php::Object context, php::Object t, php::Str sessionId, php::Str targetId);
extern php::Object php_nativeplaywright__page__transport(php::Object &this_);
extern php::Float php_nativeplaywright__page__defaulttimeout(php::Object &this_);
extern php::Array php_nativeplaywright__page__send(php::Object &this_, php::Str method, php::Array params = php_nativeplaywright__page__send_arg_1_default_value(), php::Var timeout = php_nativeplaywright__page__send_arg_2_default_value());
extern php::Array php_nativeplaywright__page__sendmany(php::Object &this_, php::Array calls);
extern void php_nativeplaywright__page__releaseobject(php::Object &this_, php::Str objectId);
extern php::Var php_nativeplaywright__page__callon(php::Object &this_, php::Str objectId, php::Str fn);
extern php::Var php_nativeplaywright__page__callfunction(php::Object &this_, php::Str fn, php::Array args, php::Str objectId = php_nativeplaywright__page__callfunction_arg_2_default_value(), php::Int contextId = php_nativeplaywright__page__callfunction_arg_3_default_value());
extern php::Float php_nativeplaywright__page__timeoutseconds(php::Object &this_, php::Array options = php_nativeplaywright__page__timeoutseconds_arg_0_default_value());
extern php::Float php_nativeplaywright__page__navigationtimeoutseconds(php::Object &this_, php::Array options = php_nativeplaywright__page__navigationtimeoutseconds_arg_0_default_value());
extern void php_nativeplaywright__page__setdefaulttimeout(php::Object &this_, php::Float ms);
extern void php_nativeplaywright__page__setdefaultnavigationtimeout(php::Object &this_, php::Float ms);
extern void php_nativeplaywright__page__waitforcondition(php::Object &this_, php::Object cond, php::Float timeout, php::Str what);
extern void php_nativeplaywright__page__poke(php::Object &this_);
extern void php_nativeplaywright__page__afteraction(php::Object &this_);
extern void php_nativeplaywright__page__initialize(php::Object &this_, php::Var frameTree = php_nativeplaywright__page__initialize_arg_0_default_value());
extern php::Array php_nativeplaywright__page__emulationcalls(php::Object &this_);
extern php::Array php_nativeplaywright__page__metrics(php::Object &this_, php::Array vp);
extern php::Array php_nativeplaywright__page__mediaparams(php::Object &this_);
extern void php_nativeplaywright__page__loadframetree(php::Object &this_, php::Array tree, php::Str parent = php_nativeplaywright__page__loadframetree_arg_1_default_value());
extern void php_nativeplaywright__page__onprotocolevent(php::Object &this_, php::Str method, php::Array p);
extern void php_nativeplaywright__page__detachframe(php::Object &this_, php::Str id);
extern void php_nativeplaywright__page__emitboth(php::Object &this_, php::Str event, php::Var arg);
extern void php_nativeplaywright__page__onconsole(php::Object &this_, php::Array p);
extern void php_nativeplaywright__page__ondialog(php::Object &this_, php::Array p);
extern void php_nativeplaywright__page__onrequest(php::Object &this_, php::Array p);
extern php::Object php_nativeplaywright__page__makeresponse(php::Object &this_, php::Object req, php::Array r);
extern void php_nativeplaywright__page__onresponse(php::Object &this_, php::Array p);
extern php::Object php_nativeplaywright__page__navigationresponse(php::Object &this_, php::Str loaderId);
extern php::Bool php_nativeplaywright__page__needsinterception(php::Object &this_);
extern php::Array php_nativeplaywright__page__fetchparams(php::Object &this_);
extern void php_nativeplaywright__page__syncinterception(php::Object &this_);
extern void php_nativeplaywright__page__onrequestpaused(php::Object &this_, php::Array p);
extern void php_nativeplaywright__page__route(php::Object &this_, php::Var url, php::Object handler, php::Array options = php_nativeplaywright__page__route_arg_2_default_value());
extern void php_nativeplaywright__page__unroute(php::Object &this_, php::Var url, php::Object handler = php_nativeplaywright__page__unroute_arg_1_default_value());
extern void php_nativeplaywright__page__unrouteall(php::Object &this_);
extern php::Str php_nativeplaywright__page__bindingscript(php::Object &this_, php::Str name);
extern void php_nativeplaywright__page__exposebinding(php::Object &this_, php::Str name, php::Object fn);
extern void php_nativeplaywright__page__exposefunction(php::Object &this_, php::Str name, php::Object fn);
extern void php_nativeplaywright__page__installbinding(php::Object &this_, php::Str name);
extern void php_nativeplaywright__page__onbindingcalled(php::Object &this_, php::Array p);
extern void php_nativeplaywright__page__addinitscript(php::Object &this_, php::Var script, php::Var arg = php_nativeplaywright__page__addinitscript_arg_1_default_value());
extern void php_nativeplaywright__page__didclose(php::Object &this_);
extern php::Bool php_nativeplaywright__page__isclosed(php::Object &this_);
extern void php_nativeplaywright__page__close(php::Object &this_, php::Array options = php_nativeplaywright__page__close_arg_0_default_value());
extern void php_nativeplaywright__page__setopener(php::Object &this_, php::Object opener);
extern php::Object php_nativeplaywright__page__opener(php::Object &this_);
extern php::Object php_nativeplaywright__page__context(php::Object &this_);
extern void php_nativeplaywright__page__emitdownload(php::Object &this_, php::Object d);
extern void php_nativeplaywright__page__emitpopup(php::Object &this_, php::Object p);
extern void php_nativeplaywright__page__onlisteneradded(php::Object &this_, php::Str event);
extern php::Object php_nativeplaywright__page__mainframe(php::Object &this_);
extern php::Array php_nativeplaywright__page__frames(php::Object &this_);
extern php::Object php_nativeplaywright__page__framebyid(php::Object &this_, php::Str id);
extern php::Object php_nativeplaywright__page__frame(php::Object &this_, php::Var selector);
extern php::Str php_nativeplaywright__page__url(php::Object &this_);
extern php::Object php_nativeplaywright__page__goto(php::Object &this_, php::Str url, php::Array options = php_nativeplaywright__page__goto_arg_1_default_value());
extern php::Object php_nativeplaywright__page__historynavigate(php::Object &this_, php::Object trigger, php::Array options);
extern php::Object php_nativeplaywright__page__reload(php::Object &this_, php::Array options = php_nativeplaywright__page__reload_arg_0_default_value());
extern php::Object php_nativeplaywright__page__gohistory(php::Object &this_, php::Int delta, php::Array options);
extern php::Object php_nativeplaywright__page__goback(php::Object &this_, php::Array options = php_nativeplaywright__page__goback_arg_0_default_value());
extern php::Object php_nativeplaywright__page__goforward(php::Object &this_, php::Array options = php_nativeplaywright__page__goforward_arg_0_default_value());
extern void php_nativeplaywright__page__waitforloadstate(php::Object &this_, php::Str state = php_nativeplaywright__page__waitforloadstate_arg_0_default_value(), php::Array options = php_nativeplaywright__page__waitforloadstate_arg_1_default_value());
extern void php_nativeplaywright__page__waitforurl(php::Object &this_, php::Var url, php::Array options = php_nativeplaywright__page__waitforurl_arg_1_default_value());
extern php::Object php_nativeplaywright__page__expectnavigation(php::Object &this_, php::Object action, php::Array options = php_nativeplaywright__page__expectnavigation_arg_1_default_value());
extern void php_nativeplaywright__page__waitfortimeout(php::Object &this_, php::Float ms);
extern php::Object php_nativeplaywright__page__expectrequest(php::Object &this_, php::Var urlOrPredicate, php::Object action, php::Array options = php_nativeplaywright__page__expectrequest_arg_2_default_value());
extern php::Object php_nativeplaywright__page__expectresponse(php::Object &this_, php::Var urlOrPredicate, php::Object action, php::Array options = php_nativeplaywright__page__expectresponse_arg_2_default_value());
extern php::Object php_nativeplaywright__page__waitforrequest(php::Object &this_, php::Var urlOrPredicate, php::Array options = php_nativeplaywright__page__waitforrequest_arg_1_default_value());
extern php::Object php_nativeplaywright__page__waitforresponse(php::Object &this_, php::Var urlOrPredicate, php::Array options = php_nativeplaywright__page__waitforresponse_arg_1_default_value());
extern php::Object php_nativeplaywright__page__expectpopup(php::Object &this_, php::Object action, php::Array options = php_nativeplaywright__page__expectpopup_arg_1_default_value());
extern php::Object php_nativeplaywright__page__expectdownload(php::Object &this_, php::Object action, php::Array options = php_nativeplaywright__page__expectdownload_arg_1_default_value());
extern php::Object php_nativeplaywright__page__expectconsolemessage(php::Object &this_, php::Object action, php::Array options = php_nativeplaywright__page__expectconsolemessage_arg_1_default_value());
extern php::Object php_nativeplaywright__page__expectfilechooser(php::Object &this_, php::Object action, php::Array options = php_nativeplaywright__page__expectfilechooser_arg_1_default_value());
extern php::Object php_nativeplaywright__page__expectdialog(php::Object &this_, php::Object action, php::Array options = php_nativeplaywright__page__expectdialog_arg_1_default_value());
extern php::Str php_nativeplaywright__page__title(php::Object &this_);
extern php::Str php_nativeplaywright__page__content(php::Object &this_);
extern void php_nativeplaywright__page__setcontent(php::Object &this_, php::Str html, php::Array options = php_nativeplaywright__page__setcontent_arg_1_default_value());
extern php::Var php_nativeplaywright__page__evaluate(php::Object &this_, php::Str js, php::Var arg = php_nativeplaywright__page__evaluate_arg_1_default_value());
extern php::Var php_nativeplaywright__page__waitforfunction(php::Object &this_, php::Str js, php::Var arg = php_nativeplaywright__page__waitforfunction_arg_1_default_value(), php::Array options = php_nativeplaywright__page__waitforfunction_arg_2_default_value());
extern void php_nativeplaywright__page__addscripttag(php::Object &this_, php::Array options);
extern void php_nativeplaywright__page__addstyletag(php::Object &this_, php::Array options);
extern php::Object php_nativeplaywright__page__locator(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__locator_arg_1_default_value());
extern php::Object php_nativeplaywright__page__getbytext(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__page__getbytext_arg_1_default_value());
extern php::Object php_nativeplaywright__page__getbyrole(php::Object &this_, php::Str role, php::Array options = php_nativeplaywright__page__getbyrole_arg_1_default_value());
extern php::Object php_nativeplaywright__page__getbylabel(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__page__getbylabel_arg_1_default_value());
extern php::Object php_nativeplaywright__page__getbyplaceholder(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__page__getbyplaceholder_arg_1_default_value());
extern php::Object php_nativeplaywright__page__getbyalttext(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__page__getbyalttext_arg_1_default_value());
extern php::Object php_nativeplaywright__page__getbytitle(php::Object &this_, php::Str text, php::Array options = php_nativeplaywright__page__getbytitle_arg_1_default_value());
extern php::Object php_nativeplaywright__page__getbytestid(php::Object &this_, php::Str testId);
extern php::Object php_nativeplaywright__page__framelocator(php::Object &this_, php::Str selector);
extern void php_nativeplaywright__page__click(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__click_arg_1_default_value());
extern void php_nativeplaywright__page__dblclick(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__dblclick_arg_1_default_value());
extern void php_nativeplaywright__page__tap(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__tap_arg_1_default_value());
extern void php_nativeplaywright__page__fill(php::Object &this_, php::Str selector, php::Str value, php::Array options = php_nativeplaywright__page__fill_arg_2_default_value());
extern void php_nativeplaywright__page__type(php::Object &this_, php::Str selector, php::Str text, php::Array options = php_nativeplaywright__page__type_arg_2_default_value());
extern void php_nativeplaywright__page__press(php::Object &this_, php::Str selector, php::Str key, php::Array options = php_nativeplaywright__page__press_arg_2_default_value());
extern void php_nativeplaywright__page__hover(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__hover_arg_1_default_value());
extern void php_nativeplaywright__page__focus(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__focus_arg_1_default_value());
extern void php_nativeplaywright__page__check(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__check_arg_1_default_value());
extern void php_nativeplaywright__page__uncheck(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__uncheck_arg_1_default_value());
extern void php_nativeplaywright__page__setchecked(php::Object &this_, php::Str selector, php::Bool checked, php::Array options = php_nativeplaywright__page__setchecked_arg_2_default_value());
extern php::Array php_nativeplaywright__page__selectoption(php::Object &this_, php::Str selector, php::Var values, php::Array options = php_nativeplaywright__page__selectoption_arg_2_default_value());
extern void php_nativeplaywright__page__setinputfiles(php::Object &this_, php::Str selector, php::Var files, php::Array options = php_nativeplaywright__page__setinputfiles_arg_2_default_value());
extern void php_nativeplaywright__page__draganddrop(php::Object &this_, php::Str source, php::Str target, php::Array options = php_nativeplaywright__page__draganddrop_arg_2_default_value());
extern void php_nativeplaywright__page__dispatchevent(php::Object &this_, php::Str selector, php::Str type, php::Array eventInit = php_nativeplaywright__page__dispatchevent_arg_2_default_value(), php::Array options = php_nativeplaywright__page__dispatchevent_arg_3_default_value());
extern php::Var php_nativeplaywright__page__textcontent(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__textcontent_arg_1_default_value());
extern php::Str php_nativeplaywright__page__innertext(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__innertext_arg_1_default_value());
extern php::Str php_nativeplaywright__page__innerhtml(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__innerhtml_arg_1_default_value());
extern php::Var php_nativeplaywright__page__getattribute(php::Object &this_, php::Str selector, php::Str name, php::Array options = php_nativeplaywright__page__getattribute_arg_2_default_value());
extern php::Str php_nativeplaywright__page__inputvalue(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__inputvalue_arg_1_default_value());
extern php::Bool php_nativeplaywright__page__isvisible(php::Object &this_, php::Str selector);
extern php::Bool php_nativeplaywright__page__ishidden(php::Object &this_, php::Str selector);
extern php::Bool php_nativeplaywright__page__isenabled(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__isenabled_arg_1_default_value());
extern php::Bool php_nativeplaywright__page__isdisabled(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__isdisabled_arg_1_default_value());
extern php::Bool php_nativeplaywright__page__iseditable(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__iseditable_arg_1_default_value());
extern php::Bool php_nativeplaywright__page__ischecked(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__ischecked_arg_1_default_value());
extern php::Object php_nativeplaywright__page__waitforselector(php::Object &this_, php::Str selector, php::Array options = php_nativeplaywright__page__waitforselector_arg_1_default_value());
extern php::Var php_nativeplaywright__page__evalonselector(php::Object &this_, php::Str selector, php::Str js, php::Var arg = php_nativeplaywright__page__evalonselector_arg_2_default_value());
extern php::Var php_nativeplaywright__page__evalonselectorall(php::Object &this_, php::Str selector, php::Str js, php::Var arg = php_nativeplaywright__page__evalonselectorall_arg_2_default_value());
extern void php_nativeplaywright__page__setviewportsize(php::Object &this_, php::Array size);
extern php::Var php_nativeplaywright__page__viewportsize(php::Object &this_);
extern void php_nativeplaywright__page__emulatemedia(php::Object &this_, php::Array options = php_nativeplaywright__page__emulatemedia_arg_0_default_value());
extern void php_nativeplaywright__page__setextrahttpheaders(php::Object &this_, php::Array headers);
extern void php_nativeplaywright__page__applyextraheaders(php::Object &this_);
extern void php_nativeplaywright__page__bringtofront(php::Object &this_);
extern void php_nativeplaywright__page__requestgc(php::Object &this_);
extern php::Object php_nativeplaywright__page__newcdpsession(php::Object &this_);
extern php::Str php_nativeplaywright__page__screenshot(php::Object &this_, php::Array options = php_nativeplaywright__page__screenshot_arg_0_default_value());
extern php::Str php_nativeplaywright__page__pdf(php::Object &this_, php::Array options = php_nativeplaywright__page__pdf_arg_0_default_value());
extern void php_nativeplaywright__page__on(php::Object &this_, php::Str event, php::Object handler);
extern void php_nativeplaywright__page__once(php::Object &this_, php::Str event, php::Object handler);
extern void php_nativeplaywright__page__off(php::Object &this_, php::Str event, php::Object handler = php_nativeplaywright__page__off_arg_1_default_value());
extern void php_nativeplaywright__page__removealllisteners(php::Object &this_, php::Str event = php_nativeplaywright__page__removealllisteners_arg_0_default_value());
extern php::Int php_nativeplaywright__page__listenercount(php::Object &this_, php::Str event);
extern void php_nativeplaywright__page__emit(php::Object &this_, php::Str event, php::Var arg);
extern php::Var php_nativeplaywright__page__waitforevent(php::Object &this_, php::Str event, php::Object predicate = php_nativeplaywright__page__waitforevent_arg_1_default_value(), php::Var timeout = php_nativeplaywright__page__waitforevent_arg_2_default_value());
extern php::Var php_nativeplaywright__page__expectevent(php::Object &this_, php::Str event, php::Object action = php_nativeplaywright__page__expectevent_arg_1_default_value(), php::Object predicate = php_nativeplaywright__page__expectevent_arg_2_default_value(), php::Var timeout = php_nativeplaywright__page__expectevent_arg_3_default_value());
#include <phpx.h>
#include <typephp_helper.h>


namespace typephp_project_native_playwright {
}  // namespace typephp_project_native_playwright
using namespace typephp_project_native_playwright;

