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
#include <php_native_playwright_src_NativePlaywright_Frame_07e74a6952_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Request_db667c6252_decl.h>
#include <php_native_playwright_src_NativePlaywright_Response_f8b49507a2_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

void php_nativeplaywright__response____construct(php::Object &this_, php::Object page, php::Object request, php::Str url, php::Int status, php::Str statusText, php::Array headers, php::Str remoteIp, php::Int remotePort, php::Array securityDetails, php::Bool fromServiceWorker) {
typephp_write_property_scoped(this_, "page", page, get_persistent_class(PersistentClassId{21}, get_str(540)));
typephp_write_property_scoped(this_, "request", request, get_persistent_class(PersistentClassId{21}, get_str(540)));
typephp_write_property_scoped(this_, "url", url, get_persistent_class(PersistentClassId{21}, get_str(540)));
typephp_write_property_scoped(this_, "status", status, get_persistent_class(PersistentClassId{21}, get_str(540)));
typephp_write_property_scoped(this_, "statusText", statusText, get_persistent_class(PersistentClassId{21}, get_str(540)));
typephp_write_property_scoped(this_, "headers", headers, get_persistent_class(PersistentClassId{21}, get_str(540)));
typephp_write_property_scoped(this_, "remoteIp", remoteIp, get_persistent_class(PersistentClassId{21}, get_str(540)));
typephp_write_property_scoped(this_, "remotePort", remotePort, get_persistent_class(PersistentClassId{21}, get_str(540)));
typephp_write_property_scoped(this_, "securityDetails", securityDetails, get_persistent_class(PersistentClassId{21}, get_str(540)));
typephp_write_property_scoped(this_, "fromServiceWorker", fromServiceWorker, get_persistent_class(PersistentClassId{21}, get_str(540)));

}

php::Str php_nativeplaywright__response__url(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{48}, get_str(203), get_str(540)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Int php_nativeplaywright__response__status(php::Object &this_) {
    php::Int tmp_var_0 = 0;
    php::Int &_object_prop_this___status = this_.attrInt(get_persistent_prop(PersistentPropertyId{49}, get_str(541), get_str(540)));

    tmp_var_0 = (php::toInt(_object_prop_this___status));
    return tmp_var_0;
}

php::Str php_nativeplaywright__response__statustext(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{50}, get_str(542), get_str(540)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Bool php_nativeplaywright__response__ok(php::Object &this_) {
    php::Int tmp_var_0 = 0;
    php::Bool tmp_var_1 = 0;
    php::Int tmp_var_2 = 0;
    php::Bool tmp_var_3 = 0;
    php::Int tmp_var_4 = 0;
    php::Bool tmp_var_5 = 0;
    php::Int &_object_prop_this___status = this_.attrInt(get_persistent_prop(PersistentPropertyId{49}, get_str(541), get_str(540)));

    tmp_var_0 = php::toInt(_object_prop_this___status);
    tmp_var_1 = php::toBool(tmp_var_0 == 0L);
    tmp_var_5 = (php::toBool([&]() -> bool {
        if (!(php::toBool(tmp_var_1))) {
            tmp_var_2 = php::toInt(_object_prop_this___status);
            tmp_var_3 = php::toBool(((tmp_var_2) >= (200L)));
            return php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_3)) {
            tmp_var_4 = php::toInt(_object_prop_this___status);
            return php::toBool(((tmp_var_4) <= (299L)));
        }
        return false;
    }());
        }
        return true;
    }()));
    return tmp_var_5;
}

php::Array php_nativeplaywright__response__headers(php::Object &this_) {
    php::Var tmp_var_0;
    php::Object tmp_var_1;
    php::Array tmp_var_2;
    Z_PTR_P(tmp_var_1.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{51}, get_str(543), get_str(540)), php::AttrMode::Get);
    tmp_var_2 = (php_nativeplaywright__util__lowerheaders(tmp_var_1, php::deindirect(tmp_var_0)));
    tmp_var_0.unset();
    return tmp_var_2;
}

php::Array php_nativeplaywright__response__allheaders(php::Object &this_) {
    php::Array tmp_var_0;

    tmp_var_0 = (php_nativeplaywright__response__headers(this_));
    return tmp_var_0;
}

