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
#include <php_native_playwright_src_NativePlaywright_BlockingTransport_ce405677f2_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_TimeoutError_7a8c4a04a5_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>
#include <php_native_playwright_src_NativePlaywright_Waiter_65d6396c74_decl.h>

php::Object php_nativeplaywright__blockingtransport__newwaiter(php::Object &this_) {
    php::Object tmp_var_1;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{2}, get_str(108));

    tmp_var_1 = (php::newObject(tmp_var_0));
    return tmp_var_1;
}

php::Var php_nativeplaywright__blockingtransport__await(php::Object &this_, php::Object w, php::Float timeout, php::Str what) {
    php::Var deadline;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Float left = 0;
    zend_function * tmp_var_3;
    php::Var tmp_var_4;
    zend_function * tmp_var_6;
    php::Str tmp_var_7;
    zend_function * tmp_var_8;
    php::Int tmp_var_9 = 0;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Bool tmp_var_13 = 0;
    php::Var tmp_var_14;
    zend_class_entry *tmp_var_5 = get_persistent_class(PersistentClassId{6}, get_str(159));

    deadline = [&]() -> php::Var {
        if (php::toBool(((timeout) > (php::toFloat(0L))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{7}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{7}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{7}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            tmp_var_1 = php::call(tmp_var_0, php::VarList{true});
            tmp_var_2 = ((php::Var(tmp_var_1)) + (php::Var(timeout)));
            tmp_var_1.unset();
            return tmp_var_2;
        } else {
            return php::Var(0.0);
        }
    }();

    while (php::toBool(!(php::toBool(w.attr(get_persistent_prop(PersistentPropertyId{3}, get_str(107), get_str(108)), php::AttrMode::Get))))) {
        left = php::toFloat(3600.0);
        if (php::toBool(((php::Var(deadline)) > (php::Var(0L))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{8}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{8}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{8}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            tmp_var_4 = php::call(tmp_var_3, php::VarList{true});
            left = php::toFloat(((php::Var(deadline)) - (php::Var(tmp_var_4))));
            tmp_var_4.unset();
            if (php::toBool(((left) <= (php::toFloat(0L))))) {
                if (get_function_resolution_cache(FunctionResolutionCacheId{9}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{9}) = php::fn::function_exists(get_str(153)) ? 1 : 2; }
                tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{9}) == 1 ? get_func(RequestFuncId{6}, get_str(153)) : get_persistent_func(PersistentFuncId{6}, get_str(154));
                tmp_var_7 = what;
                if (get_function_resolution_cache(FunctionResolutionCacheId{10}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{10}) = php::fn::function_exists(get_str(156)) ? 1 : 2; }
                tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{10}) == 1 ? get_func(RequestFuncId{7}, get_str(156)) : get_persistent_func(PersistentFuncId{7}, get_str(157));
                tmp_var_9 = php::toInt(php::call(tmp_var_8, php::VarList{((timeout) * (php::toFloat(1000L)))}));
                tmp_var_10 = php::call(tmp_var_6, php::VarList{get_str(155), tmp_var_7, tmp_var_9});
                tmp_var_7.unset();
                tmp_var_11 = php::newObject(tmp_var_5, php::VarList{tmp_var_10});
                tmp_var_10.unset();
                php::throwValue(php::takeValue(tmp_var_11));
            }
        }
        php_nativeplaywright__blockingtransport__pump(this_, php::toFloat(left));
    }
    tmp_var_12 = w.attr(get_persistent_prop(PersistentPropertyId{6}, get_str(113), get_str(108)), php::AttrMode::Get);
    tmp_var_13 = php::toBool(!(php::same(tmp_var_12, php::null)));
    tmp_var_12.unset();
    if (php::toBool(tmp_var_13)) {
        php::throwValue(w.attr(get_persistent_prop(PersistentPropertyId{6}, get_str(113), get_str(108)), php::AttrMode::Get));
    }
    tmp_var_14 = (w.attr(get_persistent_prop(PersistentPropertyId{4}, get_str(109), get_str(108)), php::AttrMode::Get));
    return tmp_var_14;
}

void php_nativeplaywright__blockingtransport__pump(php::Object &this_, php::Float timeout) {
    php::Var tmp_var_0;
    zend_function * tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Bool tmp_var_4 = 0;
    php::Var msgs;
    php::Var tmp_var_6;
    php::Var tmp_var_8;
    zend_function * tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var m;
    zend_class_entry *tmp_var_5 = get_persistent_class(PersistentClassId{0}, get_str(75));

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{14}, get_str(160), get_str(161)), php::AttrMode::Get);
    if (get_function_resolution_cache(FunctionResolutionCacheId{11}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{11}) = php::fn::function_exists(get_str(162)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{11}) == 1 ? get_func(RequestFuncId{8}, get_str(162)) : get_persistent_func(PersistentFuncId{8}, get_str(163));
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{15}, get_str(164), get_str(161)), php::AttrMode::Get);
    tmp_var_3 = php::call(tmp_var_1, php::VarList{php::deindirect(tmp_var_2)});
    tmp_var_2.unset();
    tmp_var_4 = php::toBool(((php::Var(tmp_var_0)) >= (php::Var(tmp_var_3))));
    tmp_var_0.unset();
    tmp_var_3.unset();
    if (php::toBool(tmp_var_4)) {
        this_.attr(get_persistent_prop(PersistentPropertyId{15}, get_str(164), get_str(161)), php::AttrMode::Update) = php::Array{};
        this_.attr(get_persistent_prop(PersistentPropertyId{14}, get_str(160), get_str(161)), php::AttrMode::Update) = 0L;
        if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{8}, get_str(76), get_str(115)), php::AttrMode::Get))) {
            php::throwException(php::newObject(tmp_var_5, php::VarList{get_str(143)}));
        }
        tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{7}, get_str(116), get_str(115)), php::AttrMode::Get);
        php::Object tmp_var_7 = tmp_var_6;
        msgs = php_nativeplaywright__connection__read(tmp_var_7, php::toFloat(timeout));
        tmp_var_6.unset();
        if (php::toBool(php::same(msgs, php::null))) {
            php_nativeplaywright__transport__handleclosed(this_);
            return;
        }
        this_.attr(get_persistent_prop(PersistentPropertyId{15}, get_str(164), get_str(161)), php::AttrMode::Update) = php::toArrayExact(msgs, "NativePlaywright\\BlockingTransport::$queue");
    }

    while (true) {
    tmp_var_8 = this_.attr(get_persistent_prop(PersistentPropertyId{14}, get_str(160), get_str(161)), php::AttrMode::Get);
    if (get_function_resolution_cache(FunctionResolutionCacheId{12}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{12}) = php::fn::function_exists(get_str(162)) ? 1 : 2; }
    tmp_var_9 = get_function_resolution_cache(FunctionResolutionCacheId{12}) == 1 ? get_func(RequestFuncId{8}, get_str(162)) : get_persistent_func(PersistentFuncId{8}, get_str(163));
    tmp_var_10 = this_.attr(get_persistent_prop(PersistentPropertyId{15}, get_str(164), get_str(161)), php::AttrMode::Get);
    tmp_var_11 = php::call(tmp_var_9, php::VarList{php::deindirect(tmp_var_10)});
    tmp_var_10.unset();
    tmp_var_12 = php::toBool(((php::Var(tmp_var_8)) < (php::Var(tmp_var_11))));
    tmp_var_8.unset();
    tmp_var_11.unset();
    if (!(php::toBool(tmp_var_12))) { break; }
        m = this_.attr(get_persistent_prop(PersistentPropertyId{15}, get_str(164), get_str(161)), php::AttrMode::Get).item(this_.attr(get_persistent_prop(PersistentPropertyId{14}, get_str(160), get_str(161)), php::AttrMode::Get), false);
        this_.attr(get_persistent_prop(PersistentPropertyId{14}, get_str(160), get_str(161)), php::AttrMode::Update)++;
        php_nativeplaywright__transport__handlemessage(this_, m);
    }
}

