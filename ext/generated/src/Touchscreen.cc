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
#include <php_native_playwright_src_NativePlaywright_Keyboard_4f4f2515ca_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Touchscreen_177469a54f_decl.h>

void php_nativeplaywright__touchscreen____construct(php::Object &this_, php::Object page, php::Object keyboard) {
typephp_write_property_scoped(this_, "page", page, get_persistent_class(PersistentClassId{16}, get_str(507)));
typephp_write_property_scoped(this_, "keyboard", keyboard, get_persistent_class(PersistentClassId{16}, get_str(507)));

}

void php_nativeplaywright__touchscreen__tap(php::Object &this_, php::Float x, php::Float y) {
    php::Var m;
    php::Var tmp_var_0;
    php::Var tmp_var_2;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{30}, get_str(491), get_str(507)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    m = php_nativeplaywright__keyboard__modifiers(tmp_var_1);
    tmp_var_0.unset();
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{31}, get_str(432), get_str(507)), php::AttrMode::Get);
    php::Object tmp_var_3 = tmp_var_2;
    tmp_var_4 = php::Array{
                        { get_str(485).str(), php::Var(x) }, 
                        { get_str(486).str(), php::Var(y) }
                    };
    tmp_var_5 = php::Array{
                    php::Var(tmp_var_4)
                };
    tmp_var_4.unset();
    tmp_var_6 = php::Array{
                { get_str(424).str(), php::Var(get_str(509)) }, 
                { get_str(510).str(), php::Var(tmp_var_5) }, 
                { get_str(341).str(), php::Var(m) }
            };
    tmp_var_5.unset();
    tmp_var_7 = php::Array{
            php::Var(get_str(508)), 
            php::Var(tmp_var_6)
        };
    tmp_var_6.unset();
    tmp_var_8 = php::Array{};
    tmp_var_9 = php::Array{
                { get_str(424).str(), php::Var(get_str(511)) }, 
                { get_str(510).str(), php::Var(tmp_var_8) }, 
                { get_str(341).str(), php::Var(m) }
            };
    tmp_var_8.unset();
    tmp_var_10 = php::Array{
            php::Var(get_str(508)), 
            php::Var(tmp_var_9)
        };
    tmp_var_9.unset();
    tmp_var_11 = php::Array{
        php::Var(tmp_var_7), 
        php::Var(tmp_var_10)
    };
    tmp_var_7.unset();
    tmp_var_10.unset();
    php_nativeplaywright__page__sendmany(tmp_var_3, tmp_var_11);
    tmp_var_2.unset();
    tmp_var_11.unset();
}


ZEND_METHOD(NativePlaywright_Touchscreen, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(474)));
        php::Object arg_keyboard = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{13}, get_str(340)));
        php_nativeplaywright__touchscreen____construct(this_, php::takeValue(arg_page),php::takeValue(arg_keyboard));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Touchscreen, tap) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_x = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_x.isFloat() || raw_arg_x.isInt())))) {
            php::throwArgumentTypeError(raw_arg_x, get_str(512), 1, get_str(485), get_str(103));
        }
        php::Float arg_x = php::toFloat(raw_arg_x);
        php::Var raw_arg_y = php::getCallArg(1);
        if (UNEXPECTED(!((raw_arg_y.isFloat() || raw_arg_y.isInt())))) {
            php::throwArgumentTypeError(raw_arg_y, get_str(512), 2, get_str(486), get_str(103));
        }
        php::Float arg_y = php::toFloat(raw_arg_y);
        php_nativeplaywright__touchscreen__tap(this_, arg_x,arg_y);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