php::Var php_nativeplaywright__response__headervalue(php::Object &this_, php::Str name) {
    php::Var tmp_var_0;
    zend_function * tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;

    if (get_function_resolution_cache(FunctionResolutionCacheId{66}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{66}) = php::fn::function_exists(get_str(257)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{66}) == 1 ? get_func(RequestFuncId{19}, get_str(257)) : get_persistent_func(PersistentFuncId{23}, get_str(258));
    tmp_var_2=php_nativeplaywright__response__headers(this_);
    if (php::exists(tmp_var_2, {{php::ArrayDimFetch, php::Var(php::call(tmp_var_1, php::VarList{name}))}}, tmp_var_3)) {
        tmp_var_0 = tmp_var_3;
    } else {
        tmp_var_0 = php::null;
    }
    tmp_var_4 = tmp_var_0;
    if (UNEXPECTED(!(tmp_var_4.isNull() || tmp_var_4.isString()))) {
        php::throwReturnTypeError(tmp_var_4, get_str(544), get_str(545), false);
    }
    return tmp_var_4;
}

php::Array php_nativeplaywright__response__headervalues(php::Object &this_, php::Str name) {
    php::Var v;
    zend_function * tmp_var_0;
    php::Array tmp_var_1;

    v = php_nativeplaywright__response__headervalue(this_, name);
    tmp_var_1 = ([&]() -> php::Var {
        if (php::toBool(php::same(v, php::null))) {
            return php::Var(php::Array{});
        } else {
            if (get_function_resolution_cache(FunctionResolutionCacheId{67}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{67}) = php::fn::function_exists(get_str(447)) ? 1 : 2; }
            tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{67}) == 1 ? get_func(RequestFuncId{28}, get_str(447)) : get_persistent_func(PersistentFuncId{32}, get_str(448));
            return php::Var(php::call(tmp_var_0, php::VarList{get_str(471), v}));
        }
    }());
    return tmp_var_1;
}

php::Object php_nativeplaywright__response__request(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{52}, get_str(547), get_str(540)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Object php_nativeplaywright__response__frame(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_2;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{52}, get_str(547), get_str(540)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    tmp_var_2 = php_nativeplaywright__request__frame(tmp_var_1);
    if (UNEXPECTED(!(tmp_var_2.isNull() || (tmp_var_2.isObject() && php::instanceOf(tmp_var_2, get_persistent_class(PersistentClassId{12}, get_str(326))))))) {
        php::throwReturnTypeError(tmp_var_2, get_str(548), get_str(549), false);
    }
    tmp_var_0.unset();
    return tmp_var_2;
}

php::Bool php_nativeplaywright__response__fromserviceworker(php::Object &this_) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{53}, get_str(550), get_str(540)), php::AttrMode::Get)));
    return tmp_var_0;
}

php::Var php_nativeplaywright__response__serveraddr(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Int tmp_var_2 = 0;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Int &_object_prop_this___remotePort = this_.attrInt(get_persistent_prop(PersistentPropertyId{55}, get_str(553), get_str(540)));

    tmp_var_5 = [&]() -> php::Var {
        tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{54}, get_str(551), get_str(540)), php::AttrMode::Get);
        tmp_var_3 = php::same(tmp_var_0, php::empty_string);
        tmp_var_0.unset();
        if (php::toBool(tmp_var_3)) {
            return php::Var(php::null);
        } else {
            tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{54}, get_str(551), get_str(540)), php::AttrMode::Get);
            tmp_var_2 = php::toInt(_object_prop_this___remotePort);
            tmp_var_4 = php::Array{
        { get_str(552).str(), php::Var(tmp_var_1) }, 
        { get_str(240).str(), php::Var(tmp_var_2) }
    };
            tmp_var_1.unset();
            return tmp_var_4;
        }
    }();
    if (UNEXPECTED(!(tmp_var_5.isNull() || tmp_var_5.isArray()))) {
        php::throwReturnTypeError(tmp_var_5, get_str(554), get_str(91), false);
    }
    return tmp_var_5;
}

php::Var php_nativeplaywright__response__securitydetails(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;

    tmp_var_3 = [&]() -> php::Var {
        tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{56}, get_str(555), get_str(540)), php::AttrMode::Get);
        tmp_var_1 = php::Array{};
        tmp_var_2 = php::same(tmp_var_0, tmp_var_1);
        tmp_var_0.unset();
        tmp_var_1.unset();
        if (php::toBool(tmp_var_2)) {
            return php::Var(php::null);
        } else {
            return php::Var(this_.attr(get_persistent_prop(PersistentPropertyId{56}, get_str(555), get_str(540)), php::AttrMode::Get));
        }
    }();
    if (UNEXPECTED(!(tmp_var_3.isNull() || tmp_var_3.isArray()))) {
        php::throwReturnTypeError(tmp_var_3, get_str(556), get_str(91), false);
    }
    return tmp_var_3;
}

