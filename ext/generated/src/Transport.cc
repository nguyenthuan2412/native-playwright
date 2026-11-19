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
#include <php_native_playwright_src_NativePlaywright_Connection_0606cc101d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>
#include <php_native_playwright_src_NativePlaywright_Waiter_65d6396c74_decl.h>

void php_nativeplaywright__transport____construct(php::Object &this_, php::Object conn) {
typephp_write_property_scoped(this_, "conn", conn, get_persistent_class(PersistentClassId{4}, get_str(114)));

}

php::Object php_nativeplaywright__transport__connection(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{7}, get_str(115), get_str(114)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Bool php_nativeplaywright__transport__isclosed(php::Object &this_) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{8}, get_str(76), get_str(114)), php::AttrMode::Get)));
    return tmp_var_0;
}

php::Object php_nativeplaywright__transport__sendasync(php::Object &this_, php::Str method, php::Array params, php::Str sessionId) {
    php::Var w;
    php::Var tmp_var_0;
    php::Var tmp_var_2;
    zend_class_entry *tmp_var_3 = get_persistent_class(PersistentClassId{4}, get_str(114));

    w = typephp_call_method_cached(this_, get_str(116), get_method_call_cache(MethodCallCacheId{2}));
    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{7}, get_str(115), get_str(114)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    ((tmp_var_2 = php_nativeplaywright__connection__send(tmp_var_1, method, params, sessionId), typephp_write_property_cached(w, get_str(117), tmp_var_2, tmp_var_3, get_property_cache(PropertyCacheId{0}))), tmp_var_2);
    tmp_var_0.unset();
    [&]() -> php::Var {
    auto&& tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{9}, get_str(119), get_str(114)), php::AttrMode::Update);
    php::Var tmp_var_5 = typephp_read_property_cached(w, get_str(117), php::AttrMode::Get, get_property_cache(PropertyCacheId{1}));
    php::Var tmp_var_6 = w;
    static_cast<void>(tmp_var_4.item(tmp_var_5, true) = tmp_var_6);
    return tmp_var_6;
    }();
    return php::toObject(w, get_persistent_class(PersistentClassId{2}, get_str(108)));
}

php::Array php_nativeplaywright__transport__call(php::Object &this_, php::Str method, php::Array params, php::Str sessionId, php::Float timeout) {
    php::Object w;
    php::Var m;
    php::Var tmp_var_0;
    php::Array tmp_var_1;

    w = php_nativeplaywright__transport__sendasync(this_, method, params, sessionId);
    try {
        m = typephp_call_method_cached(this_, get_str(121), get_method_call_cache(MethodCallCacheId{3}), php::VarList{w, timeout, method});
    } catch (zend_object *_ex) {
        tmp_var_0 = php::catchException();
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{9}, get_str(119), get_str(114)), php::AttrMode::Get).offsetUnset(w.attr(get_persistent_prop(PersistentPropertyId{10}, get_str(117), get_str(108)), php::AttrMode::Get));

    if (tmp_var_0) {
        php::throwException(php::Object(tmp_var_0));
    }
    tmp_var_1 = (php_nativeplaywright__transport__unwrap(this_, method, php::toArray(m)));
    return tmp_var_1;
}

