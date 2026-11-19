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
#include <php_native_playwright_src_NativePlaywright_SwooleTransport_b44c3f18aa_decl.h>
#include <php_native_playwright_src_NativePlaywright_TimeoutError_7a8c4a04a5_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>
#include <php_native_playwright_src_NativePlaywright_Waiter_65d6396c74_decl.h>

void php_nativeplaywright__swooletransport____construct(php::Object &this_, php::Object conn) {
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{8}, get_str(179));

    this_.call(get_persistent_method(PersistentFuncId{10}, get_str(175), PersistentClassId{4}, get_str(114)), php::VarList{conn});
    this_.attr(get_persistent_prop(PersistentPropertyId{16}, get_str(107), get_str(176)), php::AttrMode::Update) = php::newObject(tmp_var_0, php::VarList{1L});
    php::ClosureFn tmp_var_1 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__swooletransport__readloop(this_);
    return php::null;
    };
    typephp_call_cached(get_str(177), get_function_call_cache(FunctionCallCacheId{3}), php::VarList{php::newClosureWithParameters(tmp_var_1, {  }, this_, get_persistent_class(PersistentClassId{7}, get_str(176)), {  }, php::ClosureStrictTypes::Enabled)});
}

void php_nativeplaywright__swooletransport__readloop(php::Object &this_) {
    php::Var fd;
    php::Var tmp_var_0;
    php::Var tmp_var_2;
    php::Int tmp_var_3 = 0;
    php::Var msgs;
    php::Var tmp_var_4;
    php::Var tmp_var_6;
    php::Var m;
    php::Var tmp_var_9;
    zend_class_entry *tmp_var_8 = get_persistent_class(PersistentClassId{7}, get_str(176));

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{7}, get_str(115), get_str(114)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    fd = php_nativeplaywright__connection__fd(tmp_var_1);
    tmp_var_0.unset();

    while (php::toBool(true)) {
        tmp_var_2 = fd;
        tmp_var_3 = php::toInt(512L);
        typephp_call_cached(get_str(181), get_function_call_cache(FunctionCallCacheId{4}), php::VarList{tmp_var_2, tmp_var_3});
        tmp_var_2.unset();
        tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{7}, get_str(115), get_str(114)), php::AttrMode::Get);
        php::Object tmp_var_5 = tmp_var_4;
        msgs = php_nativeplaywright__connection__read(tmp_var_5, php::toFloat(0.0));
        tmp_var_4.unset();
        if (php::toBool(php::same(msgs, php::null))) {
            break;
        }

        tmp_var_6 = msgs;
        {
            php::ForeachIterator tmp_var_7{tmp_var_6, false, tmp_var_8};
            while (tmp_var_7.next()) {
                m = tmp_var_7.value();
                php_nativeplaywright__transport__handlemessage(this_, m);
            }
        }
    }
    php_nativeplaywright__transport__handleclosed(this_);
    tmp_var_9 = this_.attr(get_persistent_prop(PersistentPropertyId{16}, get_str(107), get_str(176)), php::AttrMode::Get);
    typephp_call_method_cached(tmp_var_9, get_str(111), get_method_call_cache(MethodCallCacheId{8}), php::VarList{true});
    tmp_var_9.unset();
}

php::Object php_nativeplaywright__swooletransport__newwaiter(php::Object &this_) {
    php::Object w;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{2}, get_str(108));
    zend_class_entry *tmp_var_1 = get_persistent_class(PersistentClassId{8}, get_str(179));

    w = php::newObject(tmp_var_0);
    w.attr(get_persistent_prop(PersistentPropertyId{5}, get_str(110), get_str(108)), php::AttrMode::Update) = php::newObject(tmp_var_1, php::VarList{1L});
    return w;
}

