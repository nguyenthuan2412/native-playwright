#include <cstring>
#include <phpx.h>
#include <phpx_helper.h>
#include <phpx_big_int.h>
#include <phpx_big_float.h>
#include <phpx_decimal.h>
#include <phpx_python.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <phpx_std.h>
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
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Request_db667c6252_decl.h>
#include <php_native_playwright_src_NativePlaywright_Response_f8b49507a2_decl.h>
#include <php_native_playwright_src_NativePlaywright_RouteHandler_a91721537d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Route_83d7a76f49_decl.h>
#include <php_native_playwright_src_NativePlaywright_TimeoutError_7a8c4a04a5_decl.h>
#include <php_native_playwright_src_NativePlaywright_Touchscreen_177469a54f_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

void php_nativeplaywright__page____construct(php::Object &this_, php::Object browser, php::Object context, php::Object t, php::Str sessionId, php::Str targetId) {
    php::Var tmp_var_1;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Object self;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{13}, get_str(341));
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{14}, get_str(475));
    zend_class_entry *tmp_var_3 = get_persistent_class(PersistentClassId{15}, get_str(479));
    zend_class_entry *tmp_var_6 = get_persistent_class(PersistentClassId{16}, get_str(508));
typephp_write_property_scoped(this_, "browser", browser, get_persistent_class(PersistentClassId{14}, get_str(475)));
typephp_write_property_scoped(this_, "context", context, get_persistent_class(PersistentClassId{14}, get_str(475)));
typephp_write_property_scoped(this_, "t", t, get_persistent_class(PersistentClassId{14}, get_str(475)));
typephp_write_property_scoped(this_, "sessionId", sessionId, get_persistent_class(PersistentClassId{14}, get_str(475)));
typephp_write_property_scoped(this_, "targetId", targetId, get_persistent_class(PersistentClassId{14}, get_str(475)));

    ((tmp_var_1 = php::newObject(tmp_var_0, php::VarList{this_}), typephp_write_property_scoped(this_, get_str(492), tmp_var_1, tmp_var_2)), tmp_var_1);
    tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{96}, get_str(492), get_str(475)), php::AttrMode::Get);
    ((tmp_var_5 = php::newObject(tmp_var_3, php::VarList{this_, php::deindirect(tmp_var_4)}), typephp_write_property_scoped(this_, get_str(704), tmp_var_5, tmp_var_2)), tmp_var_5);
    tmp_var_4.unset();
    tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{96}, get_str(492), get_str(475)), php::AttrMode::Get);
    ((tmp_var_8 = php::newObject(tmp_var_6, php::VarList{this_, php::deindirect(tmp_var_7)}), typephp_write_property_scoped(this_, get_str(705), tmp_var_8, tmp_var_2)), tmp_var_8);
    tmp_var_7.unset();
    self = this_;
    php::ClosureFn tmp_var_9 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(2, 2, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!(tmp_var_0.isString()))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(100), get_str(98));
            return php::null;
        }
        php::Str method = php::toString(tmp_var_0);
        tmp_var_0.unset();
        auto tmp_var_1 = php::getCallArg(1);
        if (UNEXPECTED(!(tmp_var_1.isArray()))) {
            php::throwArgumentTypeError(tmp_var_1, get_str(458), 2, get_str(137), get_str(665));
            return php::null;
        }
        php::Array params = php::toArray(tmp_var_1);
        tmp_var_1.unset();
        php::Object self = php::Object(vars_.get(0));
        php_nativeplaywright__page__onprotocolevent(self, method, params);
    return php::null;
    };
    this_.attr(get_persistent_prop(PersistentPropertyId{99}, get_str(706), get_str(475)), php::AttrMode::Update) = typephp_call_method_cached(t, get_str(663), get_method_call_cache(MethodCallCacheId{16}), php::VarList{sessionId, php::newClosureWithParameters(tmp_var_9, { self }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), { php::ClosureParameter{"method", false, false, true}, php::ClosureParameter{"params", false, false, true} }, php::ClosureStrictTypes::Enabled)});
}

php::Object php_nativeplaywright__page__transport(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Float php_nativeplaywright__page__defaulttimeout(php::Object &this_) {
    php::Var tmp_var_0;
    php::Float tmp_var_1 = 0;

    tmp_var_0 = php::Array{};
    tmp_var_1 = (php::toFloat(php_nativeplaywright__page__timeoutseconds(this_, tmp_var_0)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Array php_nativeplaywright__page__send(php::Object &this_, php::Str method, php::Array params, php::Var timeout) {
    php::Var tmp_var_0;
    php::Str tmp_var_1;
    php::Array tmp_var_2;
    php::Var tmp_var_3;
    php::Float tmp_var_4 = 0;
    php::Var tmp_var_5;
    php::Float tmp_var_6 = 0;
    php::Array tmp_var_7;
    if (timeout.isInt()) {
        timeout = php::toFloat(timeout);
    }
    if (UNEXPECTED(!(timeout.isNull() || timeout.isFloat()))) {
        php::throwArgumentTypeError(timeout, get_str(708), 3, get_str(102), get_str(709));
    }

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
    tmp_var_1 = method;
    tmp_var_2 = params;
    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{101}, get_str(101), get_str(475)), php::AttrMode::Get);
    if (php::exists(timeout)) {
        tmp_var_4 = php::toFloat(timeout);
    } else {
        tmp_var_5 = php::Array{};
        tmp_var_4 = php::toFloat(php_nativeplaywright__page__timeoutseconds(this_, tmp_var_5));
        tmp_var_5.unset();
    }
    tmp_var_6 = php::toFloat(tmp_var_4);
    tmp_var_7 = (typephp_call_method_cached(tmp_var_0, get_str(661), get_method_call_cache(MethodCallCacheId{17}), php::VarList{tmp_var_1, tmp_var_2, php::deindirect(tmp_var_3), tmp_var_6}));
    tmp_var_0.unset();
    tmp_var_1.unset();
    tmp_var_2.unset();
    tmp_var_3.unset();
    return tmp_var_7;
}

php::Array php_nativeplaywright__page__sendmany(php::Object &this_, php::Array calls) {
    php::Var tmp_var_0;
    php::Array tmp_var_1;
    php::Var tmp_var_2;
    php::Array tmp_var_3;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
    tmp_var_1 = calls;
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{101}, get_str(101), get_str(475)), php::AttrMode::Get);
    tmp_var_3 = (typephp_call_method_cached(tmp_var_0, get_str(710), get_method_call_cache(MethodCallCacheId{18}), php::VarList{tmp_var_1, php::deindirect(tmp_var_2)}));
    tmp_var_0.unset();
    tmp_var_1.unset();
    tmp_var_2.unset();
    return tmp_var_3;
}

void php_nativeplaywright__page__releaseobject(php::Object &this_, php::Str objectId) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Object e;

    try {
        tmp_var_0 = php::Array{
            { get_str(712).str(), php::Var(objectId) }
        };
        php_nativeplaywright__page__send(this_, get_str(711), tmp_var_0);
        tmp_var_0.unset();
    } catch (zend_object *_ex) {
        tmp_var_1 = php::catchException();
        bool tmp_var_2 = false;
        if (!tmp_var_2 && tmp_var_1 && (php::instanceOf(tmp_var_1, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
            tmp_var_2 = true;
            e = tmp_var_1;
            tmp_var_1 = php::null;
        }
    }
    if (tmp_var_1) {
        php::throwException(php::Object(tmp_var_1));
    }
}

php::Var php_nativeplaywright__page__callon(php::Object &this_, php::Str objectId, php::Str fn) {
    php::Str tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;

    tmp_var_0 = fn;
    tmp_var_1 = php::Array{};
    tmp_var_2 = (php_nativeplaywright__page__callfunction(this_, tmp_var_0, tmp_var_1, objectId));
    tmp_var_0.unset();
    tmp_var_1.unset();
    return tmp_var_2;
}

php::Var php_nativeplaywright__page__callfunction(php::Object &this_, php::Str fn, php::Array args, php::Str objectId, php::Int contextId) {
    php::Str wrapped;
    php::Var tmp_var_0;
    php::Array p;
    php::Array r;
    php::Array d;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Object tmp_var_10;
    php::Var tmp_var_11;
    zend_class_entry *tmp_var_1 = get_persistent_class(PersistentClassId{0}, get_str(75));
    Z_PTR_P(tmp_var_10.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    tmp_var_0 = php::concat({get_str(4), get_str(5), get_str(6), get_str(7), get_str(8), get_str(9), get_str(10), get_str(11), get_str(12), get_str(13), get_str(14)});
    wrapped = php::concat({get_str(714), tmp_var_0, get_str(715), fn, get_str(716)});
    tmp_var_0.unset();
    p = php::Array{
        { get_str(717).str(), php::Var(wrapped) }, 
        { get_str(718).str(), php::Var(args) }, 
        { get_str(719).str(), php::Var(true) }, 
        { get_str(720).str(), php::Var(true) }
    };
    if (php::toBool(!(php::same(objectId, php::empty_string)))) {
        p.item(get_str(712), true) = objectId;
    } else {
        p.item(get_str(721), true) = contextId;
    }
    r = php_nativeplaywright__page__send(this_, get_str(722), p);
    if (php::toBool(php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(723))}}))) {
        d = php::toArray(r.get(get_str(723)));
        if (php::exists(d, {{php::ArrayDimFetch, php::Var(get_str(725))}, {php::ArrayDimFetch, php::Var(get_str(420))}}, tmp_var_3)) {
            tmp_var_2 = tmp_var_3;
        } else {
            if (php::exists(d, {{php::ArrayDimFetch, php::Var(get_str(329))}}, tmp_var_5)) {
            tmp_var_4 = tmp_var_5;
        } else {
            tmp_var_4 = get_str(113);
        }
            tmp_var_2 = tmp_var_4;
        }
        tmp_var_6 = php::toString(tmp_var_2);
        tmp_var_7 = php::concat({get_str(724), tmp_var_6});
        tmp_var_6.unset();
        tmp_var_8 = php::newObject(tmp_var_1, php::VarList{tmp_var_7});
        tmp_var_7.unset();
        php::throwValue(php::takeValue(tmp_var_8));
    }
    tmp_var_9 = php::toArray(r.get(get_str(131)));
    tmp_var_11 = (php_nativeplaywright__util__remotevalue(tmp_var_10, tmp_var_9));
    tmp_var_9.unset();
    return tmp_var_11;
}

php::Float php_nativeplaywright__page__timeoutseconds(php::Object &this_, php::Array options) {
    php::Float tmp_var_0 = 0;
    php::Float tmp_var_1 = 0;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;

    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(102))}}))) {
        tmp_var_0 = php::toFloat(options.get(get_str(102)));
        tmp_var_1 = (php::toFloat(((tmp_var_0) / (php::toFloat(1000L)))));
        return tmp_var_1;
    }
    tmp_var_5 = (this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{102}, get_str(726), get_str(475)), php::AttrMode::Isset) : php::Var{});
    if (php::exists(tmp_var_5)) {
        tmp_var_2 = tmp_var_5;
    } else {
        tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
        php::Object tmp_var_4 = tmp_var_3;
        tmp_var_2 = php_nativeplaywright__browsercontext__defaulttimeoutms(tmp_var_4);
        tmp_var_3.unset();
    }
    tmp_var_6 = tmp_var_2;
    tmp_var_5.unset();
    tmp_var_7 = (((php::Var(tmp_var_6)) / (php::Var(1000L))));
    if (UNEXPECTED(!((tmp_var_7.isFloat() || tmp_var_7.isInt())))) {
        php::throwReturnTypeError(tmp_var_7, get_str(728), get_str(103), true);
    }
    return php::toFloat(tmp_var_7);
    tmp_var_6.unset();
}

php::Float php_nativeplaywright__page__navigationtimeoutseconds(php::Object &this_, php::Array options) {
    php::Float tmp_var_0 = 0;
    php::Float tmp_var_1 = 0;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;

    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(102))}}))) {
        tmp_var_0 = php::toFloat(options.get(get_str(102)));
        tmp_var_1 = (php::toFloat(((tmp_var_0) / (php::toFloat(1000L)))));
        return tmp_var_1;
    }
    tmp_var_7 = (this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{104}, get_str(729), get_str(475)), php::AttrMode::Isset) : php::Var{});
    if (php::exists(tmp_var_7)) {
        tmp_var_2 = tmp_var_7;
    } else {
        tmp_var_6 = (this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{102}, get_str(726), get_str(475)), php::AttrMode::Isset) : php::Var{});
        if (php::exists(tmp_var_6)) {
        tmp_var_3 = tmp_var_6;
    } else {
        tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
        php::Object tmp_var_5 = tmp_var_4;
        tmp_var_3 = php_nativeplaywright__browsercontext__defaultnavigationtimeoutms(tmp_var_5);
        tmp_var_4.unset();
    }
        tmp_var_2 = tmp_var_3;
        tmp_var_6.unset();
    }
    tmp_var_8 = tmp_var_2;
    tmp_var_7.unset();
    tmp_var_9 = (((php::Var(tmp_var_8)) / (php::Var(1000L))));
    if (UNEXPECTED(!((tmp_var_9.isFloat() || tmp_var_9.isInt())))) {
        php::throwReturnTypeError(tmp_var_9, get_str(731), get_str(103), true);
    }
    return php::toFloat(tmp_var_9);
    tmp_var_8.unset();
}

void php_nativeplaywright__page__setdefaulttimeout(php::Object &this_, php::Float ms) {
    this_.attr(get_persistent_prop(PersistentPropertyId{102}, get_str(726), get_str(475)), php::AttrMode::Update) = ms;
}

void php_nativeplaywright__page__setdefaultnavigationtimeout(php::Object &this_, php::Float ms) {
    this_.attr(get_persistent_prop(PersistentPropertyId{104}, get_str(729), get_str(475)), php::AttrMode::Update) = ms;
}

void php_nativeplaywright__page__waitforcondition(php::Object &this_, php::Object cond, php::Float timeout, php::Str what) {
    php::Var deadline;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Float left = 0;
    zend_function * tmp_var_4;
    php::Var tmp_var_5;
    zend_function * tmp_var_7;
    php::Str tmp_var_8;
    zend_function * tmp_var_9;
    php::Int tmp_var_10 = 0;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var w;
    php::Var tmp_var_13;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Object e;
    zend_function * tmp_var_20;
    php::Str tmp_var_21;
    zend_function * tmp_var_22;
    php::Int tmp_var_23 = 0;
    php::Var tmp_var_24;
    php::Var tmp_var_25;
    zend_class_entry *tmp_var_3 = get_persistent_class(PersistentClassId{0}, get_str(75));
    zend_class_entry *tmp_var_6 = get_persistent_class(PersistentClassId{6}, get_str(159));

    deadline = [&]() -> php::Var {
        if (php::toBool(((timeout) > (php::toFloat(0L))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{92}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{92}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{92}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            tmp_var_1 = php::call(tmp_var_0, php::VarList{true});
            tmp_var_2 = ((php::Var(tmp_var_1)) + (php::Var(timeout)));
            tmp_var_1.unset();
            return tmp_var_2;
        } else {
            return php::Var(0.0);
        }
    }();

    while (php::toBool(!(php::toBool(typephp_call_cached(cond, get_function_call_cache(FunctionCallCacheId{10})))))) {
        if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{105}, get_str(76), get_str(475)), php::AttrMode::Get))) {
            php::throwException(php::newObject(tmp_var_3, php::VarList{php::concat({what, get_str(77)})}));
        }
        left = php::toFloat(0.0);
        if (php::toBool(((php::Var(deadline)) > (php::Var(0L))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{93}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{93}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_4 = get_function_resolution_cache(FunctionResolutionCacheId{93}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            tmp_var_5 = php::call(tmp_var_4, php::VarList{true});
            left = php::toFloat(((php::Var(deadline)) - (php::Var(tmp_var_5))));
            tmp_var_5.unset();
            if (php::toBool(((left) <= (php::toFloat(0L))))) {
                if (get_function_resolution_cache(FunctionResolutionCacheId{94}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{94}) = php::fn::function_exists(get_str(153)) ? 1 : 2; }
                tmp_var_7 = get_function_resolution_cache(FunctionResolutionCacheId{94}) == 1 ? get_func(RequestFuncId{6}, get_str(153)) : get_persistent_func(PersistentFuncId{6}, get_str(154));
                tmp_var_8 = what;
                if (get_function_resolution_cache(FunctionResolutionCacheId{95}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{95}) = php::fn::function_exists(get_str(156)) ? 1 : 2; }
                tmp_var_9 = get_function_resolution_cache(FunctionResolutionCacheId{95}) == 1 ? get_func(RequestFuncId{7}, get_str(156)) : get_persistent_func(PersistentFuncId{7}, get_str(157));
                tmp_var_10 = php::toInt(php::call(tmp_var_9, php::VarList{((timeout) * (php::toFloat(1000L)))}));
                tmp_var_11 = php::call(tmp_var_7, php::VarList{get_str(155), tmp_var_8, tmp_var_10});
                tmp_var_8.unset();
                tmp_var_12 = php::newObject(tmp_var_6, php::VarList{tmp_var_11});
                tmp_var_11.unset();
                php::throwValue(php::takeValue(tmp_var_12));
            }
        }
        tmp_var_13 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
        w = typephp_call_method_cached(tmp_var_13, get_str(117), get_method_call_cache(MethodCallCacheId{19}));
        tmp_var_13.unset();
        [&]() -> php::Var {
        auto&& tmp_var_14 = this_.attr(get_persistent_prop(PersistentPropertyId{106}, get_str(732), get_str(475)), php::AttrMode::Update);
        php::Var tmp_var_15 = php::null;
        php::Var tmp_var_16 = w;
        tmp_var_14.append(tmp_var_16);
        return tmp_var_16;
        }();
        try {
            tmp_var_17 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
            typephp_call_method_cached(tmp_var_17, get_str(122), get_method_call_cache(MethodCallCacheId{20}), php::VarList{w, left, what});
            tmp_var_17.unset();
        } catch (zend_object *_ex) {
            tmp_var_18 = php::catchException();
            bool tmp_var_19 = false;
            if (!tmp_var_19 && tmp_var_18 && (php::instanceOf(tmp_var_18, get_persistent_class(PersistentClassId{6}, get_str(159))))) {
                tmp_var_19 = true;
                e = tmp_var_18;
                tmp_var_18 = php::null;
                if (php::toBool(!(php::toBool(typephp_call_cached(cond, get_function_call_cache(FunctionCallCacheId{11})))))) {
                    if (get_function_resolution_cache(FunctionResolutionCacheId{96}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{96}) = php::fn::function_exists(get_str(153)) ? 1 : 2; }
                    tmp_var_20 = get_function_resolution_cache(FunctionResolutionCacheId{96}) == 1 ? get_func(RequestFuncId{6}, get_str(153)) : get_persistent_func(PersistentFuncId{6}, get_str(154));
                    tmp_var_21 = what;
                    if (get_function_resolution_cache(FunctionResolutionCacheId{97}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{97}) = php::fn::function_exists(get_str(156)) ? 1 : 2; }
                    tmp_var_22 = get_function_resolution_cache(FunctionResolutionCacheId{97}) == 1 ? get_func(RequestFuncId{7}, get_str(156)) : get_persistent_func(PersistentFuncId{7}, get_str(157));
                    tmp_var_23 = php::toInt(php::call(tmp_var_22, php::VarList{((timeout) * (php::toFloat(1000L)))}));
                    tmp_var_24 = php::call(tmp_var_20, php::VarList{get_str(155), tmp_var_21, tmp_var_23});
                    tmp_var_21.unset();
                    tmp_var_25 = php::newObject(tmp_var_6, php::VarList{tmp_var_24});
                    tmp_var_24.unset();
                    php::throwValue(php::takeValue(tmp_var_25));
                }
            }
        }
        if (tmp_var_18) {
            php::throwException(php::Object(tmp_var_18));
        }
    }
}

void php_nativeplaywright__page__poke(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Bool tmp_var_2 = 0;
    php::Array ws;
    php::Var w;
    zend_class_entry *tmp_var_4 = get_persistent_class(PersistentClassId{14}, get_str(475));

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{106}, get_str(732), get_str(475)), php::AttrMode::Get);
    tmp_var_1 = php::Array{};
    tmp_var_2 = php::toBool(php::same(tmp_var_0, tmp_var_1));
    tmp_var_0.unset();
    tmp_var_1.unset();
    if (php::toBool(tmp_var_2)) {
        return;
    }
    ws = this_.attr(get_persistent_prop(PersistentPropertyId{106}, get_str(732), get_str(475)), php::AttrMode::Get);
    this_.attr(get_persistent_prop(PersistentPropertyId{106}, get_str(732), get_str(475)), php::AttrMode::Update) = php::Array{};
    {
        php::ForeachIterator tmp_var_3{ws, false, tmp_var_4};
        while (tmp_var_3.nextValue(w)) {
            typephp_call_method_cached(w, get_str(136), get_method_call_cache(MethodCallCacheId{21}), php::VarList{true});
        }
    }
}

void php_nativeplaywright__page__afteraction(php::Object &this_) {
    php::Var slow;
    php::Var tmp_var_0;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{107}, get_str(694), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    slow = php_nativeplaywright__browser__slowmo(tmp_var_1);
    tmp_var_0.unset();
    if (php::toBool(((php::Var(slow)) > (php::Var(0L))))) {
        php_nativeplaywright__page__waitfortimeout(this_, php::toFloatArgExact(slow, get_str(734), 1, get_str(735)));
    }
}

void php_nativeplaywright__page__initialize(php::Object &this_, php::Var frameTree) {
    php::Object ctx;
    php::Array o;
    php::Array calls;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Int tmp_var_7 = 0;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Int tmp_var_10 = 0;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var c;
    php::Var tmp_var_16;
    php::Var src;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Var name;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    php::Var tmp_var_25;
    php::Var tmp_var_26;
    php::Var tmp_var_27;
    php::Var tmp_var_28;
    php::Var tmp_var_29;
    php::Var res;
    php::Var tmp_var_30;
    php::Array tmp_var_31;
    php::Var tmp_var_32;
    php::Var tmp_var_33;
    php::Var tmp_var_34;
    php::Var tmp_var_35;
    zend_class_entry *tmp_var_15 = get_persistent_class(PersistentClassId{14}, get_str(475));
    if (UNEXPECTED(!(frameTree.isNull() || frameTree.isArray()))) {
        php::throwArgumentTypeError(frameTree, get_str(762), 1, get_str(761), get_str(91));
    }

    ctx = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    o = php_nativeplaywright__browsercontext__options(ctx);
    tmp_var_0 = php::Array{
            php::Var(get_str(737))
        };
    tmp_var_1 = php::Array{
            php::Var(get_str(738))
        };
    tmp_var_2 = php::Array{
                { get_str(740).str(), php::Var(true) }
            };
    tmp_var_3 = php::Array{
            php::Var(get_str(739)), 
            php::Var(tmp_var_2)
        };
    tmp_var_2.unset();
    tmp_var_4 = php::Array{
            php::Var(get_str(741))
        };
    if (php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(743))}}, tmp_var_6)) {
                    tmp_var_5 = tmp_var_6;
                } else {
                    tmp_var_5 = ((((16L) * (1024L))) * (1024L));
                }
    tmp_var_7 = php::toInt(tmp_var_5);
    if (php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(745))}}, tmp_var_9)) {
                    tmp_var_8 = tmp_var_9;
                } else {
                    tmp_var_8 = ((((8L) * (1024L))) * (1024L));
                }
    tmp_var_10 = php::toInt(tmp_var_8);
    tmp_var_11 = php::Array{
                { get_str(744).str(), php::Var(tmp_var_7) }, 
                { get_str(746).str(), php::Var(tmp_var_10) }
            };
    tmp_var_12 = php::Array{
            php::Var(get_str(742)), 
            php::Var(tmp_var_11)
        };
    tmp_var_11.unset();
    calls = php::Array{
        php::Var(tmp_var_0), 
        php::Var(tmp_var_1), 
        php::Var(tmp_var_3), 
        php::Var(tmp_var_4), 
        php::Var(tmp_var_12)
    };
    tmp_var_0.unset();
    tmp_var_1.unset();
    tmp_var_3.unset();
    tmp_var_4.unset();
    tmp_var_12.unset();

    tmp_var_13 = php_nativeplaywright__page__emulationcalls(this_);
    {
        php::ForeachIterator tmp_var_14{tmp_var_13, false, tmp_var_15};
        while (tmp_var_14.next()) {
            c = tmp_var_14.value();
            calls.appendValue(c);
        }
    }

    tmp_var_16 = php_nativeplaywright__browsercontext__initscripts(ctx);
    {
        php::ForeachIterator tmp_var_17{tmp_var_16, false, tmp_var_15};
        while (tmp_var_17.next()) {
            src = tmp_var_17.value();
            tmp_var_18 = php::Array{
                    { get_str(750).str(), php::Var(src) }
                };
            ((tmp_var_19 = php::Array{
                php::Var(get_str(749)), 
                php::Var(tmp_var_18)
            }, calls.append(tmp_var_19)), tmp_var_19);
            tmp_var_18.unset();
        }
    }

    tmp_var_20 = php_nativeplaywright__browsercontext__bindingnames(ctx);
    {
        php::ForeachIterator tmp_var_21{tmp_var_20, false, tmp_var_15};
        while (tmp_var_21.next()) {
            name = tmp_var_21.value();
            tmp_var_22 = php::Array{
                    { get_str(255).str(), php::Var(php::concat({get_str(753), php::toString(name)})) }
                };
            ((tmp_var_23 = php::Array{
                php::Var(get_str(752)), 
                php::Var(tmp_var_22)
            }, calls.append(tmp_var_23)), tmp_var_23);
            tmp_var_22.unset();
            tmp_var_24 = php_nativeplaywright__page__bindingscript(this_, php::toStringArgExact(name, get_str(754), 1, get_str(255)));
            tmp_var_25 = php::Array{
                    { get_str(750).str(), php::Var(tmp_var_24) }
                };
            tmp_var_24.unset();
            ((tmp_var_26 = php::Array{
                php::Var(get_str(749)), 
                php::Var(tmp_var_25)
            }, calls.append(tmp_var_26)), tmp_var_26);
            tmp_var_25.unset();
        }
    }
    if (php::toBool(php_nativeplaywright__page__needsinterception(this_))) {
        tmp_var_27 = php_nativeplaywright__page__fetchparams(this_);
        ((tmp_var_28 = php::Array{
            php::Var(get_str(756)), 
            php::Var(tmp_var_27)
        }, calls.append(tmp_var_28)), tmp_var_28);
        tmp_var_27.unset();
        this_.attr(get_persistent_prop(PersistentPropertyId{108}, get_str(758), get_str(475)), php::AttrMode::Update) = true;
    }
    ((tmp_var_29 = php::Array{
        php::Var(get_str(759))
    }, calls.append(tmp_var_29)), tmp_var_29);
    tmp_var_30 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
    tmp_var_31 = calls;
    tmp_var_32 = this_.attr(get_persistent_prop(PersistentPropertyId{101}, get_str(101), get_str(475)), php::AttrMode::Get);
    res = typephp_call_method_cached(tmp_var_30, get_str(710), get_method_call_cache(MethodCallCacheId{22}), php::VarList{tmp_var_31, php::deindirect(tmp_var_32), true});
    tmp_var_30.unset();
    tmp_var_31.unset();
    tmp_var_32.unset();
    if (php::exists(res, {{php::ArrayDimFetch, php::Var(1L)}, {php::ArrayDimFetch, php::Var(get_str(761))}}, tmp_var_34)) {
        tmp_var_33 = tmp_var_34;
    } else {
        tmp_var_33 = php::Array{};
    }
    tmp_var_35 = php::toArray(tmp_var_33);
    php_nativeplaywright__page__loadframetree(this_, tmp_var_35);
    tmp_var_35.unset();
}