php::Array php_nativeplaywright__transport__callmany(php::Object &this_, php::Array calls, php::Str sessionId, php::Bool ignoreErrors) {
    php::Array ws;
    php::Var c;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Array out;
    php::Var pair;
    php::Var tmp_var_10;
    php::Var method;
    php::Var w;
    php::Var m;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Object e;
    php::Var tmp_var_14;
    zend_class_entry *tmp_var_1 = get_persistent_class(PersistentClassId{4}, get_str(114));

    ws = php::Array{};
    {
        php::ForeachIterator tmp_var_0{calls, false, tmp_var_1};
        while (tmp_var_0.nextValue(c)) {
            tmp_var_2 = c.item(0L, false);
            tmp_var_3 = c.item(0L, false);
            if (php::exists(c, {{php::ArrayDimFetch, php::Var(1L)}}, tmp_var_5)) {
                    tmp_var_4 = tmp_var_5;
                } else {
                    tmp_var_4 = php::Array{};
                }
            tmp_var_6 = tmp_var_4;
            tmp_var_7 = php_nativeplaywright__transport__sendasync(this_, php::toStringArgExact(php::deindirect(tmp_var_3), get_str(122), 1, get_str(100)), tmp_var_6, sessionId);
            tmp_var_3.unset();
            tmp_var_6.unset();
            ((tmp_var_8 = php::Array{
                php::Var(tmp_var_2), 
                php::Var(tmp_var_7)
            }, ws.append(tmp_var_8)), tmp_var_8);
            tmp_var_2.unset();
            tmp_var_7.unset();
        }
    }
    out = php::Array{};
    {
        php::ForeachIterator tmp_var_9{ws, false, tmp_var_1};
        while (tmp_var_9.nextValue(pair)) {
            {
                tmp_var_10 = pair;
                method = tmp_var_10.item(0L, false);
                w = tmp_var_10.item(1L, false);
            };
            try {
                m = typephp_call_method_cached(this_, get_str(121), get_method_call_cache(MethodCallCacheId{4}), php::VarList{w, 0.0, method});
                ((tmp_var_11 = php_nativeplaywright__transport__unwrap(this_, php::toStringArgExact(method, get_str(123), 1, get_str(100)), php::toArray(m)), out.append(tmp_var_11)), tmp_var_11);
            } catch (zend_object *_ex) {
                tmp_var_12 = php::catchException();
                bool tmp_var_13 = false;
                if (!tmp_var_13 && tmp_var_12 && (php::instanceOf(tmp_var_12, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
                    tmp_var_13 = true;
                    e = tmp_var_12;
                    tmp_var_12 = php::null;
                    try {
                        if (php::toBool(!(php::toBool(ignoreErrors)))) {
                            php::throwException(e);
                        }
                        ((tmp_var_14 = php::Array{}, out.append(tmp_var_14)), tmp_var_14);
                    } catch(zend_object *_catch_throw_ex) {
                        tmp_var_12 = php::catchException();
                    }
                }
            }
            this_.attr(get_persistent_prop(PersistentPropertyId{9}, get_str(119), get_str(114)), php::AttrMode::Get).offsetUnset(typephp_read_property_cached(w, get_str(117), php::AttrMode::Get, get_property_cache(PropertyCacheId{3})));

            if (tmp_var_12) {
                php::throwException(php::Object(tmp_var_12));
            }
        }
    }
    return out;
}

php::Array php_nativeplaywright__transport__unwrap(php::Object &this_, php::Str method, php::Array m) {
    php::Str msg;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Int tmp_var_6 = 0;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Array tmp_var_9;
    zend_class_entry *tmp_var_3 = get_persistent_class(PersistentClassId{0}, get_str(75));

    if (php::toBool(php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(112))}}))) {
        if (php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(112))}, {php::ArrayDimFetch, php::Var(get_str(124))}}, tmp_var_1)) {
            tmp_var_0 = tmp_var_1;
        } else {
            tmp_var_0 = get_str(125);
        }
        msg = php::toString(tmp_var_0);
        if (php::toBool(php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(112))}, {php::ArrayDimFetch, php::Var(get_str(126))}}))) {
            tmp_var_2 = php::toString(m.get(get_str(112)).item(get_str(126), false));
            (msg.append(php::concat({get_str(127), tmp_var_2})), msg);
            tmp_var_2.unset();
        }
        if (php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(112))}, {php::ArrayDimFetch, php::Var(get_str(129))}}, tmp_var_5)) {
            tmp_var_4 = tmp_var_5;
        } else {
            tmp_var_4 = 0L;
        }
        tmp_var_6 = php::toInt(tmp_var_4);
        php::throwException(php::newObject(tmp_var_3, php::VarList{php::concat({method, get_str(128), msg}), tmp_var_6}));
    }
    if (php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(130))}}, tmp_var_8)) {
        tmp_var_7 = tmp_var_8;
    } else {
        tmp_var_7 = php::Array{};
    }
    tmp_var_9 = (php::toArray(tmp_var_7));
    return tmp_var_9;
}