php::Var php_nativeplaywright__swooletransport__await(php::Object &this_, php::Object w, php::Float timeout, php::Str what) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    zend_function * tmp_var_3;
    php::Str tmp_var_4;
    zend_function * tmp_var_5;
    php::Int tmp_var_6 = 0;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Bool tmp_var_10 = 0;
    php::Var tmp_var_11;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{6}, get_str(158));

    if (php::toBool(!(php::toBool(w.attr(get_persistent_prop(PersistentPropertyId{3}, get_str(107), get_str(108)), php::AttrMode::Get))))) {
        tmp_var_0 = w.attr(get_persistent_prop(PersistentPropertyId{5}, get_str(110), get_str(108)), php::AttrMode::Get);
        tmp_var_1 = (php::toBool(((timeout) > (php::toFloat(0L))))) ? (php::Var(timeout)) : (php::Var(-1L));
        typephp_call_method_cached(tmp_var_0, get_str(182), get_method_call_cache(MethodCallCacheId{9}), php::VarList{tmp_var_1});
        tmp_var_0.unset();
        tmp_var_1.unset();
    }
    if (php::toBool(!(php::toBool(w.attr(get_persistent_prop(PersistentPropertyId{3}, get_str(107), get_str(108)), php::AttrMode::Get))))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{16}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{16}) = php::fn::function_exists(get_str(152)) ? 1 : 2; }
        tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{16}) == 1 ? get_func(RequestFuncId{6}, get_str(152)) : get_persistent_func(PersistentFuncId{6}, get_str(153));
        tmp_var_4 = what;
        if (get_function_resolution_cache(FunctionResolutionCacheId{17}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{17}) = php::fn::function_exists(get_str(155)) ? 1 : 2; }
        tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{17}) == 1 ? get_func(RequestFuncId{7}, get_str(155)) : get_persistent_func(PersistentFuncId{7}, get_str(156));
        tmp_var_6 = php::toInt(php::call(tmp_var_5, php::VarList{((timeout) * (php::toFloat(1000L)))}));
        tmp_var_7 = php::call(tmp_var_3, php::VarList{get_str(154), tmp_var_4, tmp_var_6});
        tmp_var_4.unset();
        tmp_var_8 = php::newObject(tmp_var_2, php::VarList{tmp_var_7});
        tmp_var_7.unset();
        php::throwValue(php::takeValue(tmp_var_8));
    }
    tmp_var_9 = w.attr(get_persistent_prop(PersistentPropertyId{6}, get_str(112), get_str(108)), php::AttrMode::Get);
    tmp_var_10 = php::toBool(!(php::same(tmp_var_9, php::null)));
    tmp_var_9.unset();
    if (php::toBool(tmp_var_10)) {
        php::throwValue(w.attr(get_persistent_prop(PersistentPropertyId{6}, get_str(112), get_str(108)), php::AttrMode::Get));
    }
    tmp_var_11 = (w.attr(get_persistent_prop(PersistentPropertyId{4}, get_str(109), get_str(108)), php::AttrMode::Get));
    return tmp_var_11;
}

void php_nativeplaywright__swooletransport__sleep(php::Object &this_, php::Float seconds) {
    if (php::toBool(((seconds) > (php::toFloat(0L))))) {
        typephp_call_cached(get_str(183), get_function_call_cache(FunctionCallCacheId{5}), php::VarList{seconds});
    }
}

void php_nativeplaywright__swooletransport__async(php::Object &this_, php::Object fn) {
    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object fn = php::Object(vars_.get(0));
        php::Var tmp_var_0;
        php::Object e;
        zend_function * tmp_var_2;
        php::Var tmp_var_3;
        php::Var tmp_var_4;
        php::Var tmp_var_5;
        try {
            typephp_call_cached(fn, get_function_call_cache(FunctionCallCacheId{7}));
        } catch (zend_object *_ex) {
            tmp_var_0 = php::catchException();
            bool tmp_var_1 = false;
            if (!tmp_var_1 && tmp_var_0 && (php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{3}, get_str(113))))) {
                tmp_var_1 = true;
                e = tmp_var_0;
                tmp_var_0 = php::null;
                if (get_function_resolution_cache(FunctionResolutionCacheId{18}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{18}) = php::fn::function_exists(get_str(137)) ? 1 : 2; }
                tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{18}) == 1 ? get_func(RequestFuncId{4}, get_str(137)) : get_persistent_func(PersistentFuncId{4}, get_str(138));
                tmp_var_3 = typephp_call_method_cached(e, get_str(140), get_method_call_cache(MethodCallCacheId{10}));
                tmp_var_4 = php::concat({get_str(184), php::toString(tmp_var_3)});
                tmp_var_3.unset();
                tmp_var_5 = php::constant(get_str(141), php::ConstantLookup::UnqualifiedInNamespace);
                php::call(tmp_var_2, php::VarList{tmp_var_4, tmp_var_5});
                tmp_var_4.unset();
                tmp_var_5.unset();
            }
        }
        if (tmp_var_0) {
            php::throwException(php::Object(tmp_var_0));
        }
    return php::null;
    };
    typephp_call_cached(get_str(177), get_function_call_cache(FunctionCallCacheId{6}), php::VarList{php::newClosureWithParameters(tmp_var_0, { fn }, this_, get_persistent_class(PersistentClassId{7}, get_str(176)), {  }, php::ClosureStrictTypes::Enabled)});
}

