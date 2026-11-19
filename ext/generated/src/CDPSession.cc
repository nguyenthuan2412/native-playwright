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
#include <php_native_playwright_src_NativePlaywright_CDPSession_9157bcb704_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>

void php_nativeplaywright__cdpsession____construct(php::Object &this_, php::Object t, php::Str sessionId, php::Float timeout) {
typephp_write_property_scoped(this_, "t", t, get_persistent_class(PersistentClassId{25}, get_str(659)));
typephp_write_property_scoped(this_, "sessionId", sessionId, get_persistent_class(PersistentClassId{25}, get_str(659)));
typephp_write_property_scoped(this_, "timeout", timeout, get_persistent_class(PersistentClassId{25}, get_str(659)));

}

php::Array php_nativeplaywright__cdpsession__send(php::Object &this_, php::Str method, php::Array params) {
    php::Var tmp_var_0;
    php::Str tmp_var_1;
    php::Array tmp_var_2;
    php::Var tmp_var_3;
    php::Float tmp_var_4 = 0;
    php::Array tmp_var_5;
    php::Float &_object_prop_this___timeout = this_.attrFloat(get_persistent_prop(PersistentPropertyId{87}, get_str(102), get_str(659)));

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{85}, get_str(660), get_str(659)), php::AttrMode::Get);
    tmp_var_1 = method;
    tmp_var_2 = params;
    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{86}, get_str(101), get_str(659)), php::AttrMode::Get);
    tmp_var_4 = php::toFloat(_object_prop_this___timeout);
    tmp_var_5 = (typephp_call_method_cached(tmp_var_0, get_str(661), get_method_call_cache(MethodCallCacheId{12}), php::VarList{tmp_var_1, tmp_var_2, php::deindirect(tmp_var_3), php::deindirect(tmp_var_4)}));
    tmp_var_0.unset();
    tmp_var_1.unset();
    tmp_var_2.unset();
    tmp_var_3.unset();
    return tmp_var_5;
}

void php_nativeplaywright__cdpsession__on(php::Object &this_, php::Str method, php::Object handler) {
    php::Object t;
    php::Var tmp_var_0;
    php::Var tmp_var_1;

    t = this_.attr(get_persistent_prop(PersistentPropertyId{85}, get_str(660), get_str(659)), php::AttrMode::Get);
    [&]() -> php::Var {
    auto&& tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{88}, get_str(662), get_str(659)), php::AttrMode::Update);
    php::Var tmp_var_4 = php::null;
    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{85}, get_str(660), get_str(659)), php::AttrMode::Get);
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{86}, get_str(101), get_str(659)), php::AttrMode::Get);
    php::ClosureFn tmp_var_2 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(2, 2, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!(tmp_var_0.isString()))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(664), get_str(98));
            return php::null;
        }
        php::Str m = php::toString(tmp_var_0);
        tmp_var_0.unset();
        auto tmp_var_1 = php::getCallArg(1);
        if (UNEXPECTED(!(tmp_var_1.isArray()))) {
            php::throwArgumentTypeError(tmp_var_1, get_str(458), 2, get_str(459), get_str(665));
            return php::null;
        }
        php::Array p = php::toArray(tmp_var_1);
        tmp_var_1.unset();
        php::Str method = php::toString(vars_.get(0));
        php::Object handler = php::Object(vars_.get(1));
        php::Object t = php::Object(vars_.get(2));
        if (php::toBool(php::same(m, method))) {
            php::ClosureFn tmp_var_2 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
            php::checkCallArgCount(0, 0, false);
                php::Object handler = php::Object(vars_.get(0));
                php::Array p = php::toArray(vars_.get(1));
                typephp_call_cached(handler, get_function_call_cache(FunctionCallCacheId{9}), php::VarList{p});
            return php::null;
            };
            typephp_call_method_cached(t, get_str(666), get_method_call_cache(MethodCallCacheId{13}), php::VarList{php::newClosureWithParameters(tmp_var_2, { handler, p }, this_, get_persistent_class(PersistentClassId{25}, get_str(659)), {  }, php::ClosureStrictTypes::Enabled)});
        }
    return php::null;
    };
    php::Var tmp_var_5 = typephp_call_method_cached(tmp_var_0, get_str(663), get_method_call_cache(MethodCallCacheId{14}), php::VarList{php::deindirect(tmp_var_1), php::newClosureWithParameters(tmp_var_2, { method, handler, t }, this_, get_persistent_class(PersistentClassId{25}, get_str(659)), { php::ClosureParameter{"m", false, false, true}, php::ClosureParameter{"p", false, false, true} }, php::ClosureStrictTypes::Enabled)});
    tmp_var_0.unset();
    tmp_var_1.unset();
    tmp_var_3.append(tmp_var_5);
    return tmp_var_5;
    }();
}

void php_nativeplaywright__cdpsession__detach(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var id;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{25}, get_str(659));


    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{88}, get_str(662), get_str(659)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_1{tmp_var_0, false, tmp_var_2};
        while (tmp_var_1.next()) {
            id = tmp_var_1.value();
            tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{85}, get_str(660), get_str(659)), php::AttrMode::Get);
            tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{86}, get_str(101), get_str(659)), php::AttrMode::Get);
            typephp_call_method_cached(tmp_var_3, get_str(667), get_method_call_cache(MethodCallCacheId{15}), php::VarList{php::deindirect(tmp_var_4), id});
            tmp_var_3.unset();
            tmp_var_4.unset();
        }
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{88}, get_str(662), get_str(659)), php::AttrMode::Update) = php::Array{};
}


ZEND_METHOD(NativePlaywright_CDPSession, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(3, 3, false);
        php::Object arg_t = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{4}, get_str(115)));
        php::Var raw_arg_sessionId = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_sessionId.isString()))) {
            php::throwArgumentTypeError(raw_arg_sessionId, get_str(668), 2, get_str(101), get_str(98));
        }
        php::Str arg_sessionId = php::toString(raw_arg_sessionId);
        php::Var raw_arg_timeout = php::getCallArg(2);
        if (UNEXPECTED(!((raw_arg_timeout.isFloat() || raw_arg_timeout.isInt())))) {
            php::throwArgumentTypeError(raw_arg_timeout, get_str(668), 3, get_str(102), get_str(103));
        }
        php::Float arg_timeout = php::toFloat(raw_arg_timeout);
        php_nativeplaywright__cdpsession____construct(this_, php::takeValue(arg_t),php::takeValue(arg_sessionId),arg_timeout);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_CDPSession, send) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_method = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_method.isString()))) {
            php::throwArgumentTypeError(raw_arg_method, get_str(669), 1, get_str(100), get_str(98));
        }
        php::Str arg_method = php::toString(raw_arg_method);
        php::Array arg_params = php::toArray(php::getCallArg(1, php_nativeplaywright__cdpsession__send_arg_1_default_value()));
        auto retval = php_nativeplaywright__cdpsession__send(this_, php::takeValue(arg_method),php::takeValue(arg_params));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_CDPSession, on) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_method = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_method.isString()))) {
            php::throwArgumentTypeError(raw_arg_method, get_str(670), 1, get_str(100), get_str(98));
        }
        php::Str arg_method = php::toString(raw_arg_method);
        php::Object arg_handler = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php_nativeplaywright__cdpsession__on(this_, php::takeValue(arg_method),php::takeValue(arg_handler));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_CDPSession, detach) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__cdpsession__detach(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