php::Int php_nativeplaywright__transport__on(php::Object &this_, php::Str sessionId, php::Object fn) {
    php::Var id;
    php::Var tmp_var_5;
    php::Int &_object_prop_this___seq = this_.attrInt(get_persistent_prop(PersistentPropertyId{11}, get_str(131), get_str(114)));

    id = ++_object_prop_this___seq;
    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{12}, get_str(132), get_str(114)), php::AttrMode::Update);
    php::Var tmp_var_1 = sessionId;
    auto&& tmp_var_2 = tmp_var_0.item(tmp_var_1, true);
    php::Var tmp_var_3 = id;
    php::Var tmp_var_4 = fn;
    (tmp_var_2.isArray() ? static_cast<void>(tmp_var_2.item(tmp_var_3, true) = tmp_var_4) : tmp_var_2.offsetSet(tmp_var_3, tmp_var_4));
    return tmp_var_4;
    }();
    tmp_var_5 = (id);
    if (UNEXPECTED(!(tmp_var_5.isInt()))) {
        php::throwReturnTypeError(tmp_var_5, get_str(133), get_str(89), true);
    }
    return php::toInt(tmp_var_5);
}

void php_nativeplaywright__transport__off(php::Object &this_, php::Str sessionId, php::Int id) {
    php::Bool tmp_var_3 = 0;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Bool tmp_var_6 = 0;

    [&]() {
    auto &&tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{12}, get_str(132), get_str(114)), php::AttrMode::Get);
    php::Var tmp_var_1 = sessionId;
    php::Var tmp_var_2 = id;
    php::unset(tmp_var_0, {{php::ArrayDimFetch, tmp_var_1}, {php::ArrayDimFetch, tmp_var_2}});
    }();
    tmp_var_3 = php::toBool(php::exists((this_.isObject() ? typephp_read_property_scoped(this_, get_str(132), get_persistent_class(PersistentClassId{4}, get_str(114)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(sessionId)}}));
    if (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_3)) {
            tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{12}, get_str(132), get_str(114)), php::AttrMode::Get).item(sessionId, false);
            tmp_var_5 = php::Array{};
            tmp_var_6 = php::toBool(php::same(tmp_var_4, tmp_var_5));
            tmp_var_4.unset();
            tmp_var_5.unset();
            return php::toBool(tmp_var_6);
        }
        return false;
    }())) {
        this_.attr(get_persistent_prop(PersistentPropertyId{12}, get_str(132), get_str(114)), php::AttrMode::Get).offsetUnset(sessionId);
    }
}

void php_nativeplaywright__transport__offsession(php::Object &this_, php::Str sessionId) {
    this_.attr(get_persistent_prop(PersistentPropertyId{12}, get_str(132), get_str(114)), php::AttrMode::Get).offsetUnset(sessionId);
}

void php_nativeplaywright__transport__onclose(php::Object &this_, php::Object fn) {
    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{13}, get_str(134), get_str(114)), php::AttrMode::Update);
    php::Var tmp_var_1 = php::null;
    php::Var tmp_var_2 = fn;
    tmp_var_0.append(tmp_var_2);
    return tmp_var_2;
    }();
}