php::Array php_nativeplaywright__page__emulationcalls(php::Object &this_) {
    php::Var o;
    php::Var tmp_var_0;
    php::Array calls;
    php::Var vp;
    zend_function * tmp_var_2;
    zend_function * tmp_var_3;
    php::Int tmp_var_4 = 0;
    php::Int tmp_var_5 = 0;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_9;
    php::Bool tmp_var_10 = 0;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Bool tmp_var_14 = 0;
    php::Bool tmp_var_15 = 0;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Str ua;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Array ua_p;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    php::Var tmp_var_25;
    php::Var tmp_var_26;
    php::Var tmp_var_27;
    php::Var tmp_var_28;
    php::Var tmp_var_29;
    php::Var geo;
    php::Var tmp_var_30;
    php::Float tmp_var_32 = 0;
    php::Float tmp_var_33 = 0;
    php::Var tmp_var_34;
    php::Var tmp_var_35;
    php::Float tmp_var_36 = 0;
    php::Var tmp_var_37;
    php::Var tmp_var_38;
    php::Var tmp_var_39;
    php::Var tmp_var_40;
    php::Var tmp_var_41;
    php::Var tmp_var_42;
    php::Var tmp_var_43;
    php::Var tmp_var_44;
    php::Var tmp_var_45;
    php::Var tmp_var_46;
    php::Var tmp_var_47;
    php::Var tmp_var_48;
    php::Var tmp_var_49;
    zend_function * tmp_var_50;
    php::Var tmp_var_51;
    php::Var tmp_var_52;
    php::Bool tmp_var_53 = 0;
    php::Bool tmp_var_54 = 0;
    php::Var tmp_var_55;
    php::Var tmp_var_56;
    php::Var tmp_var_57;
    php::Var tmp_var_58;
    php::Var tmp_var_59;
    php::Var tmp_var_60;
    php::Var headers;
    php::Var tmp_var_61;
    php::Var tmp_var_63;
    php::Bool tmp_var_64 = 0;
    php::Var tmp_var_65;
    php::Var tmp_var_66;
    php::Var tmp_var_67;
    php::Var tmp_var_69;
    php::Var tmp_var_70;
    php::Var tmp_var_71;
    zend_class_entry *tmp_var_8 = get_persistent_class(PersistentClassId{14}, get_str(475));

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    o = php_nativeplaywright__browsercontext__options(tmp_var_1);
    tmp_var_0.unset();
    calls = php::Array{};
    vp = [&]() -> php::Var {
        if (get_function_resolution_cache(FunctionResolutionCacheId{98}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{98}) = php::fn::function_exists(get_str(641)) ? 1 : 2; }
        tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{98}) == 1 ? get_func(RequestFuncId{38}, get_str(641)) : get_persistent_func(PersistentFuncId{42}, get_str(642));
        if (php::toBool(php::call(tmp_var_2, php::VarList{get_str(763), o}))) {
            return php::Var(o.item(get_str(763), false));
        } else {
            return php::Var(php::Array{
        { get_str(764).str(), php::Var(1280L) }, 
        { get_str(765).str(), php::Var(720L) }
    });
        }
    }();
    ((tmp_var_7 = ([&]() -> php::Var {
        tmp_var_6 = [&]() -> php::Var {
        if (get_function_resolution_cache(FunctionResolutionCacheId{99}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{99}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
        tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{99}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
        if (php::toBool(php::call(tmp_var_3, php::VarList{vp}))) {
            tmp_var_4 = php::toInt(vp.item(get_str(764), false));
            tmp_var_5 = php::toInt(vp.item(get_str(765), false));
            return php::Var(php::Array{
        { get_str(764).str(), php::Var(tmp_var_4) }, 
        { get_str(765).str(), php::Var(tmp_var_5) }
    });
        } else {
            return php::Var(php::null);
        }
    }();
        if (UNEXPECTED(!(tmp_var_6.isNull() || tmp_var_6.isArray()))) {
            php::throwExceptionEx(zend_ce_type_error, 0, "NativePlaywright\\Page::$viewport must be of type ?array, %s given", tmp_var_6.typeStr());
        }
        return tmp_var_6;
    }()), typephp_write_property_scoped(this_, get_str(763), tmp_var_7, tmp_var_8)), tmp_var_7);
    tmp_var_9 = this_.attr(get_persistent_prop(PersistentPropertyId{109}, get_str(763), get_str(475)), php::AttrMode::Get);
    tmp_var_10 = php::toBool(!(php::same(tmp_var_9, php::null)));
    tmp_var_9.unset();
    if (php::toBool(tmp_var_10)) {
        tmp_var_11 = this_.attr(get_persistent_prop(PersistentPropertyId{109}, get_str(763), get_str(475)), php::AttrMode::Get);
        tmp_var_12 = php_nativeplaywright__page__metrics(this_, php::deindirect(tmp_var_11));
        tmp_var_11.unset();
        ((tmp_var_13 = php::Array{
            php::Var(get_str(766)), 
            php::Var(tmp_var_12)
        }, calls.append(tmp_var_13)), tmp_var_13);
        tmp_var_12.unset();
    }
    tmp_var_14 = php::toBool(!(php::toBool(php::empty(o, {{php::ArrayDimFetch, php::Var(get_str(768))}}))));
    if (php::toBool((php::toBool(tmp_var_14) || php::toBool(!(php::toBool(php::empty(o, {{php::ArrayDimFetch, php::Var(get_str(769))}}))))))) {
        tmp_var_15 = php::toBool(!(php::toBool(php::empty(o, {{php::ArrayDimFetch, php::Var(get_str(768))}}))));
        tmp_var_16 = php::Array{
                { get_str(740).str(), php::Var(tmp_var_15) }, 
                { get_str(771).str(), php::Var(1L) }
            };
        ((tmp_var_17 = php::Array{
            php::Var(get_str(770)), 
            php::Var(tmp_var_16)
        }, calls.append(tmp_var_17)), tmp_var_17);
        tmp_var_16.unset();
    }
    if (php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(772))}}, tmp_var_19)) {
        tmp_var_18 = tmp_var_19;
    } else {
        tmp_var_20 = this_.attr(get_persistent_prop(PersistentPropertyId{107}, get_str(694), get_str(475)), php::AttrMode::Get);
        php::Object tmp_var_21 = tmp_var_20;
        tmp_var_18 = php_nativeplaywright__browser__defaultuseragent(tmp_var_21);
        tmp_var_20.unset();
    }
    ua = php::toString(tmp_var_18);
    ua_p = php::Array{
        { get_str(772).str(), php::Var(ua) }
    };
    if (php::toBool(php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(774))}}))) {
        ((tmp_var_22 = php::toString(o.item(get_str(774), false)), ua_p.item(get_str(775), true) = tmp_var_22), tmp_var_22);
    }
    ((tmp_var_23 = php::Array{
        php::Var(get_str(776)), 
        php::Var(ua_p)
    }, calls.append(tmp_var_23)), tmp_var_23);
    if (php::toBool(php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(774))}}))) {
        tmp_var_24 = php::toString(o.item(get_str(774), false));
        tmp_var_25 = php::Array{
                { get_str(774).str(), php::Var(tmp_var_24) }
            };
        tmp_var_24.unset();
        ((tmp_var_26 = php::Array{
            php::Var(get_str(777)), 
            php::Var(tmp_var_25)
        }, calls.append(tmp_var_26)), tmp_var_26);
        tmp_var_25.unset();
    }
    if (php::toBool(php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(778))}}))) {
        tmp_var_27 = php::toString(o.item(get_str(778), false));
        tmp_var_28 = php::Array{
                { get_str(778).str(), php::Var(tmp_var_27) }
            };
        tmp_var_27.unset();
        ((tmp_var_29 = php::Array{
            php::Var(get_str(779)), 
            php::Var(tmp_var_28)
        }, calls.append(tmp_var_29)), tmp_var_29);
        tmp_var_28.unset();
    }
    tmp_var_30 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_31 = tmp_var_30;
    geo = php_nativeplaywright__browsercontext__geolocation(tmp_var_31);
    tmp_var_30.unset();
    if (php::toBool(!(php::same(geo, php::null)))) {
        tmp_var_32 = php::toFloat(geo.item(get_str(782), false));
        tmp_var_33 = php::toFloat(geo.item(get_str(783), false));
        if (php::exists(geo, {{php::ArrayDimFetch, php::Var(get_str(784))}}, tmp_var_35)) {
                    tmp_var_34 = tmp_var_35;
                } else {
                    tmp_var_34 = 0L;
                }
        tmp_var_36 = php::toFloat(tmp_var_34);
        tmp_var_37 = php::Array{
                { get_str(782).str(), php::Var(tmp_var_32) }, 
                { get_str(783).str(), php::Var(tmp_var_33) }, 
                { get_str(784).str(), php::Var(tmp_var_36) }
            };
        ((tmp_var_38 = php::Array{
            php::Var(get_str(781)), 
            php::Var(tmp_var_37)
        }, calls.append(tmp_var_38)), tmp_var_38);
        tmp_var_37.unset();
    }
    if (php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(786))}}, tmp_var_40)) {
            tmp_var_39 = tmp_var_40;
        } else {
            tmp_var_39 = get_str(787);
        }
    tmp_var_41 = tmp_var_39;
    if (php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(788))}}, tmp_var_43)) {
            tmp_var_42 = tmp_var_43;
        } else {
            tmp_var_42 = php::null;
        }
    tmp_var_44 = tmp_var_42;
    if (php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(789))}}, tmp_var_46)) {
            tmp_var_45 = tmp_var_46;
        } else {
            tmp_var_45 = php::null;
        }
    tmp_var_47 = tmp_var_45;
    this_.attr(get_persistent_prop(PersistentPropertyId{110}, get_str(785), get_str(475)), php::AttrMode::Update) = php::Array{
        { get_str(786).str(), php::Var(tmp_var_41) }, 
        { get_str(788).str(), php::Var(tmp_var_44) }, 
        { get_str(789).str(), php::Var(tmp_var_47) }, 
        { get_str(785).str(), php::Var(php::null) }
    };
    tmp_var_41.unset();
    tmp_var_44.unset();
    tmp_var_47.unset();
    tmp_var_48 = php_nativeplaywright__page__mediaparams(this_);
    ((tmp_var_49 = php::Array{
        php::Var(get_str(790)), 
        php::Var(tmp_var_48)
    }, calls.append(tmp_var_49)), tmp_var_49);
    tmp_var_48.unset();
    if (get_function_resolution_cache(FunctionResolutionCacheId{100}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{100}) = php::fn::function_exists(get_str(641)) ? 1 : 2; }
    tmp_var_50 = get_function_resolution_cache(FunctionResolutionCacheId{100}) == 1 ? get_func(RequestFuncId{38}, get_str(641)) : get_persistent_func(PersistentFuncId{42}, get_str(642));
    tmp_var_51 = php::call(tmp_var_50, php::VarList{get_str(792), o});
    tmp_var_54 = php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_51)) {
            tmp_var_52 = o.item(get_str(792), false);
            tmp_var_53 = php::toBool(php::same(tmp_var_52, php::false_));
            tmp_var_52.unset();
            return php::toBool(tmp_var_53);
        }
        return false;
    }());
    tmp_var_51.unset();
    if (php::toBool(tmp_var_54)) {
        tmp_var_55 = php::Array{
                { get_str(109).str(), php::Var(true) }
            };
        ((tmp_var_56 = php::Array{
            php::Var(get_str(793)), 
            php::Var(tmp_var_55)
        }, calls.append(tmp_var_56)), tmp_var_56);
        tmp_var_55.unset();
    }
    if (php::toBool(!(php::toBool(php::empty(o, {{php::ArrayDimFetch, php::Var(get_str(794))}}))))) {
        tmp_var_57 = php::Array{
                { get_str(740).str(), php::Var(true) }
            };
        ((tmp_var_58 = php::Array{
            php::Var(get_str(795)), 
            php::Var(tmp_var_57)
        }, calls.append(tmp_var_58)), tmp_var_58);
        tmp_var_57.unset();
    }
    if (php::toBool(!(php::toBool(php::empty(o, {{php::ArrayDimFetch, php::Var(get_str(796))}}))))) {
        tmp_var_59 = php::Array{
                { get_str(798).str(), php::Var(true) }
            };
        ((tmp_var_60 = php::Array{
            php::Var(get_str(797)), 
            php::Var(tmp_var_59)
        }, calls.append(tmp_var_60)), tmp_var_60);
        tmp_var_59.unset();
    }
    tmp_var_61 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_62 = tmp_var_61;
    headers = php_nativeplaywright__browsercontext__extrahttpheaders(tmp_var_62);
    tmp_var_61.unset();
    tmp_var_63 = php::Array{};
    tmp_var_64 = php::toBool(!(php::same(headers, tmp_var_63)));
    tmp_var_63.unset();
    if (php::toBool(tmp_var_64)) {
        tmp_var_65 = php::Array{
                { get_str(543).str(), php::Var(php::toObject(headers)) }
            };
        ((tmp_var_66 = php::Array{
            php::Var(get_str(800)), 
            php::Var(tmp_var_65)
        }, calls.append(tmp_var_66)), tmp_var_66);
        tmp_var_65.unset();
    }
    tmp_var_67 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_68 = tmp_var_67;
    tmp_var_69 = php_nativeplaywright__browsercontext__isoffline(tmp_var_68);
    tmp_var_67.unset();
    if (php::toBool(tmp_var_69)) {
        tmp_var_70 = php::Array{
                { get_str(803).str(), php::Var(true) }, 
                { get_str(804).str(), php::Var(0L) }, 
                { get_str(805).str(), php::Var(-1L) }, 
                { get_str(806).str(), php::Var(-1L) }
            };
        ((tmp_var_71 = php::Array{
            php::Var(get_str(802)), 
            php::Var(tmp_var_70)
        }, calls.append(tmp_var_71)), tmp_var_71);
        tmp_var_70.unset();
    }
    return calls;
}

php::Array php_nativeplaywright__page__metrics(php::Object &this_, php::Array vp) {
    php::Var o;
    php::Var tmp_var_0;
    php::Array p;
    php::Int tmp_var_2 = 0;
    php::Int tmp_var_3 = 0;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Float tmp_var_6 = 0;
    php::Bool tmp_var_7 = 0;
    php::Var tmp_var_8;
    php::Var tmp_var_9;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    o = php_nativeplaywright__browsercontext__options(tmp_var_1);
    tmp_var_0.unset();
    tmp_var_2 = php::toInt(vp.get(get_str(764)));
    tmp_var_3 = php::toInt(vp.get(get_str(765)));
    if (php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(807))}}, tmp_var_5)) {
            tmp_var_4 = tmp_var_5;
        } else {
            tmp_var_4 = 1L;
        }
    tmp_var_6 = php::toFloat(tmp_var_4);
    tmp_var_7 = php::toBool(!(php::toBool(php::empty(o, {{php::ArrayDimFetch, php::Var(get_str(769))}}))));
    p = php::Array{
        { get_str(764).str(), php::Var(tmp_var_2) }, 
        { get_str(765).str(), php::Var(tmp_var_3) }, 
        { get_str(807).str(), php::Var(tmp_var_6) }, 
        { get_str(808).str(), php::Var(tmp_var_7) }
    };
    if (php::toBool(php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(809))}}))) {
        ((tmp_var_8 = php::toInt(o.item(get_str(809), false).item(get_str(764), false)), p.item(get_str(810), true) = tmp_var_8), tmp_var_8);
        ((tmp_var_9 = php::toInt(o.item(get_str(809), false).item(get_str(765), false)), p.item(get_str(811), true) = tmp_var_9), tmp_var_9);
    }
    return p;
}

php::Array php_nativeplaywright__page__mediaparams(php::Object &this_) {
    php::Array features;
    php::Var tmp_var_0;
    php::Var k;
    php::Var name;
    php::Var v;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Array tmp_var_9;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{14}, get_str(475));

    features = php::Array{};

    tmp_var_0 = php::Array{
        { get_str(786).str(), php::Var(get_str(812)) }, 
        { get_str(788).str(), php::Var(get_str(813)) }, 
        { get_str(789).str(), php::Var(get_str(814)) }
    };
    {
        php::ForeachIterator tmp_var_1{tmp_var_0, false, tmp_var_2};
        while (tmp_var_1.next()) {
            k = tmp_var_1.key();
            name = tmp_var_1.value();
            if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{110}, get_str(785), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(k)}}, tmp_var_4)) {
                tmp_var_3 = tmp_var_4;
            } else {
                tmp_var_3 = php::null;
            }
            v = tmp_var_3;
            if (php::toBool(!(php::same(v, php::null)))) {
                ((tmp_var_5 = php::Array{
                    { get_str(255).str(), php::Var(name) }, 
                    { get_str(109).str(), php::Var(php::toString(v)) }
                }, features.append(tmp_var_5)), tmp_var_5);
            }
        }
    }
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{110}, get_str(785), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(get_str(785))}}, tmp_var_7)) {
            tmp_var_6 = tmp_var_7;
        } else {
            tmp_var_6 = php::empty_string;
        }
    tmp_var_8 = php::toString(tmp_var_6);
    tmp_var_9 = (php::Array{
        { get_str(785).str(), php::Var(tmp_var_8) }, 
        { get_str(815).str(), php::Var(features) }
    });
    tmp_var_8.unset();
    return tmp_var_9;
}

void php_nativeplaywright__page__loadframetree(php::Object &this_, php::Array tree, php::Str parent) {
    php::Array f;
    php::Str id;
    php::Var frame;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Bool tmp_var_15 = 0;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    php::Var child;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{12}, get_str(326));
    zend_class_entry *tmp_var_3 = get_persistent_class(PersistentClassId{14}, get_str(475));

    if (php::toBool(!(php::toBool(php::exists(tree, {{php::ArrayDimFetch, php::Var(get_str(309))}}))))) {
        return;
    }
    f = php::toArray(tree.get(get_str(309)));
    id = php::toString(f.get(get_str(118)));
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(id)}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::newObject(tmp_var_2, php::VarList{this_, id, parent});
    }
    frame = tmp_var_0;
    typephp_write_property_cached(frame, get_str(817), parent, tmp_var_3, get_property_cache(PropertyCacheId{6}));
    if (php::exists(f, {{php::ArrayDimFetch, php::Var(get_str(203))}}, tmp_var_5)) {
        tmp_var_4 = tmp_var_5;
    } else {
        tmp_var_4 = php::empty_string;
    }
    tmp_var_6 = php::toString(tmp_var_4);
    if (php::exists(f, {{php::ArrayDimFetch, php::Var(get_str(818))}}, tmp_var_8)) {
        tmp_var_7 = tmp_var_8;
    } else {
        tmp_var_7 = php::empty_string;
    }
    tmp_var_9 = php::toString(tmp_var_7);
    ((tmp_var_10 = php::concat({tmp_var_6, tmp_var_9}), typephp_write_property_cached(frame, get_str(203), tmp_var_10, tmp_var_3, get_property_cache(PropertyCacheId{7}))), tmp_var_10);
    tmp_var_6.unset();
    tmp_var_9.unset();
    if (php::exists(f, {{php::ArrayDimFetch, php::Var(get_str(255))}}, tmp_var_12)) {
        tmp_var_11 = tmp_var_12;
    } else {
        tmp_var_11 = php::empty_string;
    }
    ((tmp_var_13 = php::toString(tmp_var_11), typephp_write_property_cached(frame, get_str(255), tmp_var_13, tmp_var_3, get_property_cache(PropertyCacheId{8}))), tmp_var_13);
    tmp_var_14 = typephp_read_property_cached(frame, get_str(819), php::AttrMode::Get, get_property_cache(PropertyCacheId{10}));
    tmp_var_15 = php::toBool(php::same(tmp_var_14, php::empty_string));
    tmp_var_14.unset();
    if (php::toBool(tmp_var_15)) {
        if (php::exists(f, {{php::ArrayDimFetch, php::Var(get_str(819))}}, tmp_var_17)) {
            tmp_var_16 = tmp_var_17;
        } else {
            tmp_var_16 = php::empty_string;
        }
        ((tmp_var_18 = php::toString(tmp_var_16), typephp_write_property_cached(frame, get_str(819), tmp_var_18, tmp_var_3, get_property_cache(PropertyCacheId{13}))), tmp_var_18);
    }
    [&]() -> php::Var {
    auto&& tmp_var_19 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Update);
    php::Var tmp_var_20 = id;
    php::Var tmp_var_21 = frame;
    static_cast<void>(tmp_var_19.item(tmp_var_20, true) = tmp_var_21);
    return tmp_var_21;
    }();
    if (php::toBool(php::same(parent, php::empty_string))) {
        this_.attr(get_persistent_prop(PersistentPropertyId{112}, get_str(820), get_str(475)), php::AttrMode::Update) = id;
    }
    if (php::exists(tree, {{php::ArrayDimFetch, php::Var(get_str(821))}}, tmp_var_23)) {
        tmp_var_22 = tmp_var_23;
    } else {
        tmp_var_22 = php::Array{};
    }

    tmp_var_24 = php::toArray(tmp_var_22);
    {
        php::ForeachIterator tmp_var_25{tmp_var_24, false, tmp_var_3};
        while (tmp_var_25.next()) {
            child = tmp_var_25.value();
            php_nativeplaywright__page__loadframetree(this_, php::toArray(child), id);
        }
    }
}