php::Var php_nativeplaywright__response__finished(php::Object &this_) {
    php::Object page;
    php::Var tmp_var_0;
    php::Object req;
    php::Float tmp_var_2 = 0;
    php::Var tmp_var_3;

    page = this_.attr(get_persistent_prop(PersistentPropertyId{57}, get_str(433), get_str(540)), php::AttrMode::Get);
    if (php::toBool(php::same(page, php::null))) {
        tmp_var_0 = php::null;
        if (UNEXPECTED(!(tmp_var_0.isNull() || tmp_var_0.isString()))) {
            php::throwReturnTypeError(tmp_var_0, get_str(557), get_str(545), false);
        }
        return tmp_var_0;
    }
    req = this_.attr(get_persistent_prop(PersistentPropertyId{52}, get_str(547), get_str(540)), php::AttrMode::Get);
    php::ClosureFn tmp_var_1 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object req = php::Object(vars_.get(0));
        php::Var tmp_var_0;

    tmp_var_0 = php::toBool(req.attr(get_persistent_prop(PersistentPropertyId{58}, get_str(559), get_str(560)), php::AttrMode::Get));
        if (UNEXPECTED(!(tmp_var_0.isBool()))) {
            php::throwReturnTypeError(tmp_var_0, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_0;};
    tmp_var_2 = php::toFloat(php_nativeplaywright__page__timeoutseconds(page));
    php_nativeplaywright__page__waitforcondition(page, php::toObject(php::newClosureWithParameters(tmp_var_1, { req }, this_, get_persistent_class(PersistentClassId{21}, get_str(540)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), php::toFloat(tmp_var_2), get_str(562));
    tmp_var_3 = req.attr(get_persistent_prop(PersistentPropertyId{59}, get_str(563), get_str(560)), php::AttrMode::Get);
    if (UNEXPECTED(!(tmp_var_3.isNull() || tmp_var_3.isString()))) {
        php::throwReturnTypeError(tmp_var_3, get_str(557), get_str(545), false);
    }
    return tmp_var_3;
}

php::Str php_nativeplaywright__response__body(php::Object &this_) {
    php::Var tmp_var_0;
    php::Bool tmp_var_1 = 0;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Bool tmp_var_4 = 0;
    php::Var r;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Str b;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    zend_function * tmp_var_10;
    php::Var tmp_var_11;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{60}, get_str(564), get_str(540)), php::AttrMode::Get);
    tmp_var_1 = php::toBool(!(php::same(tmp_var_0, php::null)));
    tmp_var_0.unset();
    if (php::toBool(tmp_var_1)) {
        tmp_var_2 = (this_.attr(get_persistent_prop(PersistentPropertyId{60}, get_str(564), get_str(540)), php::AttrMode::Get));
        if (UNEXPECTED(!(tmp_var_2.isString()))) {
            php::throwReturnTypeError(tmp_var_2, get_str(565), get_str(98), true);
        }
        return tmp_var_2;
    }
    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{57}, get_str(433), get_str(540)), php::AttrMode::Get);
    tmp_var_4 = php::toBool(php::same(tmp_var_3, php::null));
    tmp_var_3.unset();
    if (php::toBool(tmp_var_4)) {
        return php::empty_string;
    }
    php_nativeplaywright__response__finished(this_);
    tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{57}, get_str(433), get_str(540)), php::AttrMode::Get);
    tmp_var_6 = typephp_read_property_cached(this_.attr(get_persistent_prop(PersistentPropertyId{52}, get_str(547), get_str(540)), php::AttrMode::Get), get_str(118), php::AttrMode::Get, get_property_cache(PropertyCacheId{5}));
    tmp_var_7 = php::Array{
        { get_str(567).str(), php::Var(tmp_var_6) }
    };
    tmp_var_6.unset();
    r = typephp_call_method_cached(tmp_var_5, get_str(119), get_method_call_cache(MethodCallCacheId{10}), php::VarList{get_str(566), tmp_var_7});
    tmp_var_5.unset();
    tmp_var_7.unset();
    if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(564))}}, tmp_var_9)) {
        tmp_var_8 = tmp_var_9;
    } else {
        tmp_var_8 = php::empty_string;
    }
    b = php::toString(tmp_var_8);
    this_.attr(get_persistent_prop(PersistentPropertyId{60}, get_str(564), get_str(540)), php::AttrMode::Update) = [&]() -> php::Str {
        if (php::toBool(!(php::toBool(php::empty(r, {{php::ArrayDimFetch, php::Var(get_str(568))}}))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{68}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{68}) = php::fn::function_exists(get_str(569)) ? 1 : 2; }
            tmp_var_10 = get_function_resolution_cache(FunctionResolutionCacheId{68}) == 1 ? get_func(RequestFuncId{35}, get_str(569)) : get_persistent_func(PersistentFuncId{39}, get_str(570));
            return php::toString(php::call(tmp_var_10, php::VarList{b}));
        } else {
            return b;
        }
    }();
    tmp_var_11 = (this_.attr(get_persistent_prop(PersistentPropertyId{60}, get_str(564), get_str(540)), php::AttrMode::Get));
    if (UNEXPECTED(!(tmp_var_11.isString()))) {
        php::throwReturnTypeError(tmp_var_11, get_str(565), get_str(98), true);
    }
    return tmp_var_11;
}