void php_nativeplaywright__transport__handlemessage(php::Object &this_, php::Array m) {
    php::Int id = 0;
    php::Var w;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Str sid;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var ls;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Str method;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Array params;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var fn;
    php::Var tmp_var_13;
    php::Object e;
    zend_function * tmp_var_15;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    zend_class_entry *tmp_var_12 = get_persistent_class(PersistentClassId{4}, get_str(114));

    if (php::toBool(php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(117))}}))) {
        id = php::toInt(m.get(get_str(117)));
        if (php::exists((this_.isObject() ? typephp_read_property_scoped(this_, get_str(119), get_persistent_class(PersistentClassId{4}, get_str(114)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(id)}}, tmp_var_1)) {
            tmp_var_0 = tmp_var_1;
        } else {
            tmp_var_0 = php::null;
        }
        w = tmp_var_0;
        if (php::toBool(!(php::same(w, php::null)))) {
            this_.attr(get_persistent_prop(PersistentPropertyId{9}, get_str(119), get_str(114)), php::AttrMode::Get).offsetUnset(id);
            typephp_call_method_cached(w, get_str(135), get_method_call_cache(MethodCallCacheId{5}), php::VarList{m});
        }
        return;
    }
    if (php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(101))}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_2 = php::empty_string;
    }
    sid = php::toString(tmp_var_2);
    if (php::exists((this_.isObject() ? typephp_read_property_scoped(this_, get_str(132), get_persistent_class(PersistentClassId{4}, get_str(114)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(sid)}}, tmp_var_5)) {
        tmp_var_4 = tmp_var_5;
    } else {
        tmp_var_4 = php::null;
    }
    ls = tmp_var_4;
    if (php::toBool(php::same(ls, php::null))) {
        return;
    }
    if (php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(100))}}, tmp_var_7)) {
        tmp_var_6 = tmp_var_7;
    } else {
        tmp_var_6 = php::empty_string;
    }
    method = php::toString(tmp_var_6);
    if (php::exists(m, {{php::ArrayDimFetch, php::Var(get_str(136))}}, tmp_var_9)) {
        tmp_var_8 = tmp_var_9;
    } else {
        tmp_var_8 = php::Array{};
    }
    params = php::toArray(tmp_var_8);

    tmp_var_10 = ls;
    {
        php::ForeachIterator tmp_var_11{tmp_var_10, false, tmp_var_12};
        while (tmp_var_11.next()) {
            fn = tmp_var_11.value();
            try {
                typephp_call_cached(fn, get_function_call_cache(FunctionCallCacheId{0}), php::VarList{method, params});
            } catch (zend_object *_ex) {
                tmp_var_13 = php::catchException();
                bool tmp_var_14 = false;
                if (!tmp_var_14 && tmp_var_13 && (php::instanceOf(tmp_var_13, get_persistent_class(PersistentClassId{3}, get_str(113))))) {
                    tmp_var_14 = true;
                    e = tmp_var_13;
                    tmp_var_13 = php::null;
                    if (get_function_resolution_cache(FunctionResolutionCacheId{6}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{6}) = php::fn::function_exists(get_str(137)) ? 1 : 2; }
                    tmp_var_15 = get_function_resolution_cache(FunctionResolutionCacheId{6}) == 1 ? get_func(RequestFuncId{4}, get_str(137)) : get_persistent_func(PersistentFuncId{4}, get_str(138));
                    tmp_var_16 = typephp_call_method_cached(e, get_str(140), get_method_call_cache(MethodCallCacheId{6}));
                    tmp_var_17 = php::concat({get_str(139), php::toString(tmp_var_16)});
                    tmp_var_16.unset();
                    tmp_var_18 = php::constant(get_str(141), php::ConstantLookup::UnqualifiedInNamespace);
                    php::call(tmp_var_15, php::VarList{tmp_var_17, tmp_var_18});
                    tmp_var_17.unset();
                    tmp_var_18.unset();
                }
            }
            if (tmp_var_13) {
                php::throwException(php::Object(tmp_var_13));
            }
        }
    }
}

