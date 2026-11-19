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
#include <php_native_playwright_src_NativePlaywright_ConsoleMessage_4dcce5e3f4_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>

void php_nativeplaywright__consolemessage____construct(php::Object &this_, php::Object page, php::Str type, php::Str text, php::Array args, php::Array location) {
typephp_write_property_scoped(this_, "page", page, get_persistent_class(PersistentClassId{19}, get_str(524)));
typephp_write_property_scoped(this_, "type", type, get_persistent_class(PersistentClassId{19}, get_str(524)));
typephp_write_property_scoped(this_, "text", text, get_persistent_class(PersistentClassId{19}, get_str(524)));
typephp_write_property_scoped(this_, "args", args, get_persistent_class(PersistentClassId{19}, get_str(524)));
typephp_write_property_scoped(this_, "location", location, get_persistent_class(PersistentClassId{19}, get_str(524)));

}

php::Str php_nativeplaywright__consolemessage__type(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{38}, get_str(424), get_str(524)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__consolemessage__text(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{39}, get_str(328), get_str(524)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Array php_nativeplaywright__consolemessage__args(php::Object &this_) {
    php::Array tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{40}, get_str(525), get_str(524)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Array php_nativeplaywright__consolemessage__location(php::Object &this_) {
    php::Array tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{41}, get_str(417), get_str(524)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Object php_nativeplaywright__consolemessage__page(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{42}, get_str(432), get_str(524)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__consolemessage____tostring(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{39}, get_str(328), get_str(524)), php::AttrMode::Get));
    return tmp_var_0;
}


ZEND_METHOD(NativePlaywright_ConsoleMessage, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(5, 5, false);
        php::Object arg_page = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{14}, get_str(474))); })(php::getCallArg(0));
        php::Var raw_arg_type = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_type.isString()))) {
            php::throwArgumentTypeError(raw_arg_type, get_str(526), 2, get_str(424), get_str(98));
        }
        php::Str arg_type = php::toString(raw_arg_type);
        php::Var raw_arg_text = php::getCallArg(2);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(526), 3, get_str(328), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_args = php::toArray(php::getCallArg(3));
        php::Array arg_location = php::toArray(php::getCallArg(4));
        php_nativeplaywright__consolemessage____construct(this_, php::takeValue(arg_page),php::takeValue(arg_type),php::takeValue(arg_text),php::takeValue(arg_args),php::takeValue(arg_location));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_ConsoleMessage, type) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__consolemessage__type(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_ConsoleMessage, text) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__consolemessage__text(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_ConsoleMessage, args) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__consolemessage__args(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_ConsoleMessage, location) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__consolemessage__location(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_ConsoleMessage, page) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__consolemessage__page(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_ConsoleMessage, __toString) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__consolemessage____tostring(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