void php_nativeplaywright__page__onprotocolevent(php::Object &this_, php::Str method, php::Array p) {
    php::Str id;
    php::Str tmp_var_24;
    php::Var tmp_var_25;
    php::Var tmp_var_26;
    php::Var tmp_var_27;
    php::Var tmp_var_31;
    php::Array f;
    php::Str parent;
    php::Var tmp_var_32;
    php::Var tmp_var_33;
    php::Var frame;
    php::Var tmp_var_34;
    php::Var tmp_var_35;
    php::Var tmp_var_39;
    php::Var tmp_var_40;
    php::Var tmp_var_41;
    php::Var tmp_var_42;
    php::Var tmp_var_43;
    php::Var tmp_var_44;
    php::Var tmp_var_45;
    php::Var tmp_var_47;
    php::Var tmp_var_48;
    php::Var tmp_var_49;
    php::Var tmp_var_50;
    php::Var tmp_var_51;
    php::Var tmp_var_52;
    php::Var tmp_var_53;
    php::Var cid;
    php::Var child;
    php::Var tmp_var_55;
    php::Bool tmp_var_56 = 0;
    php::Var tmp_var_57;
    php::Var tmp_var_58;
    php::Var tmp_var_59;
    php::Var tmp_var_60;
    php::Var tmp_var_61;
    php::Var tmp_var_62;
    php::Var tmp_var_63;
    php::Bool tmp_var_64 = 0;
    php::Var tmp_var_65;
    php::Var tmp_var_66;
    php::Var tmp_var_67;
    php::Str name;
    php::Str loader;
    php::Var tmp_var_68;
    php::Var tmp_var_69;
    php::Bool tmp_var_70 = 0;
    php::Var tmp_var_71;
    php::Bool tmp_var_72 = 0;
    php::Object tmp_var_73;
    php::Var tmp_var_77;
    php::Var tmp_var_78;
    php::Bool tmp_var_79 = 0;
    php::Array c;
    php::Array aux;
    php::Var tmp_var_80;
    php::Var tmp_var_81;
    php::Str fid;
    php::Var tmp_var_82;
    php::Var tmp_var_83;
    php::Var tmp_var_84;
    php::Var tmp_var_85;
    php::Var tmp_var_89;
    php::Var tmp_var_90;
    php::Var tmp_var_91;
    php::Var tmp_var_92;
    php::Var tmp_var_93;
    php::Bool tmp_var_94 = 0;
    php::Var tmp_var_95;
    php::Bool tmp_var_96 = 0;
    php::Var tmp_var_97;
    php::Var tmp_var_98;
    php::Var tmp_var_100;
    php::Array d;
    php::Array ex;
    php::Var tmp_var_102;
    php::Var tmp_var_103;
    php::Str desc;
    php::Var tmp_var_104;
    php::Var tmp_var_105;
    php::Var tmp_var_106;
    php::Var tmp_var_107;
    php::Str first;
    zend_function * tmp_var_108;
    zend_function * tmp_var_109;
    php::Var tmp_var_110;
    php::Var tmp_var_111;
    php::Var tmp_var_112;
    php::Str msg;
    zend_function * tmp_var_113;
    php::Ref mm;
    php::Var tmp_var_114;
    php::Bool tmp_var_115 = 0;
    php::Object err;
    php::Var tmp_var_117;
    php::Var tmp_var_120;
    php::Var tmp_var_121;
    php::Int tmp_var_122 = 0;
    php::Var tmp_var_123;
    php::Var tmp_var_124;
    php::Var tmp_var_125;
    php::Bool tmp_var_126 = 0;
    php::Var tmp_var_127;
    php::Var req;
    php::Var tmp_var_128;
    php::Var tmp_var_129;
    php::Var tmp_var_130;
    php::Bool tmp_var_131 = 0;
    php::Var tmp_var_132;
    php::Var tmp_var_133;
    php::Var tmp_var_134;
    zend_function * tmp_var_135;
    php::Var tmp_var_136;
    php::Var tmp_var_137;
    php::Var tmp_var_138;
    php::Var tmp_var_139;
    php::Var tmp_var_140;
    php::Var tmp_var_141;
    zend_function * tmp_var_142;
    php::Var tmp_var_143;
    php::Object self;
    php::Var tmp_var_144;
    php::Var cred;
    php::Var tmp_var_146;
    php::Var tmp_var_148;
    zend_class_entry *tmp_var_23 = get_persistent_class(PersistentClassId{12}, get_str(326));
    zend_class_entry *tmp_var_46 = get_persistent_class(PersistentClassId{14}, get_str(475));
    zend_class_entry *tmp_var_116 = get_persistent_class(PersistentClassId{17}, get_str(514));
    zend_class_entry *tmp_var_119 = get_persistent_class(PersistentClassId{18}, get_str(517));

    php::Str tmp_var_0 = method;
    do {
        int tmp_var_1 = -1;
        bool tmp_var_2 = false;
        bool tmp_var_3 = false;
        if (!tmp_var_2 && !tmp_var_3) {
        tmp_var_3 = php::equals(tmp_var_0, get_str(822));
        }
        if (tmp_var_3) {
        tmp_var_2 = true;
        tmp_var_1 = 0;
        }
        bool tmp_var_4 = false;
        if (!tmp_var_2 && !tmp_var_4) {
        tmp_var_4 = php::equals(tmp_var_0, get_str(823));
        }
        if (tmp_var_4) {
        tmp_var_2 = true;
        tmp_var_1 = 1;
        }
        bool tmp_var_5 = false;
        if (!tmp_var_2 && !tmp_var_5) {
        tmp_var_5 = php::equals(tmp_var_0, get_str(824));
        }
        if (tmp_var_5) {
        tmp_var_2 = true;
        tmp_var_1 = 2;
        }
        bool tmp_var_6 = false;
        if (!tmp_var_2 && !tmp_var_6) {
        tmp_var_6 = php::equals(tmp_var_0, get_str(825));
        }
        if (tmp_var_6) {
        tmp_var_2 = true;
        tmp_var_1 = 3;
        }
        bool tmp_var_7 = false;
        if (!tmp_var_2 && !tmp_var_7) {
        tmp_var_7 = php::equals(tmp_var_0, get_str(826));
        }
        if (tmp_var_7) {
        tmp_var_2 = true;
        tmp_var_1 = 4;
        }
        bool tmp_var_8 = false;
        if (!tmp_var_2 && !tmp_var_8) {
        tmp_var_8 = php::equals(tmp_var_0, get_str(827));
        }
        if (tmp_var_8) {
        tmp_var_2 = true;
        tmp_var_1 = 5;
        }
        bool tmp_var_9 = false;
        if (!tmp_var_2 && !tmp_var_9) {
        tmp_var_9 = php::equals(tmp_var_0, get_str(828));
        }
        if (tmp_var_9) {
        tmp_var_2 = true;
        tmp_var_1 = 6;
        }
        bool tmp_var_10 = false;
        if (!tmp_var_2 && !tmp_var_10) {
        tmp_var_10 = php::equals(tmp_var_0, get_str(829));
        }
        if (tmp_var_10) {
        tmp_var_2 = true;
        tmp_var_1 = 7;
        }
        bool tmp_var_11 = false;
        if (!tmp_var_2 && !tmp_var_11) {
        tmp_var_11 = php::equals(tmp_var_0, get_str(830));
        }
        if (tmp_var_11) {
        tmp_var_2 = true;
        tmp_var_1 = 8;
        }
        bool tmp_var_12 = false;
        if (!tmp_var_2 && !tmp_var_12) {
        tmp_var_12 = php::equals(tmp_var_0, get_str(831));
        }
        if (tmp_var_12) {
        tmp_var_2 = true;
        tmp_var_1 = 9;
        }
        bool tmp_var_13 = false;
        if (!tmp_var_2 && !tmp_var_13) {
        tmp_var_13 = php::equals(tmp_var_0, get_str(832));
        }
        if (tmp_var_13) {
        tmp_var_2 = true;
        tmp_var_1 = 10;
        }
        bool tmp_var_14 = false;
        if (!tmp_var_2 && !tmp_var_14) {
        tmp_var_14 = php::equals(tmp_var_0, get_str(833));
        }
        if (tmp_var_14) {
        tmp_var_2 = true;
        tmp_var_1 = 11;
        }
        bool tmp_var_15 = false;
        if (!tmp_var_2 && !tmp_var_15) {
        tmp_var_15 = php::equals(tmp_var_0, get_str(834));
        }
        if (tmp_var_15) {
        tmp_var_2 = true;
        tmp_var_1 = 12;
        }
        bool tmp_var_16 = false;
        if (!tmp_var_2 && !tmp_var_16) {
        tmp_var_16 = php::equals(tmp_var_0, get_str(835));
        }
        if (tmp_var_16) {
        tmp_var_2 = true;
        tmp_var_1 = 13;
        }
        bool tmp_var_17 = false;
        if (!tmp_var_2 && !tmp_var_17) {
        tmp_var_17 = php::equals(tmp_var_0, get_str(836));
        }
        if (tmp_var_17) {
        tmp_var_2 = true;
        tmp_var_1 = 14;
        }
        bool tmp_var_18 = false;
        if (!tmp_var_2 && !tmp_var_18) {
        tmp_var_18 = php::equals(tmp_var_0, get_str(837));
        }
        if (tmp_var_18) {
        tmp_var_2 = true;
        tmp_var_1 = 15;
        }
        bool tmp_var_19 = false;
        if (!tmp_var_2 && !tmp_var_19) {
        tmp_var_19 = php::equals(tmp_var_0, get_str(838));
        }
        if (tmp_var_19) {
        tmp_var_2 = true;
        tmp_var_1 = 16;
        }
        bool tmp_var_20 = false;
        if (!tmp_var_2 && !tmp_var_20) {
        tmp_var_20 = php::equals(tmp_var_0, get_str(839));
        }
        if (tmp_var_20) {
        tmp_var_2 = true;
        tmp_var_1 = 17;
        }
        bool tmp_var_21 = false;
        if (!tmp_var_2 && !tmp_var_21) {
        tmp_var_21 = php::equals(tmp_var_0, get_str(840));
        }
        if (tmp_var_21) {
        tmp_var_2 = true;
        tmp_var_1 = 18;
        }
        bool tmp_var_22 = false;
        if (!tmp_var_2 && !tmp_var_22) {
        tmp_var_22 = php::equals(tmp_var_0, get_str(841));
        }
        if (tmp_var_22) {
        tmp_var_2 = true;
        tmp_var_1 = 19;
        }
        if (tmp_var_1 == 0) {
            id = php::toString(p.get(get_str(588)));
            if (php::toBool(!(php::toBool(php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(id)}}))))) {
                [&]() -> php::Var {
                auto&& tmp_var_28 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Update);
                php::Var tmp_var_29 = id;
                tmp_var_24 = id;
                if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(842))}}, tmp_var_26)) {
                    tmp_var_25 = tmp_var_26;
                } else {
                    tmp_var_25 = php::empty_string;
                }
                tmp_var_27 = php::toString(tmp_var_25);
                php::Var tmp_var_30 = php::newObject(tmp_var_23, php::VarList{this_, tmp_var_24, tmp_var_27});
                tmp_var_24.unset();
                tmp_var_27.unset();
                static_cast<void>(tmp_var_28.item(tmp_var_29, true) = tmp_var_30);
                return tmp_var_30;
                }();
                tmp_var_31 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Get).item(id, false);
                php_nativeplaywright__page__emit(this_, get_str(844), php::deindirect(tmp_var_31));
                tmp_var_31.unset();
            }
            break;
        }
        if (tmp_var_1 == 1) {
            f = php::toArray(p.get(get_str(309)));
            id = php::toString(f.get(get_str(118)));
            if (php::exists(f, {{php::ArrayDimFetch, php::Var(get_str(817))}}, tmp_var_33)) {
                tmp_var_32 = tmp_var_33;
            } else {
                tmp_var_32 = php::empty_string;
            }
            parent = php::toString(tmp_var_32);
            if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(id)}}, tmp_var_35)) {
                tmp_var_34 = tmp_var_35;
            } else {
                tmp_var_34 = php::null;
            }
            frame = tmp_var_34;
            if (php::toBool(php::same(frame, php::null))) {
                frame = php::newObject(tmp_var_23, php::VarList{this_, id, parent});
                [&]() -> php::Var {
                auto&& tmp_var_36 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Update);
                php::Var tmp_var_37 = id;
                php::Var tmp_var_38 = frame;
                static_cast<void>(tmp_var_36.item(tmp_var_37, true) = tmp_var_38);
                return tmp_var_38;
                }();
            }
            if (php::toBool(php::same(parent, php::empty_string))) {
                this_.attr(get_persistent_prop(PersistentPropertyId{112}, get_str(820), get_str(475)), php::AttrMode::Update) = id;
            }
            if (php::exists(f, {{php::ArrayDimFetch, php::Var(get_str(203))}}, tmp_var_40)) {
                tmp_var_39 = tmp_var_40;
            } else {
                tmp_var_39 = php::empty_string;
            }
            tmp_var_41 = php::toString(tmp_var_39);
            if (php::exists(f, {{php::ArrayDimFetch, php::Var(get_str(818))}}, tmp_var_43)) {
                tmp_var_42 = tmp_var_43;
            } else {
                tmp_var_42 = php::empty_string;
            }
            tmp_var_44 = php::toString(tmp_var_42);
            ((tmp_var_45 = php::concat({tmp_var_41, tmp_var_44}), typephp_write_property_cached(frame, get_str(203), tmp_var_45, tmp_var_46, get_property_cache(PropertyCacheId{14}))), tmp_var_45);
            tmp_var_41.unset();
            tmp_var_44.unset();
            if (php::exists(f, {{php::ArrayDimFetch, php::Var(get_str(255))}}, tmp_var_48)) {
                tmp_var_47 = tmp_var_48;
            } else {
                tmp_var_47 = php::empty_string;
            }
            ((tmp_var_49 = php::toString(tmp_var_47), typephp_write_property_cached(frame, get_str(255), tmp_var_49, tmp_var_46, get_property_cache(PropertyCacheId{15}))), tmp_var_49);
            if (php::exists(f, {{php::ArrayDimFetch, php::Var(get_str(819))}}, tmp_var_51)) {
                tmp_var_50 = tmp_var_51;
            } else {
                tmp_var_50 = php::empty_string;
            }
            ((tmp_var_52 = php::toString(tmp_var_50), typephp_write_property_cached(frame, get_str(819), tmp_var_52, tmp_var_46, get_property_cache(PropertyCacheId{16}))), tmp_var_52);

            tmp_var_53 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Get);
            {
                php::ForeachIterator tmp_var_54{tmp_var_53, false, tmp_var_46};
                while (tmp_var_54.next()) {
                    cid = tmp_var_54.key();
                    child = tmp_var_54.value();
                    tmp_var_55 = typephp_read_property_cached(child, get_str(817), php::AttrMode::Get, get_property_cache(PropertyCacheId{18}));
                    tmp_var_56 = php::toBool(php::same(tmp_var_55, id));
                    tmp_var_55.unset();
                    if (php::toBool(tmp_var_56)) {
                        php_nativeplaywright__page__detachframe(this_, php::toStringArgExact(cid, get_str(846), 1, get_str(118)));
                    }
                }
            }
            php_nativeplaywright__page__emit(this_, get_str(847), frame);
            php_nativeplaywright__page__poke(this_);
            break;
        }
        if (tmp_var_1 == 2) {
            if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(php::toString(p.get(get_str(588))))}}, tmp_var_58)) {
                tmp_var_57 = tmp_var_58;
            } else {
                tmp_var_57 = php::null;
            }
            frame = tmp_var_57;
            if (php::toBool(!(php::same(frame, php::null)))) {
                ((tmp_var_59 = php::toString(p.get(get_str(203))), typephp_write_property_cached(frame, get_str(203), tmp_var_59, tmp_var_46, get_property_cache(PropertyCacheId{21}))), tmp_var_59);
                tmp_var_60 = typephp_read_property_cached(frame, get_str(849), php::AttrMode::Get, get_property_cache(PropertyCacheId{23}));
                tmp_var_60;
                typephp_write_property_cached(frame, get_str(849), tmp_var_60 + 1, tmp_var_46, get_property_cache(PropertyCacheId{24}));
                php_nativeplaywright__page__emit(this_, get_str(847), frame);
                php_nativeplaywright__page__poke(this_);
            }
            break;
        }
        if (tmp_var_1 == 3) {
            if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(850))}}, tmp_var_62)) {
                tmp_var_61 = tmp_var_62;
            } else {
                tmp_var_61 = php::empty_string;
            }
            tmp_var_63 = tmp_var_61;
            tmp_var_64 = php::toBool(!(php::same(tmp_var_63, get_str(851))));
            tmp_var_63.unset();
            if (php::toBool(tmp_var_64)) {
                tmp_var_65 = php::toString(p.get(get_str(588)));
                php_nativeplaywright__page__detachframe(this_, tmp_var_65);
                tmp_var_65.unset();
                php_nativeplaywright__page__poke(this_);
            }
            break;
        }
        if (tmp_var_1 == 4) {
            if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(php::toString(p.get(get_str(588))))}}, tmp_var_67)) {
                tmp_var_66 = tmp_var_67;
            } else {
                tmp_var_66 = php::null;
            }
            frame = tmp_var_66;
            if (php::toBool(php::same(frame, php::null))) {
                break;
            }
            name = php::toString(p.get(get_str(255)));
            loader = php::toString(p.get(get_str(819)));
            if (php::toBool(php::same(name, get_str(852)))) {
                typephp_write_property_cached(frame, get_str(853), loader, tmp_var_46, get_property_cache(PropertyCacheId{25}));
                ((tmp_var_68 = php::Array{}, typephp_write_property_cached(frame, get_str(854), tmp_var_68, tmp_var_46, get_property_cache(PropertyCacheId{26}))), tmp_var_68);
            }
            tmp_var_69 = typephp_read_property_cached(frame, get_str(853), php::AttrMode::Get, get_property_cache(PropertyCacheId{28}));
            tmp_var_70 = php::toBool(php::same(tmp_var_69, loader));
            tmp_var_69.unset();
            if (php::toBool([&]() -> bool {
                if (!(php::toBool(tmp_var_70))) {
                    tmp_var_71 = typephp_read_property_cached(frame, get_str(853), php::AttrMode::Get, get_property_cache(PropertyCacheId{32}));
                    tmp_var_72 = php::toBool(php::same(tmp_var_71, php::empty_string));
                    tmp_var_71.unset();
                    return php::toBool(tmp_var_72);
                }
                return true;
            }())) {
                typephp_write_property_cached(frame, get_str(853), loader, tmp_var_46, get_property_cache(PropertyCacheId{35}));
                [&]() -> php::Var {
                tmp_var_73 = php::toObject(frame);
                auto&& tmp_var_74 = typephp_read_property_cached(tmp_var_73, get_str(854), php::AttrMode::Update, get_property_cache(PropertyCacheId{37}));
                php::Var tmp_var_75 = name;
                php::Var tmp_var_76 = true;
                (tmp_var_74.isArray() ? static_cast<void>(tmp_var_74.item(tmp_var_75, true) = tmp_var_76) : tmp_var_74.offsetSet(tmp_var_75, tmp_var_76));
                tmp_var_73.unset();
                return tmp_var_76;
                }();
            }
            tmp_var_77 = typephp_read_property_cached(frame, get_str(118), php::AttrMode::Get, get_property_cache(PropertyCacheId{39}));
            tmp_var_78 = this_.attr(get_persistent_prop(PersistentPropertyId{112}, get_str(820), get_str(475)), php::AttrMode::Get);
            tmp_var_79 = php::toBool(php::same(tmp_var_77, tmp_var_78));
            tmp_var_77.unset();
            tmp_var_78.unset();
            if (php::toBool(tmp_var_79)) {
                if (php::toBool(php::same(name, get_str(20)))) {
                    php_nativeplaywright__page__emit(this_, get_str(20), this_);
                } else {
                    if (php::toBool(php::same(name, get_str(855)))) {
                        php_nativeplaywright__page__emit(this_, get_str(856), this_);
                    }
                }
            }
            php_nativeplaywright__page__poke(this_);
            break;
        }
        if (tmp_var_1 == 5) {
            c = php::toArray(p.get(get_str(693)));
            if (php::exists(c, {{php::ArrayDimFetch, php::Var(get_str(857))}}, tmp_var_81)) {
                tmp_var_80 = tmp_var_81;
            } else {
                tmp_var_80 = php::Array{};
            }
            aux = php::toArray(tmp_var_80);
            if (php::exists(aux, {{php::ArrayDimFetch, php::Var(get_str(588))}}, tmp_var_83)) {
                tmp_var_82 = tmp_var_83;
            } else {
                tmp_var_82 = php::empty_string;
            }
            fid = php::toString(tmp_var_82);
            if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(fid)}}, tmp_var_85)) {
                tmp_var_84 = tmp_var_85;
            } else {
                tmp_var_84 = php::null;
            }
            frame = tmp_var_84;
            if (php::toBool((php::toBool(php::same(frame, php::null)) && php::toBool(!(php::same(fid, php::empty_string)))))) {
                frame = php::newObject(tmp_var_23, php::VarList{this_, fid, php::empty_string});
                [&]() -> php::Var {
                auto&& tmp_var_86 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Update);
                php::Var tmp_var_87 = fid;
                php::Var tmp_var_88 = frame;
                static_cast<void>(tmp_var_86.item(tmp_var_87, true) = tmp_var_88);
                return tmp_var_88;
                }();
            }
            if (php::toBool(!(php::same(frame, php::null)))) {
                if (php::toBool(!(php::toBool(php::empty(aux, {{php::ArrayDimFetch, php::Var(get_str(858))}}))))) {
                    ((tmp_var_89 = php::toInt(c.get(get_str(118))), typephp_write_property_cached(frame, get_str(859), tmp_var_89, tmp_var_46, get_property_cache(PropertyCacheId{42}))), tmp_var_89);
                } else {
                    if (php::exists(c, {{php::ArrayDimFetch, php::Var(get_str(255))}}, tmp_var_91)) {
                        tmp_var_90 = tmp_var_91;
                    } else {
                        tmp_var_90 = php::empty_string;
                    }
                    tmp_var_92 = tmp_var_90;
                    tmp_var_93 = get_str(15);
                    tmp_var_94 = php::toBool(php::same(tmp_var_92, tmp_var_93));
                    tmp_var_92.unset();
                    tmp_var_93.unset();
                    if (php::toBool([&]() -> bool {
                        if (php::toBool(tmp_var_94)) {
                            tmp_var_95 = typephp_read_property_cached(frame, get_str(860), php::AttrMode::Get, get_property_cache(PropertyCacheId{44}));
                            tmp_var_96 = php::toBool(php::same(tmp_var_95, 0L));
                            tmp_var_95.unset();
                            return php::toBool(tmp_var_96);
                        }
                        return false;
                    }())) {
                        ((tmp_var_97 = php::toInt(c.get(get_str(118))), typephp_write_property_cached(frame, get_str(860), tmp_var_97, tmp_var_46, get_property_cache(PropertyCacheId{47}))), tmp_var_97);
                    }
                }
                php_nativeplaywright__page__poke(this_);
            }
            break;
        }
        if (tmp_var_1 == 6) {
            cid = php::toInt(p.get(get_str(721)));

            tmp_var_98 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Get);
            {
                php::ForeachIterator tmp_var_99{tmp_var_98, false, tmp_var_46};
                while (tmp_var_99.next()) {
                    frame = tmp_var_99.value();
                    typephp_call_method_cached(frame, get_str(861), get_method_call_cache(MethodCallCacheId{23}), php::VarList{cid});
                }
            }
            break;
        }
        if (tmp_var_1 == 7) {

            tmp_var_100 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Get);
            {
                php::ForeachIterator tmp_var_101{tmp_var_100, false, tmp_var_46};
                while (tmp_var_101.next()) {
                    frame = tmp_var_101.value();
                    typephp_call_method_cached(frame, get_str(862), get_method_call_cache(MethodCallCacheId{24}));
                }
            }
            break;
        }
        if (tmp_var_1 == 8) {
            php_nativeplaywright__page__onconsole(this_, p);
            break;
        }
        if (tmp_var_1 == 9) {
            d = php::toArray(p.get(get_str(723)));
            if (php::exists(d, {{php::ArrayDimFetch, php::Var(get_str(725))}}, tmp_var_103)) {
                tmp_var_102 = tmp_var_103;
            } else {
                tmp_var_102 = php::Array{};
            }
            ex = php::toArray(tmp_var_102);
            if (php::exists(ex, {{php::ArrayDimFetch, php::Var(get_str(420))}}, tmp_var_105)) {
                tmp_var_104 = tmp_var_105;
            } else {
                if (php::exists(d, {{php::ArrayDimFetch, php::Var(get_str(329))}}, tmp_var_107)) {
                tmp_var_106 = tmp_var_107;
            } else {
                tmp_var_106 = php::empty_string;
            }
                tmp_var_104 = tmp_var_106;
            }
            desc = php::toString(tmp_var_104);
            if (get_function_resolution_cache(FunctionResolutionCacheId{101}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{101}) = php::fn::function_exists(get_str(864)) ? 1 : 2; }
            tmp_var_108 = get_function_resolution_cache(FunctionResolutionCacheId{101}) == 1 ? get_func(RequestFuncId{47}, get_str(864)) : get_persistent_func(PersistentFuncId{51}, get_str(865));
            if (get_function_resolution_cache(FunctionResolutionCacheId{102}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{102}) = php::fn::function_exists(get_str(447)) ? 1 : 2; }
            tmp_var_109 = get_function_resolution_cache(FunctionResolutionCacheId{102}) == 1 ? get_func(RequestFuncId{28}, get_str(447)) : get_persistent_func(PersistentFuncId{32}, get_str(448));
            tmp_var_110 = php::call(tmp_var_109, php::VarList{get_str(471), desc}).item(0L, false);
            first = php::toString(php::call(tmp_var_108, php::VarList{get_str(866), php::empty_string, php::deindirect(tmp_var_110)}));
            tmp_var_110.unset();
            if (php::exists(ex, {{php::ArrayDimFetch, php::Var(get_str(867))}}, tmp_var_112)) {
                tmp_var_111 = tmp_var_112;
            } else {
                tmp_var_111 = get_str(868);
            }
            name = php::toString(tmp_var_111);
            msg = first;
            if (get_function_resolution_cache(FunctionResolutionCacheId{103}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{103}) = php::fn::function_exists(get_str(194)) ? 1 : 2; }
            tmp_var_113 = get_function_resolution_cache(FunctionResolutionCacheId{103}) == 1 ? get_func(RequestFuncId{10}, get_str(194)) : get_persistent_func(PersistentFuncId{13}, get_str(195));
            tmp_var_114 = [&]() -> php::Var {
            if (get_function_resolution_cache(FunctionResolutionCacheId{103}) == 1) {
            return php::call(tmp_var_113, php::VarList{get_str(869), first, mm});
            }
            return php::call(tmp_var_113, php::VarList{get_str(869), first, &mm});
            }();
            tmp_var_115 = php::toBool(php::same(tmp_var_114, 1L));
            tmp_var_114.unset();
            if (php::toBool(tmp_var_115)) {
                name = mm.item(1L, false);
                msg = mm.item(2L, false);
            }
            err = php::newObject(tmp_var_116, php::VarList{name, msg, desc});
            php_nativeplaywright__page__emit(this_, get_str(870), err);
            tmp_var_117 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
            php::Object tmp_var_118 = tmp_var_117;
            php_nativeplaywright__browsercontext__emitfrompage(tmp_var_118, get_str(872), err);
            tmp_var_117.unset();
            break;
        }
        if (tmp_var_1 == 10) {
            php_nativeplaywright__page__onbindingcalled(this_, p);
            break;
        }
        if (tmp_var_1 == 11) {
            php_nativeplaywright__page__ondialog(this_, p);
            break;
        }
        if (tmp_var_1 == 12) {
            if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(521))}}, tmp_var_121)) {
                tmp_var_120 = tmp_var_121;
            } else {
                tmp_var_120 = 0L;
            }
            tmp_var_122 = php::toInt(tmp_var_120);
            if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(876))}}, tmp_var_124)) {
                tmp_var_123 = tmp_var_124;
            } else {
                tmp_var_123 = php::empty_string;
            }
            tmp_var_125 = tmp_var_123;
            tmp_var_126 = php::toBool(php::same(tmp_var_125, get_str(877)));
            tmp_var_125.unset();
            tmp_var_127 = php::newObject(tmp_var_119, php::VarList{this_, tmp_var_122, tmp_var_126});
            php_nativeplaywright__page__emit(this_, get_str(875), tmp_var_127);
            tmp_var_127.unset();
            break;
        }
        if (tmp_var_1 == 13) {
            php_nativeplaywright__page__onrequest(this_, p);
            break;
        }
        if (tmp_var_1 == 14) {
            php_nativeplaywright__page__onresponse(this_, p);
            break;
        }
        if (tmp_var_1 == 15) {
            if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{113}, get_str(880), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(php::toString(p.get(get_str(567))))}}, tmp_var_129)) {
                tmp_var_128 = tmp_var_129;
            } else {
                tmp_var_128 = php::null;
            }
            req = tmp_var_128;
            if (php::toBool(!(php::same(req, php::null)))) {
                this_.attr(get_persistent_prop(PersistentPropertyId{113}, get_str(880), get_str(475)), php::AttrMode::Get).offsetUnset(php::toString(p.get(get_str(567))));
                tmp_var_130 = typephp_read_property_cached(req, get_str(591), php::AttrMode::Get, get_property_cache(PropertyCacheId{49}));
                tmp_var_131 = php::toBool(!(php::same(tmp_var_130, php::null)));
                tmp_var_130.unset();
                if (php::toBool(tmp_var_131)) {
                    if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(881))}}, tmp_var_133)) {
                        tmp_var_132 = tmp_var_133;
                    } else {
                        tmp_var_132 = 0L;
                    }
                    ((tmp_var_134 = php::toInt(tmp_var_132), typephp_write_property_cached(typephp_read_property_cached(req, get_str(591), php::AttrMode::Get, get_property_cache(PropertyCacheId{53})), get_str(597), tmp_var_134, tmp_var_46, get_property_cache(PropertyCacheId{52}))), tmp_var_134);
                }
                typephp_write_property_cached(req, get_str(559), true, tmp_var_46, get_property_cache(PropertyCacheId{55}));
                if (get_function_resolution_cache(FunctionResolutionCacheId{104}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{104}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
                tmp_var_135 = get_function_resolution_cache(FunctionResolutionCacheId{104}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
                ((tmp_var_136 = php::call(tmp_var_135, php::VarList{true}), typephp_write_property_cached(req, get_str(594), tmp_var_136, tmp_var_46, get_property_cache(PropertyCacheId{56}))), tmp_var_136);
                php_nativeplaywright__page__emitboth(this_, get_str(883), req);
                php_nativeplaywright__page__poke(this_);
            }
            break;
        }
        if (tmp_var_1 == 16) {
            if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{113}, get_str(880), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(php::toString(p.get(get_str(567))))}}, tmp_var_138)) {
                tmp_var_137 = tmp_var_138;
            } else {
                tmp_var_137 = php::null;
            }
            req = tmp_var_137;
            if (php::toBool(!(php::same(req, php::null)))) {
                this_.attr(get_persistent_prop(PersistentPropertyId{113}, get_str(880), get_str(475)), php::AttrMode::Get).offsetUnset(php::toString(p.get(get_str(567))));
                if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(592))}}, tmp_var_140)) {
                    tmp_var_139 = tmp_var_140;
                } else {
                    tmp_var_139 = get_str(18);
                }
                ((tmp_var_141 = php::toString(tmp_var_139), typephp_write_property_cached(req, get_str(563), tmp_var_141, tmp_var_46, get_property_cache(PropertyCacheId{57}))), tmp_var_141);
                typephp_write_property_cached(req, get_str(559), true, tmp_var_46, get_property_cache(PropertyCacheId{58}));
                if (get_function_resolution_cache(FunctionResolutionCacheId{105}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{105}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
                tmp_var_142 = get_function_resolution_cache(FunctionResolutionCacheId{105}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
                ((tmp_var_143 = php::call(tmp_var_142, php::VarList{true}), typephp_write_property_cached(req, get_str(594), tmp_var_143, tmp_var_46, get_property_cache(PropertyCacheId{59}))), tmp_var_143);
                php_nativeplaywright__page__emitboth(this_, get_str(884), req);
                php_nativeplaywright__page__poke(this_);
            }
            break;
        }
        if (tmp_var_1 == 17) {
            self = this_;
            tmp_var_144 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
            php::ClosureFn tmp_var_145 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
            php::checkCallArgCount(0, 0, false);
                php::Object self = php::Object(vars_.get(0));
                php::Array p = php::toArray(vars_.get(1));
                php_nativeplaywright__page__onrequestpaused(self, p);
            return php::null;
            };
            typephp_call_method_cached(tmp_var_144, get_str(666), get_method_call_cache(MethodCallCacheId{25}), php::VarList{php::newClosureWithParameters(tmp_var_145, { self, p }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), {  }, php::ClosureStrictTypes::Enabled)});
            tmp_var_144.unset();
            break;
        }
        if (tmp_var_1 == 18) {
            self = this_;
            tmp_var_146 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
            php::Object tmp_var_147 = tmp_var_146;
            cred = php_nativeplaywright__browsercontext__httpcredentials(tmp_var_147);
            tmp_var_146.unset();
            tmp_var_148 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
            php::ClosureFn tmp_var_149 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
            php::checkCallArgCount(0, 0, false);
                php::Object self = php::Object(vars_.get(0));
                php::Array p = php::toArray(vars_.get(1));
                php::Var cred = vars_.get(2);
                php::Array resp;
                php::Var tmp_var_0;
                php::Var tmp_var_1;
                php::Array tmp_var_2;
                php::Var tmp_var_3;
                php::Var tmp_var_4;
                resp = [&]() -> php::Array {
                    if (php::toBool(php::same(cred, php::null))) {
                        return php::Array{
                    { get_str(591).str(), php::Var(get_str(887)) }
                };
                    } else {
                        tmp_var_0 = php::toString(cred.item(get_str(889), false));
                        tmp_var_1 = php::toString(cred.item(get_str(890), false));
                        tmp_var_2 = php::Array{
                    { get_str(591).str(), php::Var(get_str(888)) }, 
                    { get_str(889).str(), php::Var(tmp_var_0) }, 
                    { get_str(890).str(), php::Var(tmp_var_1) }
                };
                        tmp_var_0.unset();
                        tmp_var_1.unset();
                        return tmp_var_2;
                    }
                }();
                tmp_var_3 = p.get(get_str(567));
                tmp_var_4 = php::Array{
                    { get_str(567).str(), php::Var(tmp_var_3) }, 
                    { get_str(892).str(), php::Var(resp) }
                };
                tmp_var_3.unset();
                php_nativeplaywright__page__send(self, get_str(891), tmp_var_4);
                tmp_var_4.unset();
            return php::null;
            };
            typephp_call_method_cached(tmp_var_148, get_str(666), get_method_call_cache(MethodCallCacheId{26}), php::VarList{php::newClosureWithParameters(tmp_var_149, { self, p, cred }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), {  }, php::ClosureStrictTypes::Enabled)});
            tmp_var_148.unset();
            break;
        }
        if (tmp_var_1 == 19) {
            php_nativeplaywright__page__emit(this_, get_str(893), this_);
            break;
        }
    } while (0);
}

void php_nativeplaywright__page__detachframe(php::Object &this_, php::Str id) {
    php::Var f;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var cid;
    php::Var child;
    php::Var tmp_var_5;
    php::Bool tmp_var_6 = 0;
    zend_class_entry *tmp_var_4 = get_persistent_class(PersistentClassId{14}, get_str(475));

    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(id)}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::null;
    }
    f = tmp_var_0;
    if (php::toBool(php::same(f, php::null))) {
        return;
    }

    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_3{tmp_var_2, false, tmp_var_4};
        while (tmp_var_3.next()) {
            cid = tmp_var_3.key();
            child = tmp_var_3.value();
            tmp_var_5 = typephp_read_property_cached(child, get_str(817), php::AttrMode::Get, get_property_cache(PropertyCacheId{61}));
            tmp_var_6 = php::toBool(php::same(tmp_var_5, id));
            tmp_var_5.unset();
            if (php::toBool(tmp_var_6)) {
                php_nativeplaywright__page__detachframe(this_, php::toStringArgExact(cid, get_str(846), 1, get_str(118)));
            }
        }
    }
    typephp_write_property_cached(f, get_str(894), true, tmp_var_4, get_property_cache(PropertyCacheId{64}));
    this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Get).offsetUnset(id);
    php_nativeplaywright__page__emit(this_, get_str(895), f);
}

void php_nativeplaywright__page__emitboth(php::Object &this_, php::Str event, php::Var arg) {
    php::Var tmp_var_0;

    php_nativeplaywright__page__emit(this_, event, arg);
    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    php_nativeplaywright__browsercontext__emitfrompage(tmp_var_1, event, arg);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__onconsole(php::Object &this_, php::Array p) {
    php::Int tmp_var_0 = 0;
    php::Bool tmp_var_1 = 0;
    php::Var tmp_var_2;
    php::Bool tmp_var_4 = 0;
    php::Int cid = 0;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var f;
    php::Var tmp_var_10;
    php::Bool tmp_var_11 = 0;
    php::Array texts;
    php::Array values;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var a;
    zend_function * tmp_var_16;
    php::Var v;
    zend_function * tmp_var_17;
    zend_function * tmp_var_18;
    zend_function * tmp_var_19;
    zend_function * tmp_var_20;
    php::Var tmp_var_21;
    php::Object tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    php::Str d;
    php::Var tmp_var_25;
    php::Var tmp_var_26;
    php::Var tmp_var_27;
    php::Var tmp_var_28;
    php::Var tmp_var_29;
    php::Var tmp_var_30;
    php::Var tmp_var_31;
    php::Var tmp_var_32;
    php::Var tmp_var_33;
    php::Array frame0;
    php::Var tmp_var_34;
    php::Var tmp_var_35;
    php::Array loc;
    php::Var tmp_var_36;
    php::Var tmp_var_37;
    php::Var tmp_var_38;
    php::Var tmp_var_39;
    php::Var tmp_var_40;
    php::Int tmp_var_41 = 0;
    php::Var tmp_var_42;
    php::Var tmp_var_43;
    php::Int tmp_var_44 = 0;
    php::Str type;
    php::Object msg;
    php::Var tmp_var_46;
    zend_function * tmp_var_47;
    php::Var tmp_var_48;
    zend_class_entry *tmp_var_9 = get_persistent_class(PersistentClassId{14}, get_str(475));
    zend_class_entry *tmp_var_45 = get_persistent_class(PersistentClassId{19}, get_str(525));
    Z_PTR_P(tmp_var_22.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    tmp_var_0 = php::toInt(php_nativeplaywright__page__listenercount(this_, get_str(897)));
    tmp_var_1 = php::toBool(tmp_var_0 == 0L);
    if (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_1)) {
            tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
            php::Object tmp_var_3 = tmp_var_2;
            tmp_var_4 = php::toBool(!(php::toBool(php_nativeplaywright__browsercontext__haslisteners(tmp_var_3, get_str(897)))));
            tmp_var_2.unset();
            return php::toBool(tmp_var_4);
        }
        return false;
    }())) {
        return;
    }
    if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(721))}}, tmp_var_6)) {
        tmp_var_5 = tmp_var_6;
    } else {
        tmp_var_5 = 0L;
    }
    cid = php::toInt(tmp_var_5);

    tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_8{tmp_var_7, false, tmp_var_9};
        while (tmp_var_8.next()) {
            f = tmp_var_8.value();
            tmp_var_10 = typephp_read_property_cached(f, get_str(860), php::AttrMode::Get, get_property_cache(PropertyCacheId{66}));
            tmp_var_11 = php::toBool(php::same(tmp_var_10, cid));
            tmp_var_10.unset();
            if (php::toBool((php::toBool(tmp_var_11) && php::toBool(!(cid == 0L))))) {
                return;
            }
        }
    }
    texts = php::Array{};
    values = php::Array{};
    if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(526))}}, tmp_var_13)) {
        tmp_var_12 = tmp_var_13;
    } else {
        tmp_var_12 = php::Array{};
    }

    tmp_var_14 = php::toArray(tmp_var_12);
    {
        php::ForeachIterator tmp_var_15{tmp_var_14, false, tmp_var_9};
        while (tmp_var_15.next()) {
            a = tmp_var_15.value();
            a = php::toArray(a);
            if (get_function_resolution_cache(FunctionResolutionCacheId{106}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{106}) = php::fn::function_exists(get_str(641)) ? 1 : 2; }
            tmp_var_16 = get_function_resolution_cache(FunctionResolutionCacheId{106}) == 1 ? get_func(RequestFuncId{38}, get_str(641)) : get_persistent_func(PersistentFuncId{42}, get_str(642));
            if (php::toBool(php::call(tmp_var_16, php::VarList{get_str(109), a}))) {
                v = a.item(get_str(109), false);
                values.appendValue(v);
                ((tmp_var_21 = [&]() -> php::Str {
                    if (get_function_resolution_cache(FunctionResolutionCacheId{107}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{107}) = php::fn::function_exists(get_str(899)) ? 1 : 2; }
                    tmp_var_17 = get_function_resolution_cache(FunctionResolutionCacheId{107}) == 1 ? get_func(RequestFuncId{48}, get_str(899)) : get_persistent_func(PersistentFuncId{52}, get_str(900));
                    if (php::toBool(php::call(tmp_var_17, php::VarList{v}))) {
                        return (php::toBool(v)) ? (get_str(901)) : (get_str(902));
                    } else {
                        return [&]() -> php::Str {
                    if (get_function_resolution_cache(FunctionResolutionCacheId{108}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{108}) = php::fn::function_exists(get_str(903)) ? 1 : 2; }
                    tmp_var_18 = get_function_resolution_cache(FunctionResolutionCacheId{108}) == 1 ? get_func(RequestFuncId{49}, get_str(903)) : get_persistent_func(PersistentFuncId{53}, get_str(904));
                    if (php::toBool(php::call(tmp_var_18, php::VarList{v}))) {
                        return get_str(905);
                    } else {
                        return [&]() -> php::Str {
                    if (get_function_resolution_cache(FunctionResolutionCacheId{109}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{109}) = php::fn::function_exists(get_str(906)) ? 1 : 2; }
                    tmp_var_19 = get_function_resolution_cache(FunctionResolutionCacheId{109}) == 1 ? get_func(RequestFuncId{50}, get_str(906)) : get_persistent_func(PersistentFuncId{54}, get_str(907));
                    if (php::toBool(php::call(tmp_var_19, php::VarList{v}))) {
                        return php::toString(v);
                    } else {
                        if (get_function_resolution_cache(FunctionResolutionCacheId{110}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{110}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
                        tmp_var_20 = get_function_resolution_cache(FunctionResolutionCacheId{110}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
                        return php::toString(php::call(tmp_var_20, php::VarList{v}));
                    }
                }();
                    }
                }();
                    }
                }(), texts.append(tmp_var_21)), tmp_var_21);
            } else {
                if (php::toBool(php::exists(a, {{php::ArrayDimFetch, php::Var(get_str(244))}}))) {
                    ((tmp_var_23 = php_nativeplaywright__util__remotevalue(tmp_var_22, a), values.append(tmp_var_23)), tmp_var_23);
                    ((tmp_var_24 = php::toString(a.item(get_str(244), false)), texts.append(tmp_var_24)), tmp_var_24);
                } else {
                    if (php::exists(a, {{php::ArrayDimFetch, php::Var(get_str(420))}}, tmp_var_26)) {
                        tmp_var_25 = tmp_var_26;
                    } else {
                        if (php::exists(a, {{php::ArrayDimFetch, php::Var(get_str(425))}}, tmp_var_28)) {
                        tmp_var_27 = tmp_var_28;
                    } else {
                        tmp_var_27 = php::empty_string;
                    }
                        tmp_var_25 = tmp_var_27;
                    }
                    d = php::toString(tmp_var_25);
                    values.appendValue(d);
                    ((tmp_var_33 = [&]() -> php::Str {
                        if (php::exists(a, {{php::ArrayDimFetch, php::Var(get_str(425))}}, tmp_var_30)) {
                        tmp_var_29 = tmp_var_30;
                    } else {
                        tmp_var_29 = php::empty_string;
                    }
                        tmp_var_31 = tmp_var_29;
                        tmp_var_32 = php::same(tmp_var_31, get_str(908));
                        tmp_var_31.unset();
                        if (php::toBool(tmp_var_32)) {
                            return get_str(908);
                        } else {
                            return d;
                        }
                    }(), texts.append(tmp_var_33)), tmp_var_33);
                }
            }
        }
    }
    if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(910))}, {php::ArrayDimFetch, php::Var(get_str(909))}, {php::ArrayDimFetch, php::Var(0L)}}, tmp_var_35)) {
        tmp_var_34 = tmp_var_35;
    } else {
        tmp_var_34 = php::Array{};
    }
    frame0 = php::toArray(tmp_var_34);
    if (php::exists(frame0, {{php::ArrayDimFetch, php::Var(get_str(203))}}, tmp_var_37)) {
            tmp_var_36 = tmp_var_37;
        } else {
            tmp_var_36 = php::empty_string;
        }
    tmp_var_38 = php::toString(tmp_var_36);
    if (php::exists(frame0, {{php::ArrayDimFetch, php::Var(get_str(911))}}, tmp_var_40)) {
            tmp_var_39 = tmp_var_40;
        } else {
            tmp_var_39 = 0L;
        }
    tmp_var_41 = php::toInt(tmp_var_39);
    if (php::exists(frame0, {{php::ArrayDimFetch, php::Var(get_str(912))}}, tmp_var_43)) {
            tmp_var_42 = tmp_var_43;
        } else {
            tmp_var_42 = 0L;
        }
    tmp_var_44 = php::toInt(tmp_var_42);
    loc = php::Array{
        { get_str(203).str(), php::Var(tmp_var_38) }, 
        { get_str(911).str(), php::Var(tmp_var_41) }, 
        { get_str(912).str(), php::Var(tmp_var_44) }
    };
    tmp_var_38.unset();
    type = php::toString(p.get(get_str(425)));
    tmp_var_46 = (php::toBool(php::same(type, get_str(913)))) ? (get_str(913)) : (type);
    if (get_function_resolution_cache(FunctionResolutionCacheId{111}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{111}) = php::fn::function_exists(get_str(914)) ? 1 : 2; }
    tmp_var_47 = get_function_resolution_cache(FunctionResolutionCacheId{111}) == 1 ? get_func(RequestFuncId{51}, get_str(914)) : get_persistent_func(PersistentFuncId{55}, get_str(915));
    tmp_var_48 = php::call(tmp_var_47, php::VarList{get_str(128), texts});
    msg = php::newObject(tmp_var_45, php::VarList{this_, tmp_var_46, tmp_var_48, values, loc});
    tmp_var_46.unset();
    tmp_var_48.unset();
    php_nativeplaywright__page__emitboth(this_, get_str(897), msg);
}

