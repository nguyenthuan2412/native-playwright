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
#include <php_native_playwright_src_NativePlaywright_FileChooser_b15955ae9f_decl.h>
#include <php_native_playwright_src_NativePlaywright_Locator_206b2f41f4_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>

void php_nativeplaywright__filechooser____construct(php::Object &this_, php::Object page, php::Int backendNodeId, php::Bool multiple) {
typephp_write_property_scoped(this_, "page", page, get_persistent_class(PersistentClassId{18}, get_str(516)));
typephp_write_property_scoped(this_, "backendNodeId", backendNodeId, get_persistent_class(PersistentClassId{18}, get_str(516)));
typephp_write_property_scoped(this_, "multiple", multiple, get_persistent_class(PersistentClassId{18}, get_str(516)));

}

php::Object php_nativeplaywright__filechooser__page(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{35}, get_str(432), get_str(516)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Bool php_nativeplaywright__filechooser__ismultiple(php::Object &this_) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{36}, get_str(517), get_str(516)), php::AttrMode::Get)));
    return tmp_var_0;
}

void php_nativeplaywright__filechooser__setfiles(php::Object &this_, php::Var files) {
    php::Var tmp_var_0;
    php::Object tmp_var_2;
    php::Var tmp_var_3;
    php::Int tmp_var_4 = 0;
    php::Var tmp_var_5;
    Z_PTR_P(tmp_var_2.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(310));
    php::Int &_object_prop_this___backendNodeId = this_.attrInt(get_persistent_prop(PersistentPropertyId{37}, get_str(520), get_str(516)));
    if (UNEXPECTED(!(files.isString() || files.isArray()))) {
        php::throwArgumentTypeError(files, get_str(521), 1, get_str(519), get_str(522));
    }

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{35}, get_str(432), get_str(516)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    tmp_var_3 = php_nativeplaywright__locator__materializefiles(tmp_var_2, files);
    tmp_var_4 = php::toInt(_object_prop_this___backendNodeId);
    tmp_var_5 = php::Array{
        { get_str(519).str(), php::Var(tmp_var_3) }, 
        { get_str(520).str(), php::Var(tmp_var_4) }
    };
    tmp_var_3.unset();
    php_nativeplaywright__page__send(tmp_var_1, get_str(518), tmp_var_5);
    tmp_var_0.unset();
    tmp_var_5.unset();
}


ZEND_METHOD(NativePlaywright_FileChooser, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(3, 3, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(474)));
        php::Var raw_arg_backendNodeId = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_backendNodeId.isInt()))) {
            php::throwArgumentTypeError(raw_arg_backendNodeId, get_str(523), 2, get_str(520), get_str(89));
        }
        php::Int arg_backendNodeId = php::toInt(raw_arg_backendNodeId);
        php::Var raw_arg_multiple = php::getCallArg(2);
        if (UNEXPECTED(!(raw_arg_multiple.isBool()))) {
            php::throwArgumentTypeError(raw_arg_multiple, get_str(523), 3, get_str(517), get_str(106));
        }
        php::Bool arg_multiple = php::toBool(raw_arg_multiple);
        php_nativeplaywright__filechooser____construct(this_, php::takeValue(arg_page),arg_backendNodeId,arg_multiple);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FileChooser, page) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__filechooser__page(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FileChooser, isMultiple) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__filechooser__ismultiple(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FileChooser, setFiles) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var arg_files = php::getCallArg(0);
        php_nativeplaywright__filechooser__setfiles(this_, php::takeValue(arg_files));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