void php_nativeplaywright__blockingtransport__sleep(php::Object &this_, php::Float seconds) {
    php::Var deadline;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var left;
    zend_function * tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    zend_function * tmp_var_6;

    if (get_function_resolution_cache(FunctionResolutionCacheId{13}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{13}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{13}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
    tmp_var_1 = php::call(tmp_var_0, php::VarList{true});
    deadline = ((php::Var(tmp_var_1)) + (php::Var(seconds)));
    tmp_var_1.unset();

    while (true) {
    if (get_function_resolution_cache(FunctionResolutionCacheId{14}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{14}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
    tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{14}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
    tmp_var_3 = php::call(tmp_var_2, php::VarList{true});
    tmp_var_4 = left = ((php::Var(deadline)) - (php::Var(tmp_var_3)));
    tmp_var_3.unset();
    tmp_var_5 = php::toBool(((php::Var(tmp_var_4)) > (php::Var(0L))));
    tmp_var_4.unset();
    if (!(php::toBool(tmp_var_5))) { break; }
        if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{8}, get_str(76), get_str(115)), php::AttrMode::Get))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{15}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{15}) = php::fn::function_exists(get_str(168)) ? 1 : 2; }
            tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{15}) == 1 ? get_func(RequestFuncId{9}, get_str(168)) : get_persistent_func(PersistentFuncId{9}, get_str(169));
            php::call(tmp_var_6, php::VarList{php::toInt(((php::Var(left)) * (php::Var(1000000.0))))});
            return;
        }
        php_nativeplaywright__blockingtransport__pump(this_, php::toFloatArgExact(left, get_str(170), 1, get_str(102)));
    }
}