void php_nativeplaywright__page__ondialog(php::Object &this_, php::Array p) {
    php::Object d;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Int tmp_var_6 = 0;
    php::Bool tmp_var_7 = 0;
    php::Var tmp_var_8;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{20}, get_str(528));

    tmp_var_1 = php::toString(p.get(get_str(425)));
    tmp_var_2 = php::toString(p.get(get_str(125)));
    if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(916))}}, tmp_var_4)) {
        tmp_var_3 = tmp_var_4;
    } else {
        tmp_var_3 = php::empty_string;
    }
    tmp_var_5 = php::toString(tmp_var_3);
    d = php::newObject(tmp_var_0, php::VarList{this_, tmp_var_1, tmp_var_2, tmp_var_5});
    tmp_var_1.unset();
    tmp_var_2.unset();
    tmp_var_5.unset();
    tmp_var_6 = php::toInt(php_nativeplaywright__page__listenercount(this_, get_str(917)));
    tmp_var_7 = php::toBool(((tmp_var_6) > (0L)));
    if (php::toBool([&]() -> bool {
        if (!(php::toBool(tmp_var_7))) {
            tmp_var_8 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
            php::Object tmp_var_9 = tmp_var_8;
            tmp_var_10 = php_nativeplaywright__browsercontext__haslisteners(tmp_var_9, get_str(917));
            tmp_var_8.unset();
            return php::toBool(tmp_var_10);
        }
        return true;
    }())) {
        php_nativeplaywright__page__emitboth(this_, get_str(917), d);
        return;
    }
    tmp_var_11 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
    php::ClosureFn tmp_var_12 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object d = php::Object(vars_.get(0));
        php::Var tmp_var_0;
        php::Var tmp_var_1;
        php::Var tmp_var_2;
        php::Object e;
        try {
            [&]() -> php::Var {
                tmp_var_0 = php_nativeplaywright__dialog__type(d);
                tmp_var_1 = php::same(tmp_var_0, get_str(918));
                tmp_var_0.unset();
                if (php::toBool(tmp_var_1)) {
                    return php::Var(((void) (php_nativeplaywright__dialog__accept(d)), php::null));
                } else {
                    return php::Var(((void) (php_nativeplaywright__dialog__dismiss(d)), php::null));
                }
            }();
        } catch (zend_object *_ex) {
            tmp_var_2 = php::catchException();
            bool tmp_var_3 = false;
            if (!tmp_var_3 && tmp_var_2 && (php::instanceOf(tmp_var_2, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
                tmp_var_3 = true;
                e = tmp_var_2;
                tmp_var_2 = php::null;
            }
        }
        if (tmp_var_2) {
            php::throwException(php::Object(tmp_var_2));
        }
    return php::null;
    };
    typephp_call_method_cached(tmp_var_11, get_str(666), get_method_call_cache(MethodCallCacheId{27}), php::VarList{php::newClosureWithParameters(tmp_var_12, { d }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), {  }, php::ClosureStrictTypes::Enabled)});
    tmp_var_11.unset();
}

void php_nativeplaywright__page__onrequest(php::Object &this_, php::Array p) {
    php::Str id;
    php::Array r;
    php::Var redirectedFrom = php::null;
    php::Var prev;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    zend_function * tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var type;
    zend_function * tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Str loader;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Bool isNav = 0;
    php::Object req;
    php::Str tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Var tmp_var_21;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    php::Var tmp_var_25;
    php::Var tmp_var_26;
    php::Var tmp_var_27;
    php::Var tmp_var_28;
    php::Var tmp_var_29;
    php::Var tmp_var_30;
    zend_function * tmp_var_37;
    php::Var tmp_var_38;
    php::Var tmp_var_39;
    php::Bool tmp_var_40 = 0;
    zend_function * tmp_var_41;
    php::Var tmp_var_42;
    zend_class_entry *tmp_var_5 = get_persistent_class(PersistentClassId{14}, get_str(475));
    zend_class_entry *tmp_var_15 = get_persistent_class(PersistentClassId{22}, get_str(560));

    id = php::toString(p.get(get_str(567)));
    r = php::toArray(p.get(get_str(547)));
    if (php::toBool(php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(920))}}))) {
        if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{113}, get_str(880), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(id)}}, tmp_var_1)) {
            tmp_var_0 = tmp_var_1;
        } else {
            tmp_var_0 = php::null;
        }
        prev = tmp_var_0;
        if (php::toBool(!(php::same(prev, php::null)))) {
            tmp_var_2 = prev;
            tmp_var_3 = php::toArray(p.get(get_str(920)));
            ((tmp_var_4 = php_nativeplaywright__page__makeresponse(this_, php::toObject(tmp_var_2, get_persistent_class(PersistentClassId{22}, get_str(560))), tmp_var_3), typephp_write_property_cached(prev, get_str(591), tmp_var_4, tmp_var_5, get_property_cache(PropertyCacheId{69}))), tmp_var_4);
            tmp_var_2.unset();
            tmp_var_3.unset();
            typephp_write_property_cached(prev, get_str(559), true, tmp_var_5, get_property_cache(PropertyCacheId{70}));
            if (get_function_resolution_cache(FunctionResolutionCacheId{112}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{112}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{112}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            ((tmp_var_7 = php::call(tmp_var_6, php::VarList{true}), typephp_write_property_cached(prev, get_str(594), tmp_var_7, tmp_var_5, get_property_cache(PropertyCacheId{71}))), tmp_var_7);
            tmp_var_8 = typephp_read_property_cached(prev, get_str(591), php::AttrMode::Get, get_property_cache(PropertyCacheId{73}));
            php_nativeplaywright__page__emitboth(this_, get_str(591), php::deindirect(tmp_var_8));
            tmp_var_8.unset();
            php_nativeplaywright__page__emitboth(this_, get_str(883), prev);
            redirectedFrom = prev;
        }
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{113}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{113}) = php::fn::function_exists(get_str(257)) ? 1 : 2; }
    tmp_var_9 = get_function_resolution_cache(FunctionResolutionCacheId{113}) == 1 ? get_func(RequestFuncId{19}, get_str(257)) : get_persistent_func(PersistentFuncId{23}, get_str(258));
    if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(425))}}, tmp_var_11)) {
        tmp_var_10 = tmp_var_11;
    } else {
        tmp_var_10 = get_str(922);
    }
    tmp_var_12 = php::toString(tmp_var_10);
    type = php::call(tmp_var_9, php::VarList{tmp_var_12});
    tmp_var_12.unset();
    if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(819))}}, tmp_var_14)) {
        tmp_var_13 = tmp_var_14;
    } else {
        tmp_var_13 = php::empty_string;
    }
    loader = php::toString(tmp_var_13);
    isNav = php::toBool((php::toBool(php::same(id, loader)) && php::toBool(php::same(type, get_str(923)))));
    tmp_var_16 = id;
    tmp_var_17 = php::toString(r.get(get_str(203)));
    if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(818))}}, tmp_var_19)) {
        tmp_var_18 = tmp_var_19;
    } else {
        tmp_var_18 = php::empty_string;
    }
    tmp_var_20 = php::toString(tmp_var_18);
    tmp_var_21 = php::concat({tmp_var_17, tmp_var_20});
    tmp_var_17.unset();
    tmp_var_20.unset();
    tmp_var_22 = php::toString(r.get(get_str(100)));
    if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(543))}}, tmp_var_24)) {
        tmp_var_23 = tmp_var_24;
    } else {
        tmp_var_23 = php::Array{};
    }
    tmp_var_25 = php::toArray(tmp_var_23);
    tmp_var_26 = (php::toBool(php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(577))}}))) ? (php::Var(php::toString(r.get(get_str(577))))) : (php::Var(php::null));
    tmp_var_27 = type;
    if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(588))}}, tmp_var_29)) {
        tmp_var_28 = tmp_var_29;
    } else {
        tmp_var_28 = php::empty_string;
    }
    tmp_var_30 = php::toString(tmp_var_28);
    req = php::newObject(tmp_var_15, php::VarList{this_, tmp_var_16, tmp_var_21, tmp_var_22, tmp_var_25, tmp_var_26, tmp_var_27, tmp_var_30, isNav, redirectedFrom});
    tmp_var_16.unset();
    tmp_var_21.unset();
    tmp_var_22.unset();
    tmp_var_25.unset();
    tmp_var_26.unset();
    tmp_var_27.unset();
    tmp_var_30.unset();
    [&]() -> php::Var {
    auto&& tmp_var_31 = this_.attr(get_persistent_prop(PersistentPropertyId{113}, get_str(880), get_str(475)), php::AttrMode::Update);
    php::Var tmp_var_32 = id;
    php::Var tmp_var_33 = req;
    static_cast<void>(tmp_var_31.item(tmp_var_32, true) = tmp_var_33);
    return tmp_var_33;
    }();
    if (php::toBool(isNav)) {
        [&]() -> php::Var {
        auto&& tmp_var_34 = this_.attr(get_persistent_prop(PersistentPropertyId{114}, get_str(924), get_str(475)), php::AttrMode::Update);
        php::Var tmp_var_35 = loader;
        php::Var tmp_var_36 = req;
        static_cast<void>(tmp_var_34.item(tmp_var_35, true) = tmp_var_36);
        return tmp_var_36;
        }();
        if (get_function_resolution_cache(FunctionResolutionCacheId{114}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{114}) = php::fn::function_exists(get_str(162)) ? 1 : 2; }
        tmp_var_37 = get_function_resolution_cache(FunctionResolutionCacheId{114}) == 1 ? get_func(RequestFuncId{8}, get_str(162)) : get_persistent_func(PersistentFuncId{8}, get_str(163));
        tmp_var_38 = this_.attr(get_persistent_prop(PersistentPropertyId{114}, get_str(924), get_str(475)), php::AttrMode::Get);
        tmp_var_39 = php::call(tmp_var_37, php::VarList{php::deindirect(tmp_var_38)});
        tmp_var_38.unset();
        tmp_var_40 = php::toBool(((php::Var(tmp_var_39)) > (php::Var(8L))));
        tmp_var_39.unset();
        if (php::toBool(tmp_var_40)) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{115}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{115}) = php::fn::function_exists(get_str(925)) ? 1 : 2; }
            tmp_var_41 = get_function_resolution_cache(FunctionResolutionCacheId{115}) == 1 ? get_func(RequestFuncId{52}, get_str(925)) : get_persistent_func(PersistentFuncId{56}, get_str(926));
            [&]() -> php::Var {
            if (get_function_resolution_cache(FunctionResolutionCacheId{115}) == 1) {
            tmp_var_42 = this_.attr(get_persistent_prop(PersistentPropertyId{114}, get_str(924), get_str(475)), php::AttrMode::Get);
            php::Var tmp_var_43 = php::call(tmp_var_41, php::VarList{php::deindirect(tmp_var_42)});
            tmp_var_42.unset();
            return tmp_var_43;
            }
            return php::call(tmp_var_41, php::VarList{this_.attrRef("navRequests")});
            }();
        }
    }
    php_nativeplaywright__page__emitboth(this_, get_str(547), req);
}

php::Object php_nativeplaywright__page__makeresponse(php::Object &this_, php::Object req, php::Array r) {
    php::Object tmp_var_1;
    php::Var tmp_var_2;
    php::Int tmp_var_3 = 0;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Int tmp_var_15 = 0;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Bool tmp_var_21 = 0;
    php::Object tmp_var_22;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{21}, get_str(540));

    tmp_var_1 = req;
    tmp_var_2 = php::toString(r.get(get_str(203)));
    tmp_var_3 = php::toInt(r.get(get_str(541)));
    if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(542))}}, tmp_var_5)) {
        tmp_var_4 = tmp_var_5;
    } else {
        tmp_var_4 = php::empty_string;
    }
    tmp_var_6 = php::toString(tmp_var_4);
    if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(543))}}, tmp_var_8)) {
        tmp_var_7 = tmp_var_8;
    } else {
        tmp_var_7 = php::Array{};
    }
    tmp_var_9 = php::toArray(tmp_var_7);
    if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(927))}}, tmp_var_11)) {
        tmp_var_10 = tmp_var_11;
    } else {
        tmp_var_10 = php::empty_string;
    }
    tmp_var_12 = php::toString(tmp_var_10);
    if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(553))}}, tmp_var_14)) {
        tmp_var_13 = tmp_var_14;
    } else {
        tmp_var_13 = 0L;
    }
    tmp_var_15 = php::toInt(tmp_var_13);
    if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(555))}}, tmp_var_17)) {
        tmp_var_16 = tmp_var_17;
    } else {
        tmp_var_16 = php::Array{};
    }
    tmp_var_18 = php::toArray(tmp_var_16);
    if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(550))}}, tmp_var_20)) {
        tmp_var_19 = tmp_var_20;
    } else {
        tmp_var_19 = false;
    }
    tmp_var_21 = php::toBool(tmp_var_19);
    tmp_var_22 = (php::newObject(tmp_var_0, php::VarList{this_, tmp_var_1, tmp_var_2, tmp_var_3, tmp_var_6, tmp_var_9, tmp_var_12, tmp_var_15, tmp_var_18, tmp_var_21}));
    tmp_var_1.unset();
    tmp_var_2.unset();
    tmp_var_6.unset();
    tmp_var_9.unset();
    tmp_var_12.unset();
    tmp_var_18.unset();
    return tmp_var_22;
}

void php_nativeplaywright__page__onresponse(php::Object &this_, php::Array p) {
    php::Var req;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_6;
    zend_class_entry *tmp_var_5 = get_persistent_class(PersistentClassId{14}, get_str(475));

    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{113}, get_str(880), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(php::toString(p.get(get_str(567))))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::null;
    }
    req = tmp_var_0;
    if (php::toBool(php::same(req, php::null))) {
        return;
    }
    tmp_var_2 = req;
    tmp_var_3 = php::toArray(p.get(get_str(591)));
    ((tmp_var_4 = php_nativeplaywright__page__makeresponse(this_, php::toObject(tmp_var_2, get_persistent_class(PersistentClassId{22}, get_str(560))), tmp_var_3), typephp_write_property_cached(req, get_str(591), tmp_var_4, tmp_var_5, get_property_cache(PropertyCacheId{75}))), tmp_var_4);
    tmp_var_2.unset();
    tmp_var_3.unset();
    tmp_var_6 = typephp_read_property_cached(req, get_str(591), php::AttrMode::Get, get_property_cache(PropertyCacheId{77}));
    php_nativeplaywright__page__emitboth(this_, get_str(591), php::deindirect(tmp_var_6));
    tmp_var_6.unset();
    php_nativeplaywright__page__poke(this_);
}

php::Object php_nativeplaywright__page__navigationresponse(php::Object &this_, php::Str loaderId) {
    php::Var req;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Object tmp_var_4;
    php::Var tmp_var_6;
    php::Var tmp_var_7;

    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{114}, get_str(924), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(loaderId)}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::null;
    }
    req = tmp_var_0;

    while (php::toBool([&]() -> bool {
        if (php::toBool(!(php::same(req, php::null)))) {
            tmp_var_2 = typephp_read_property_cached(req, get_str(575), php::AttrMode::Get, get_property_cache(PropertyCacheId{81}));
            tmp_var_3 = php::toBool(!(php::same(tmp_var_2, php::null)));
            tmp_var_2.unset();
            return php::toBool(tmp_var_3);
        }
        return false;
    }())) {
        req = typephp_read_property_cached(req, get_str(575), php::AttrMode::Get, get_property_cache(PropertyCacheId{85}));
    }
    tmp_var_4 = req;
    auto tmp_var_5 = [&]() -> php::Var {
        if (tmp_var_4.isNull()) {
            return php::null;
        }
        tmp_var_6 = typephp_read_property_scoped(tmp_var_4, get_str(591), get_persistent_class(PersistentClassId{14}, get_str(475)), php::AttrMode::Get);
        return tmp_var_6;
    };
    tmp_var_7 = tmp_var_5();
    if (UNEXPECTED(!(tmp_var_7.isNull() || (tmp_var_7.isObject() && php::instanceOf(tmp_var_7, get_persistent_class(PersistentClassId{21}, get_str(540))))))) {
        php::throwReturnTypeError(tmp_var_7, get_str(928), get_str(929), false);
    }
    tmp_var_6.unset();
    tmp_var_4.unset();
    return tmp_var_7;
}

php::Bool php_nativeplaywright__page__needsinterception(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Bool tmp_var_2 = 0;
    php::Var tmp_var_3;
    php::Var tmp_var_5;
    php::Bool tmp_var_6 = 0;
    php::Var tmp_var_7;
    php::Var tmp_var_9;
    php::Bool tmp_var_10 = 0;
    php::Bool tmp_var_11 = 0;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{115}, get_str(930), get_str(475)), php::AttrMode::Get);
    tmp_var_1 = php::Array{};
    tmp_var_2 = php::toBool(!(php::same(tmp_var_0, tmp_var_1)));
    tmp_var_0.unset();
    tmp_var_1.unset();
    tmp_var_6 = php::toBool([&]() -> bool {
        if (!(php::toBool(tmp_var_2))) {
            tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
            php::Object tmp_var_4 = tmp_var_3;
            tmp_var_5 = php_nativeplaywright__browsercontext__hasroutes(tmp_var_4);
            tmp_var_3.unset();
            return php::toBool(tmp_var_5);
        }
        return true;
    }());
    tmp_var_11 = (php::toBool([&]() -> bool {
        if (!(php::toBool(tmp_var_6))) {
            tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
            php::Object tmp_var_8 = tmp_var_7;
            tmp_var_9 = php_nativeplaywright__browsercontext__httpcredentials(tmp_var_8);
            tmp_var_7.unset();
            tmp_var_10 = php::toBool(!(php::same(tmp_var_9, php::null)));
            tmp_var_9.unset();
            return php::toBool(tmp_var_10);
        }
        return true;
    }()));
    return tmp_var_11;
}

php::Array php_nativeplaywright__page__fetchparams(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_4;
    php::Bool tmp_var_5 = 0;
    php::Array tmp_var_6;

    tmp_var_0 = php::Array{
                { get_str(932).str(), php::Var(get_str(201)) }, 
                { get_str(934).str(), php::Var(get_str(933)) }
            };
    tmp_var_1 = php::Array{
            php::Var(tmp_var_0)
        };
    tmp_var_0.unset();
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_3 = tmp_var_2;
    tmp_var_4 = php_nativeplaywright__browsercontext__httpcredentials(tmp_var_3);
    tmp_var_2.unset();
    tmp_var_5 = php::toBool(!(php::same(tmp_var_4, php::null)));
    tmp_var_4.unset();
    tmp_var_6 = (php::Array{
        { get_str(935).str(), php::Var(tmp_var_1) }, 
        { get_str(936).str(), php::Var(tmp_var_5) }
    });
    tmp_var_1.unset();
    return tmp_var_6;
}

void php_nativeplaywright__page__syncinterception(php::Object &this_) {
    php::Bool need = 0;
    php::Bool tmp_var_0 = 0;
    php::Bool tmp_var_1 = 0;
    php::Var tmp_var_2;
    php::Var tmp_var_3;

    need = php::toBool(php_nativeplaywright__page__needsinterception(this_));
    tmp_var_0 = php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{108}, get_str(758), get_str(475)), php::AttrMode::Get));
    tmp_var_1 = php::toBool(need == tmp_var_0);
    if (php::toBool((php::toBool(tmp_var_1) || php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{105}, get_str(76), get_str(475)), php::AttrMode::Get))))) {
        return;
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{108}, get_str(758), get_str(475)), php::AttrMode::Update) = need;
    tmp_var_2 = (php::toBool(need)) ? (get_str(756)) : (get_str(937));
    tmp_var_3 = (php::toBool(need)) ? (php_nativeplaywright__page__fetchparams(this_)) : (php::Array{});
    php_nativeplaywright__page__send(this_, tmp_var_2, tmp_var_3);
    tmp_var_2.unset();
    tmp_var_3.unset();
}

void php_nativeplaywright__page__onrequestpaused(php::Object &this_, php::Array p) {
    php::Str nid;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var req;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Array r;
    php::Str tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    zend_function * tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Var tmp_var_21;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Object route;
    php::Var tmp_var_25;
    php::Var base;
    php::Var tmp_var_26;
    php::Var handlers;
    zend_function * tmp_var_28;
    zend_function * tmp_var_29;
    php::Var tmp_var_30;
    php::Var tmp_var_31;
    zend_function * tmp_var_32;
    php::Var tmp_var_33;
    php::Var tmp_var_35;
    php::Var tmp_var_36;
    php::Var tmp_var_37;
    php::Var tmp_var_38;
    php::Var h;
    php::Var tmp_var_41;
    php::Var tmp_var_42;
    php::Bool tmp_var_43 = 0;
    php::Var tmp_var_44;
    php::Var tmp_var_45;
    php::Var tmp_var_46;
    php::Object e;
    php::Var tmp_var_48;
    php::Object e2;
    zend_function * tmp_var_50;
    php::Var tmp_var_51;
    php::Var tmp_var_52;
    php::Bool tmp_var_53 = 0;
    zend_function * tmp_var_54;
    php::Var tmp_var_55;
    php::Var tmp_var_56;
    php::Var tmp_var_57;
    zend_class_entry *tmp_var_4 = get_persistent_class(PersistentClassId{22}, get_str(560));
    zend_class_entry *tmp_var_24 = get_persistent_class(PersistentClassId{23}, get_str(599));
    zend_class_entry *tmp_var_40 = get_persistent_class(PersistentClassId{14}, get_str(475));

    if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(938))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = p.get(get_str(567));
    }
    nid = php::toString(tmp_var_0);
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{113}, get_str(880), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(nid)}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_2 = php::null;
    }
    req = tmp_var_2;
    if (php::toBool(php::same(req, php::null))) {
        r = php::toArray(p.get(get_str(547)));
        tmp_var_5 = nid;
        tmp_var_6 = php::toString(r.get(get_str(203)));
        if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(818))}}, tmp_var_8)) {
            tmp_var_7 = tmp_var_8;
        } else {
            tmp_var_7 = php::empty_string;
        }
        tmp_var_9 = php::toString(tmp_var_7);
        tmp_var_10 = php::concat({tmp_var_6, tmp_var_9});
        tmp_var_6.unset();
        tmp_var_9.unset();
        tmp_var_11 = php::toString(r.get(get_str(100)));
        if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(543))}}, tmp_var_13)) {
            tmp_var_12 = tmp_var_13;
        } else {
            tmp_var_12 = php::Array{};
        }
        tmp_var_14 = php::toArray(tmp_var_12);
        tmp_var_15 = (php::toBool(php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(577))}}))) ? (php::Var(php::toString(r.get(get_str(577))))) : (php::Var(php::null));
        if (get_function_resolution_cache(FunctionResolutionCacheId{116}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{116}) = php::fn::function_exists(get_str(257)) ? 1 : 2; }
        tmp_var_16 = get_function_resolution_cache(FunctionResolutionCacheId{116}) == 1 ? get_func(RequestFuncId{19}, get_str(257)) : get_persistent_func(PersistentFuncId{23}, get_str(258));
        if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(586))}}, tmp_var_18)) {
            tmp_var_17 = tmp_var_18;
        } else {
            tmp_var_17 = get_str(922);
        }
        tmp_var_19 = php::toString(tmp_var_17);
        tmp_var_20 = php::call(tmp_var_16, php::VarList{tmp_var_19});
        tmp_var_19.unset();
        if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(588))}}, tmp_var_22)) {
            tmp_var_21 = tmp_var_22;
        } else {
            tmp_var_21 = php::empty_string;
        }
        tmp_var_23 = php::toString(tmp_var_21);
        req = php::newObject(tmp_var_4, php::VarList{this_, tmp_var_5, tmp_var_10, tmp_var_11, tmp_var_14, tmp_var_15, tmp_var_20, tmp_var_23, false});
        tmp_var_5.unset();
        tmp_var_10.unset();
        tmp_var_11.unset();
        tmp_var_14.unset();
        tmp_var_15.unset();
        tmp_var_20.unset();
        tmp_var_23.unset();
    }
    tmp_var_25 = php::toString(p.get(get_str(567)));
    route = php::newObject(tmp_var_24, php::VarList{this_, tmp_var_25, req});
    tmp_var_25.unset();
    tmp_var_26 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_27 = tmp_var_26;
    base = php_nativeplaywright__browsercontext__baseurl(tmp_var_27);
    tmp_var_26.unset();
    if (get_function_resolution_cache(FunctionResolutionCacheId{117}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{117}) = php::fn::function_exists(get_str(452)) ? 1 : 2; }
    tmp_var_28 = get_function_resolution_cache(FunctionResolutionCacheId{117}) == 1 ? get_func(RequestFuncId{30}, get_str(452)) : get_persistent_func(PersistentFuncId{34}, get_str(453));
    if (get_function_resolution_cache(FunctionResolutionCacheId{118}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{118}) = php::fn::function_exists(get_str(939)) ? 1 : 2; }
    tmp_var_29 = get_function_resolution_cache(FunctionResolutionCacheId{118}) == 1 ? get_func(RequestFuncId{53}, get_str(939)) : get_persistent_func(PersistentFuncId{57}, get_str(940));
    tmp_var_30 = this_.attr(get_persistent_prop(PersistentPropertyId{115}, get_str(930), get_str(475)), php::AttrMode::Get);
    tmp_var_31 = php::call(tmp_var_29, php::VarList{php::deindirect(tmp_var_30)});
    tmp_var_30.unset();
    if (get_function_resolution_cache(FunctionResolutionCacheId{119}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{119}) = php::fn::function_exists(get_str(939)) ? 1 : 2; }
    tmp_var_32 = get_function_resolution_cache(FunctionResolutionCacheId{119}) == 1 ? get_func(RequestFuncId{53}, get_str(939)) : get_persistent_func(PersistentFuncId{57}, get_str(940));
    tmp_var_33 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_34 = tmp_var_33;
    tmp_var_35 = php_nativeplaywright__browsercontext__routehandlers(tmp_var_34);
    tmp_var_33.unset();
    tmp_var_37 = php::call(tmp_var_32, php::VarList{(tmp_var_36 = tmp_var_35)});
    tmp_var_35.unset();
    handlers = php::call(tmp_var_28, php::VarList{tmp_var_31, tmp_var_37});
    tmp_var_31.unset();
    tmp_var_37.unset();
    try {

        tmp_var_38 = handlers;
        {
            php::ForeachIterator tmp_var_39{tmp_var_38, false, tmp_var_40};
            while (tmp_var_39.next()) {
                h = tmp_var_39.value();
                tmp_var_41 = typephp_call_method_cached(req, get_str(203), get_method_call_cache(MethodCallCacheId{28}));
                tmp_var_43 = php::toBool(!(php::toBool(typephp_call_method_cached(h, get_str(942), get_method_call_cache(MethodCallCacheId{29}), php::VarList{(tmp_var_42 = tmp_var_41), base}))));
                tmp_var_41.unset();
                if (php::toBool(tmp_var_43)) {
                    continue;
                }
                if (php::toBool(typephp_call_method_cached(h, get_str(943), get_method_call_cache(MethodCallCacheId{30})))) {
                    continue;
                }
                tmp_var_44 = typephp_read_property_cached(h, get_str(163), php::AttrMode::Get, get_property_cache(PropertyCacheId{89}));
                tmp_var_44;
                typephp_write_property_cached(h, get_str(163), tmp_var_44 + 1, tmp_var_40, get_property_cache(PropertyCacheId{90}));
                tmp_var_45 = typephp_read_property_cached(h, get_str(944), php::AttrMode::Get, get_property_cache(PropertyCacheId{91}));
                typephp_call_cached(tmp_var_45, get_function_call_cache(FunctionCallCacheId{12}), php::VarList{route, req});
                if (php::toBool(php_nativeplaywright__route__ishandled(route))) {
                    return;
                }
                if (php::toBool(route.attr(get_persistent_prop(PersistentPropertyId{81}, get_str(639), get_str(599)), php::AttrMode::Get))) {
                    route.attr(get_persistent_prop(PersistentPropertyId{81}, get_str(639), get_str(599)), php::AttrMode::Update) = false;
                    continue;
                }
                break;
            }
        }
        if (php::toBool(!(php::toBool(php_nativeplaywright__route__ishandled(route))))) {
            php_nativeplaywright__route__continue(route);
        }
    } catch (zend_object *_ex) {
        tmp_var_46 = php::catchException();
        bool tmp_var_47 = false;
        if (!tmp_var_47 && tmp_var_46 && (php::instanceOf(tmp_var_46, get_persistent_class(PersistentClassId{3}, get_str(114))))) {
            tmp_var_47 = true;
            e = tmp_var_46;
            tmp_var_46 = php::null;
            if (php::toBool(!(php::toBool(php_nativeplaywright__route__ishandled(route))))) {
                try {
                    php_nativeplaywright__route__continue(route);
                } catch (zend_object *_ex) {
                    tmp_var_48 = php::catchException();
                    bool tmp_var_49 = false;
                    if (!tmp_var_49 && tmp_var_48 && (php::instanceOf(tmp_var_48, get_persistent_class(PersistentClassId{3}, get_str(114))))) {
                        tmp_var_49 = true;
                        e2 = tmp_var_48;
                        tmp_var_48 = php::null;
                    }
                }
                if (tmp_var_48) {
                    php::throwException(php::Object(tmp_var_48));
                }
            }
            if (php::toBool([&]() -> bool {
                if (!(php::toBool(!(php::toBool(php::instanceOf(e, get_persistent_class(PersistentClassId{0}, get_str(75)))))))) {
                    if (get_function_resolution_cache(FunctionResolutionCacheId{120}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{120}) = php::fn::function_exists(get_str(196)) ? 1 : 2; }
                    tmp_var_50 = get_function_resolution_cache(FunctionResolutionCacheId{120}) == 1 ? get_func(RequestFuncId{11}, get_str(196)) : get_persistent_func(PersistentFuncId{14}, get_str(197));
                    tmp_var_51 = typephp_call_method_cached(e, get_str(141), get_method_call_cache(MethodCallCacheId{31}));
                    tmp_var_53 = php::toBool(!(php::toBool(php::call(tmp_var_50, php::VarList{(tmp_var_52 = tmp_var_51), get_str(76)}))));
                    tmp_var_51.unset();
                    return php::toBool(tmp_var_53);
                }
                return true;
            }())) {
                if (get_function_resolution_cache(FunctionResolutionCacheId{121}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{121}) = php::fn::function_exists(get_str(138)) ? 1 : 2; }
                tmp_var_54 = get_function_resolution_cache(FunctionResolutionCacheId{121}) == 1 ? get_func(RequestFuncId{4}, get_str(138)) : get_persistent_func(PersistentFuncId{4}, get_str(139));
                tmp_var_55 = typephp_call_method_cached(e, get_str(141), get_method_call_cache(MethodCallCacheId{32}));
                tmp_var_56 = php::concat({get_str(946), php::toString(tmp_var_55)});
                tmp_var_55.unset();
                tmp_var_57 = php::constant(get_str(142), php::ConstantLookup::UnqualifiedInNamespace);
                php::call(tmp_var_54, php::VarList{tmp_var_56, tmp_var_57});
                tmp_var_56.unset();
                tmp_var_57.unset();
            }
        }
    }
    if (tmp_var_46) {
        php::throwException(php::Object(tmp_var_46));
    }
}

