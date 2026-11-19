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
#include <php_native_playwright_src_native_pipe_a3a10585cb_decl.h>

void php_nativeplaywright__connection____construct(php::Object &this_, php::Str executable, php::Array args, php::Str userDataDir) {
    php::Var p;
    zend_function * tmp_var_0;
    zend_class_entry *tmp_var_1 = get_persistent_class(PersistentClassId{0}, get_str(75));
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{1}, get_str(74));

    p = php_pwlite_spawn(executable, args, userDataDir);
    if (get_function_resolution_cache(FunctionResolutionCacheId{0}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{0}) = php::fn::function_exists(get_str(71)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{0}) == 1 ? get_func(RequestFuncId{0}, get_str(71)) : get_persistent_func(PersistentFuncId{0}, get_str(72));
    if (php::toBool(php::call(tmp_var_0, php::VarList{p}))) {
        php::throwException(php::newObject(tmp_var_1, php::VarList{p}));
    }
    typephp_write_property_scoped(this_, get_str(73), p, tmp_var_2);
}

php::Int php_nativeplaywright__connection__send(php::Object &this_, php::Str method, php::Array params, php::Str sessionId) {
    php::Var id;
    php::Str json;
    php::Var tmp_var_1;
    zend_function * tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    zend_function * tmp_var_5;
    php::Array tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    zend_function * tmp_var_11;
    php::Var tmp_var_12;
    php::Str tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    php::Bool tmp_var_16 = 0;
    php::Var tmp_var_17;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{0}, get_str(75));
    php::Int &_object_prop_this___nextId = this_.attrInt(get_persistent_prop(PersistentPropertyId{2}, get_str(78), get_str(74)));

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{1}, get_str(76), get_str(74)), php::AttrMode::Get))) {
        php::throwException(php::newObject(tmp_var_0, php::VarList{php::concat({method, get_str(77)})}));
    }
    id = _object_prop_this___nextId++;
    tmp_var_1 = id;
    if (get_function_resolution_cache(FunctionResolutionCacheId{1}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{1}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
    tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{1}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
    tmp_var_3 = php::call(tmp_var_2, php::VarList{method});
    tmp_var_10 = [&]() -> php::Var {
        tmp_var_4 = php::Array{};
        tmp_var_8 = php::same(params, tmp_var_4);
        tmp_var_4.unset();
        if (php::toBool(tmp_var_8)) {
            return php::Var(get_str(84));
        } else {
            if (get_function_resolution_cache(FunctionResolutionCacheId{2}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{2}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
            tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{2}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
            tmp_var_6 = params;
            tmp_var_7 = php::constant(get_persistent_class(PersistentClassId{1}, get_str(74)), get_str(85));
            tmp_var_9 = php::call(tmp_var_5, php::VarList{tmp_var_6, tmp_var_7});
            tmp_var_6.unset();
            tmp_var_7.unset();
            return tmp_var_9;
        }
    }();
    tmp_var_14 = [&]() -> php::Str {
        if (php::toBool(php::same(sessionId, php::empty_string))) {
            return php::empty_string;
        } else {
            if (get_function_resolution_cache(FunctionResolutionCacheId{3}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{3}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
            tmp_var_11 = get_function_resolution_cache(FunctionResolutionCacheId{3}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
            tmp_var_12 = php::call(tmp_var_11, php::VarList{sessionId});
            tmp_var_13 = php::concat({get_str(86), php::toString(tmp_var_12)});
            tmp_var_12.unset();
            return tmp_var_13;
        }
    }();
    json = php::concat({get_str(79), php::toString(tmp_var_1), get_str(80), php::toString(tmp_var_3), get_str(83), php::toString(tmp_var_10), tmp_var_14, get_str(87)});
    tmp_var_1.unset();
    tmp_var_3.unset();
    tmp_var_10.unset();
    tmp_var_14.unset();
    tmp_var_15 = this_.attr(get_persistent_prop(PersistentPropertyId{0}, get_str(73), get_str(74)), php::AttrMode::Get);
    tmp_var_16 = php::toBool(!(php::toBool(php_pwlite_write(php::deindirect(tmp_var_15), json))));
    tmp_var_15.unset();
    if (php::toBool(tmp_var_16)) {
        php::throwException(php::newObject(tmp_var_0, php::VarList{php::concat({method, get_str(77)})}));
    }
    tmp_var_17 = (id);
    if (UNEXPECTED(!(tmp_var_17.isInt()))) {
        php::throwReturnTypeError(tmp_var_17, get_str(88), get_str(89), true);
    }
    return php::toInt(tmp_var_17);
}

php::Var php_nativeplaywright__connection__read(php::Object &this_, php::Float timeout) {
    php::Var tmp_var_0;
    php::Var frames;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Array out;
    php::Var tmp_var_3;
    php::Var f;
    php::Var m;
    zend_function * tmp_var_6;
    zend_function * tmp_var_7;
    php::Var tmp_var_8;
    zend_class_entry *tmp_var_5 = get_persistent_class(PersistentClassId{1}, get_str(74));

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{1}, get_str(76), get_str(74)), php::AttrMode::Get))) {
        tmp_var_0 = php::null;
        if (UNEXPECTED(!(tmp_var_0.isNull() || tmp_var_0.isArray()))) {
            php::throwReturnTypeError(tmp_var_0, get_str(90), get_str(91), false);
        }
        return tmp_var_0;
    }
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{0}, get_str(73), get_str(74)), php::AttrMode::Get);
    frames = php_pwlite_read(php::deindirect(tmp_var_1), php::toFloat(timeout));
    tmp_var_1.unset();
    if (php::toBool(php::same(frames, php::null))) {
        tmp_var_2 = php::null;
        if (UNEXPECTED(!(tmp_var_2.isNull() || tmp_var_2.isArray()))) {
            php::throwReturnTypeError(tmp_var_2, get_str(90), get_str(91), false);
        }
        return tmp_var_2;
    }
    out = php::Array{};

    tmp_var_3 = frames;
    {
        php::ForeachIterator tmp_var_4{tmp_var_3, false, tmp_var_5};
        while (tmp_var_4.next()) {
            f = tmp_var_4.value();
            if (get_function_resolution_cache(FunctionResolutionCacheId{4}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{4}) = php::fn::function_exists(get_str(92)) ? 1 : 2; }
            tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{4}) == 1 ? get_func(RequestFuncId{2}, get_str(92)) : get_persistent_func(PersistentFuncId{2}, get_str(93));
            m = php::call(tmp_var_6, php::VarList{f, true, 512L});
            if (get_function_resolution_cache(FunctionResolutionCacheId{5}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{5}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
            tmp_var_7 = get_function_resolution_cache(FunctionResolutionCacheId{5}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
            if (php::toBool(php::call(tmp_var_7, php::VarList{m}))) {
                out.appendValue(m);
            }
        }
    }
    tmp_var_8 = out;
    if (UNEXPECTED(!(tmp_var_8.isNull() || tmp_var_8.isArray()))) {
        php::throwReturnTypeError(tmp_var_8, get_str(90), get_str(91), false);
    }
    return tmp_var_8;
}

php::Int php_nativeplaywright__connection__fd(php::Object &this_) {
    php::Var tmp_var_0;
    php::Int tmp_var_1 = 0;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{0}, get_str(73), get_str(74)), php::AttrMode::Get);
    tmp_var_1 = (php::toInt(php_pwlite_fd(php::deindirect(tmp_var_0))));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Int php_nativeplaywright__connection__pid(php::Object &this_) {
    php::Var tmp_var_0;
    php::Int tmp_var_1 = 0;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{0}, get_str(73), get_str(74)), php::AttrMode::Get);
    tmp_var_1 = (php::toInt(php_pwlite_pid(php::deindirect(tmp_var_0))));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__connection__isclosed(php::Object &this_) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{1}, get_str(76), get_str(74)), php::AttrMode::Get)));
    return tmp_var_0;
}