void php_nativeplaywright__blockingtransport__async(php::Object &this_, php::Object fn) {
    typephp_call_cached(fn, get_function_call_cache(FunctionCallCacheId{2}));
}

void php_nativeplaywright__blockingtransport__close(php::Object &this_) {
    php::Var tmp_var_0;

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{8}, get_str(76), get_str(115)), php::AttrMode::Get))) {
        return;
    }
    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{7}, get_str(116), get_str(115)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    php_nativeplaywright__connection__close(tmp_var_1, php::toBool(true));
    tmp_var_0.unset();
    php_nativeplaywright__transport__handleclosed(this_);
}


ZEND_METHOD(NativePlaywright_BlockingTransport, newWaiter) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__blockingtransport__newwaiter(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BlockingTransport, await) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Object arg_w = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{2}, get_str(108)));
        php::Var raw_arg_timeout = php::getCallArg(1);
        if (UNEXPECTED(!((raw_arg_timeout.isFloat() || raw_arg_timeout.isInt())))) {
            php::throwArgumentTypeError(raw_arg_timeout, get_str(172), 2, get_str(102), get_str(103));
        }
        php::Float arg_timeout = php::toFloat(raw_arg_timeout);
        php::Var raw_arg_what = php::getCallArg(2, php_nativeplaywright__blockingtransport__await_arg_2_default_value());
        if (UNEXPECTED(!(raw_arg_what.isString()))) {
            php::throwArgumentTypeError(raw_arg_what, get_str(172), 3, get_str(173), get_str(98));
        }
        php::Str arg_what = php::toString(raw_arg_what);
        auto retval = php_nativeplaywright__blockingtransport__await(this_, php::takeValue(arg_w),arg_timeout,php::takeValue(arg_what));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BlockingTransport, pump) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_timeout = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_timeout.isFloat() || raw_arg_timeout.isInt())))) {
            php::throwArgumentTypeError(raw_arg_timeout, get_str(170), 1, get_str(102), get_str(103));
        }
        php::Float arg_timeout = php::toFloat(raw_arg_timeout);
        php_nativeplaywright__blockingtransport__pump(this_, arg_timeout);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BlockingTransport, sleep) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_seconds = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_seconds.isFloat() || raw_arg_seconds.isInt())))) {
            php::throwArgumentTypeError(raw_arg_seconds, get_str(174), 1, get_str(175), get_str(103));
        }
        php::Float arg_seconds = php::toFloat(raw_arg_seconds);
        php_nativeplaywright__blockingtransport__sleep(this_, arg_seconds);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BlockingTransport, async) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_fn = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php_nativeplaywright__blockingtransport__async(this_, php::takeValue(arg_fn));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BlockingTransport, close) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__blockingtransport__close(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