void php_nativeplaywright__transport__handleclosed(php::Object &this_) {
    php::Object err;
    php::Var tmp_var_1;
    php::Var w;
    php::Var tmp_var_4;
    php::Var fn;
    php::Var tmp_var_6;
    php::Object e;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{0}, get_str(75));
    zend_class_entry *tmp_var_3 = get_persistent_class(PersistentClassId{4}, get_str(114));

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{8}, get_str(76), get_str(114)), php::AttrMode::Get))) {
        return;
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{8}, get_str(76), get_str(114)), php::AttrMode::Update) = true;
    err = php::newObject(tmp_var_0, php::VarList{get_str(142)});

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{9}, get_str(119), get_str(114)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_2{tmp_var_1, false, tmp_var_3};
        while (tmp_var_2.next()) {
            w = tmp_var_2.value();
            typephp_call_method_cached(w, get_str(143), get_method_call_cache(MethodCallCacheId{7}), php::VarList{err});
        }
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{9}, get_str(119), get_str(114)), php::AttrMode::Update) = php::Array{};

    tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{13}, get_str(134), get_str(114)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_5{tmp_var_4, false, tmp_var_3};
        while (tmp_var_5.next()) {
            fn = tmp_var_5.value();
            try {
                typephp_call_cached(fn, get_function_call_cache(FunctionCallCacheId{1}));
            } catch (zend_object *_ex) {
                tmp_var_6 = php::catchException();
                bool tmp_var_7 = false;
                if (!tmp_var_7 && tmp_var_6 && (php::instanceOf(tmp_var_6, get_persistent_class(PersistentClassId{3}, get_str(113))))) {
                    tmp_var_7 = true;
                    e = tmp_var_6;
                    tmp_var_6 = php::null;
                }
            }
            if (tmp_var_6) {
                php::throwException(php::Object(tmp_var_6));
            }
        }
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{13}, get_str(134), get_str(114)), php::AttrMode::Update) = php::Array{};
}