php::Str php_nativeplaywright__response__text(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (php_nativeplaywright__response__body(this_));
    return tmp_var_0;
}

php::Var php_nativeplaywright__response__json(php::Object &this_) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;

    if (get_function_resolution_cache(FunctionResolutionCacheId{69}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{69}) = php::fn::function_exists(get_str(92)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{69}) == 1 ? get_func(RequestFuncId{2}, get_str(92)) : get_persistent_func(PersistentFuncId{2}, get_str(93));
    tmp_var_1 = php_nativeplaywright__response__body(this_);
    tmp_var_2 = php::constant(get_str(571), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_3 = (php::call(tmp_var_0, php::VarList{tmp_var_1, true, 512L, tmp_var_2}));
    tmp_var_1.unset();
    tmp_var_2.unset();
    return tmp_var_3;
}


ZEND_METHOD(NativePlaywright_Response, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(6, 10, false);
        php::Object arg_page = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{14}, get_str(475))); })(php::getCallArg(0));
        php::Object arg_request = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{22}, get_str(560)));
        php::Var raw_arg_url = php::getCallArg(2);
        if (UNEXPECTED(!(raw_arg_url.isString()))) {
            php::throwArgumentTypeError(raw_arg_url, get_str(572), 3, get_str(203), get_str(98));
        }
        php::Str arg_url = php::toString(raw_arg_url);
        php::Var raw_arg_status = php::getCallArg(3);
        if (UNEXPECTED(!(raw_arg_status.isInt()))) {
            php::throwArgumentTypeError(raw_arg_status, get_str(572), 4, get_str(541), get_str(89));
        }
        php::Int arg_status = php::toInt(raw_arg_status);
        php::Var raw_arg_statusText = php::getCallArg(4);
        if (UNEXPECTED(!(raw_arg_statusText.isString()))) {
            php::throwArgumentTypeError(raw_arg_statusText, get_str(572), 5, get_str(542), get_str(98));
        }
        php::Str arg_statusText = php::toString(raw_arg_statusText);
        php::Array arg_headers = php::toArray(php::getCallArg(5));
        php::Var raw_arg_remoteIp = php::getCallArg(6, php_nativeplaywright__response____construct_arg_6_default_value());
        if (UNEXPECTED(!(raw_arg_remoteIp.isString()))) {
            php::throwArgumentTypeError(raw_arg_remoteIp, get_str(572), 7, get_str(551), get_str(98));
        }
        php::Str arg_remoteIp = php::toString(raw_arg_remoteIp);
        php::Var raw_arg_remotePort = php::getCallArg(7, php_nativeplaywright__response____construct_arg_7_default_value());
        if (UNEXPECTED(!(raw_arg_remotePort.isInt()))) {
            php::throwArgumentTypeError(raw_arg_remotePort, get_str(572), 8, get_str(553), get_str(89));
        }
        php::Int arg_remotePort = php::toInt(raw_arg_remotePort);
        php::Array arg_securityDetails = php::toArray(php::getCallArg(8, php_nativeplaywright__response____construct_arg_8_default_value()));
        php::Var raw_arg_fromServiceWorker = php::getCallArg(9, php_nativeplaywright__response____construct_arg_9_default_value());
        if (UNEXPECTED(!(raw_arg_fromServiceWorker.isBool()))) {
            php::throwArgumentTypeError(raw_arg_fromServiceWorker, get_str(572), 10, get_str(550), get_str(106));
        }
        php::Bool arg_fromServiceWorker = php::toBool(raw_arg_fromServiceWorker);
        php_nativeplaywright__response____construct(this_, php::takeValue(arg_page),php::takeValue(arg_request),php::takeValue(arg_url),arg_status,php::takeValue(arg_statusText),php::takeValue(arg_headers),php::takeValue(arg_remoteIp),arg_remotePort,php::takeValue(arg_securityDetails),arg_fromServiceWorker);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, url) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__url(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, status) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__status(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, statusText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__statustext(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, ok) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__ok(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, headers) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__headers(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, allHeaders) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__allheaders(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, headerValue) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(544), 1, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        auto retval = php_nativeplaywright__response__headervalue(this_, php::takeValue(arg_name));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, headerValues) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(573), 1, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        auto retval = php_nativeplaywright__response__headervalues(this_, php::takeValue(arg_name));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, request) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__request(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, frame) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__frame(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, fromServiceWorker) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__fromserviceworker(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, serverAddr) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__serveraddr(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, securityDetails) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__securitydetails(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, finished) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__finished(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, body) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__body(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, text) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__text(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Response, json) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__response__json(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