void php_nativeplaywright__page__route(php::Object &this_, php::Var url, php::Object handler, php::Array options) {
    php::Var tmp_var_1;
    php::Object tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Int tmp_var_5 = 0;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{24}, get_str(656));
    if (UNEXPECTED(!(url.isString() || (url.isObject() && php::instanceOf(url, get_persistent_class(PersistentClassId{5}, get_str(148))))))) {
        php::throwArgumentTypeError(url, get_str(948), 1, get_str(203), get_str(208));
    }

    [&]() -> php::Var {
    auto&& tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{115}, get_str(930), get_str(475)), php::AttrMode::Update);
    php::Var tmp_var_7 = php::null;
    tmp_var_1 = url;
    tmp_var_2 = handler;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(657))}}, tmp_var_4)) {
        tmp_var_3 = tmp_var_4;
    } else {
        tmp_var_3 = 0L;
    }
    tmp_var_5 = php::toInt(tmp_var_3);
    php::Var tmp_var_8 = php::newObject(tmp_var_0, php::VarList{tmp_var_1, tmp_var_2, tmp_var_5});
    tmp_var_1.unset();
    tmp_var_2.unset();
    tmp_var_6.append(tmp_var_8);
    return tmp_var_8;
    }();
    php_nativeplaywright__page__syncinterception(this_);
}

void php_nativeplaywright__page__unroute(php::Object &this_, php::Var url, php::Object handler) {
    zend_function * tmp_var_0;
    zend_function * tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_4;
    if (UNEXPECTED(!(url.isString() || (url.isObject() && php::instanceOf(url, get_persistent_class(PersistentClassId{5}, get_str(148))))))) {
        php::throwArgumentTypeError(url, get_str(951), 1, get_str(203), get_str(208));
    }

    if (get_function_resolution_cache(FunctionResolutionCacheId{122}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{122}) = php::fn::function_exists(get_str(454)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{122}) == 1 ? get_func(RequestFuncId{31}, get_str(454)) : get_persistent_func(PersistentFuncId{35}, get_str(455));
    if (get_function_resolution_cache(FunctionResolutionCacheId{123}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{123}) = php::fn::function_exists(get_str(456)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{123}) == 1 ? get_func(RequestFuncId{32}, get_str(456)) : get_persistent_func(PersistentFuncId{36}, get_str(457));
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{115}, get_str(930), get_str(475)), php::AttrMode::Get);
    php::ClosureFn tmp_var_3 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(1, 1, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!((tmp_var_0.isObject() && php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{24}, get_str(656))))))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(949), get_str(950));
            return php::null;
        }
        php::Object h = php::Object(tmp_var_0);
        tmp_var_0.unset();
        php::Var url = vars_.get(0);
        php::Object handler = php::Object(vars_.get(1));
        php::Var tmp_var_1;
        php::Bool tmp_var_2 = 0;
        php::Var tmp_var_3;
        php::Bool tmp_var_4 = 0;
        php::Var tmp_var_5;
    tmp_var_1 = h.attr(get_persistent_prop(PersistentPropertyId{82}, get_str(203), get_str(656)), php::AttrMode::Get);
    tmp_var_2 = php::toBool(php::same(tmp_var_1, url));
    tmp_var_1.unset();
    tmp_var_5 = !(php::toBool((php::toBool(tmp_var_2) && php::toBool([&]() -> bool {
            if (!(php::toBool(php::same(handler, php::null)))) {
                tmp_var_3 = h.attr(get_persistent_prop(PersistentPropertyId{116}, get_str(944), get_str(656)), php::AttrMode::Get);
                tmp_var_4 = php::toBool(php::same(tmp_var_3, handler));
                tmp_var_3.unset();
                return php::toBool(tmp_var_4);
            }
            return true;
        }()))));
        if (UNEXPECTED(!(tmp_var_5.isBool()))) {
            php::throwReturnTypeError(tmp_var_5, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_5;};
    tmp_var_4 = php::call(tmp_var_1, php::VarList{php::deindirect(tmp_var_2), php::newClosureWithParameters(tmp_var_3, { url, handler }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), { php::ClosureParameter{"h", false, false, true} }, php::ClosureStrictTypes::Enabled)});
    tmp_var_2.unset();
    this_.attr(get_persistent_prop(PersistentPropertyId{115}, get_str(930), get_str(475)), php::AttrMode::Update) = php::toArrayExact(php::call(tmp_var_0, php::VarList{tmp_var_4}), "NativePlaywright\\Page::$routes");
    tmp_var_4.unset();
    php_nativeplaywright__page__syncinterception(this_);
}

void php_nativeplaywright__page__unrouteall(php::Object &this_) {
    this_.attr(get_persistent_prop(PersistentPropertyId{115}, get_str(930), get_str(475)), php::AttrMode::Update) = php::Array{};
    php_nativeplaywright__page__syncinterception(this_);
}

php::Str php_nativeplaywright__page__bindingscript(php::Object &this_, php::Str name) {
    php::Str n;
    php::Object tmp_var_0;
    php::Str tmp_var_1;
    Z_PTR_P(tmp_var_0.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    n = php_nativeplaywright__locator__js(tmp_var_0, name);
    tmp_var_1 = (php::concat({get_str(952), n, get_str(953), get_str(954), get_str(955), get_str(956)}));
    return tmp_var_1;
}

void php_nativeplaywright__page__exposebinding(php::Object &this_, php::Str name, php::Object fn) {
    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{117}, get_str(957), get_str(475)), php::AttrMode::Update);
    php::Var tmp_var_1 = name;
    php::Var tmp_var_2 = fn;
    static_cast<void>(tmp_var_0.item(tmp_var_1, true) = tmp_var_2);
    return tmp_var_2;
    }();
    php_nativeplaywright__page__installbinding(this_, name);
}

void php_nativeplaywright__page__exposefunction(php::Object &this_, php::Str name, php::Object fn) {
    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(1, 2, true);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!(tmp_var_0.isArray()))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(750), get_str(665));
            return php::null;
        }
        php::Array source = php::toArray(tmp_var_0);
        tmp_var_0.unset();
        php::Array args;
        for (uint32_t i = 1; i < php::getCallArgNum(); i++) {
            args.appendValue(php::getCallArg(i));
        }
        php::appendCallExtraNamedArgs(args);
        php::Object fn = php::Object(vars_.get(0));
    php::Args tmp_var_1{php::ArgList{}};
    tmp_var_1.appendUnpacked(args);
    return typephp_call_cached(fn, get_function_call_cache(FunctionCallCacheId{13}), tmp_var_1);};
    php_nativeplaywright__page__exposebinding(this_, name, php::toObject(php::newClosureWithParameters(tmp_var_0, { fn }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), { php::ClosureParameter{"source", false, false, true}, php::ClosureParameter{"args", false, true, false} }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))));
}

void php_nativeplaywright__page__installbinding(php::Object &this_, php::Str name) {
    php::Str src;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var f;
    php::Var tmp_var_8;
    php::Object e;
    zend_class_entry *tmp_var_7 = get_persistent_class(PersistentClassId{14}, get_str(475));

    src = php_nativeplaywright__page__bindingscript(this_, name);
    tmp_var_0 = php::Array{
                { get_str(255).str(), php::Var(php::concat(get_str(753), name)) }
            };
    tmp_var_1 = php::Array{
            php::Var(get_str(752)), 
            php::Var(tmp_var_0)
        };
    tmp_var_0.unset();
    tmp_var_2 = php::Array{
                { get_str(750).str(), php::Var(src) }
            };
    tmp_var_3 = php::Array{
            php::Var(get_str(749)), 
            php::Var(tmp_var_2)
        };
    tmp_var_2.unset();
    tmp_var_4 = php::Array{
        php::Var(tmp_var_1), 
        php::Var(tmp_var_3)
    };
    tmp_var_1.unset();
    tmp_var_3.unset();
    php_nativeplaywright__page__sendmany(this_, tmp_var_4);
    tmp_var_4.unset();

    tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_6{tmp_var_5, false, tmp_var_7};
        while (tmp_var_6.next()) {
            f = tmp_var_6.value();
            try {
                typephp_call_method_cached(f, get_str(960), get_method_call_cache(MethodCallCacheId{33}), php::VarList{src});
            } catch (zend_object *_ex) {
                tmp_var_8 = php::catchException();
                bool tmp_var_9 = false;
                if (!tmp_var_9 && tmp_var_8 && (php::instanceOf(tmp_var_8, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
                    tmp_var_9 = true;
                    e = tmp_var_8;
                    tmp_var_8 = php::null;
                }
            }
            if (tmp_var_8) {
                php::throwException(php::Object(tmp_var_8));
            }
        }
    }
}

void php_nativeplaywright__page__onbindingcalled(php::Object &this_, php::Array p) {
    php::Str name;
    zend_function * tmp_var_0;
    zend_function * tmp_var_1;
    php::Var fn;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var payload;
    zend_function * tmp_var_6;
    php::Var tmp_var_7;
    php::Int cid = 0;
    php::Var frame = php::null;
    php::Var tmp_var_8;
    php::Var f;
    php::Var tmp_var_11;
    php::Bool tmp_var_12 = 0;
    php::Object self;
    php::Array source;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    zend_class_entry *tmp_var_10 = get_persistent_class(PersistentClassId{14}, get_str(475));

    name = php::toString(p.get(get_str(255)));
    if (get_function_resolution_cache(FunctionResolutionCacheId{124}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{124}) = php::fn::function_exists(get_str(199)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{124}) == 1 ? get_func(RequestFuncId{12}, get_str(199)) : get_persistent_func(PersistentFuncId{15}, get_str(200));
    if (php::toBool(!(php::toBool(php::call(tmp_var_0, php::VarList{name, get_str(753)}))))) {
        return;
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{125}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{125}) = php::fn::function_exists(get_str(216)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{125}) == 1 ? get_func(RequestFuncId{15}, get_str(216)) : get_persistent_func(PersistentFuncId{18}, get_str(217));
    name = php::call(tmp_var_1, php::VarList{name, 11L});
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{117}, get_str(957), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(name)}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
        php::Object tmp_var_5 = tmp_var_4;
        tmp_var_2 = php_nativeplaywright__browsercontext__binding(tmp_var_5, name);
        tmp_var_4.unset();
    }
    fn = tmp_var_2;
    if (php::toBool(php::same(fn, php::null))) {
        return;
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{126}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{126}) = php::fn::function_exists(get_str(92)) ? 1 : 2; }
    tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{126}) == 1 ? get_func(RequestFuncId{2}, get_str(92)) : get_persistent_func(PersistentFuncId{2}, get_str(93));
    tmp_var_7 = php::toString(p.get(get_str(962)));
    payload = php::call(tmp_var_6, php::VarList{tmp_var_7, true});
    tmp_var_7.unset();
    cid = php::toInt(p.get(get_str(721)));

    tmp_var_8 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_9{tmp_var_8, false, tmp_var_10};
        while (tmp_var_9.next()) {
            f = tmp_var_9.value();
            tmp_var_11 = typephp_read_property_cached(f, get_str(859), php::AttrMode::Get, get_property_cache(PropertyCacheId{93}));
            tmp_var_12 = php::toBool(php::same(tmp_var_11, cid));
            tmp_var_11.unset();
            if (php::toBool(tmp_var_12)) {
                frame = f;
            }
        }
    }
    self = this_;
    if (php::exists(frame)) {
            tmp_var_13 = frame;
        } else {
            tmp_var_13 = php_nativeplaywright__page__mainframe(this_);
        }
    tmp_var_14 = tmp_var_13;
    tmp_var_15 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    source = php::Array{
        { get_str(433).str(), php::Var(this_) }, 
        { get_str(309).str(), php::Var(tmp_var_14) }, 
        { get_str(693).str(), php::Var(tmp_var_15) }
    };
    tmp_var_14.unset();
    tmp_var_15.unset();
    tmp_var_16 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
    php::ClosureFn tmp_var_17 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object self = php::Object(vars_.get(0));
        php::Var fn = vars_.get(1);
        php::Var payload = vars_.get(2);
        php::Int cid = php::toInt(vars_.get(3));
        php::Str name = php::toString(vars_.get(4));
        php::Array source = php::toArray(vars_.get(5));
        php::Bool ok = php::toBool(true);
        php::Var result;
        php::Var tmp_var_1;
        php::Var tmp_var_2;
        php::Var tmp_var_3;
        php::Object e;
        php::Str expr;
        php::Object tmp_var_5;
        php::Var tmp_var_6;
        php::Var tmp_var_7;
        php::Var tmp_var_8;
        php::Int tmp_var_9 = 0;
        php::Var tmp_var_10;
        php::Var tmp_var_11;
        php::Var tmp_var_12;
        php::Var tmp_var_13;
        Z_PTR_P(tmp_var_5.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));
        try {
            php::Args tmp_var_0{php::ArgList{source}};
            if (php::exists(payload, {{php::ArrayDimFetch, php::Var(get_str(526))}}, tmp_var_2)) {
                tmp_var_1 = tmp_var_2;
            } else {
                tmp_var_1 = php::Array{};
            }
            tmp_var_0.appendUnpacked(php::toArray(tmp_var_1));
            result = typephp_call_cached(fn, get_function_call_cache(FunctionCallCacheId{14}), tmp_var_0);
            tmp_var_0.clear();
        } catch (zend_object *_ex) {
            tmp_var_3 = php::catchException();
            bool tmp_var_4 = false;
            if (!tmp_var_4 && tmp_var_3 && (php::instanceOf(tmp_var_3, get_persistent_class(PersistentClassId{3}, get_str(114))))) {
                tmp_var_4 = true;
                e = tmp_var_3;
                tmp_var_3 = php::null;
                ok = php::toBool(false);
                result = typephp_call_method_cached(e, get_str(141), get_method_call_cache(MethodCallCacheId{34}));
            }
        }
        if (tmp_var_3) {
            php::throwException(php::Object(tmp_var_3));
        }
        tmp_var_6 = php_nativeplaywright__locator__js(tmp_var_5, name);
        if (php::exists(payload, {{php::ArrayDimFetch, php::Var(get_str(118))}}, tmp_var_8)) {
            tmp_var_7 = tmp_var_8;
        } else {
            tmp_var_7 = 0L;
        }
        tmp_var_9 = php::toInt(tmp_var_7);
        tmp_var_10 = (php::toBool(ok)) ? (get_str(901)) : (get_str(902));
        tmp_var_11 = php_nativeplaywright__locator__js(tmp_var_5, result);
        expr = php::concat({get_str(964), tmp_var_6, get_str(965), tmp_var_9, get_str(966), tmp_var_10, get_str(966), tmp_var_11, get_str(230)});
        tmp_var_6.unset();
        tmp_var_10.unset();
        tmp_var_11.unset();
        try {
            tmp_var_12 = php::Array{
                { get_str(968).str(), php::Var(expr) }, 
                { get_str(969).str(), php::Var(cid) }
            };
            php_nativeplaywright__page__send(self, get_str(967), tmp_var_12);
            tmp_var_12.unset();
        } catch (zend_object *_ex) {
            tmp_var_13 = php::catchException();
            bool tmp_var_14 = false;
            if (!tmp_var_14 && tmp_var_13 && (php::instanceOf(tmp_var_13, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
                tmp_var_14 = true;
                e = tmp_var_13;
                tmp_var_13 = php::null;
            }
        }
        if (tmp_var_13) {
            php::throwException(php::Object(tmp_var_13));
        }
    return php::null;
    };
    typephp_call_method_cached(tmp_var_16, get_str(666), get_method_call_cache(MethodCallCacheId{35}), php::VarList{php::newClosureWithParameters(tmp_var_17, { self, fn, payload, cid, name, source }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), {  }, php::ClosureStrictTypes::Enabled)});
    tmp_var_16.unset();
}

void php_nativeplaywright__page__addinitscript(php::Object &this_, php::Var script, php::Var arg) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    Z_PTR_P(tmp_var_0.ptr()) = get_persistent_class(PersistentClassId{27}, get_str(701));
    if (UNEXPECTED(!(script.isString() || script.isArray()))) {
        php::throwArgumentTypeError(script, get_str(970), 1, get_str(971), get_str(523));
    }

    tmp_var_1 = php_nativeplaywright__browsercontext__scriptsource(tmp_var_0, script, arg);
    tmp_var_2 = php::Array{
        { get_str(750).str(), php::Var(tmp_var_1) }
    };
    tmp_var_1.unset();
    php_nativeplaywright__page__send(this_, get_str(749), tmp_var_2);
    tmp_var_2.unset();
}

void php_nativeplaywright__page__didclose(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Int tmp_var_2 = 0;
    php::Var tmp_var_3;
    php::Var f;
    php::Var tmp_var_6;
    zend_class_entry *tmp_var_5 = get_persistent_class(PersistentClassId{14}, get_str(475));
    php::Int &_object_prop_this___listenerId = this_.attrInt(get_persistent_prop(PersistentPropertyId{99}, get_str(706), get_str(475)));

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{105}, get_str(76), get_str(475)), php::AttrMode::Get))) {
        return;
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{105}, get_str(76), get_str(475)), php::AttrMode::Update) = true;
    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{101}, get_str(101), get_str(475)), php::AttrMode::Get);
    tmp_var_2 = php::toInt(_object_prop_this___listenerId);
    typephp_call_method_cached(tmp_var_0, get_str(667), get_method_call_cache(MethodCallCacheId{36}), php::VarList{php::deindirect(tmp_var_1), php::deindirect(tmp_var_2)});
    tmp_var_0.unset();
    tmp_var_1.unset();

    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_4{tmp_var_3, false, tmp_var_5};
        while (tmp_var_4.next()) {
            f = tmp_var_4.value();
            typephp_write_property_cached(f, get_str(894), true, tmp_var_5, get_property_cache(PropertyCacheId{96}));
        }
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{113}, get_str(880), get_str(475)), php::AttrMode::Update) = php::Array{};
    this_.attr(get_persistent_prop(PersistentPropertyId{114}, get_str(924), get_str(475)), php::AttrMode::Update) = php::Array{};
    this_.attr(get_persistent_prop(PersistentPropertyId{115}, get_str(930), get_str(475)), php::AttrMode::Update) = php::Array{};
    this_.attr(get_persistent_prop(PersistentPropertyId{117}, get_str(957), get_str(475)), php::AttrMode::Update) = php::Array{};
    php_nativeplaywright__page__poke(this_);
    php_nativeplaywright__page__emit(this_, get_str(171), this_);
    tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_7 = tmp_var_6;
    php_nativeplaywright__browsercontext__pageclosed(tmp_var_7, this_);
    tmp_var_6.unset();
    php_nativeplaywright__page__removealllisteners(this_);
}

php::Bool php_nativeplaywright__page__isclosed(php::Object &this_) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{105}, get_str(76), get_str(475)), php::AttrMode::Get)));
    return tmp_var_0;
}

void php_nativeplaywright__page__close(php::Object &this_, php::Array options) {
    php::Var tmp_var_0;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Object self;
    php::Var tmp_var_5;
    php::Object e;
    php::Var tmp_var_7;
    php::Var tmp_var_9;
    php::Var tmp_var_10;

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{105}, get_str(76), get_str(475)), php::AttrMode::Get))) {
        return;
    }
    try {
        if (php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(974))}}))))) {
            php_nativeplaywright__page__send(this_, get_str(975));
            return;
        }
        tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{107}, get_str(694), get_str(475)), php::AttrMode::Get);
        php::Object tmp_var_1 = tmp_var_0;
        tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{118}, get_str(977), get_str(475)), php::AttrMode::Get);
        tmp_var_3 = php::Array{
            { get_str(977).str(), php::Var(tmp_var_2) }
        };
        tmp_var_2.unset();
        php_nativeplaywright__browser__send(tmp_var_1, get_str(976), tmp_var_3);
        tmp_var_0.unset();
        tmp_var_3.unset();
        self = this_;
        php::ClosureFn tmp_var_4 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
        php::checkCallArgCount(0, 0, false);
            php::Object self = php::Object(vars_.get(0));
            php::Var tmp_var_0;

        tmp_var_0 = php_nativeplaywright__page__isclosed(self);
            if (UNEXPECTED(!(tmp_var_0.isBool()))) {
                php::throwReturnTypeError(tmp_var_0, get_str(458), get_str(106), false);
                return php::null;
            }
            return tmp_var_0;};
        php_nativeplaywright__page__waitforcondition(this_, php::toObject(php::newClosureWithParameters(tmp_var_4, { self }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), php::toFloat(5.0), get_str(979));
    } catch (zend_object *_ex) {
        tmp_var_5 = php::catchException();
        bool tmp_var_6 = false;
        if (!tmp_var_6 && tmp_var_5 && (php::instanceOf(tmp_var_5, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
            tmp_var_6 = true;
            e = tmp_var_5;
            tmp_var_5 = php::null;
            php_nativeplaywright__page__didclose(this_);
        }
    }
    if (tmp_var_5) {
        php::throwException(php::Object(tmp_var_5));
    }
    tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_8 = tmp_var_7;
    tmp_var_9 = php_nativeplaywright__browsercontext__ownedby(tmp_var_8, this_);
    tmp_var_7.unset();
    if (php::toBool(tmp_var_9)) {
        tmp_var_10 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
        php::Object tmp_var_11 = tmp_var_10;
        php_nativeplaywright__browsercontext__close(tmp_var_11);
        tmp_var_10.unset();
    }
}

void php_nativeplaywright__page__setopener(php::Object &this_, php::Object opener) {
    this_.attr(get_persistent_prop(PersistentPropertyId{119}, get_str(982), get_str(475)), php::AttrMode::Update) = opener;
}

php::Object php_nativeplaywright__page__opener(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{119}, get_str(982), get_str(475)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Object php_nativeplaywright__page__context(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get));
    return tmp_var_0;
}

void php_nativeplaywright__page__emitdownload(php::Object &this_, php::Object d) {
    php_nativeplaywright__page__emit(this_, get_str(675), d);
}

void php_nativeplaywright__page__emitpopup(php::Object &this_, php::Object p) {
    php_nativeplaywright__page__emit(this_, get_str(983), p);
}

void php_nativeplaywright__page__onlisteneradded(php::Object &this_, php::Str event) {
    php::Object self;
    php::Var tmp_var_0;

    if (php::toBool((php::toBool(php::same(event, get_str(875))) && php::toBool(!(php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{120}, get_str(984), get_str(475)), php::AttrMode::Get))))))) {
        this_.attr(get_persistent_prop(PersistentPropertyId{120}, get_str(984), get_str(475)), php::AttrMode::Update) = true;
        self = this_;
        tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
        php::ClosureFn tmp_var_1 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
        php::checkCallArgCount(0, 0, false);
            php::Object self = php::Object(vars_.get(0));
            php::Var tmp_var_0;
            tmp_var_0 = php::Array{
                { get_str(740).str(), php::Var(true) }
            };
            php_nativeplaywright__page__send(self, get_str(985), tmp_var_0);
            tmp_var_0.unset();
        return php::null;
        };
        typephp_call_method_cached(tmp_var_0, get_str(666), get_method_call_cache(MethodCallCacheId{37}), php::VarList{php::newClosureWithParameters(tmp_var_1, { self }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), {  }, php::ClosureStrictTypes::Enabled)});
        tmp_var_0.unset();
    }
}

php::Object php_nativeplaywright__page__mainframe(php::Object &this_) {
    php::Var f;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{0}, get_str(75));

    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(this_.attr(get_persistent_prop(PersistentPropertyId{112}, get_str(820), get_str(475)), php::AttrMode::Get))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::null;
    }
    f = tmp_var_0;
    if (php::toBool(php::same(f, php::null))) {
        php::throwException(php::newObject(tmp_var_2, php::VarList{get_str(986)}));
    }
    return php::toObject(f, get_persistent_class(PersistentClassId{12}, get_str(326)));
}

php::Array php_nativeplaywright__page__frames(php::Object &this_) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Array tmp_var_2;

    if (get_function_resolution_cache(FunctionResolutionCacheId{127}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{127}) = php::fn::function_exists(get_str(454)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{127}) == 1 ? get_func(RequestFuncId{31}, get_str(454)) : get_persistent_func(PersistentFuncId{35}, get_str(455));
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Get);
    tmp_var_2 = (php::call(tmp_var_0, php::VarList{php::deindirect(tmp_var_1)}));
    tmp_var_1.unset();
    return tmp_var_2;
}

php::Object php_nativeplaywright__page__framebyid(php::Object &this_, php::Str id) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;

    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(id)}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::null;
    }
    tmp_var_2 = tmp_var_0;
    if (UNEXPECTED(!(tmp_var_2.isNull() || (tmp_var_2.isObject() && php::instanceOf(tmp_var_2, get_persistent_class(PersistentClassId{12}, get_str(326))))))) {
        php::throwReturnTypeError(tmp_var_2, get_str(987), get_str(549), false);
    }
    return tmp_var_2;
}