void php_nativeplaywright__connection__close(php::Object &this_, php::Bool graceful) {
    php::Var tmp_var_0;

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{1}, get_str(76), get_str(74)), php::AttrMode::Get))) {
        return;
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{1}, get_str(76), get_str(74)), php::AttrMode::Update) = true;
    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{0}, get_str(73), get_str(74)), php::AttrMode::Get);
    php_pwlite_close(php::deindirect(tmp_var_0), php::toBool(graceful));
    tmp_var_0.unset();
}


ZEND_METHOD(NativePlaywright_Connection, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 3, false);
        php::Var raw_arg_executable = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_executable.isString()))) {
            php::throwArgumentTypeError(raw_arg_executable, get_str(96), 1, get_str(97), get_str(98));
        }
        php::Str arg_executable = php::toString(raw_arg_executable);
        php::Array arg_args = php::toArray(php::getCallArg(1, php_nativeplaywright__connection____construct_arg_1_default_value()));
        php::Var raw_arg_userDataDir = php::getCallArg(2, php_nativeplaywright__connection____construct_arg_2_default_value());
        if (UNEXPECTED(!(raw_arg_userDataDir.isString()))) {
            php::throwArgumentTypeError(raw_arg_userDataDir, get_str(96), 3, get_str(99), get_str(98));
        }
        php::Str arg_userDataDir = php::toString(raw_arg_userDataDir);
        php_nativeplaywright__connection____construct(this_, php::takeValue(arg_executable),php::takeValue(arg_args),php::takeValue(arg_userDataDir));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Connection, send) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 3, false);
        php::Var raw_arg_method = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_method.isString()))) {
            php::throwArgumentTypeError(raw_arg_method, get_str(88), 1, get_str(100), get_str(98));
        }
        php::Str arg_method = php::toString(raw_arg_method);
        php::Array arg_params = php::toArray(php::getCallArg(1, php_nativeplaywright__connection__send_arg_1_default_value()));
        php::Var raw_arg_sessionId = php::getCallArg(2, php_nativeplaywright__connection__send_arg_2_default_value());
        if (UNEXPECTED(!(raw_arg_sessionId.isString()))) {
            php::throwArgumentTypeError(raw_arg_sessionId, get_str(88), 3, get_str(101), get_str(98));
        }
        php::Str arg_sessionId = php::toString(raw_arg_sessionId);
        auto retval = php_nativeplaywright__connection__send(this_, php::takeValue(arg_method),php::takeValue(arg_params),php::takeValue(arg_sessionId));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Connection, read) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Var raw_arg_timeout = php::getCallArg(0, php_nativeplaywright__connection__read_arg_0_default_value());
        if (UNEXPECTED(!((raw_arg_timeout.isFloat() || raw_arg_timeout.isInt())))) {
            php::throwArgumentTypeError(raw_arg_timeout, get_str(90), 1, get_str(102), get_str(103));
        }
        php::Float arg_timeout = php::toFloat(raw_arg_timeout);
        auto retval = php_nativeplaywright__connection__read(this_, arg_timeout);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Connection, fd) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__connection__fd(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Connection, pid) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__connection__pid(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Connection, isClosed) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__connection__isclosed(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Connection, close) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Var raw_arg_graceful = php::getCallArg(0, php_nativeplaywright__connection__close_arg_0_default_value());
        if (UNEXPECTED(!(raw_arg_graceful.isBool()))) {
            php::throwArgumentTypeError(raw_arg_graceful, get_str(104), 1, get_str(105), get_str(106));
        }
        php::Bool arg_graceful = php::toBool(raw_arg_graceful);
        php_nativeplaywright__connection__close(this_, arg_graceful);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