ZEND_METHOD(NativePlaywright_Transport, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_conn = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{1}, get_str(74)));
        php_nativeplaywright__transport____construct(this_, php::takeValue(arg_conn));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Transport, connection) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__transport__connection(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Transport, isClosed) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__transport__isclosed(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Transport, sendAsync) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 3, false);
        php::Var raw_arg_method = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_method.isString()))) {
            php::throwArgumentTypeError(raw_arg_method, get_str(122), 1, get_str(100), get_str(98));
        }
        php::Str arg_method = php::toString(raw_arg_method);
        php::Array arg_params = php::toArray(php::getCallArg(1, php_nativeplaywright__transport__sendasync_arg_1_default_value()));
        php::Var raw_arg_sessionId = php::getCallArg(2, php_nativeplaywright__transport__sendasync_arg_2_default_value());
        if (UNEXPECTED(!(raw_arg_sessionId.isString()))) {
            php::throwArgumentTypeError(raw_arg_sessionId, get_str(122), 3, get_str(101), get_str(98));
        }
        php::Str arg_sessionId = php::toString(raw_arg_sessionId);
        auto retval = php_nativeplaywright__transport__sendasync(this_, php::takeValue(arg_method),php::takeValue(arg_params),php::takeValue(arg_sessionId));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Transport, call) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 4, false);
        php::Var raw_arg_method = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_method.isString()))) {
            php::throwArgumentTypeError(raw_arg_method, get_str(144), 1, get_str(100), get_str(98));
        }
        php::Str arg_method = php::toString(raw_arg_method);
        php::Array arg_params = php::toArray(php::getCallArg(1, php_nativeplaywright__transport__call_arg_1_default_value()));
        php::Var raw_arg_sessionId = php::getCallArg(2, php_nativeplaywright__transport__call_arg_2_default_value());
        if (UNEXPECTED(!(raw_arg_sessionId.isString()))) {
            php::throwArgumentTypeError(raw_arg_sessionId, get_str(144), 3, get_str(101), get_str(98));
        }
        php::Str arg_sessionId = php::toString(raw_arg_sessionId);
        php::Var raw_arg_timeout = php::getCallArg(3, php_nativeplaywright__transport__call_arg_3_default_value());
        if (UNEXPECTED(!((raw_arg_timeout.isFloat() || raw_arg_timeout.isInt())))) {
            php::throwArgumentTypeError(raw_arg_timeout, get_str(144), 4, get_str(102), get_str(103));
        }
        php::Float arg_timeout = php::toFloat(raw_arg_timeout);
        auto retval = php_nativeplaywright__transport__call(this_, php::takeValue(arg_method),php::takeValue(arg_params),php::takeValue(arg_sessionId),arg_timeout);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Transport, callMany) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 3, false);
        php::Array arg_calls = php::toArray(php::getCallArg(0));
        php::Var raw_arg_sessionId = php::getCallArg(1, php_nativeplaywright__transport__callmany_arg_1_default_value());
        if (UNEXPECTED(!(raw_arg_sessionId.isString()))) {
            php::throwArgumentTypeError(raw_arg_sessionId, get_str(145), 2, get_str(101), get_str(98));
        }
        php::Str arg_sessionId = php::toString(raw_arg_sessionId);
        php::Var raw_arg_ignoreErrors = php::getCallArg(2, php_nativeplaywright__transport__callmany_arg_2_default_value());
        if (UNEXPECTED(!(raw_arg_ignoreErrors.isBool()))) {
            php::throwArgumentTypeError(raw_arg_ignoreErrors, get_str(145), 3, get_str(146), get_str(106));
        }
        php::Bool arg_ignoreErrors = php::toBool(raw_arg_ignoreErrors);
        auto retval = php_nativeplaywright__transport__callmany(this_, php::takeValue(arg_calls),php::takeValue(arg_sessionId),arg_ignoreErrors);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Transport, unwrap) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_method = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_method.isString()))) {
            php::throwArgumentTypeError(raw_arg_method, get_str(123), 1, get_str(100), get_str(98));
        }
        php::Str arg_method = php::toString(raw_arg_method);
        php::Array arg_m = php::toArray(php::getCallArg(1));
        auto retval = php_nativeplaywright__transport__unwrap(this_, php::takeValue(arg_method),php::takeValue(arg_m));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Transport, on) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_sessionId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_sessionId.isString()))) {
            php::throwArgumentTypeError(raw_arg_sessionId, get_str(133), 1, get_str(101), get_str(98));
        }
        php::Str arg_sessionId = php::toString(raw_arg_sessionId);
        php::Object arg_fn = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(147)));
        auto retval = php_nativeplaywright__transport__on(this_, php::takeValue(arg_sessionId),php::takeValue(arg_fn));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Transport, off) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_sessionId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_sessionId.isString()))) {
            php::throwArgumentTypeError(raw_arg_sessionId, get_str(148), 1, get_str(101), get_str(98));
        }
        php::Str arg_sessionId = php::toString(raw_arg_sessionId);
        php::Var raw_arg_id = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_id.isInt()))) {
            php::throwArgumentTypeError(raw_arg_id, get_str(148), 2, get_str(117), get_str(89));
        }
        php::Int arg_id = php::toInt(raw_arg_id);
        php_nativeplaywright__transport__off(this_, php::takeValue(arg_sessionId),arg_id);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Transport, offSession) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_sessionId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_sessionId.isString()))) {
            php::throwArgumentTypeError(raw_arg_sessionId, get_str(149), 1, get_str(101), get_str(98));
        }
        php::Str arg_sessionId = php::toString(raw_arg_sessionId);
        php_nativeplaywright__transport__offsession(this_, php::takeValue(arg_sessionId));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Transport, onClose) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_fn = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(147)));
        php_nativeplaywright__transport__onclose(this_, php::takeValue(arg_fn));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Transport, handleMessage) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_m = php::toArray(php::getCallArg(0));
        php_nativeplaywright__transport__handlemessage(this_, php::takeValue(arg_m));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Transport, handleClosed) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__transport__handleclosed(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