php::Object php_nativeplaywright__page__frame(php::Object &this_, php::Var selector) {
    php::Var name;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var url;
    zend_function * tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var f;
    php::Var tmp_var_9;
    php::Bool tmp_var_10 = 0;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Object tmp_var_13;
    php::Bool tmp_var_14 = 0;
    php::Var tmp_var_15;
    php::Object tmp_var_16;
    zend_class_entry *tmp_var_8 = get_persistent_class(PersistentClassId{14}, get_str(475));
    Z_PTR_P(tmp_var_13.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));
    if (UNEXPECTED(!(selector.isString() || selector.isArray()))) {
        php::throwArgumentTypeError(selector, get_str(988), 1, get_str(312), get_str(523));
    }

    name = [&]() -> php::Var {
        if (get_function_resolution_cache(FunctionResolutionCacheId{128}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{128}) = php::fn::function_exists(get_str(71)) ? 1 : 2; }
        tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{128}) == 1 ? get_func(RequestFuncId{0}, get_str(71)) : get_persistent_func(PersistentFuncId{0}, get_str(72));
        if (php::toBool(php::call(tmp_var_0, php::VarList{selector}))) {
            return php::Var(selector);
        } else {
            if (php::exists(selector, {{php::ArrayDimFetch, php::Var(get_str(255))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = php::null;
    }
            return php::Var(tmp_var_1);
        }
    }();
    url = [&]() -> php::Var {
        if (get_function_resolution_cache(FunctionResolutionCacheId{129}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{129}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
        tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{129}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
        if (php::toBool(php::call(tmp_var_3, php::VarList{selector}))) {
            if (php::exists(selector, {{php::ArrayDimFetch, php::Var(get_str(203))}}, tmp_var_5)) {
        tmp_var_4 = tmp_var_5;
    } else {
        tmp_var_4 = php::null;
    }
            return php::Var(tmp_var_4);
        } else {
            return php::Var(php::null);
        }
    }();

    tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{111}, get_str(816), get_str(475)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_7{tmp_var_6, false, tmp_var_8};
        while (tmp_var_7.next()) {
            f = tmp_var_7.value();
            if (php::toBool([&]() -> bool {
                if (php::toBool(!(php::same(name, php::null)))) {
                    tmp_var_9 = typephp_read_property_cached(f, get_str(255), php::AttrMode::Get, get_property_cache(PropertyCacheId{98}));
                    tmp_var_10 = php::toBool(!(php::same(tmp_var_9, name)));
                    tmp_var_9.unset();
                    return php::toBool(tmp_var_10);
                }
                return false;
            }())) {
                continue;
            }
            if (php::toBool([&]() -> bool {
                if (php::toBool(!(php::same(url, php::null)))) {
                    tmp_var_11 = url;
                    tmp_var_12 = typephp_read_property_cached(f, get_str(203), php::AttrMode::Get, get_property_cache(PropertyCacheId{102}));
                    tmp_var_14 = php::toBool(!(php::toBool(php_nativeplaywright__util__urlmatches(tmp_var_13, tmp_var_11, php::toStringArgExact(php::deindirect(tmp_var_12), get_str(206), 2, get_str(203))))));
                    tmp_var_11.unset();
                    tmp_var_12.unset();
                    return php::toBool(tmp_var_14);
                }
                return false;
            }())) {
                continue;
            }
            tmp_var_15 = f;
            if (UNEXPECTED(!(tmp_var_15.isNull() || (tmp_var_15.isObject() && php::instanceOf(tmp_var_15, get_persistent_class(PersistentClassId{12}, get_str(326))))))) {
                php::throwReturnTypeError(tmp_var_15, get_str(988), get_str(549), false);
            }
            return tmp_var_15;
        }
    }
    tmp_var_16 = (php::Object{});
    return tmp_var_16;
}

php::Str php_nativeplaywright__page__url(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (typephp_read_property_cached(php_nativeplaywright__page__mainframe(this_), get_str(203), php::AttrMode::Get, get_property_cache(PropertyCacheId{104})));
    return tmp_var_0;
}

php::Object php_nativeplaywright__page__goto(php::Object &this_, php::Str url, php::Array options) {
    php::Object tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__goto(tmp_var_0, url, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__historynavigate(php::Object &this_, php::Object trigger, php::Array options) {
    php::Object main;
    php::Str old;
    php::Int oldSame = 0;
    php::Str event;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Object tmp_var_6;
    php::Float tmp_var_8 = 0;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;

    main = php_nativeplaywright__page__mainframe(this_);
    old = main.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
    oldSame = php::toInt(main.attr(get_persistent_prop(PersistentPropertyId{122}, get_str(849), get_str(326)), php::AttrMode::Get));
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(990))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = get_str(20);
    }
    tmp_var_2 = php::toString(tmp_var_0);
    event = [&]() -> php::Str {
        bool tmp_var_3 = false;
        if (!tmp_var_3) {
            tmp_var_3 = php::same(tmp_var_2, get_str(856));
        }
        if (tmp_var_3) {
            return get_str(855);
        }
        bool tmp_var_4 = false;
        if (!tmp_var_4) {
            tmp_var_4 = php::same(tmp_var_2, get_str(991));
        }
        if (tmp_var_4) {
            return get_str(992);
        }
        bool tmp_var_5 = false;
        if (!tmp_var_5) {
            tmp_var_5 = php::same(tmp_var_2, get_str(993));
        }
        if (tmp_var_5) {
            return get_str(993);
        }
        {
            return get_str(20);
        }
    }();
    if (php::toBool(!(php::toBool(typephp_call_cached(trigger, get_function_call_cache(FunctionCallCacheId{15})))))) {
        tmp_var_6 = (php::Object{});
        return tmp_var_6;
    }
    php::ClosureFn tmp_var_7 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object main = php::Object(vars_.get(0));
        php::Str old = php::toString(vars_.get(1));
        php::Str event = php::toString(vars_.get(2));
        php::Int oldSame = php::toInt(vars_.get(3));
        php::Var tmp_var_0;
        php::Bool tmp_var_1 = 0;
        php::Var tmp_var_2;
        php::Bool tmp_var_3 = 0;
        php::Bool tmp_var_4 = 0;
        php::Var tmp_var_5;
        php::Bool tmp_var_6 = 0;
        php::Var tmp_var_7;
    tmp_var_0 = main.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
    tmp_var_1 = php::toBool(!(php::same(tmp_var_0, old)));
    tmp_var_0.unset();
    tmp_var_4 = php::toBool([&]() -> bool {
            if (php::toBool(tmp_var_1)) {
                tmp_var_2 = main.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
                tmp_var_3 = php::toBool(php_nativeplaywright__frame__lifecyclereached(main, php::deindirect(tmp_var_2), event));
                tmp_var_2.unset();
                return php::toBool(tmp_var_3);
            }
            return false;
        }());
    tmp_var_7 = [&]() -> bool {
            if (!(php::toBool(tmp_var_4))) {
                tmp_var_5 = main.attr(get_persistent_prop(PersistentPropertyId{122}, get_str(849), get_str(326)), php::AttrMode::Get);
                tmp_var_6 = php::toBool(!(tmp_var_5 == oldSame));
                tmp_var_5.unset();
                return php::toBool(tmp_var_6);
            }
            return true;
        }();
        if (UNEXPECTED(!(tmp_var_7.isBool()))) {
            php::throwReturnTypeError(tmp_var_7, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_7;};
    tmp_var_8 = php::toFloat(php_nativeplaywright__page__navigationtimeoutseconds(this_, options));
    php_nativeplaywright__page__waitforcondition(this_, php::toObject(php::newClosureWithParameters(tmp_var_7, { main, old, event, oldSame }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), php::toFloat(tmp_var_8), get_str(996));
    tmp_var_13 = [&]() -> php::Var {
        tmp_var_9 = main.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
        tmp_var_11 = !(php::same(tmp_var_9, old));
        tmp_var_9.unset();
        if (php::toBool(tmp_var_11)) {
            tmp_var_10 = main.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
            tmp_var_12 = php_nativeplaywright__page__navigationresponse(this_, php::deindirect(tmp_var_10));
            tmp_var_10.unset();
            return tmp_var_12;
        } else {
            return php::Var(php::null);
        }
    }();
    if (UNEXPECTED(!(tmp_var_13.isNull() || (tmp_var_13.isObject() && php::instanceOf(tmp_var_13, get_persistent_class(PersistentClassId{21}, get_str(540))))))) {
        php::throwReturnTypeError(tmp_var_13, get_str(998), get_str(929), false);
    }
    return tmp_var_13;
}

php::Object php_nativeplaywright__page__reload(php::Object &this_, php::Array options) {
    php::Object self;
    php::Object tmp_var_1;

    self = this_;
    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object self = php::Object(vars_.get(0));
        php::Var tmp_var_0;
        php_nativeplaywright__page__send(self, get_str(1000));
        tmp_var_0 = php::toBool(true);
        if (UNEXPECTED(!(tmp_var_0.isBool()))) {
            php::throwReturnTypeError(tmp_var_0, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_0;
    };
    tmp_var_1 = (php_nativeplaywright__page__historynavigate(this_, php::toObject(php::newClosureWithParameters(tmp_var_0, { self }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), options));
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__gohistory(php::Object &this_, php::Int delta, php::Array options) {
    php::Object self;
    php::Object tmp_var_1;

    self = this_;
    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object self = php::Object(vars_.get(0));
        php::Int delta = php::toInt(vars_.get(1));
        php::Array h;
        php::Int i = 0;
        php::Int tmp_var_0 = 0;
        php::Array entries;
        zend_function * tmp_var_1;
        php::Var tmp_var_2;
        php::Bool tmp_var_3 = 0;
        php::Var tmp_var_4;
        php::Var tmp_var_5;
        php::Var tmp_var_6;
        php::Var tmp_var_7;
        h = php_nativeplaywright__page__send(self, get_str(1001));
        tmp_var_0 = php::toInt(h.get(get_str(1002)));
        i = php::toInt(((tmp_var_0) + (delta)));
        entries = php::toArray(h.get(get_str(1003)));
        if (php::toBool([&]() -> bool {
            if (!(php::toBool(((i) < (0L))))) {
                if (get_function_resolution_cache(FunctionResolutionCacheId{130}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{130}) = php::fn::function_exists(get_str(162)) ? 1 : 2; }
                tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{130}) == 1 ? get_func(RequestFuncId{8}, get_str(162)) : get_persistent_func(PersistentFuncId{8}, get_str(163));
                tmp_var_2 = php::call(tmp_var_1, php::VarList{entries});
                tmp_var_3 = php::toBool(((php::Var(i)) >= (php::Var(tmp_var_2))));
                tmp_var_2.unset();
                return php::toBool(tmp_var_3);
            }
            return true;
        }())) {
            tmp_var_4 = php::toBool(false);
            if (UNEXPECTED(!(tmp_var_4.isBool()))) {
                php::throwReturnTypeError(tmp_var_4, get_str(458), get_str(106), false);
                return php::null;
            }
            return tmp_var_4;
        }
        tmp_var_5 = entries.get(i).item(get_str(118), false);
        tmp_var_6 = php::Array{
            { get_str(1005).str(), php::Var(tmp_var_5) }
        };
        tmp_var_5.unset();
        php_nativeplaywright__page__send(self, get_str(1004), tmp_var_6);
        tmp_var_6.unset();
        tmp_var_7 = php::toBool(true);
        if (UNEXPECTED(!(tmp_var_7.isBool()))) {
            php::throwReturnTypeError(tmp_var_7, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_7;
    };
    tmp_var_1 = (php_nativeplaywright__page__historynavigate(this_, php::toObject(php::newClosureWithParameters(tmp_var_0, { self, delta }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), options));
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__goback(php::Object &this_, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = (php_nativeplaywright__page__gohistory(this_, php::toInt(-1L), options));
    return tmp_var_0;
}

php::Object php_nativeplaywright__page__goforward(php::Object &this_, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = (php_nativeplaywright__page__gohistory(this_, php::toInt(1L), options));
    return tmp_var_0;
}

void php_nativeplaywright__page__waitforloadstate(php::Object &this_, php::Str state, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__waitforloadstate(tmp_var_0, state, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__waitforurl(php::Object &this_, php::Var url, php::Array options) {
    php::Object tmp_var_0;
    if (UNEXPECTED(!(url.isString() || (url.isObject() && php::instanceOf(url, get_persistent_class(PersistentClassId{5}, get_str(148))))))) {
        php::throwArgumentTypeError(url, get_str(1009), 1, get_str(203), get_str(208));
    }

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__waitforurl(tmp_var_0, url, options);
    tmp_var_0.unset();
}

php::Object php_nativeplaywright__page__expectnavigation(php::Object &this_, php::Object action, php::Array options) {
    php::Object tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__expectnavigation(tmp_var_0, action, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

void php_nativeplaywright__page__waitfortimeout(php::Object &this_, php::Float ms) {
    php::Var tmp_var_0;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
    typephp_call_method_cached(tmp_var_0, get_str(1011), get_method_call_cache(MethodCallCacheId{38}), php::VarList{((ms) / (php::toFloat(1000L)))});
    tmp_var_0.unset();
}

php::Object php_nativeplaywright__page__expectrequest(php::Object &this_, php::Var urlOrPredicate, php::Object action, php::Array options) {
    php::Var base;
    php::Var tmp_var_0;
    php::Var pred;
    php::Object tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Object tmp_var_6;
    if (UNEXPECTED(!(urlOrPredicate.isString() || (urlOrPredicate.isObject() && php::instanceOf(urlOrPredicate, get_persistent_class(PersistentClassId{5}, get_str(148))))))) {
        php::throwArgumentTypeError(urlOrPredicate, get_str(1014), 1, get_str(1015), get_str(208));
    }

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    base = php_nativeplaywright__browsercontext__baseurl(tmp_var_1);
    tmp_var_0.unset();
    pred = [&]() -> php::Var {
        if (php::toBool(php::instanceOf(urlOrPredicate, get_persistent_class(PersistentClassId{5}, get_str(148))))) {
            return php::Var(urlOrPredicate);
        } else {
            php::ClosureFn tmp_var_2 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
            php::checkCallArgCount(1, 1, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!((tmp_var_0.isObject() && php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{22}, get_str(560))))))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(1012), get_str(933));
            return php::null;
        }
        php::Object r = php::Object(tmp_var_0);
        tmp_var_0.unset();
        php::Var urlOrPredicate = vars_.get(0);
        php::Var base = vars_.get(1);
        php::Var tmp_var_1;
        php::Var tmp_var_2;
        php::Object tmp_var_3;
        php::Var tmp_var_4;
        Z_PTR_P(tmp_var_3.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));
            tmp_var_1 = urlOrPredicate;
            tmp_var_2 = php_nativeplaywright__request__url(r);
            tmp_var_4 = php_nativeplaywright__util__urlmatches(tmp_var_3, tmp_var_1, tmp_var_2, php::toStringArgExact(base, get_str(206), 3, get_str(304)));
        if (UNEXPECTED(!(tmp_var_4.isBool()))) {
            php::throwReturnTypeError(tmp_var_4, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_4;};
            return php::Var(php::newClosureWithParameters(tmp_var_2, { urlOrPredicate, base }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), { php::ClosureParameter{"r", false, false, true} }, php::ClosureStrictTypes::Enabled));
        }
    }();
    tmp_var_3 = action;
    tmp_var_4 = pred;
    tmp_var_5 = (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(102))}}))) ? (php::Var(php::toFloat(options.get(get_str(102))))) : (php::Var(php::null));
    tmp_var_6 = (php::toObject(php_nativeplaywright__page__expectevent(this_, get_str(547), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_3), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_4), tmp_var_5), get_persistent_class(PersistentClassId{22}, get_str(560))));
    tmp_var_3.unset();
    tmp_var_4.unset();
    tmp_var_5.unset();
    return tmp_var_6;
}

php::Object php_nativeplaywright__page__expectresponse(php::Object &this_, php::Var urlOrPredicate, php::Object action, php::Array options) {
    php::Var base;
    php::Var tmp_var_0;
    php::Var pred;
    php::Object tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Object tmp_var_6;
    if (UNEXPECTED(!(urlOrPredicate.isString() || (urlOrPredicate.isObject() && php::instanceOf(urlOrPredicate, get_persistent_class(PersistentClassId{5}, get_str(148))))))) {
        php::throwArgumentTypeError(urlOrPredicate, get_str(1017), 1, get_str(1015), get_str(208));
    }

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    base = php_nativeplaywright__browsercontext__baseurl(tmp_var_1);
    tmp_var_0.unset();
    pred = [&]() -> php::Var {
        if (php::toBool(php::instanceOf(urlOrPredicate, get_persistent_class(PersistentClassId{5}, get_str(148))))) {
            return php::Var(urlOrPredicate);
        } else {
            php::ClosureFn tmp_var_2 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
            php::checkCallArgCount(1, 1, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!((tmp_var_0.isObject() && php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{21}, get_str(540))))))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(1012), get_str(1016));
            return php::null;
        }
        php::Object r = php::Object(tmp_var_0);
        tmp_var_0.unset();
        php::Var urlOrPredicate = vars_.get(0);
        php::Var base = vars_.get(1);
        php::Var tmp_var_1;
        php::Var tmp_var_2;
        php::Object tmp_var_3;
        php::Var tmp_var_4;
        Z_PTR_P(tmp_var_3.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));
            tmp_var_1 = urlOrPredicate;
            tmp_var_2 = php_nativeplaywright__response__url(r);
            tmp_var_4 = php_nativeplaywright__util__urlmatches(tmp_var_3, tmp_var_1, tmp_var_2, php::toStringArgExact(base, get_str(206), 3, get_str(304)));
        if (UNEXPECTED(!(tmp_var_4.isBool()))) {
            php::throwReturnTypeError(tmp_var_4, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_4;};
            return php::Var(php::newClosureWithParameters(tmp_var_2, { urlOrPredicate, base }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), { php::ClosureParameter{"r", false, false, true} }, php::ClosureStrictTypes::Enabled));
        }
    }();
    tmp_var_3 = action;
    tmp_var_4 = pred;
    tmp_var_5 = (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(102))}}))) ? (php::Var(php::toFloat(options.get(get_str(102))))) : (php::Var(php::null));
    tmp_var_6 = (php::toObject(php_nativeplaywright__page__expectevent(this_, get_str(591), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_3), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_4), tmp_var_5), get_persistent_class(PersistentClassId{21}, get_str(540))));
    tmp_var_3.unset();
    tmp_var_4.unset();
    tmp_var_5.unset();
    return tmp_var_6;
}

php::Object php_nativeplaywright__page__waitforrequest(php::Object &this_, php::Var urlOrPredicate, php::Array options) {
    php::Object tmp_var_1;
    if (UNEXPECTED(!(urlOrPredicate.isString() || (urlOrPredicate.isObject() && php::instanceOf(urlOrPredicate, get_persistent_class(PersistentClassId{5}, get_str(148))))))) {
        php::throwArgumentTypeError(urlOrPredicate, get_str(1019), 1, get_str(1015), get_str(208));
    }

    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
    return php::null;
    };
    tmp_var_1 = (php_nativeplaywright__page__expectrequest(this_, urlOrPredicate, php::toObject(php::newClosureWithParameters(tmp_var_0, {  }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), options));
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__waitforresponse(php::Object &this_, php::Var urlOrPredicate, php::Array options) {
    php::Object tmp_var_1;
    if (UNEXPECTED(!(urlOrPredicate.isString() || (urlOrPredicate.isObject() && php::instanceOf(urlOrPredicate, get_persistent_class(PersistentClassId{5}, get_str(148))))))) {
        php::throwArgumentTypeError(urlOrPredicate, get_str(1021), 1, get_str(1015), get_str(208));
    }

    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
    return php::null;
    };
    tmp_var_1 = (php_nativeplaywright__page__expectresponse(this_, urlOrPredicate, php::toObject(php::newClosureWithParameters(tmp_var_0, {  }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), options));
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__expectpopup(php::Object &this_, php::Object action, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Object tmp_var_5;

    tmp_var_0 = action;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1022))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = php::null;
    }
    tmp_var_3 = tmp_var_1;
    tmp_var_4 = (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(102))}}))) ? (php::Var(php::toFloat(options.get(get_str(102))))) : (php::Var(php::null));
    tmp_var_5 = (php::toObject(php_nativeplaywright__page__expectevent(this_, get_str(983), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_0), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_3), tmp_var_4), get_persistent_class(PersistentClassId{14}, get_str(475))));
    tmp_var_0.unset();
    tmp_var_3.unset();
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Object php_nativeplaywright__page__expectdownload(php::Object &this_, php::Object action, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Object tmp_var_5;

    tmp_var_0 = action;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1022))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = php::null;
    }
    tmp_var_3 = tmp_var_1;
    tmp_var_4 = (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(102))}}))) ? (php::Var(php::toFloat(options.get(get_str(102))))) : (php::Var(php::null));
    tmp_var_5 = (php::toObject(php_nativeplaywright__page__expectevent(this_, get_str(675), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_0), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_3), tmp_var_4), get_persistent_class(PersistentClassId{26}, get_str(671))));
    tmp_var_0.unset();
    tmp_var_3.unset();
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Object php_nativeplaywright__page__expectconsolemessage(php::Object &this_, php::Object action, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Object tmp_var_5;

    tmp_var_0 = action;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1022))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = php::null;
    }
    tmp_var_3 = tmp_var_1;
    tmp_var_4 = (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(102))}}))) ? (php::Var(php::toFloat(options.get(get_str(102))))) : (php::Var(php::null));
    tmp_var_5 = (php::toObject(php_nativeplaywright__page__expectevent(this_, get_str(897), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_0), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_3), tmp_var_4), get_persistent_class(PersistentClassId{19}, get_str(525))));
    tmp_var_0.unset();
    tmp_var_3.unset();
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Object php_nativeplaywright__page__expectfilechooser(php::Object &this_, php::Object action, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Object tmp_var_5;

    tmp_var_0 = action;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1022))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = php::null;
    }
    tmp_var_3 = tmp_var_1;
    tmp_var_4 = (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(102))}}))) ? (php::Var(php::toFloat(options.get(get_str(102))))) : (php::Var(php::null));
    tmp_var_5 = (php::toObject(php_nativeplaywright__page__expectevent(this_, get_str(875), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_0), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_3), tmp_var_4), get_persistent_class(PersistentClassId{18}, get_str(517))));
    tmp_var_0.unset();
    tmp_var_3.unset();
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Object php_nativeplaywright__page__expectdialog(php::Object &this_, php::Object action, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Object tmp_var_5;

    tmp_var_0 = action;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1022))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = php::null;
    }
    tmp_var_3 = tmp_var_1;
    tmp_var_4 = (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(102))}}))) ? (php::Var(php::toFloat(options.get(get_str(102))))) : (php::Var(php::null));
    tmp_var_5 = (php::toObject(php_nativeplaywright__page__expectevent(this_, get_str(917), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_0), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_3), tmp_var_4), get_persistent_class(PersistentClassId{20}, get_str(528))));
    tmp_var_0.unset();
    tmp_var_3.unset();
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Str php_nativeplaywright__page__title(php::Object &this_) {
    php::Object tmp_var_0;
    php::Str tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__title(tmp_var_0));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Str php_nativeplaywright__page__content(php::Object &this_) {
    php::Object tmp_var_0;
    php::Str tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__content(tmp_var_0));
    tmp_var_0.unset();
    return tmp_var_1;
}

void php_nativeplaywright__page__setcontent(php::Object &this_, php::Str html, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__setcontent(tmp_var_0, html, options);
    tmp_var_0.unset();
}

