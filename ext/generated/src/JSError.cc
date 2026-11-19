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
#include <php_native_playwright_src_NativePlaywright_JSError_49ec4d0857_decl.h>

void php_nativeplaywright__jserror____construct(php::Object &this_, php::Str name, php::Str message, php::Str stack) {
typephp_write_property_scoped(this_, "name", name, get_persistent_class(PersistentClassId{17}, get_str(513)));
typephp_write_property_scoped(this_, "message", message, get_persistent_class(PersistentClassId{17}, get_str(513)));
typephp_write_property_scoped(this_, "stack", stack, get_persistent_class(PersistentClassId{17}, get_str(513)));

}

php::Str php_nativeplaywright__jserror__name(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{32}, get_str(254), get_str(513)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__jserror__message(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{33}, get_str(124), get_str(513)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__jserror__stack(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{34}, get_str(514), get_str(513)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__jserror____tostring(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Str tmp_var_4;
    php::Str tmp_var_5;

    tmp_var_5 = ([&]() -> php::Str {
        tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{34}, get_str(514), get_str(513)), php::AttrMode::Get);
        tmp_var_3 = !(php::same(tmp_var_0, php::empty_string));
        tmp_var_0.unset();
        if (php::toBool(tmp_var_3)) {
            return php::toString(this_.attr(get_persistent_prop(PersistentPropertyId{34}, get_str(514), get_str(513)), php::AttrMode::Get));
        } else {
            tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{32}, get_str(254), get_str(513)), php::AttrMode::Get);
            tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{33}, get_str(124), get_str(513)), php::AttrMode::Get);
            tmp_var_4 = php::concat({tmp_var_1, get_str(128), tmp_var_2});
            tmp_var_1.unset();
            tmp_var_2.unset();
            return tmp_var_4;
        }
    }());
    return tmp_var_5;
}


ZEND_METHOD(NativePlaywright_JSError, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(3, 3, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(515), 1, get_str(254), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        php::Var raw_arg_message = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_message.isString()))) {
            php::throwArgumentTypeError(raw_arg_message, get_str(515), 2, get_str(124), get_str(98));
        }
        php::Str arg_message = php::toString(raw_arg_message);
        php::Var raw_arg_stack = php::getCallArg(2);
        if (UNEXPECTED(!(raw_arg_stack.isString()))) {
            php::throwArgumentTypeError(raw_arg_stack, get_str(515), 3, get_str(514), get_str(98));
        }
        php::Str arg_stack = php::toString(raw_arg_stack);
        php_nativeplaywright__jserror____construct(this_, php::takeValue(arg_name),php::takeValue(arg_message),php::takeValue(arg_stack));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_JSError, name) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__jserror__name(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_JSError, message) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__jserror__message(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_JSError, stack) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__jserror__stack(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_JSError, __toString) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__jserror____tostring(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

