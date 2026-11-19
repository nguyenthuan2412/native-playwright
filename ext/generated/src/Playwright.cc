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
#include <php_native_playwright_src_NativePlaywright_BrowserType_4c5677b1e9_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Locator_206b2f41f4_decl.h>
#include <php_native_playwright_src_NativePlaywright_Playwright_9ea0a9d754_decl.h>

php::Object php_nativeplaywright__playwright__chromium(php::Object &this_) {
    php::Object tmp_var_1;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{29}, get_str(1670));

    tmp_var_1 = (php::newObject(tmp_var_0));
    return tmp_var_1;
}

void php_nativeplaywright__playwright__settestidattribute(php::Object &this_, php::Str name) {
    zval *_typephp_static_property_slot_0 = nullptr;
    const auto _typephp_static_property_0 = [&]() { return typephp_get_static_property_cached(_typephp_static_property_slot_0, [&]() { return typephp_get_static_property_slot(get_persistent_class(PersistentClassId{11}, get_str(311)), get_persistent_prop(PersistentPropertyId{139}, get_str(1354), get_str(311))); }); };

    _typephp_static_property_0() = name;
}

php::Array php_nativeplaywright__playwright__devices(php::Object &this_, php::Str name) {
    php::Str iphone = get_str(1769);
    php::Str android = get_str(1770);
    php::Array d;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Array tmp_var_3;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Array tmp_var_7;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Array tmp_var_11;
    zend_function * tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    php::Array tmp_var_16;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Array tmp_var_20;
    php::Var tmp_var_22;
    php::Array tmp_var_23;
    php::Var tmp_var_25;
    php::Array tmp_var_26;
    php::Var tmp_var_28;
    php::Array tmp_var_29;
    zend_class_entry *tmp_var_30 = get_persistent_class(PersistentClassId{0}, get_str(75));

    d = [&]() -> php::Array {
        bool tmp_var_0 = false;
        if (!tmp_var_0) {
            tmp_var_0 = php::same(name, get_str(1771));
        }
        if (tmp_var_0) {
            tmp_var_1 = php::Array{
                    { get_str(764).str(), php::Var(393L) }, 
                    { get_str(765).str(), php::Var(659L) }
                };
            tmp_var_2 = php::Array{
                    { get_str(764).str(), php::Var(393L) }, 
                    { get_str(765).str(), php::Var(852L) }
                };
            tmp_var_3 = php::Array{
                { get_str(772).str(), php::Var(iphone) }, 
                { get_str(763).str(), php::Var(tmp_var_1) }, 
                { get_str(809).str(), php::Var(tmp_var_2) }, 
                { get_str(807).str(), php::Var(3L) }, 
                { get_str(769).str(), php::Var(true) }, 
                { get_str(768).str(), php::Var(true) }
            };
            tmp_var_1.unset();
            tmp_var_2.unset();
            return tmp_var_3;
        }
        bool tmp_var_4 = false;
        if (!tmp_var_4) {
            tmp_var_4 = php::same(name, get_str(1772));
        }
        if (tmp_var_4) {
            tmp_var_5 = php::Array{
                    { get_str(764).str(), php::Var(390L) }, 
                    { get_str(765).str(), php::Var(664L) }
                };
            tmp_var_6 = php::Array{
                    { get_str(764).str(), php::Var(390L) }, 
                    { get_str(765).str(), php::Var(844L) }
                };
            tmp_var_7 = php::Array{
                { get_str(772).str(), php::Var(iphone) }, 
                { get_str(763).str(), php::Var(tmp_var_5) }, 
                { get_str(809).str(), php::Var(tmp_var_6) }, 
                { get_str(807).str(), php::Var(3L) }, 
                { get_str(769).str(), php::Var(true) }, 
                { get_str(768).str(), php::Var(true) }
            };
            tmp_var_5.unset();
            tmp_var_6.unset();
            return tmp_var_7;
        }
        bool tmp_var_8 = false;
        if (!tmp_var_8) {
            tmp_var_8 = php::same(name, get_str(1773));
        }
        if (tmp_var_8) {
            tmp_var_9 = php::Array{
                    { get_str(764).str(), php::Var(320L) }, 
                    { get_str(765).str(), php::Var(568L) }
                };
            tmp_var_10 = php::Array{
                    { get_str(764).str(), php::Var(320L) }, 
                    { get_str(765).str(), php::Var(568L) }
                };
            tmp_var_11 = php::Array{
                { get_str(772).str(), php::Var(iphone) }, 
                { get_str(763).str(), php::Var(tmp_var_9) }, 
                { get_str(809).str(), php::Var(tmp_var_10) }, 
                { get_str(807).str(), php::Var(2L) }, 
                { get_str(769).str(), php::Var(true) }, 
                { get_str(768).str(), php::Var(true) }
            };
            tmp_var_9.unset();
            tmp_var_10.unset();
            return tmp_var_11;
        }
        bool tmp_var_12 = false;
        if (!tmp_var_12) {
            tmp_var_12 = php::same(name, get_str(1774));
        }
        if (tmp_var_12) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{269}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{269}) = php::fn::function_exists(get_str(1347)) ? 1 : 2; }
            tmp_var_13 = get_function_resolution_cache(FunctionResolutionCacheId{269}) == 1 ? get_func(RequestFuncId{56}, get_str(1347)) : get_persistent_func(PersistentFuncId{60}, get_str(1348));
            tmp_var_14 = php::call(tmp_var_13, php::VarList{get_str(1775), get_str(1776), iphone});
            tmp_var_15 = php::Array{
                    { get_str(764).str(), php::Var(834L) }, 
                    { get_str(765).str(), php::Var(1194L) }
                };
            tmp_var_16 = php::Array{
                { get_str(772).str(), php::Var(tmp_var_14) }, 
                { get_str(763).str(), php::Var(tmp_var_15) }, 
                { get_str(807).str(), php::Var(2L) }, 
                { get_str(769).str(), php::Var(true) }, 
                { get_str(768).str(), php::Var(true) }
            };
            tmp_var_14.unset();
            tmp_var_15.unset();
            return tmp_var_16;
        }
        bool tmp_var_17 = false;
        if (!tmp_var_17) {
            tmp_var_17 = php::same(name, get_str(1777));
        }
        if (tmp_var_17) {
            tmp_var_18 = php::Array{
                    { get_str(764).str(), php::Var(412L) }, 
                    { get_str(765).str(), php::Var(839L) }
                };
            tmp_var_19 = php::Array{
                    { get_str(764).str(), php::Var(412L) }, 
                    { get_str(765).str(), php::Var(915L) }
                };
            tmp_var_20 = php::Array{
                { get_str(772).str(), php::Var(android) }, 
                { get_str(763).str(), php::Var(tmp_var_18) }, 
                { get_str(809).str(), php::Var(tmp_var_19) }, 
                { get_str(807).str(), php::Var(2.625) }, 
                { get_str(769).str(), php::Var(true) }, 
                { get_str(768).str(), php::Var(true) }
            };
            tmp_var_18.unset();
            tmp_var_19.unset();
            return tmp_var_20;
        }
        bool tmp_var_21 = false;
        if (!tmp_var_21) {
            tmp_var_21 = php::same(name, get_str(1778));
        }
        if (tmp_var_21) {
            tmp_var_22 = php::Array{
                    { get_str(764).str(), php::Var(320L) }, 
                    { get_str(765).str(), php::Var(658L) }
                };
            tmp_var_23 = php::Array{
                { get_str(772).str(), php::Var(android) }, 
                { get_str(763).str(), php::Var(tmp_var_22) }, 
                { get_str(807).str(), php::Var(4.5) }, 
                { get_str(769).str(), php::Var(true) }, 
                { get_str(768).str(), php::Var(true) }
            };
            tmp_var_22.unset();
            return tmp_var_23;
        }
        bool tmp_var_24 = false;
        if (!tmp_var_24) {
            tmp_var_24 = php::same(name, get_str(1779));
        }
        if (tmp_var_24) {
            tmp_var_25 = php::Array{
                    { get_str(764).str(), php::Var(1280L) }, 
                    { get_str(765).str(), php::Var(720L) }
                };
            tmp_var_26 = php::Array{
                { get_str(763).str(), php::Var(tmp_var_25) }, 
                { get_str(807).str(), php::Var(1L) }, 
                { get_str(769).str(), php::Var(false) }, 
                { get_str(768).str(), php::Var(false) }
            };
            tmp_var_25.unset();
            return tmp_var_26;
        }
        bool tmp_var_27 = false;
        if (!tmp_var_27) {
            tmp_var_27 = php::same(name, get_str(1780));
        }
        if (tmp_var_27) {
            tmp_var_28 = php::Array{
                    { get_str(764).str(), php::Var(1280L) }, 
                    { get_str(765).str(), php::Var(720L) }
                };
            tmp_var_29 = php::Array{
                { get_str(763).str(), php::Var(tmp_var_28) }, 
                { get_str(807).str(), php::Var(2L) }, 
                { get_str(769).str(), php::Var(false) }, 
                { get_str(768).str(), php::Var(false) }
            };
            tmp_var_28.unset();
            return tmp_var_29;
        }
        {
            php::throwException(php::newObject(tmp_var_30, php::VarList{php::concat({get_str(1781), name})}));
            return {};
        }
    }();
    return d;
}


ZEND_METHOD(NativePlaywright_Playwright, chromium) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__playwright__chromium(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Playwright, setTestIdAttribute) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(1782), 1, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        php_nativeplaywright__playwright__settestidattribute(this_, php::takeValue(arg_name));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Playwright, devices) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(1783), 1, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        auto retval = php_nativeplaywright__playwright__devices(this_, php::takeValue(arg_name));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