php::Var php_nativeplaywright__page__evaluate(php::Object &this_, php::Str js, php::Var arg) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__evaluate(tmp_var_0, js, arg));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Var php_nativeplaywright__page__waitforfunction(php::Object &this_, php::Str js, php::Var arg, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__waitforfunction(tmp_var_0, js, arg, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

void php_nativeplaywright__page__addscripttag(php::Object &this_, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__addscripttag(tmp_var_0, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__addstyletag(php::Object &this_, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__addstyletag(tmp_var_0, options);
    tmp_var_0.unset();
}

php::Object php_nativeplaywright__page__locator(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__locator(tmp_var_0, selector, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__getbytext(php::Object &this_, php::Str text, php::Array options) {
    php::Object tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__getbytext(tmp_var_0, text, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__getbyrole(php::Object &this_, php::Str role, php::Array options) {
    php::Object tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__getbyrole(tmp_var_0, role, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__getbylabel(php::Object &this_, php::Str text, php::Array options) {
    php::Object tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__getbylabel(tmp_var_0, text, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__getbyplaceholder(php::Object &this_, php::Str text, php::Array options) {
    php::Object tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__getbyplaceholder(tmp_var_0, text, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__getbyalttext(php::Object &this_, php::Str text, php::Array options) {
    php::Object tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__getbyalttext(tmp_var_0, text, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__getbytitle(php::Object &this_, php::Str text, php::Array options) {
    php::Object tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__getbytitle(tmp_var_0, text, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__getbytestid(php::Object &this_, php::Str testId) {
    php::Object tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__getbytestid(tmp_var_0, testId));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__framelocator(php::Object &this_, php::Str selector) {
    php::Object tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__framelocator(tmp_var_0, selector));
    tmp_var_0.unset();
    return tmp_var_1;
}

void php_nativeplaywright__page__click(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__click(tmp_var_0, selector, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__dblclick(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__dblclick(tmp_var_0, selector, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__tap(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__tap(tmp_var_0, selector, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__fill(php::Object &this_, php::Str selector, php::Str value, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__fill(tmp_var_0, selector, value, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__type(php::Object &this_, php::Str selector, php::Str text, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__type(tmp_var_0, selector, text, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__press(php::Object &this_, php::Str selector, php::Str key, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__press(tmp_var_0, selector, key, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__hover(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__hover(tmp_var_0, selector, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__focus(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__focus(tmp_var_0, selector, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__check(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__check(tmp_var_0, selector, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__uncheck(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__uncheck(tmp_var_0, selector, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__setchecked(php::Object &this_, php::Str selector, php::Bool checked, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__setchecked(tmp_var_0, selector, php::toBool(checked), options);
    tmp_var_0.unset();
}

php::Array php_nativeplaywright__page__selectoption(php::Object &this_, php::Str selector, php::Var values, php::Array options) {
    php::Object tmp_var_0;
    php::Array tmp_var_1;
    if (UNEXPECTED(!(values.isString() || values.isArray()))) {
        php::throwArgumentTypeError(values, get_str(1046), 2, get_str(1047), get_str(523));
    }

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__selectoption(tmp_var_0, selector, values, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

void php_nativeplaywright__page__setinputfiles(php::Object &this_, php::Str selector, php::Var files, php::Array options) {
    php::Object tmp_var_0;
    if (UNEXPECTED(!(files.isString() || files.isArray()))) {
        php::throwArgumentTypeError(files, get_str(1049), 2, get_str(520), get_str(523));
    }

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__setinputfiles(tmp_var_0, selector, files, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__draganddrop(php::Object &this_, php::Str source, php::Str target, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__draganddrop(tmp_var_0, source, target, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__page__dispatchevent(php::Object &this_, php::Str selector, php::Str type, php::Array eventInit, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    php_nativeplaywright__frame__dispatchevent(tmp_var_0, selector, type, eventInit, options);
    tmp_var_0.unset();
}

php::Var php_nativeplaywright__page__textcontent(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = php_nativeplaywright__frame__textcontent(tmp_var_0, selector, options);
    if (UNEXPECTED(!(tmp_var_1.isNull() || tmp_var_1.isString()))) {
        php::throwReturnTypeError(tmp_var_1, get_str(1053), get_str(545), false);
    }
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Str php_nativeplaywright__page__innertext(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Str tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__innertext(tmp_var_0, selector, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Str php_nativeplaywright__page__innerhtml(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Str tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__innerhtml(tmp_var_0, selector, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Var php_nativeplaywright__page__getattribute(php::Object &this_, php::Str selector, php::Str name, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = php_nativeplaywright__frame__getattribute(tmp_var_0, selector, name, options);
    if (UNEXPECTED(!(tmp_var_1.isNull() || tmp_var_1.isString()))) {
        php::throwReturnTypeError(tmp_var_1, get_str(1057), get_str(545), false);
    }
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Str php_nativeplaywright__page__inputvalue(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Str tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__inputvalue(tmp_var_0, selector, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__page__isvisible(php::Object &this_, php::Str selector) {
    php::Object tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php::toBool(php_nativeplaywright__frame__isvisible(tmp_var_0, selector)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__page__ishidden(php::Object &this_, php::Str selector) {
    php::Object tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php::toBool(php_nativeplaywright__frame__ishidden(tmp_var_0, selector)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__page__isenabled(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php::toBool(php_nativeplaywright__frame__isenabled(tmp_var_0, selector, options)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__page__isdisabled(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php::toBool(php_nativeplaywright__frame__isdisabled(tmp_var_0, selector, options)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__page__iseditable(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php::toBool(php_nativeplaywright__frame__iseditable(tmp_var_0, selector, options)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__page__ischecked(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php::toBool(php_nativeplaywright__frame__ischecked(tmp_var_0, selector, options)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__page__waitforselector(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__waitforselector(tmp_var_0, selector, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Var php_nativeplaywright__page__evalonselector(php::Object &this_, php::Str selector, php::Str js, php::Var arg) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__evalonselector(tmp_var_0, selector, js, arg));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Var php_nativeplaywright__page__evalonselectorall(php::Object &this_, php::Str selector, php::Str js, php::Var arg) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;

    tmp_var_0 = php_nativeplaywright__page__mainframe(this_);
    tmp_var_1 = (php_nativeplaywright__frame__evalonselectorall(tmp_var_0, selector, js, arg));
    tmp_var_0.unset();
    return tmp_var_1;
}

void php_nativeplaywright__page__setviewportsize(php::Object &this_, php::Array size) {
    php::Int tmp_var_0 = 0;
    php::Int tmp_var_1 = 0;
    php::Var tmp_var_2;
    php::Var tmp_var_3;

    tmp_var_0 = php::toInt(size.get(get_str(764)));
    tmp_var_1 = php::toInt(size.get(get_str(765)));
    this_.attr(get_persistent_prop(PersistentPropertyId{109}, get_str(763), get_str(475)), php::AttrMode::Update) = php::Array{
        { get_str(764).str(), php::Var(tmp_var_0) }, 
        { get_str(765).str(), php::Var(tmp_var_1) }
    };
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{109}, get_str(763), get_str(475)), php::AttrMode::Get);
    tmp_var_3 = php_nativeplaywright__page__metrics(this_, php::deindirect(tmp_var_2));
    tmp_var_2.unset();
    php_nativeplaywright__page__send(this_, get_str(766), tmp_var_3);
    tmp_var_3.unset();
}

php::Var php_nativeplaywright__page__viewportsize(php::Object &this_) {
    php::Var tmp_var_0;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{109}, get_str(763), get_str(475)), php::AttrMode::Get);
    if (UNEXPECTED(!(tmp_var_0.isNull() || tmp_var_0.isArray()))) {
        php::throwReturnTypeError(tmp_var_0, get_str(1068), get_str(91), false);
    }
    return tmp_var_0;
}

void php_nativeplaywright__page__emulatemedia(php::Object &this_, php::Array options) {
    php::Var tmp_var_0;
    php::Var k;
    zend_function * tmp_var_3;
    php::Var tmp_var_7;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{14}, get_str(475));


    tmp_var_0 = php::Array{
        php::Var(get_str(785)), 
        php::Var(get_str(786)), 
        php::Var(get_str(788)), 
        php::Var(get_str(789))
    };
    {
        php::ForeachIterator tmp_var_1{tmp_var_0, false, tmp_var_2};
        while (tmp_var_1.next()) {
            k = tmp_var_1.value();
            if (get_function_resolution_cache(FunctionResolutionCacheId{131}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{131}) = php::fn::function_exists(get_str(641)) ? 1 : 2; }
            tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{131}) == 1 ? get_func(RequestFuncId{38}, get_str(641)) : get_persistent_func(PersistentFuncId{42}, get_str(642));
            if (php::toBool(php::call(tmp_var_3, php::VarList{k, options}))) {
                [&]() -> php::Var {
                auto&& tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{110}, get_str(785), get_str(475)), php::AttrMode::Update);
                php::Var tmp_var_5 = k;
                php::Var tmp_var_6 = options.item(k, false);
                static_cast<void>(tmp_var_4.item(tmp_var_5, true) = tmp_var_6);
                return tmp_var_6;
                }();
            }
        }
    }
    tmp_var_7 = php_nativeplaywright__page__mediaparams(this_);
    php_nativeplaywright__page__send(this_, get_str(790), tmp_var_7);
    tmp_var_7.unset();
}

void php_nativeplaywright__page__setextrahttpheaders(php::Object &this_, php::Array headers) {
    this_.attr(get_persistent_prop(PersistentPropertyId{123}, get_str(1069), get_str(475)), php::AttrMode::Update) = headers;
    php_nativeplaywright__page__applyextraheaders(this_);
}

void php_nativeplaywright__page__applyextraheaders(php::Object &this_) {
    php::Var h;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;

    if (get_function_resolution_cache(FunctionResolutionCacheId{132}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{132}) = php::fn::function_exists(get_str(452)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{132}) == 1 ? get_func(RequestFuncId{30}, get_str(452)) : get_persistent_func(PersistentFuncId{34}, get_str(453));
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
    php::Object tmp_var_2 = tmp_var_1;
    tmp_var_3 = php_nativeplaywright__browsercontext__extrahttpheaders(tmp_var_2);
    tmp_var_1.unset();
    tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{123}, get_str(1069), get_str(475)), php::AttrMode::Get);
    h = php::call(tmp_var_0, php::VarList{(tmp_var_4 = tmp_var_3), php::deindirect(tmp_var_5)});
    tmp_var_3.unset();
    tmp_var_5.unset();
    tmp_var_6 = php::Array{
        { get_str(543).str(), php::Var(php::toObject(h)) }
    };
    php_nativeplaywright__page__send(this_, get_str(800), tmp_var_6);
    tmp_var_6.unset();
}

void php_nativeplaywright__page__bringtofront(php::Object &this_) {
    php_nativeplaywright__page__send(this_, get_str(1071));
}

void php_nativeplaywright__page__requestgc(php::Object &this_) {
    php_nativeplaywright__page__send(this_, get_str(1072));
}

php::Object php_nativeplaywright__page__newcdpsession(php::Object &this_) {
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Float tmp_var_4 = 0;
    php::Object tmp_var_5;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{25}, get_str(659));

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{100}, get_str(660), get_str(475)), php::AttrMode::Get);
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{101}, get_str(101), get_str(475)), php::AttrMode::Get);
    tmp_var_3 = php::Array{};
    tmp_var_4 = php::toFloat(php_nativeplaywright__page__timeoutseconds(this_, tmp_var_3));
    tmp_var_3.unset();
    tmp_var_5 = (php::newObject(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), php::deindirect(tmp_var_2), tmp_var_4}));
    tmp_var_1.unset();
    tmp_var_2.unset();
    return tmp_var_5;
}

php::Str php_nativeplaywright__page__screenshot(php::Object &this_, php::Array options) {
    php::Str type;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Bool tmp_var_2 = 0;
    zend_function * tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Array p;
    php::Bool tmp_var_6 = 0;
    php::Bool tmp_var_7 = 0;
    php::Var tmp_var_8;
    php::Float scale = 0;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_16;
    php::Float tmp_var_17 = 0;
    php::Var tmp_var_18;
    php::Array m;
    php::Array size;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Float tmp_var_21 = 0;
    php::Float tmp_var_22 = 0;
    php::Var tmp_var_23;
    php::Array vp;
    php::Var tmp_var_24;
    php::Var tmp_var_25;
    php::Array c;
    php::Float tmp_var_26 = 0;
    php::Float tmp_var_27 = 0;
    php::Float tmp_var_28 = 0;
    php::Float tmp_var_29 = 0;
    php::Float tmp_var_30 = 0;
    php::Float tmp_var_31 = 0;
    php::Float tmp_var_32 = 0;
    php::Float tmp_var_33 = 0;
    php::Var tmp_var_34;
    php::Var tmp_var_35;
    php::Bool tmp_var_36 = 0;
    php::Var tmp_var_37;
    php::Var tmp_var_38;
    php::Var tmp_var_39;
    php::Bool transparent = 0;
    php::Var tmp_var_40;
    php::Var tmp_var_41;
    php::Array r;
    php::Array tmp_var_42;
    php::Float tmp_var_43 = 0;
    php::Var tmp_var_44;
    php::Str data;
    zend_function * tmp_var_45;
    php::Var tmp_var_46;
    php::Var dir;
    zend_function * tmp_var_47;
    php::Var tmp_var_48;
    zend_function * tmp_var_49;
    zend_function * tmp_var_50;
    zend_function * tmp_var_51;
    php::Var tmp_var_52;

    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(425))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = [&]() -> php::Str {
        tmp_var_2 = php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(243))}}));
        if (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_2)) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{133}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{133}) = php::fn::function_exists(get_str(194)) ? 1 : 2; }
            tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{133}) == 1 ? get_func(RequestFuncId{10}, get_str(194)) : get_persistent_func(PersistentFuncId{13}, get_str(195));
            tmp_var_4 = php::toString(options.get(get_str(243)));
            tmp_var_5 = php::call(tmp_var_3, php::VarList{get_str(1073), tmp_var_4});
            tmp_var_4.unset();
            return php::toBool(tmp_var_5);
        }
        return false;
    }())) {
            return get_str(287);
        } else {
            return get_str(284);
        }
    }();
    }
    type = php::toString(tmp_var_0);
    tmp_var_6 = php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1076))}}))));
    p = php::Array{
        { get_str(1074).str(), php::Var(type) }, 
        { get_str(1075).str(), php::Var(true) }, 
        { get_str(1077).str(), php::Var(tmp_var_6) }
    };
    tmp_var_7 = php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1078))}}));
    if (php::toBool((php::toBool(tmp_var_7) && php::toBool(!(php::same(type, get_str(284))))))) {
        ((tmp_var_8 = php::toInt(options.get(get_str(1078))), p.item(get_str(1078), true) = tmp_var_8), tmp_var_8);
    }
    scale = php::toFloat([&]() -> php::Float {
        if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1079))}}, tmp_var_10)) {
        tmp_var_9 = tmp_var_10;
    } else {
        tmp_var_9 = get_str(1080);
    }
        tmp_var_11 = tmp_var_9;
        tmp_var_18 = php::same(tmp_var_11, get_str(280));
        tmp_var_11.unset();
        if (php::toBool(tmp_var_18)) {
            tmp_var_14 = this_.attr(get_persistent_prop(PersistentPropertyId{103}, get_str(693), get_str(475)), php::AttrMode::Get);
            php::Object tmp_var_15 = tmp_var_14;
            tmp_var_13=php_nativeplaywright__browsercontext__options(tmp_var_15);
            if (php::exists(tmp_var_13, {{php::ArrayDimFetch, php::Var(get_str(807))}}, tmp_var_16)) {
        tmp_var_12 = tmp_var_16;
    } else {
        tmp_var_12 = 1L;
    }
            tmp_var_17 = php::toFloat(tmp_var_12);
            tmp_var_14.unset();
            return ((php::toFloat(1L)) / (tmp_var_17));
        } else {
            return 1.0;
        }
    }());
    if (php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1076))}}))))) {
        m = php_nativeplaywright__page__send(this_, get_str(1081));
        if (php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(1082))}}, tmp_var_20)) {
            tmp_var_19 = tmp_var_20;
        } else {
            tmp_var_19 = m.get(get_str(1083));
        }
        size = php::toArray(tmp_var_19);
        tmp_var_21 = php::toFloat(size.get(get_str(764)));
        tmp_var_22 = php::toFloat(size.get(get_str(765)));
        ((tmp_var_23 = php::Array{
            { get_str(486).str(), php::Var(0L) }, 
            { get_str(487).str(), php::Var(0L) }, 
            { get_str(764).str(), php::Var(tmp_var_21) }, 
            { get_str(765).str(), php::Var(tmp_var_22) }, 
            { get_str(1079).str(), php::Var(scale) }
        }, p.item(get_str(1084), true) = tmp_var_23), tmp_var_23);
    } else {
        if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1084))}}))) {
            m = php_nativeplaywright__page__send(this_, get_str(1081));
            if (php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(1085))}}, tmp_var_25)) {
                tmp_var_24 = tmp_var_25;
            } else {
                tmp_var_24 = m.get(get_str(1086));
            }
            vp = php::toArray(tmp_var_24);
            c = php::toArray(options.get(get_str(1084)));
            tmp_var_26 = php::toFloat(c.get(get_str(486)));
            tmp_var_27 = php::toFloat(vp.get(get_str(1087)));
            tmp_var_28 = php::toFloat(((tmp_var_26) + (tmp_var_27)));
            tmp_var_29 = php::toFloat(c.get(get_str(487)));
            tmp_var_30 = php::toFloat(vp.get(get_str(1088)));
            tmp_var_31 = php::toFloat(((tmp_var_29) + (tmp_var_30)));
            tmp_var_32 = php::toFloat(c.get(get_str(764)));
            tmp_var_33 = php::toFloat(c.get(get_str(765)));
            ((tmp_var_34 = php::Array{
                { get_str(486).str(), php::Var(tmp_var_28) }, 
                { get_str(487).str(), php::Var(tmp_var_31) }, 
                { get_str(764).str(), php::Var(tmp_var_32) }, 
                { get_str(765).str(), php::Var(tmp_var_33) }, 
                { get_str(1079).str(), php::Var(scale) }
            }, p.item(get_str(1084), true) = tmp_var_34), tmp_var_34);
        } else {
            if (php::toBool([&]() -> bool {
                if (php::toBool(!(scale == 1.0))) {
                    tmp_var_35 = this_.attr(get_persistent_prop(PersistentPropertyId{109}, get_str(763), get_str(475)), php::AttrMode::Get);
                    tmp_var_36 = php::toBool(!(php::same(tmp_var_35, php::null)));
                    tmp_var_35.unset();
                    return php::toBool(tmp_var_36);
                }
                return false;
            }())) {
                tmp_var_37 = this_.attr(get_persistent_prop(PersistentPropertyId{109}, get_str(763), get_str(475)), php::AttrMode::Get).item(get_str(764), false);
                tmp_var_38 = this_.attr(get_persistent_prop(PersistentPropertyId{109}, get_str(763), get_str(475)), php::AttrMode::Get).item(get_str(765), false);
                ((tmp_var_39 = php::Array{
                    { get_str(486).str(), php::Var(0L) }, 
                    { get_str(487).str(), php::Var(0L) }, 
                    { get_str(764).str(), php::Var(tmp_var_37) }, 
                    { get_str(765).str(), php::Var(tmp_var_38) }, 
                    { get_str(1079).str(), php::Var(scale) }
                }, p.item(get_str(1084), true) = tmp_var_39), tmp_var_39);
                tmp_var_37.unset();
                tmp_var_38.unset();
            }
        }
    }
    transparent = php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1089))}}))));
    if (php::toBool(transparent)) {
        tmp_var_40 = php::Array{
                { get_str(1012).str(), php::Var(0L) }, 
                { get_str(1091).str(), php::Var(0L) }, 
                { get_str(503).str(), php::Var(0L) }, 
                { get_str(402).str(), php::Var(0L) }
            };
        tmp_var_41 = php::Array{
            { get_str(1092).str(), php::Var(tmp_var_40) }
        };
        tmp_var_40.unset();
        php_nativeplaywright__page__send(this_, get_str(1090), tmp_var_41);
        tmp_var_41.unset();
    }
    try {
        tmp_var_42 = p;
        tmp_var_43 = php::toFloat(php_nativeplaywright__page__timeoutseconds(this_, options));
        r = php_nativeplaywright__page__send(this_, get_str(1093), tmp_var_42, php::toFloat(tmp_var_43));
        tmp_var_42.unset();
    } catch (zend_object *_ex) {
        tmp_var_44 = php::catchException();
    }
    if (php::toBool(transparent)) {
        php_nativeplaywright__page__send(this_, get_str(1090));
    }

    if (tmp_var_44) {
        php::throwException(php::Object(tmp_var_44));
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{134}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{134}) = php::fn::function_exists(get_str(569)) ? 1 : 2; }
    tmp_var_45 = get_function_resolution_cache(FunctionResolutionCacheId{134}) == 1 ? get_func(RequestFuncId{35}, get_str(569)) : get_persistent_func(PersistentFuncId{39}, get_str(570));
    tmp_var_46 = php::toString(r.get(get_str(127)));
    data = php::toString(php::call(tmp_var_45, php::VarList{tmp_var_46}));
    tmp_var_46.unset();
    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(243))}}))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{135}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{135}) = php::fn::function_exists(get_str(682)) ? 1 : 2; }
        tmp_var_47 = get_function_resolution_cache(FunctionResolutionCacheId{135}) == 1 ? get_func(RequestFuncId{40}, get_str(682)) : get_persistent_func(PersistentFuncId{44}, get_str(683));
        tmp_var_48 = php::toString(options.get(get_str(243)));
        dir = php::call(tmp_var_47, php::VarList{tmp_var_48});
        tmp_var_48.unset();
        if (get_function_resolution_cache(FunctionResolutionCacheId{136}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{136}) = php::fn::function_exists(get_str(684)) ? 1 : 2; }
        tmp_var_49 = get_function_resolution_cache(FunctionResolutionCacheId{136}) == 1 ? get_func(RequestFuncId{41}, get_str(684)) : get_persistent_func(PersistentFuncId{45}, get_str(685));
        if (php::toBool(!(php::toBool(php::call(tmp_var_49, php::VarList{dir}))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{137}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{137}) = php::fn::function_exists(get_str(686)) ? 1 : 2; }
            tmp_var_50 = get_function_resolution_cache(FunctionResolutionCacheId{137}) == 1 ? get_func(RequestFuncId{42}, get_str(686)) : get_persistent_func(PersistentFuncId{46}, get_str(687));
            php::call(tmp_var_50, php::VarList{dir, 511L, true});
        }
        if (get_function_resolution_cache(FunctionResolutionCacheId{138}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{138}) = php::fn::function_exists(get_str(1094)) ? 1 : 2; }
        tmp_var_51 = get_function_resolution_cache(FunctionResolutionCacheId{138}) == 1 ? get_func(RequestFuncId{54}, get_str(1094)) : get_persistent_func(PersistentFuncId{58}, get_str(1095));
        tmp_var_52 = php::toString(options.get(get_str(243)));
        php::call(tmp_var_51, php::VarList{tmp_var_52, data});
        tmp_var_52.unset();
    }
    return data;
}

php::Str php_nativeplaywright__page__pdf(php::Object &this_, php::Array options) {
    php::Array formats;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Float w = php::toFloat(8.5);
    php::Float h = php::toFloat(11.0);
    php::Var f;
    php::Var tmp_var_11;
    zend_function * tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Object tmp_var_21;
    php::Var tmp_var_22;
    php::Array m;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    php::Array p;
    php::Bool tmp_var_25 = 0;
    php::Bool tmp_var_26 = 0;
    php::Var tmp_var_27;
    php::Var tmp_var_28;
    php::Var tmp_var_29;
    php::Var tmp_var_30;
    php::Var tmp_var_31;
    php::Var tmp_var_32;
    php::Bool tmp_var_33 = 0;
    php::Var tmp_var_34;
    php::Var tmp_var_35;
    php::Float tmp_var_36 = 0;
    php::Var tmp_var_37;
    php::Var tmp_var_38;
    php::Var tmp_var_39;
    php::Float tmp_var_40 = 0;
    php::Var tmp_var_41;
    php::Var tmp_var_42;
    php::Var tmp_var_43;
    php::Float tmp_var_44 = 0;
    php::Var tmp_var_45;
    php::Var tmp_var_46;
    php::Var tmp_var_47;
    php::Float tmp_var_48 = 0;
    php::Var tmp_var_49;
    php::Var tmp_var_50;
    php::Var tmp_var_51;
    php::Float tmp_var_52 = 0;
    php::Var tmp_var_53;
    php::Var tmp_var_54;
    php::Var tmp_var_55;
    php::Bool tmp_var_56 = 0;
    php::Bool tmp_var_57 = 0;
    php::Bool tmp_var_58 = 0;
    php::Array r;
    php::Array tmp_var_59;
    php::Float tmp_var_60 = 0;
    php::Str data;
    zend_function * tmp_var_61;
    php::Var tmp_var_62;
    zend_function * tmp_var_63;
    php::Var tmp_var_64;
    zend_class_entry *tmp_var_15 = get_persistent_class(PersistentClassId{0}, get_str(75));
    Z_PTR_P(tmp_var_21.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    tmp_var_0 = php::Array{
            php::Var(8.5), 
            php::Var(11L)
        };
    tmp_var_1 = php::Array{
            php::Var(8.5), 
            php::Var(14L)
        };
    tmp_var_2 = php::Array{
            php::Var(11L), 
            php::Var(17L)
        };
    tmp_var_3 = php::Array{
            php::Var(17L), 
            php::Var(11L)
        };
    tmp_var_4 = php::Array{
            php::Var(33.100000000000001), 
            php::Var(46.799999999999997)
        };
    tmp_var_5 = php::Array{
            php::Var(23.399999999999999), 
            php::Var(33.100000000000001)
        };
    tmp_var_6 = php::Array{
            php::Var(16.539999999999999), 
            php::Var(23.399999999999999)
        };
    tmp_var_7 = php::Array{
            php::Var(11.699999999999999), 
            php::Var(16.539999999999999)
        };
    tmp_var_8 = php::Array{
            php::Var(8.2699999999999996), 
            php::Var(11.699999999999999)
        };
    tmp_var_9 = php::Array{
            php::Var(5.8300000000000001), 
            php::Var(8.2699999999999996)
        };
    tmp_var_10 = php::Array{
            php::Var(4.1299999999999999), 
            php::Var(5.8300000000000001)
        };
    formats = php::Array{
        { get_str(1096).str(), php::Var(tmp_var_0) }, 
        { get_str(1097).str(), php::Var(tmp_var_1) }, 
        { get_str(1098).str(), php::Var(tmp_var_2) }, 
        { get_str(1099).str(), php::Var(tmp_var_3) }, 
        { get_str(1100).str(), php::Var(tmp_var_4) }, 
        { get_str(1101).str(), php::Var(tmp_var_5) }, 
        { get_str(1102).str(), php::Var(tmp_var_6) }, 
        { get_str(1103).str(), php::Var(tmp_var_7) }, 
        { get_str(1104).str(), php::Var(tmp_var_8) }, 
        { get_str(1105).str(), php::Var(tmp_var_9) }, 
        { get_str(1106).str(), php::Var(tmp_var_10) }
    };
    tmp_var_0.unset();
    tmp_var_1.unset();
    tmp_var_2.unset();
    tmp_var_3.unset();
    tmp_var_4.unset();
    tmp_var_5.unset();
    tmp_var_6.unset();
    tmp_var_7.unset();
    tmp_var_8.unset();
    tmp_var_9.unset();
    tmp_var_10.unset();
    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1074))}}))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{139}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{139}) = php::fn::function_exists(get_str(257)) ? 1 : 2; }
        tmp_var_12 = get_function_resolution_cache(FunctionResolutionCacheId{139}) == 1 ? get_func(RequestFuncId{19}, get_str(257)) : get_persistent_func(PersistentFuncId{23}, get_str(258));
        tmp_var_13 = php::toString(options.get(get_str(1074)));
        if (php::exists(formats, {{php::ArrayDimFetch, php::Var(php::call(tmp_var_12, php::VarList{tmp_var_13}))}}, tmp_var_14)) {
            tmp_var_11 = tmp_var_14;
        } else {
            tmp_var_11 = php::null;
        }
        f = tmp_var_11;
        tmp_var_13.unset();
        if (php::toBool(php::same(f, php::null))) {
            tmp_var_16 = options.get(get_str(1074));
            tmp_var_17 = php::concat({get_str(1107), php::toString(tmp_var_16)});
            tmp_var_16.unset();
            tmp_var_18 = php::newObject(tmp_var_15, php::VarList{tmp_var_17});
            tmp_var_17.unset();
            php::throwValue(php::takeValue(tmp_var_18));
        }
        {
            tmp_var_19 = f;
            w = php::toFloat(tmp_var_19.item(0L, false));
            h = php::toFloat(tmp_var_19.item(1L, false));
        };
    } else {
        if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(764))}}))) {
            tmp_var_20 = options.get(get_str(764));
            w = php::toFloat(php_nativeplaywright__util__toinches(tmp_var_21, php::deindirect(tmp_var_20)));
            tmp_var_20.unset();
        }
        if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(765))}}))) {
            tmp_var_22 = options.get(get_str(765));
            h = php::toFloat(php_nativeplaywright__util__toinches(tmp_var_21, php::deindirect(tmp_var_22)));
            tmp_var_22.unset();
        }
    }
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1108))}}, tmp_var_24)) {
        tmp_var_23 = tmp_var_24;
    } else {
        tmp_var_23 = php::Array{};
    }
    m = php::toArray(tmp_var_23);
    tmp_var_25 = php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1109))}}))));
    tmp_var_26 = php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1110))}}))));
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1111))}}, tmp_var_28)) {
            tmp_var_27 = tmp_var_28;
        } else {
            tmp_var_27 = php::empty_string;
        }
    tmp_var_29 = php::toString(tmp_var_27);
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1112))}}, tmp_var_31)) {
            tmp_var_30 = tmp_var_31;
        } else {
            tmp_var_30 = php::empty_string;
        }
    tmp_var_32 = php::toString(tmp_var_30);
    tmp_var_33 = php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1113))}}))));
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1079))}}, tmp_var_35)) {
            tmp_var_34 = tmp_var_35;
        } else {
            tmp_var_34 = 1L;
        }
    tmp_var_36 = php::toFloat(tmp_var_34);
    if (php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(1116))}}, tmp_var_38)) {
            tmp_var_37 = tmp_var_38;
        } else {
            tmp_var_37 = 0L;
        }
    tmp_var_39 = tmp_var_37;
    tmp_var_40 = php::toFloat(php_nativeplaywright__util__toinches(tmp_var_21, tmp_var_39));
    tmp_var_39.unset();
    if (php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(1118))}}, tmp_var_42)) {
            tmp_var_41 = tmp_var_42;
        } else {
            tmp_var_41 = 0L;
        }
    tmp_var_43 = tmp_var_41;
    tmp_var_44 = php::toFloat(php_nativeplaywright__util__toinches(tmp_var_21, tmp_var_43));
    tmp_var_43.unset();
    if (php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(480))}}, tmp_var_46)) {
            tmp_var_45 = tmp_var_46;
        } else {
            tmp_var_45 = 0L;
        }
    tmp_var_47 = tmp_var_45;
    tmp_var_48 = php::toFloat(php_nativeplaywright__util__toinches(tmp_var_21, tmp_var_47));
    tmp_var_47.unset();
    if (php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(481))}}, tmp_var_50)) {
            tmp_var_49 = tmp_var_50;
        } else {
            tmp_var_49 = 0L;
        }
    tmp_var_51 = tmp_var_49;
    tmp_var_52 = php::toFloat(php_nativeplaywright__util__toinches(tmp_var_21, tmp_var_51));
    tmp_var_51.unset();
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1122))}}, tmp_var_54)) {
            tmp_var_53 = tmp_var_54;
        } else {
            tmp_var_53 = php::empty_string;
        }
    tmp_var_55 = php::toString(tmp_var_53);
    tmp_var_56 = php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1123))}}))));
    tmp_var_57 = php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1124))}}))));
    tmp_var_58 = php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1126))}}))));
    p = php::Array{
        { get_str(1109).str(), php::Var(tmp_var_25) }, 
        { get_str(1110).str(), php::Var(tmp_var_26) }, 
        { get_str(1111).str(), php::Var(tmp_var_29) }, 
        { get_str(1112).str(), php::Var(tmp_var_32) }, 
        { get_str(1113).str(), php::Var(tmp_var_33) }, 
        { get_str(1079).str(), php::Var(tmp_var_36) }, 
        { get_str(1114).str(), php::Var(php::toFloat(w)) }, 
        { get_str(1115).str(), php::Var(php::toFloat(h)) }, 
        { get_str(1117).str(), php::Var(tmp_var_40) }, 
        { get_str(1119).str(), php::Var(tmp_var_44) }, 
        { get_str(1120).str(), php::Var(tmp_var_48) }, 
        { get_str(1121).str(), php::Var(tmp_var_52) }, 
        { get_str(1122).str(), php::Var(tmp_var_55) }, 
        { get_str(1123).str(), php::Var(tmp_var_56) }, 
        { get_str(1125).str(), php::Var(tmp_var_57) }, 
        { get_str(1127).str(), php::Var(tmp_var_58) }
    };
    tmp_var_29.unset();
    tmp_var_32.unset();
    tmp_var_55.unset();
    tmp_var_59 = p;
    tmp_var_60 = php::toFloat(php_nativeplaywright__page__timeoutseconds(this_, options));
    r = php_nativeplaywright__page__send(this_, get_str(1128), tmp_var_59, php::toFloat(tmp_var_60));
    tmp_var_59.unset();
    if (get_function_resolution_cache(FunctionResolutionCacheId{140}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{140}) = php::fn::function_exists(get_str(569)) ? 1 : 2; }
    tmp_var_61 = get_function_resolution_cache(FunctionResolutionCacheId{140}) == 1 ? get_func(RequestFuncId{35}, get_str(569)) : get_persistent_func(PersistentFuncId{39}, get_str(570));
    tmp_var_62 = php::toString(r.get(get_str(127)));
    data = php::toString(php::call(tmp_var_61, php::VarList{tmp_var_62}));
    tmp_var_62.unset();
    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(243))}}))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{141}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{141}) = php::fn::function_exists(get_str(1094)) ? 1 : 2; }
        tmp_var_63 = get_function_resolution_cache(FunctionResolutionCacheId{141}) == 1 ? get_func(RequestFuncId{54}, get_str(1094)) : get_persistent_func(PersistentFuncId{58}, get_str(1095));
        tmp_var_64 = php::toString(options.get(get_str(243)));
        php::call(tmp_var_63, php::VarList{tmp_var_64, data});
        tmp_var_64.unset();
    }
    return data;
}

void php_nativeplaywright__page__on(php::Object &this_, php::Str event, php::Object handler) {
    php::Int &_object_prop_this___handlerSeq = this_.attrInt(get_persistent_prop(PersistentPropertyId{125}, get_str(1130), get_str(475)));

    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Update);
    php::Var tmp_var_1 = event;
    auto&& tmp_var_2 = tmp_var_0.item(tmp_var_1, true);
    php::Var tmp_var_3 = ++_object_prop_this___handlerSeq;
    php::Var tmp_var_4 = php::Array{
        php::Var(handler), 
        php::Var(false)
    };
    (tmp_var_2.isArray() ? static_cast<void>(tmp_var_2.item(tmp_var_3, true) = tmp_var_4) : tmp_var_2.offsetSet(tmp_var_3, tmp_var_4));
    return tmp_var_4;
    }();
    php_nativeplaywright__page__onlisteneradded(this_, event);
}

void php_nativeplaywright__page__once(php::Object &this_, php::Str event, php::Object handler) {
    php::Int &_object_prop_this___handlerSeq = this_.attrInt(get_persistent_prop(PersistentPropertyId{125}, get_str(1130), get_str(475)));

    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Update);
    php::Var tmp_var_1 = event;
    auto&& tmp_var_2 = tmp_var_0.item(tmp_var_1, true);
    php::Var tmp_var_3 = ++_object_prop_this___handlerSeq;
    php::Var tmp_var_4 = php::Array{
        php::Var(handler), 
        php::Var(true)
    };
    (tmp_var_2.isArray() ? static_cast<void>(tmp_var_2.item(tmp_var_3, true) = tmp_var_4) : tmp_var_2.offsetSet(tmp_var_3, tmp_var_4));
    return tmp_var_4;
    }();
    php_nativeplaywright__page__onlisteneradded(this_, event);
}

void php_nativeplaywright__page__off(php::Object &this_, php::Str event, php::Object handler) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var k;
    php::Var h;
    php::Var tmp_var_5;
    php::Bool tmp_var_6 = 0;
    zend_class_entry *tmp_var_4 = get_persistent_class(PersistentClassId{14}, get_str(475));

    if (php::toBool(php::same(handler, php::null))) {
        this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Get).offsetUnset(event);
        return;
    }
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(event)}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::Array{};
    }

    tmp_var_2 = tmp_var_0;
    {
        php::ForeachIterator tmp_var_3{tmp_var_2, false, tmp_var_4};
        while (tmp_var_3.next()) {
            k = tmp_var_3.key();
            h = tmp_var_3.value();
            tmp_var_5 = h.item(0L, false);
            tmp_var_6 = php::toBool(php::same(tmp_var_5, handler));
            tmp_var_5.unset();
            if (php::toBool(tmp_var_6)) {
                [&]() {
                auto &&tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Get);
                php::Var tmp_var_8 = event;
                php::Var tmp_var_9 = k;
                php::unset(tmp_var_7, {{php::ArrayDimFetch, tmp_var_8}, {php::ArrayDimFetch, tmp_var_9}});
                }();
            }
        }
    }
}

void php_nativeplaywright__page__removealllisteners(php::Object &this_, php::Str event) {
    if (php::toBool(php::same(event, php::empty_string))) {
        this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Update) = php::Array{};
    } else {
        this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Get).offsetUnset(event);
    }
}

php::Int php_nativeplaywright__page__listenercount(php::Object &this_, php::Str event) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;

    if (get_function_resolution_cache(FunctionResolutionCacheId{142}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{142}) = php::fn::function_exists(get_str(162)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{142}) == 1 ? get_func(RequestFuncId{8}, get_str(162)) : get_persistent_func(PersistentFuncId{8}, get_str(163));
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(event)}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = php::Array{};
    }
    tmp_var_3 = tmp_var_1;
    tmp_var_4 = (php::call(tmp_var_0, php::VarList{tmp_var_3}));
    if (UNEXPECTED(!(tmp_var_4.isInt()))) {
        php::throwReturnTypeError(tmp_var_4, get_str(1132), get_str(89), true);
    }
    return php::toInt(tmp_var_4);
    tmp_var_3.unset();
}

void php_nativeplaywright__page__emit(php::Object &this_, php::Str event, php::Var arg) {
    php::Var hs;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Object t;
    php::Var tmp_var_4;
    php::Var k;
    php::Var h;
    php::Var fn;
    zend_class_entry *tmp_var_6 = get_persistent_class(PersistentClassId{14}, get_str(475));

    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(event)}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::Array{};
    }
    hs = tmp_var_0;
    tmp_var_2 = php::Array{};
    tmp_var_3 = php::toBool(php::same(hs, tmp_var_2));
    tmp_var_2.unset();
    if (php::toBool(tmp_var_3)) {
        return;
    }
    t = php_nativeplaywright__page__transport(this_);

    tmp_var_4 = hs;
    {
        php::ForeachIterator tmp_var_5{tmp_var_4, false, tmp_var_6};
        while (tmp_var_5.next()) {
            k = tmp_var_5.key();
            h = tmp_var_5.value();
            if (php::toBool(h.item(1L, false))) {
                [&]() {
                auto &&tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Get);
                php::Var tmp_var_8 = event;
                php::Var tmp_var_9 = k;
                php::unset(tmp_var_7, {{php::ArrayDimFetch, tmp_var_8}, {php::ArrayDimFetch, tmp_var_9}});
                }();
            }
            fn = h.item(0L, false);
            php::ClosureFn tmp_var_10 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
            php::checkCallArgCount(0, 0, false);
                php::Var fn = vars_.get(0);
                php::Var arg = vars_.get(1);
                typephp_call_cached(fn, get_function_call_cache(FunctionCallCacheId{16}), php::VarList{arg});
            return php::null;
            };
            typephp_call_method_cached(t, get_str(666), get_method_call_cache(MethodCallCacheId{39}), php::VarList{php::newClosureWithParameters(tmp_var_10, { fn, arg }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), {  }, php::ClosureStrictTypes::Enabled)});
        }
    }
}

php::Var php_nativeplaywright__page__waitforevent(php::Object &this_, php::Str event, php::Object predicate, php::Var timeout) {
    php::Var tmp_var_0;
    if (timeout.isInt()) {
        timeout = php::toFloat(timeout);
    }
    if (UNEXPECTED(!(timeout.isNull() || timeout.isFloat()))) {
        php::throwArgumentTypeError(timeout, get_str(1134), 3, get_str(102), get_str(709));
    }

    tmp_var_0 = (php_nativeplaywright__page__expectevent(this_, event, php::Object{}, predicate, timeout));
    return tmp_var_0;
}

