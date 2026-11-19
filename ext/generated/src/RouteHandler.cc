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
#include <php_native_playwright_src_NativePlaywright_RouteHandler_a91721537d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

void php_nativeplaywright__routehandler____construct(php::Object &this_, php::Var url, php::Object handler, php::Int times) {
    if (UNEXPECTED(!(url.isString() || (url.isObject() && php::instanceOf(url, get_persistent_class(PersistentClassId{5}, get_str(148))))))) {
        php::throwArgumentTypeError(url, get_str(655), 1, get_str(203), get_str(208));
    }
typephp_write_property_scoped(this_, "url", url, get_persistent_class(PersistentClassId{24}, get_str(656)));
typephp_write_property_scoped(this_, "handler", handler, get_persistent_class(PersistentClassId{24}, get_str(656)));
typephp_write_property_scoped(this_, "times", times, get_persistent_class(PersistentClassId{24}, get_str(656)));

}

php::Bool php_nativeplaywright__routehandler__matches(php::Object &this_, php::Str url, php::Str baseURL) {
    php::Var tmp_var_0;
    php::Object tmp_var_1;
    php::Bool tmp_var_2 = 0;
    Z_PTR_P(tmp_var_1.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{82}, get_str(203), get_str(656)), php::AttrMode::Get);
    tmp_var_2 = (php::toBool(php_nativeplaywright__util__urlmatches(tmp_var_1, php::deindirect(tmp_var_0), url, baseURL)));
    tmp_var_0.unset();
    return tmp_var_2;
}

php::Bool php_nativeplaywright__routehandler__expired(php::Object &this_) {
    php::Int tmp_var_0 = 0;
    php::Bool tmp_var_1 = 0;
    php::Int tmp_var_2 = 0;
    php::Int tmp_var_3 = 0;
    php::Bool tmp_var_4 = 0;
    php::Int &_object_prop_this___count = this_.attrInt(get_persistent_prop(PersistentPropertyId{84}, get_str(163), get_str(656)));

    tmp_var_0 = php::toInt(typephp_read_property_scoped(this_, get_str(657), get_persistent_class(PersistentClassId{24}, get_str(656)), php::AttrMode::Get));
    tmp_var_1 = php::toBool(((tmp_var_0) > (0L)));
    tmp_var_4 = (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_1)) {
            tmp_var_2 = php::toInt(_object_prop_this___count);
            tmp_var_3 = php::toInt(typephp_read_property_scoped(this_, get_str(657), get_persistent_class(PersistentClassId{24}, get_str(656)), php::AttrMode::Get));
            return php::toBool(((tmp_var_2) >= (tmp_var_3)));
        }
        return false;
    }()));
    return tmp_var_4;
}


ZEND_METHOD(NativePlaywright_RouteHandler, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var arg_url = php::getCallArg(0);
        php::Object arg_handler = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Var raw_arg_times = php::getCallArg(2, php_nativeplaywright__routehandler____construct_arg_2_default_value());
        if (UNEXPECTED(!(raw_arg_times.isInt()))) {
            php::throwArgumentTypeError(raw_arg_times, get_str(655), 3, get_str(657), get_str(89));
        }
        php::Int arg_times = php::toInt(raw_arg_times);
        php_nativeplaywright__routehandler____construct(this_, php::takeValue(arg_url),php::takeValue(arg_handler),arg_times);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_RouteHandler, matches) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_url = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_url.isString()))) {
            php::throwArgumentTypeError(raw_arg_url, get_str(658), 1, get_str(203), get_str(98));
        }
        php::Str arg_url = php::toString(raw_arg_url);
        php::Var raw_arg_baseURL = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_baseURL.isString()))) {
            php::throwArgumentTypeError(raw_arg_baseURL, get_str(658), 2, get_str(304), get_str(98));
        }
        php::Str arg_baseURL = php::toString(raw_arg_baseURL);
        auto retval = php_nativeplaywright__routehandler__matches(this_, php::takeValue(arg_url),php::takeValue(arg_baseURL));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_RouteHandler, expired) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__routehandler__expired(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

