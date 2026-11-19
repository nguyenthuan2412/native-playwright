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
#include <php_native_playwright_src_NativePlaywright_Dialog_73c802b322_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>

void php_nativeplaywright__dialog____construct(php::Object &this_, php::Object page, php::Str type, php::Str message, php::Str defaultValue) {
typephp_write_property_scoped(this_, "page", page, get_persistent_class(PersistentClassId{20}, get_str(527)));
typephp_write_property_scoped(this_, "type", type, get_persistent_class(PersistentClassId{20}, get_str(527)));
typephp_write_property_scoped(this_, "message", message, get_persistent_class(PersistentClassId{20}, get_str(527)));
typephp_write_property_scoped(this_, "defaultValue", defaultValue, get_persistent_class(PersistentClassId{20}, get_str(527)));

}

php::Str php_nativeplaywright__dialog__type(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{43}, get_str(424), get_str(527)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__dialog__message(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{44}, get_str(124), get_str(527)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__dialog__defaultvalue(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{45}, get_str(528), get_str(527)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Object php_nativeplaywright__dialog__page(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{46}, get_str(432), get_str(527)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Bool php_nativeplaywright__dialog__ishandled(php::Object &this_) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{47}, get_str(529), get_str(527)), php::AttrMode::Get)));
    return tmp_var_0;
}

void php_nativeplaywright__dialog__accept(php::Object &this_, php::Str promptText) {
    php_nativeplaywright__dialog__handle(this_, php::toBool(true), promptText);
}

void php_nativeplaywright__dialog__dismiss(php::Object &this_) {
    php_nativeplaywright__dialog__handle(this_, php::toBool(false), php::empty_string);
}

void php_nativeplaywright__dialog__handle(php::Object &this_, php::Bool accept, php::Str text) {
    php::Array p;
    php::Var tmp_var_1;
    php::Bool tmp_var_2 = 0;
    php::Var tmp_var_3;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{0}, get_str(75));

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{47}, get_str(529), get_str(527)), php::AttrMode::Get))) {
        php::throwException(php::newObject(tmp_var_0, php::VarList{get_str(531)}));
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{47}, get_str(529), get_str(527)), php::AttrMode::Update) = true;
    p = php::Array{
        { get_str(532).str(), php::Var(accept) }
    };
    if (php::toBool([&]() -> bool {
        if (php::toBool(accept)) {
            tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{43}, get_str(424), get_str(527)), php::AttrMode::Get);
            tmp_var_2 = php::toBool(php::same(tmp_var_1, get_str(533)));
            tmp_var_1.unset();
            return php::toBool(tmp_var_2);
        }
        return false;
    }())) {
        p.item(get_str(534), true) = text;
    }
    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{46}, get_str(432), get_str(527)), php::AttrMode::Get);
    php::Object tmp_var_4 = tmp_var_3;
    php_nativeplaywright__page__send(tmp_var_4, get_str(535), p);
    tmp_var_3.unset();
}


ZEND_METHOD(NativePlaywright_Dialog, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(4, 4, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(474)));
        php::Var raw_arg_type = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_type.isString()))) {
            php::throwArgumentTypeError(raw_arg_type, get_str(536), 2, get_str(424), get_str(98));
        }
        php::Str arg_type = php::toString(raw_arg_type);
        php::Var raw_arg_message = php::getCallArg(2);
        if (UNEXPECTED(!(raw_arg_message.isString()))) {
            php::throwArgumentTypeError(raw_arg_message, get_str(536), 3, get_str(124), get_str(98));
        }
        php::Str arg_message = php::toString(raw_arg_message);
        php::Var raw_arg_defaultValue = php::getCallArg(3);
        if (UNEXPECTED(!(raw_arg_defaultValue.isString()))) {
            php::throwArgumentTypeError(raw_arg_defaultValue, get_str(536), 4, get_str(528), get_str(98));
        }
        php::Str arg_defaultValue = php::toString(raw_arg_defaultValue);
        php_nativeplaywright__dialog____construct(this_, php::takeValue(arg_page),php::takeValue(arg_type),php::takeValue(arg_message),php::takeValue(arg_defaultValue));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Dialog, type) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__dialog__type(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Dialog, message) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__dialog__message(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Dialog, defaultValue) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__dialog__defaultvalue(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Dialog, page) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__dialog__page(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Dialog, isHandled) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__dialog__ishandled(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Dialog, accept) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Var raw_arg_promptText = php::getCallArg(0, php_nativeplaywright__dialog__accept_arg_0_default_value());
        if (UNEXPECTED(!(raw_arg_promptText.isString()))) {
            php::throwArgumentTypeError(raw_arg_promptText, get_str(537), 1, get_str(534), get_str(98));
        }
        php::Str arg_promptText = php::toString(raw_arg_promptText);
        php_nativeplaywright__dialog__accept(this_, php::takeValue(arg_promptText));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Dialog, dismiss) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__dialog__dismiss(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Dialog, handle) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_accept = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_accept.isBool()))) {
            php::throwArgumentTypeError(raw_arg_accept, get_str(538), 1, get_str(532), get_str(106));
        }
        php::Bool arg_accept = php::toBool(raw_arg_accept);
        php::Var raw_arg_text = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(538), 2, get_str(328), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php_nativeplaywright__dialog__handle(this_, arg_accept,php::takeValue(arg_text));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