php::Var php_nativeplaywright__page__expectevent(php::Object &this_, php::Str event, php::Object action, php::Object predicate, php::Var timeout) {
    php::Object t;
    php::Var w;
    php::Var id;
    php::Var tmp_var_6;
    php::Var secs;
    php::Var tmp_var_10;
    if (timeout.isInt()) {
        timeout = php::toFloat(timeout);
    }
    if (UNEXPECTED(!(timeout.isNull() || timeout.isFloat()))) {
        php::throwArgumentTypeError(timeout, get_str(1136), 4, get_str(102), get_str(709));
    }

    t = php_nativeplaywright__page__transport(this_);
    w = typephp_call_method_cached(t, get_str(117), get_method_call_cache(MethodCallCacheId{40}));
    id = ++this_.attr(get_persistent_prop(PersistentPropertyId{125}, get_str(1130), get_str(475)), php::AttrMode::Update);
    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Update);
    php::Var tmp_var_1 = event;
    auto&& tmp_var_3 = tmp_var_0.item(tmp_var_1, true);
    php::Var tmp_var_4 = id;
    php::ClosureFn tmp_var_2 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(1, 1, false);
            auto arg = php::getCallArg(0);
            php::Var w = vars_.get(0);
            php::Object predicate = php::Object(vars_.get(1));
            if (php::toBool((php::toBool(php::same(predicate, php::null)) || php::toBool(typephp_call_cached(predicate, get_function_call_cache(FunctionCallCacheId{17}), php::VarList{arg}))))) {
                typephp_call_method_cached(w, get_str(136), get_method_call_cache(MethodCallCacheId{41}), php::VarList{arg});
            }
    return php::null;
    };
    php::Var tmp_var_5 = php::Array{
        php::Var(php::newClosureWithParameters(tmp_var_2, { w, predicate }, this_, get_persistent_class(PersistentClassId{14}, get_str(475)), { php::ClosureParameter{"arg", false, false, true} }, php::ClosureStrictTypes::Enabled)), 
        php::Var(false)
    };
    (tmp_var_3.isArray() ? static_cast<void>(tmp_var_3.item(tmp_var_4, true) = tmp_var_5) : tmp_var_3.offsetSet(tmp_var_4, tmp_var_5));
    return tmp_var_5;
    }();
    php_nativeplaywright__page__onlisteneradded(this_, event);
    try {
        if (php::toBool(!(php::same(action, php::null)))) {
            typephp_call_cached(action, get_function_call_cache(FunctionCallCacheId{18}));
        }
        secs = (php::toBool(php::same(timeout, php::null))) ? (php::Var(php_nativeplaywright__page__defaulttimeout(this_))) : (php::Var(((php::Var(timeout)) / (php::Var(1000L)))));
        tmp_var_6 = typephp_call_method_cached(t, get_str(122), get_method_call_cache(MethodCallCacheId{42}), php::VarList{w, secs, php::concat({get_str(1135), event, get_str(396)})});
        [&]() {
        auto &&tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Get);
        php::Var tmp_var_8 = event;
        php::Var tmp_var_9 = id;
        php::unset(tmp_var_7, {{php::ArrayDimFetch, tmp_var_8}, {php::ArrayDimFetch, tmp_var_9}});
        }();
        return tmp_var_6;
    } catch (zend_object *_ex) {
        tmp_var_10 = php::catchException();
    }
    [&]() {
    auto &&tmp_var_11 = this_.attr(get_persistent_prop(PersistentPropertyId{124}, get_str(1129), get_str(475)), php::AttrMode::Get);
    php::Var tmp_var_12 = event;
    php::Var tmp_var_13 = id;
    php::unset(tmp_var_11, {{php::ArrayDimFetch, tmp_var_12}, {php::ArrayDimFetch, tmp_var_13}});
    }();

    if (tmp_var_10) {
        php::throwException(php::Object(tmp_var_10));
    }
    return php::null;
}


ZEND_METHOD(NativePlaywright_Page, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(5, 5, false);
        php::Object arg_browser = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{28}, get_str(1137)));
        php::Object arg_context = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{27}, get_str(701)));
        php::Object arg_t = php::toObject(php::getCallArg(2), get_persistent_class(PersistentClassId{4}, get_str(115)));
        php::Var raw_arg_sessionId = php::getCallArg(3);
        if (UNEXPECTED(!(raw_arg_sessionId.isString()))) {
            php::throwArgumentTypeError(raw_arg_sessionId, get_str(1138), 4, get_str(101), get_str(98));
        }
        php::Str arg_sessionId = php::toString(raw_arg_sessionId);
        php::Var raw_arg_targetId = php::getCallArg(4);
        if (UNEXPECTED(!(raw_arg_targetId.isString()))) {
            php::throwArgumentTypeError(raw_arg_targetId, get_str(1138), 5, get_str(977), get_str(98));
        }
        php::Str arg_targetId = php::toString(raw_arg_targetId);
        php_nativeplaywright__page____construct(this_, php::takeValue(arg_browser),php::takeValue(arg_context),php::takeValue(arg_t),php::takeValue(arg_sessionId),php::takeValue(arg_targetId));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, transport) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__transport(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, defaultTimeout) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__defaulttimeout(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, send) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 3, false);
        php::Var raw_arg_method = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_method.isString()))) {
            php::throwArgumentTypeError(raw_arg_method, get_str(708), 1, get_str(100), get_str(98));
        }
        php::Str arg_method = php::toString(raw_arg_method);
        php::Array arg_params = php::toArray(php::getCallArg(1, php_nativeplaywright__page__send_arg_1_default_value()));
        php::Var arg_timeout = php::getCallArg(2, php_nativeplaywright__page__send_arg_2_default_value());
        auto retval = php_nativeplaywright__page__send(this_, php::takeValue(arg_method),php::takeValue(arg_params),php::takeValue(arg_timeout));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, sendMany) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_calls = php::toArray(php::getCallArg(0));
        auto retval = php_nativeplaywright__page__sendmany(this_, php::takeValue(arg_calls));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, releaseObject) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_objectId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_objectId.isString()))) {
            php::throwArgumentTypeError(raw_arg_objectId, get_str(1139), 1, get_str(712), get_str(98));
        }
        php::Str arg_objectId = php::toString(raw_arg_objectId);
        php_nativeplaywright__page__releaseobject(this_, php::takeValue(arg_objectId));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, callOn) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_objectId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_objectId.isString()))) {
            php::throwArgumentTypeError(raw_arg_objectId, get_str(1140), 1, get_str(712), get_str(98));
        }
        php::Str arg_objectId = php::toString(raw_arg_objectId);
        php::Var raw_arg_fn = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_fn.isString()))) {
            php::throwArgumentTypeError(raw_arg_fn, get_str(1140), 2, get_str(1141), get_str(98));
        }
        php::Str arg_fn = php::toString(raw_arg_fn);
        auto retval = php_nativeplaywright__page__callon(this_, php::takeValue(arg_objectId),php::takeValue(arg_fn));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, callFunction) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 4, false);
        php::Var raw_arg_fn = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_fn.isString()))) {
            php::throwArgumentTypeError(raw_arg_fn, get_str(1142), 1, get_str(1141), get_str(98));
        }
        php::Str arg_fn = php::toString(raw_arg_fn);
        php::Array arg_args = php::toArray(php::getCallArg(1));
        php::Var raw_arg_objectId = php::getCallArg(2, php_nativeplaywright__page__callfunction_arg_2_default_value());
        if (UNEXPECTED(!(raw_arg_objectId.isString()))) {
            php::throwArgumentTypeError(raw_arg_objectId, get_str(1142), 3, get_str(712), get_str(98));
        }
        php::Str arg_objectId = php::toString(raw_arg_objectId);
        php::Var raw_arg_contextId = php::getCallArg(3, php_nativeplaywright__page__callfunction_arg_3_default_value());
        if (UNEXPECTED(!(raw_arg_contextId.isInt()))) {
            php::throwArgumentTypeError(raw_arg_contextId, get_str(1142), 4, get_str(969), get_str(89));
        }
        php::Int arg_contextId = php::toInt(raw_arg_contextId);
        auto retval = php_nativeplaywright__page__callfunction(this_, php::takeValue(arg_fn),php::takeValue(arg_args),php::takeValue(arg_objectId),arg_contextId);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, timeoutSeconds) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__page__timeoutseconds_arg_0_default_value()));
        auto retval = php_nativeplaywright__page__timeoutseconds(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, navigationTimeoutSeconds) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__page__navigationtimeoutseconds_arg_0_default_value()));
        auto retval = php_nativeplaywright__page__navigationtimeoutseconds(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, setDefaultTimeout) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_ms = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_ms.isFloat() || raw_arg_ms.isInt())))) {
            php::throwArgumentTypeError(raw_arg_ms, get_str(1143), 1, get_str(735), get_str(103));
        }
        php::Float arg_ms = php::toFloat(raw_arg_ms);
        php_nativeplaywright__page__setdefaulttimeout(this_, arg_ms);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, setDefaultNavigationTimeout) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_ms = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_ms.isFloat() || raw_arg_ms.isInt())))) {
            php::throwArgumentTypeError(raw_arg_ms, get_str(1144), 1, get_str(735), get_str(103));
        }
        php::Float arg_ms = php::toFloat(raw_arg_ms);
        php_nativeplaywright__page__setdefaultnavigationtimeout(this_, arg_ms);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, waitForCondition) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(3, 3, false);
        php::Object arg_cond = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Var raw_arg_timeout = php::getCallArg(1);
        if (UNEXPECTED(!((raw_arg_timeout.isFloat() || raw_arg_timeout.isInt())))) {
            php::throwArgumentTypeError(raw_arg_timeout, get_str(1145), 2, get_str(102), get_str(103));
        }
        php::Float arg_timeout = php::toFloat(raw_arg_timeout);
        php::Var raw_arg_what = php::getCallArg(2);
        if (UNEXPECTED(!(raw_arg_what.isString()))) {
            php::throwArgumentTypeError(raw_arg_what, get_str(1145), 3, get_str(173), get_str(98));
        }
        php::Str arg_what = php::toString(raw_arg_what);
        php_nativeplaywright__page__waitforcondition(this_, php::takeValue(arg_cond),arg_timeout,php::takeValue(arg_what));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, poke) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__page__poke(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, afterAction) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__page__afteraction(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, initialize) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Var arg_frameTree = php::getCallArg(0, php_nativeplaywright__page__initialize_arg_0_default_value());
        php_nativeplaywright__page__initialize(this_, php::takeValue(arg_frameTree));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, emulationCalls) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__emulationcalls(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, metrics) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_vp = php::toArray(php::getCallArg(0));
        auto retval = php_nativeplaywright__page__metrics(this_, php::takeValue(arg_vp));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, mediaParams) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__mediaparams(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, loadFrameTree) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Array arg_tree = php::toArray(php::getCallArg(0));
        php::Var raw_arg_parent = php::getCallArg(1, php_nativeplaywright__page__loadframetree_arg_1_default_value());
        if (UNEXPECTED(!(raw_arg_parent.isString()))) {
            php::throwArgumentTypeError(raw_arg_parent, get_str(1146), 2, get_str(1147), get_str(98));
        }
        php::Str arg_parent = php::toString(raw_arg_parent);
        php_nativeplaywright__page__loadframetree(this_, php::takeValue(arg_tree),php::takeValue(arg_parent));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, onProtocolEvent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_method = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_method.isString()))) {
            php::throwArgumentTypeError(raw_arg_method, get_str(1148), 1, get_str(100), get_str(98));
        }
        php::Str arg_method = php::toString(raw_arg_method);
        php::Array arg_p = php::toArray(php::getCallArg(1));
        php_nativeplaywright__page__onprotocolevent(this_, php::takeValue(arg_method),php::takeValue(arg_p));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, detachFrame) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_id = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_id.isString()))) {
            php::throwArgumentTypeError(raw_arg_id, get_str(846), 1, get_str(118), get_str(98));
        }
        php::Str arg_id = php::toString(raw_arg_id);
        php_nativeplaywright__page__detachframe(this_, php::takeValue(arg_id));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, emitBoth) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1149), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Var arg_arg = php::getCallArg(1);
        php_nativeplaywright__page__emitboth(this_, php::takeValue(arg_event),php::takeValue(arg_arg));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, onConsole) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_p = php::toArray(php::getCallArg(0));
        php_nativeplaywright__page__onconsole(this_, php::takeValue(arg_p));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, onDialog) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_p = php::toArray(php::getCallArg(0));
        php_nativeplaywright__page__ondialog(this_, php::takeValue(arg_p));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, onRequest) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_p = php::toArray(php::getCallArg(0));
        php_nativeplaywright__page__onrequest(this_, php::takeValue(arg_p));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, makeResponse) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Object arg_req = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{22}, get_str(560)));
        php::Array arg_r = php::toArray(php::getCallArg(1));
        auto retval = php_nativeplaywright__page__makeresponse(this_, php::takeValue(arg_req),php::takeValue(arg_r));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, onResponse) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_p = php::toArray(php::getCallArg(0));
        php_nativeplaywright__page__onresponse(this_, php::takeValue(arg_p));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, navigationResponse) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_loaderId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_loaderId.isString()))) {
            php::throwArgumentTypeError(raw_arg_loaderId, get_str(928), 1, get_str(819), get_str(98));
        }
        php::Str arg_loaderId = php::toString(raw_arg_loaderId);
        auto retval = php_nativeplaywright__page__navigationresponse(this_, php::takeValue(arg_loaderId));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, needsInterception) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__needsinterception(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, fetchParams) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__fetchparams(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, syncInterception) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__page__syncinterception(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, onRequestPaused) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_p = php::toArray(php::getCallArg(0));
        php_nativeplaywright__page__onrequestpaused(this_, php::takeValue(arg_p));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, route) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var arg_url = php::getCallArg(0);
        php::Object arg_handler = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__page__route_arg_2_default_value()));
        php_nativeplaywright__page__route(this_, php::takeValue(arg_url),php::takeValue(arg_handler),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, unroute) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_url = php::getCallArg(0);
        php::Object arg_handler = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(php::getCallArg(1, php_nativeplaywright__page__unroute_arg_1_default_value()));
        php_nativeplaywright__page__unroute(this_, php::takeValue(arg_url),php::takeValue(arg_handler));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, unrouteAll) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__page__unrouteall(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, bindingScript) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(754), 1, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        auto retval = php_nativeplaywright__page__bindingscript(this_, php::takeValue(arg_name));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, exposeBinding) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(1151), 1, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        php::Object arg_fn = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php_nativeplaywright__page__exposebinding(this_, php::takeValue(arg_name),php::takeValue(arg_fn));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, exposeFunction) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(1152), 1, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        php::Object arg_fn = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php_nativeplaywright__page__exposefunction(this_, php::takeValue(arg_name),php::takeValue(arg_fn));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, installBinding) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(1153), 1, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        php_nativeplaywright__page__installbinding(this_, php::takeValue(arg_name));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, onBindingCalled) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_p = php::toArray(php::getCallArg(0));
        php_nativeplaywright__page__onbindingcalled(this_, php::takeValue(arg_p));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, addInitScript) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_script = php::getCallArg(0);
        php::Var arg_arg = php::getCallArg(1, php_nativeplaywright__page__addinitscript_arg_1_default_value());
        php_nativeplaywright__page__addinitscript(this_, php::takeValue(arg_script),php::takeValue(arg_arg));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, didClose) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__page__didclose(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, isClosed) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__isclosed(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, close) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__page__close_arg_0_default_value()));
        php_nativeplaywright__page__close(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, setOpener) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_opener = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{14}, get_str(475))); })(php::getCallArg(0));
        php_nativeplaywright__page__setopener(this_, php::takeValue(arg_opener));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, opener) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__opener(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, context) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__context(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, emitDownload) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_d = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{26}, get_str(671)));
        php_nativeplaywright__page__emitdownload(this_, php::takeValue(arg_d));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, emitPopup) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_p = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(475)));
        php_nativeplaywright__page__emitpopup(this_, php::takeValue(arg_p));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, onListenerAdded) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1154), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php_nativeplaywright__page__onlisteneradded(this_, php::takeValue(arg_event));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, mainFrame) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__mainframe(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, frames) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__frames(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, frameById) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_id = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_id.isString()))) {
            php::throwArgumentTypeError(raw_arg_id, get_str(987), 1, get_str(118), get_str(98));
        }
        php::Str arg_id = php::toString(raw_arg_id);
        auto retval = php_nativeplaywright__page__framebyid(this_, php::takeValue(arg_id));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, frame) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var arg_selector = php::getCallArg(0);
        auto retval = php_nativeplaywright__page__frame(this_, php::takeValue(arg_selector));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, url) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__url(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, goto) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_url = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_url.isString()))) {
            php::throwArgumentTypeError(raw_arg_url, get_str(1155), 1, get_str(203), get_str(98));
        }
        php::Str arg_url = php::toString(raw_arg_url);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__goto_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__goto(this_, php::takeValue(arg_url),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, historyNavigate) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Object arg_trigger = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(1));
        auto retval = php_nativeplaywright__page__historynavigate(this_, php::takeValue(arg_trigger),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, reload) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__page__reload_arg_0_default_value()));
        auto retval = php_nativeplaywright__page__reload(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, goHistory) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_delta = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_delta.isInt()))) {
            php::throwArgumentTypeError(raw_arg_delta, get_str(1156), 1, get_str(1157), get_str(89));
        }
        php::Int arg_delta = php::toInt(raw_arg_delta);
        php::Array arg_options = php::toArray(php::getCallArg(1));
        auto retval = php_nativeplaywright__page__gohistory(this_, arg_delta,php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, goBack) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__page__goback_arg_0_default_value()));
        auto retval = php_nativeplaywright__page__goback(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, goForward) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__page__goforward_arg_0_default_value()));
        auto retval = php_nativeplaywright__page__goforward(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, waitForLoadState) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 2, false);
        php::Var raw_arg_state = php::getCallArg(0, php_nativeplaywright__page__waitforloadstate_arg_0_default_value());
        if (UNEXPECTED(!(raw_arg_state.isString()))) {
            php::throwArgumentTypeError(raw_arg_state, get_str(1158), 1, get_str(674), get_str(98));
        }
        php::Str arg_state = php::toString(raw_arg_state);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__waitforloadstate_arg_1_default_value()));
        php_nativeplaywright__page__waitforloadstate(this_, php::takeValue(arg_state),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, waitForURL) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_url = php::getCallArg(0);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__waitforurl_arg_1_default_value()));
        php_nativeplaywright__page__waitforurl(this_, php::takeValue(arg_url),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, expectNavigation) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Object arg_action = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__expectnavigation_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__expectnavigation(this_, php::takeValue(arg_action),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, waitForTimeout) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_ms = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_ms.isFloat() || raw_arg_ms.isInt())))) {
            php::throwArgumentTypeError(raw_arg_ms, get_str(734), 1, get_str(735), get_str(103));
        }
        php::Float arg_ms = php::toFloat(raw_arg_ms);
        php_nativeplaywright__page__waitfortimeout(this_, arg_ms);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, expectRequest) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var arg_urlOrPredicate = php::getCallArg(0);
        php::Object arg_action = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__page__expectrequest_arg_2_default_value()));
        auto retval = php_nativeplaywright__page__expectrequest(this_, php::takeValue(arg_urlOrPredicate),php::takeValue(arg_action),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, expectResponse) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var arg_urlOrPredicate = php::getCallArg(0);
        php::Object arg_action = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__page__expectresponse_arg_2_default_value()));
        auto retval = php_nativeplaywright__page__expectresponse(this_, php::takeValue(arg_urlOrPredicate),php::takeValue(arg_action),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, waitForRequest) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_urlOrPredicate = php::getCallArg(0);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__waitforrequest_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__waitforrequest(this_, php::takeValue(arg_urlOrPredicate),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, waitForResponse) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_urlOrPredicate = php::getCallArg(0);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__waitforresponse_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__waitforresponse(this_, php::takeValue(arg_urlOrPredicate),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, expectPopup) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Object arg_action = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__expectpopup_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__expectpopup(this_, php::takeValue(arg_action),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, expectDownload) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Object arg_action = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__expectdownload_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__expectdownload(this_, php::takeValue(arg_action),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, expectConsoleMessage) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Object arg_action = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__expectconsolemessage_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__expectconsolemessage(this_, php::takeValue(arg_action),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, expectFileChooser) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Object arg_action = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__expectfilechooser_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__expectfilechooser(this_, php::takeValue(arg_action),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, expectDialog) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Object arg_action = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__expectdialog_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__expectdialog(this_, php::takeValue(arg_action),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, title) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__title(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, content) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__content(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, setContent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_html = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_html.isString()))) {
            php::throwArgumentTypeError(raw_arg_html, get_str(1159), 1, get_str(274), get_str(98));
        }
        php::Str arg_html = php::toString(raw_arg_html);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__setcontent_arg_1_default_value()));
        php_nativeplaywright__page__setcontent(this_, php::takeValue(arg_html),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, evaluate) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_js = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_js.isString()))) {
            php::throwArgumentTypeError(raw_arg_js, get_str(1160), 1, get_str(277), get_str(98));
        }
        php::Str arg_js = php::toString(raw_arg_js);
        php::Var arg_arg = php::getCallArg(1, php_nativeplaywright__page__evaluate_arg_1_default_value());
        auto retval = php_nativeplaywright__page__evaluate(this_, php::takeValue(arg_js),php::takeValue(arg_arg));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, waitForFunction) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 3, false);
        php::Var raw_arg_js = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_js.isString()))) {
            php::throwArgumentTypeError(raw_arg_js, get_str(1161), 1, get_str(277), get_str(98));
        }
        php::Str arg_js = php::toString(raw_arg_js);
        php::Var arg_arg = php::getCallArg(1, php_nativeplaywright__page__waitforfunction_arg_1_default_value());
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__page__waitforfunction_arg_2_default_value()));
        auto retval = php_nativeplaywright__page__waitforfunction(this_, php::takeValue(arg_js),php::takeValue(arg_arg),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, addScriptTag) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0));
        php_nativeplaywright__page__addscripttag(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, addStyleTag) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0));
        php_nativeplaywright__page__addstyletag(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, locator) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1162), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__locator_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__locator(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, getByText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1163), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__getbytext_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__getbytext(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, getByRole) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_role = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_role.isString()))) {
            php::throwArgumentTypeError(raw_arg_role, get_str(1164), 1, get_str(331), get_str(98));
        }
        php::Str arg_role = php::toString(raw_arg_role);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__getbyrole_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__getbyrole(this_, php::takeValue(arg_role),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, getByLabel) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1165), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__getbylabel_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__getbylabel(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, getByPlaceholder) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1166), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__getbyplaceholder_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__getbyplaceholder(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, getByAltText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1167), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__getbyalttext_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__getbyalttext(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, getByTitle) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1168), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__getbytitle_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__getbytitle(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, getByTestId) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_testId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_testId.isString()))) {
            php::throwArgumentTypeError(raw_arg_testId, get_str(1169), 1, get_str(337), get_str(98));
        }
        php::Str arg_testId = php::toString(raw_arg_testId);
        auto retval = php_nativeplaywright__page__getbytestid(this_, php::takeValue(arg_testId));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, frameLocator) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1170), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        auto retval = php_nativeplaywright__page__framelocator(this_, php::takeValue(arg_selector));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, click) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1171), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__click_arg_1_default_value()));
        php_nativeplaywright__page__click(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, dblclick) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1172), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__dblclick_arg_1_default_value()));
        php_nativeplaywright__page__dblclick(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, tap) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1173), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__tap_arg_1_default_value()));
        php_nativeplaywright__page__tap(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, fill) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1174), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_value = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_value.isString()))) {
            php::throwArgumentTypeError(raw_arg_value, get_str(1174), 2, get_str(109), get_str(98));
        }
        php::Str arg_value = php::toString(raw_arg_value);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__page__fill_arg_2_default_value()));
        php_nativeplaywright__page__fill(this_, php::takeValue(arg_selector),php::takeValue(arg_value),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, type) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1175), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_text = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1175), 2, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__page__type_arg_2_default_value()));
        php_nativeplaywright__page__type(this_, php::takeValue(arg_selector),php::takeValue(arg_text),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, press) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1176), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_key = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_key.isString()))) {
            php::throwArgumentTypeError(raw_arg_key, get_str(1176), 2, get_str(416), get_str(98));
        }
        php::Str arg_key = php::toString(raw_arg_key);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__page__press_arg_2_default_value()));
        php_nativeplaywright__page__press(this_, php::takeValue(arg_selector),php::takeValue(arg_key),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, hover) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1177), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__hover_arg_1_default_value()));
        php_nativeplaywright__page__hover(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, focus) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1178), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__focus_arg_1_default_value()));
        php_nativeplaywright__page__focus(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, check) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1179), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__check_arg_1_default_value()));
        php_nativeplaywright__page__check(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, uncheck) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1180), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__uncheck_arg_1_default_value()));
        php_nativeplaywright__page__uncheck(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, setChecked) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1181), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_checked = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_checked.isBool()))) {
            php::throwArgumentTypeError(raw_arg_checked, get_str(1181), 2, get_str(1182), get_str(106));
        }
        php::Bool arg_checked = php::toBool(raw_arg_checked);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__page__setchecked_arg_2_default_value()));
        php_nativeplaywright__page__setchecked(this_, php::takeValue(arg_selector),arg_checked,php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, selectOption) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1046), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var arg_values = php::getCallArg(1);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__page__selectoption_arg_2_default_value()));
        auto retval = php_nativeplaywright__page__selectoption(this_, php::takeValue(arg_selector),php::takeValue(arg_values),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, setInputFiles) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1049), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var arg_files = php::getCallArg(1);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__page__setinputfiles_arg_2_default_value()));
        php_nativeplaywright__page__setinputfiles(this_, php::takeValue(arg_selector),php::takeValue(arg_files),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, dragAndDrop) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_source = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_source.isString()))) {
            php::throwArgumentTypeError(raw_arg_source, get_str(1183), 1, get_str(750), get_str(98));
        }
        php::Str arg_source = php::toString(raw_arg_source);
        php::Var raw_arg_target = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_target.isString()))) {
            php::throwArgumentTypeError(raw_arg_target, get_str(1183), 2, get_str(1184), get_str(98));
        }
        php::Str arg_target = php::toString(raw_arg_target);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__page__draganddrop_arg_2_default_value()));
        php_nativeplaywright__page__draganddrop(this_, php::takeValue(arg_source),php::takeValue(arg_target),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, dispatchEvent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 4, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1185), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_type = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_type.isString()))) {
            php::throwArgumentTypeError(raw_arg_type, get_str(1185), 2, get_str(425), get_str(98));
        }
        php::Str arg_type = php::toString(raw_arg_type);
        php::Array arg_eventInit = php::toArray(php::getCallArg(2, php_nativeplaywright__page__dispatchevent_arg_2_default_value()));
        php::Array arg_options = php::toArray(php::getCallArg(3, php_nativeplaywright__page__dispatchevent_arg_3_default_value()));
        php_nativeplaywright__page__dispatchevent(this_, php::takeValue(arg_selector),php::takeValue(arg_type),php::takeValue(arg_eventInit),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, textContent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1053), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__textcontent_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__textcontent(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, innerText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1186), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__innertext_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__innertext(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, innerHTML) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1187), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__innerhtml_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__innerhtml(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, getAttribute) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1057), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_name = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(1057), 2, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__page__getattribute_arg_2_default_value()));
        auto retval = php_nativeplaywright__page__getattribute(this_, php::takeValue(arg_selector),php::takeValue(arg_name),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, inputValue) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1188), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__inputvalue_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__inputvalue(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, isVisible) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1189), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        auto retval = php_nativeplaywright__page__isvisible(this_, php::takeValue(arg_selector));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, isHidden) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1190), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        auto retval = php_nativeplaywright__page__ishidden(this_, php::takeValue(arg_selector));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, isEnabled) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1191), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__isenabled_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__isenabled(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, isDisabled) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1192), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__isdisabled_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__isdisabled(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, isEditable) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1193), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__iseditable_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__iseditable(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, isChecked) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1194), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__ischecked_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__ischecked(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, waitForSelector) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1195), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__page__waitforselector_arg_1_default_value()));
        auto retval = php_nativeplaywright__page__waitforselector(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, evalOnSelector) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1196), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_js = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_js.isString()))) {
            php::throwArgumentTypeError(raw_arg_js, get_str(1196), 2, get_str(277), get_str(98));
        }
        php::Str arg_js = php::toString(raw_arg_js);
        php::Var arg_arg = php::getCallArg(2, php_nativeplaywright__page__evalonselector_arg_2_default_value());
        auto retval = php_nativeplaywright__page__evalonselector(this_, php::takeValue(arg_selector),php::takeValue(arg_js),php::takeValue(arg_arg));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, evalOnSelectorAll) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1197), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_js = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_js.isString()))) {
            php::throwArgumentTypeError(raw_arg_js, get_str(1197), 2, get_str(277), get_str(98));
        }
        php::Str arg_js = php::toString(raw_arg_js);
        php::Var arg_arg = php::getCallArg(2, php_nativeplaywright__page__evalonselectorall_arg_2_default_value());
        auto retval = php_nativeplaywright__page__evalonselectorall(this_, php::takeValue(arg_selector),php::takeValue(arg_js),php::takeValue(arg_arg));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, setViewportSize) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_size = php::toArray(php::getCallArg(0));
        php_nativeplaywright__page__setviewportsize(this_, php::takeValue(arg_size));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, viewportSize) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__viewportsize(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, emulateMedia) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__page__emulatemedia_arg_0_default_value()));
        php_nativeplaywright__page__emulatemedia(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, setExtraHTTPHeaders) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_headers = php::toArray(php::getCallArg(0));
        php_nativeplaywright__page__setextrahttpheaders(this_, php::takeValue(arg_headers));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, applyExtraHeaders) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__page__applyextraheaders(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, bringToFront) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__page__bringtofront(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, requestGC) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__page__requestgc(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, newCDPSession) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__page__newcdpsession(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, screenshot) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__page__screenshot_arg_0_default_value()));
        auto retval = php_nativeplaywright__page__screenshot(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, pdf) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__page__pdf_arg_0_default_value()));
        auto retval = php_nativeplaywright__page__pdf(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, on) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1198), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_handler = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php_nativeplaywright__page__on(this_, php::takeValue(arg_event),php::takeValue(arg_handler));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, once) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1199), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_handler = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php_nativeplaywright__page__once(this_, php::takeValue(arg_event),php::takeValue(arg_handler));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, off) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1200), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_handler = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(php::getCallArg(1, php_nativeplaywright__page__off_arg_1_default_value()));
        php_nativeplaywright__page__off(this_, php::takeValue(arg_event),php::takeValue(arg_handler));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, removeAllListeners) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Var raw_arg_event = php::getCallArg(0, php_nativeplaywright__page__removealllisteners_arg_0_default_value());
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1201), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php_nativeplaywright__page__removealllisteners(this_, php::takeValue(arg_event));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, listenerCount) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1132), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        auto retval = php_nativeplaywright__page__listenercount(this_, php::takeValue(arg_event));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, emit) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1202), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Var arg_arg = php::getCallArg(1);
        php_nativeplaywright__page__emit(this_, php::takeValue(arg_event),php::takeValue(arg_arg));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, waitForEvent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 3, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1134), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_predicate = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(php::getCallArg(1, php_nativeplaywright__page__waitforevent_arg_1_default_value()));
        php::Var arg_timeout = php::getCallArg(2, php_nativeplaywright__page__waitforevent_arg_2_default_value());
        auto retval = php_nativeplaywright__page__waitforevent(this_, php::takeValue(arg_event),php::takeValue(arg_predicate),php::takeValue(arg_timeout));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Page, expectEvent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 4, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1136), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_action = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(php::getCallArg(1, php_nativeplaywright__page__expectevent_arg_1_default_value()));
        php::Object arg_predicate = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(php::getCallArg(2, php_nativeplaywright__page__expectevent_arg_2_default_value()));
        php::Var arg_timeout = php::getCallArg(3, php_nativeplaywright__page__expectevent_arg_3_default_value());
        auto retval = php_nativeplaywright__page__expectevent(this_, php::takeValue(arg_event),php::takeValue(arg_action),php::takeValue(arg_predicate),php::takeValue(arg_timeout));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