void php_nativeplaywright__swooletransport__close(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_2;
    php::Object e;
    php::Var tmp_var_4;
    php::Var tmp_var_5;

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{17}, get_str(185), get_str(176)), php::AttrMode::Get))) {
        return;
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{17}, get_str(185), get_str(176)), php::AttrMode::Update) = true;
    if (php::toBool(!(php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{8}, get_str(76), get_str(114)), php::AttrMode::Get))))) {
        try {
            tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{7}, get_str(115), get_str(114)), php::AttrMode::Get);
            php::Object tmp_var_1 = tmp_var_0;
            php_nativeplaywright__connection__send(tmp_var_1, get_str(186));
            tmp_var_0.unset();
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
        tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{16}, get_str(107), get_str(176)), php::AttrMode::Get);
        typephp_call_method_cached(tmp_var_4, get_str(182), get_method_call_cache(MethodCallCacheId{11}), php::VarList{5.0});
        tmp_var_4.unset();
    }
    tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{7}, get_str(115), get_str(114)), php::AttrMode::Get);
    php::Object tmp_var_6 = tmp_var_5;
    php_nativeplaywright__connection__close(tmp_var_6, php::toBool(false));
    tmp_var_5.unset();
    php_nativeplaywright__transport__handleclosed(this_);
}


ZEND_METHOD(NativePlaywright_SwooleTransport, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_conn = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{1}, get_str(74)));
        php_nativeplaywright__swooletransport____construct(this_, php::takeValue(arg_conn));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_SwooleTransport, readLoop) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__swooletransport__readloop(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_SwooleTransport, newWaiter) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__swooletransport__newwaiter(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_SwooleTransport, await) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Object arg_w = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{2}, get_str(108)));
        php::Var raw_arg_timeout = php::getCallArg(1);
        if (UNEXPECTED(!((raw_arg_timeout.isFloat() || raw_arg_timeout.isInt())))) {
            php::throwArgumentTypeError(raw_arg_timeout, get_str(187), 2, get_str(102), get_str(103));
        }
        php::Float arg_timeout = php::toFloat(raw_arg_timeout);
        php::Var raw_arg_what = php::getCallArg(2, php_nativeplaywright__swooletransport__await_arg_2_default_value());
        if (UNEXPECTED(!(raw_arg_what.isString()))) {
            php::throwArgumentTypeError(raw_arg_what, get_str(187), 3, get_str(172), get_str(98));
        }
        php::Str arg_what = php::toString(raw_arg_what);
        auto retval = php_nativeplaywright__swooletransport__await(this_, php::takeValue(arg_w),arg_timeout,php::takeValue(arg_what));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_SwooleTransport, sleep) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_seconds = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_seconds.isFloat() || raw_arg_seconds.isInt())))) {
            php::throwArgumentTypeError(raw_arg_seconds, get_str(188), 1, get_str(174), get_str(103));
        }
        php::Float arg_seconds = php::toFloat(raw_arg_seconds);
        php_nativeplaywright__swooletransport__sleep(this_, arg_seconds);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_SwooleTransport, async) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_fn = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(147)));
        php_nativeplaywright__swooletransport__async(this_, php::takeValue(arg_fn));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_SwooleTransport, close) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__swooletransport__close(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

