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
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Frame_07e74a6952_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Request_db667c6252_decl.h>
#include <php_native_playwright_src_NativePlaywright_Response_f8b49507a2_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

void php_nativeplaywright__request____construct(php::Object &this_, php::Object page, php::Str id, php::Str url, php::Str method, php::Array headers, php::Var postData, php::Str resourceType, php::Str frameId, php::Bool isNavigation, php::Object redirectedFrom) {
    zend_function * tmp_var_0;
    php::Float &_object_prop_this___startTime = this_.attrFloat(get_persistent_prop(PersistentPropertyId{61}, get_str(573), get_str(559)));
    if (UNEXPECTED(!(postData.isNull() || postData.isString()))) {
        php::throwArgumentTypeError(postData, get_str(575), 6, get_str(576), get_str(544));
    }
typephp_write_property_scoped(this_, "page", page, get_persistent_class(PersistentClassId{22}, get_str(559)));
typephp_write_property_scoped(this_, "id", id, get_persistent_class(PersistentClassId{22}, get_str(559)));
typephp_write_property_scoped(this_, "url", url, get_persistent_class(PersistentClassId{22}, get_str(559)));
typephp_write_property_scoped(this_, "method", method, get_persistent_class(PersistentClassId{22}, get_str(559)));
typephp_write_property_scoped(this_, "headers", headers, get_persistent_class(PersistentClassId{22}, get_str(559)));
typephp_write_property_scoped(this_, "postData", postData, get_persistent_class(PersistentClassId{22}, get_str(559)));
typephp_write_property_scoped(this_, "resourceType", resourceType, get_persistent_class(PersistentClassId{22}, get_str(559)));
typephp_write_property_scoped(this_, "frameId", frameId, get_persistent_class(PersistentClassId{22}, get_str(559)));
typephp_write_property_scoped(this_, "isNavigation", isNavigation, get_persistent_class(PersistentClassId{22}, get_str(559)));
typephp_write_property_scoped(this_, "redirectedFrom", redirectedFrom, get_persistent_class(PersistentClassId{22}, get_str(559)));

    if (get_function_resolution_cache(FunctionResolutionCacheId{70}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{70}) = php::fn::function_exists(get_str(150)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{70}) == 1 ? get_func(RequestFuncId{5}, get_str(150)) : get_persistent_func(PersistentFuncId{5}, get_str(151));
    _object_prop_this___startTime = php::toFloatExact(php::call(tmp_var_0, php::VarList{true}), "NativePlaywright\\Request::$startTime");
    if (php::toBool(!(php::same(redirectedFrom, php::null)))) {
        redirectedFrom.attr(get_persistent_prop(PersistentPropertyId{62}, get_str(574), get_str(559)), php::AttrMode::Update) = this_;
    }
}

php::Str php_nativeplaywright__request__url(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{63}, get_str(202), get_str(559)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__request__method(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{64}, get_str(100), get_str(559)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Array php_nativeplaywright__request__headers(php::Object &this_) {
    php::Var tmp_var_0;
    php::Object tmp_var_1;
    php::Array tmp_var_2;
    Z_PTR_P(tmp_var_1.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(255));

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{65}, get_str(542), get_str(559)), php::AttrMode::Get);
    tmp_var_2 = (php_nativeplaywright__util__lowerheaders(tmp_var_1, php::deindirect(tmp_var_0)));
    tmp_var_0.unset();
    return tmp_var_2;
}

php::Array php_nativeplaywright__request__allheaders(php::Object &this_) {
    php::Array tmp_var_0;

    tmp_var_0 = (php_nativeplaywright__request__headers(this_));
    return tmp_var_0;
}

php::Var php_nativeplaywright__request__headervalue(php::Object &this_, php::Str name) {
    php::Var tmp_var_0;
    zend_function * tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;

    if (get_function_resolution_cache(FunctionResolutionCacheId{71}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{71}) = php::fn::function_exists(get_str(256)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{71}) == 1 ? get_func(RequestFuncId{19}, get_str(256)) : get_persistent_func(PersistentFuncId{21}, get_str(257));
    tmp_var_2=php_nativeplaywright__request__headers(this_);
    if (php::exists(tmp_var_2, {{php::ArrayDimFetch, php::Var(php::call(tmp_var_1, php::VarList{name}))}}, tmp_var_3)) {
        tmp_var_0 = tmp_var_3;
    } else {
        tmp_var_0 = php::null;
    }
    tmp_var_4 = tmp_var_0;
    if (UNEXPECTED(!(tmp_var_4.isNull() || tmp_var_4.isString()))) {
        php::throwReturnTypeError(tmp_var_4, get_str(577), get_str(544), false);
    }
    return tmp_var_4;
}

php::Var php_nativeplaywright__request__postdata(php::Object &this_) {
    php::Var tmp_var_0;
    php::Bool tmp_var_1 = 0;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Bool tmp_var_4 = 0;
    php::Var tmp_var_5;
    php::Bool tmp_var_6 = 0;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Object e;
    php::Var tmp_var_15;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{66}, get_str(576), get_str(559)), php::AttrMode::Get);
    tmp_var_1 = php::toBool(php::same(tmp_var_0, php::null));
    tmp_var_0.unset();
    tmp_var_4 = php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_1)) {
            tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{67}, get_str(432), get_str(559)), php::AttrMode::Get);
            tmp_var_3 = php::toBool(!(php::same(tmp_var_2, php::null)));
            tmp_var_2.unset();
            return php::toBool(tmp_var_3);
        }
        return false;
    }());
    if (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_4)) {
            tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{64}, get_str(100), get_str(559)), php::AttrMode::Get);
            tmp_var_6 = php::toBool(!(php::same(tmp_var_5, get_str(578))));
            tmp_var_5.unset();
            return php::toBool(tmp_var_6);
        }
        return false;
    }())) {
        try {
            tmp_var_9 = this_.attr(get_persistent_prop(PersistentPropertyId{67}, get_str(432), get_str(559)), php::AttrMode::Get);
            tmp_var_10 = this_.attr(get_persistent_prop(PersistentPropertyId{68}, get_str(117), get_str(559)), php::AttrMode::Get);
            tmp_var_11 = php::Array{
                { get_str(566).str(), php::Var(tmp_var_10) }
            };
            tmp_var_10.unset();
            tmp_var_8=typephp_call_method_cached(tmp_var_9, get_str(118), get_method_call_cache(MethodCallCacheId{14}), php::VarList{get_str(579), tmp_var_11});
            if (php::exists(tmp_var_8, {{php::ArrayDimFetch, php::Var(get_str(576))}}, tmp_var_12)) {
                tmp_var_7 = tmp_var_12;
            } else {
                tmp_var_7 = php::empty_string;
            }
            this_.attr(get_persistent_prop(PersistentPropertyId{66}, get_str(576), get_str(559)), php::AttrMode::Update) = php::toString(tmp_var_7);
            tmp_var_9.unset();
            tmp_var_11.unset();
        } catch (zend_object *_ex) {
            tmp_var_13 = php::catchException();
            bool tmp_var_14 = false;
            if (!tmp_var_14 && tmp_var_13 && (php::instanceOf(tmp_var_13, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
                tmp_var_14 = true;
                e = tmp_var_13;
                tmp_var_13 = php::null;
            }
        }
        if (tmp_var_13) {
            php::throwException(php::Object(tmp_var_13));
        }
    }
    tmp_var_15 = this_.attr(get_persistent_prop(PersistentPropertyId{66}, get_str(576), get_str(559)), php::AttrMode::Get);
    if (UNEXPECTED(!(tmp_var_15.isNull() || tmp_var_15.isString()))) {
        php::throwReturnTypeError(tmp_var_15, get_str(580), get_str(544), false);
    }
    return tmp_var_15;
}

php::Var php_nativeplaywright__request__postdatajson(php::Object &this_) {
    php::Var d;
    php::Var tmp_var_0;
    php::Var ct;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    zend_function * tmp_var_4;
    php::Array out;
    zend_function * tmp_var_5;
    zend_function * tmp_var_8;
    php::Var tmp_var_9;

    d = php_nativeplaywright__request__postdata(this_);
    if (php::toBool(php::same(d, php::null))) {
        tmp_var_0 = (php::null);
        return tmp_var_0;
    }
    tmp_var_2=php_nativeplaywright__request__headers(this_);
    if (php::exists(tmp_var_2, {{php::ArrayDimFetch, php::Var(get_str(581))}}, tmp_var_3)) {
        tmp_var_1 = tmp_var_3;
    } else {
        tmp_var_1 = php::empty_string;
    }
    ct = tmp_var_1;
    if (get_function_resolution_cache(FunctionResolutionCacheId{72}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{72}) = php::fn::function_exists(get_str(195)) ? 1 : 2; }
    tmp_var_4 = get_function_resolution_cache(FunctionResolutionCacheId{72}) == 1 ? get_func(RequestFuncId{11}, get_str(195)) : get_persistent_func(PersistentFuncId{12}, get_str(196));
    if (php::toBool(php::call(tmp_var_4, php::VarList{ct, get_str(582)}))) {
        out = php::Array{};
        if (get_function_resolution_cache(FunctionResolutionCacheId{73}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{73}) = php::fn::function_exists(get_str(583)) ? 1 : 2; }
        tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{73}) == 1 ? get_func(RequestFuncId{36}, get_str(583)) : get_persistent_func(PersistentFuncId{38}, get_str(584));
        [&]() -> php::Var {
        if (get_function_resolution_cache(FunctionResolutionCacheId{73}) == 1) {
        return php::call(tmp_var_5, php::VarList{d, out});
        }
        php::RefWrap<php::Array> tmp_var_6(out);
        php::Var tmp_var_7 = php::call(tmp_var_5, php::VarList{d, &tmp_var_6.ref()});
        tmp_var_6.commit();
        return tmp_var_7;
        }();
        return out;
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{74}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{74}) = php::fn::function_exists(get_str(92)) ? 1 : 2; }
    tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{74}) == 1 ? get_func(RequestFuncId{2}, get_str(92)) : get_persistent_func(PersistentFuncId{2}, get_str(93));
    tmp_var_9 = (php::call(tmp_var_8, php::VarList{d, true}));
    return tmp_var_9;
}

php::Str php_nativeplaywright__request__resourcetype(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{69}, get_str(585), get_str(559)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Bool php_nativeplaywright__request__isnavigationrequest(php::Object &this_) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{70}, get_str(586), get_str(559)), php::AttrMode::Get)));
    return tmp_var_0;
}

php::Str php_nativeplaywright__request__frameid(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{71}, get_str(587), get_str(559)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Object php_nativeplaywright__request__frame(php::Object &this_) {
    php::Object tmp_var_1;
    php::Var tmp_var_2;
    php::Object tmp_var_3;
    php::Object tmp_var_4;

    auto tmp_var_0 = [&]() -> php::Object {
        tmp_var_1 = typephp_read_property_scoped(this_, get_str(432), get_persistent_class(PersistentClassId{22}, get_str(559)), php::AttrMode::Get);
        if (tmp_var_1.isNull()) {
            return php::Object{};
        }
        tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{71}, get_str(587), get_str(559)), php::AttrMode::Get);
        tmp_var_3 = php_nativeplaywright__page__framebyid(tmp_var_1, php::deindirect(tmp_var_2));
        tmp_var_2.unset();
        return tmp_var_3;
    };
    tmp_var_4 = (tmp_var_0());
    tmp_var_3.unset();
    tmp_var_1.unset();
    return tmp_var_4;
}

php::Object php_nativeplaywright__request__page(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{67}, get_str(432), get_str(559)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Object php_nativeplaywright__request__redirectedfrom(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{72}, get_str(589), get_str(559)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Object php_nativeplaywright__request__redirectedto(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{62}, get_str(574), get_str(559)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Object php_nativeplaywright__request__response(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{73}, get_str(590), get_str(559)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Var php_nativeplaywright__request__failure(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;

    tmp_var_4 = [&]() -> php::Var {
        tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{59}, get_str(562), get_str(559)), php::AttrMode::Get);
        tmp_var_2 = php::same(tmp_var_0, php::null);
        tmp_var_0.unset();
        if (php::toBool(tmp_var_2)) {
            return php::Var(php::null);
        } else {
            tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{59}, get_str(562), get_str(559)), php::AttrMode::Get);
            tmp_var_3 = php::Array{
        { get_str(591).str(), php::Var(tmp_var_1) }
    };
            tmp_var_1.unset();
            return tmp_var_3;
        }
    }();
    if (UNEXPECTED(!(tmp_var_4.isNull() || tmp_var_4.isArray()))) {
        php::throwReturnTypeError(tmp_var_4, get_str(592), get_str(91), false);
    }
    return tmp_var_4;
}

php::Array php_nativeplaywright__request__timing(php::Object &this_) {
    php::Float tmp_var_0 = 0;
    php::Float tmp_var_1 = 0;
    php::Float tmp_var_2 = 0;
    php::Float tmp_var_3 = 0;
    php::Float tmp_var_4 = 0;
    php::Float tmp_var_5 = 0;
    php::Var tmp_var_6;
    php::Array tmp_var_7;
    php::Float &_object_prop_this___startTime = this_.attrFloat(get_persistent_prop(PersistentPropertyId{61}, get_str(573), get_str(559)));
    php::Float &_object_prop_this___endTime = this_.attrFloat(get_persistent_prop(PersistentPropertyId{74}, get_str(593), get_str(559)));

    tmp_var_0 = php::toFloat(_object_prop_this___startTime);
    tmp_var_1 = php::toFloat(((tmp_var_0) * (php::toFloat(1000L))));
    tmp_var_6 = [&]() -> php::Var {
            tmp_var_2 = php::toFloat(_object_prop_this___endTime);
            if (php::toBool(((tmp_var_2) < (php::toFloat(0L))))) {
                return php::Var(-1L);
            } else {
                tmp_var_3 = php::toFloat(_object_prop_this___endTime);
                tmp_var_4 = php::toFloat(_object_prop_this___startTime);
                tmp_var_5 = php::toFloat(((tmp_var_3) - (tmp_var_4)));
                return php::Var(((tmp_var_5) * (php::toFloat(1000L))));
            }
        }();
    tmp_var_7 = (php::Array{
        { get_str(573).str(), php::Var(tmp_var_1) }, 
        { get_str(594).str(), php::Var(tmp_var_6) }
    });
    tmp_var_6.unset();
    return tmp_var_7;
}

php::Array php_nativeplaywright__request__sizes(php::Object &this_) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Int tmp_var_3 = 0;
    php::Object tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Int tmp_var_8 = 0;
    php::Array tmp_var_9;

    if (get_function_resolution_cache(FunctionResolutionCacheId{75}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{75}) = php::fn::function_exists(get_str(208)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{75}) == 1 ? get_func(RequestFuncId{13}, get_str(208)) : get_persistent_func(PersistentFuncId{14}, get_str(209));
    tmp_var_1 = php::toString(this_.attr(get_persistent_prop(PersistentPropertyId{66}, get_str(576), get_str(559)), php::AttrMode::Get));
    tmp_var_2 = php::call(tmp_var_0, php::VarList{tmp_var_1});
    tmp_var_1.unset();
    auto tmp_var_4 = [&]() -> php::Var {
            tmp_var_5 = (this_.isObject() ? typephp_read_property_scoped(this_, get_str(590), get_persistent_class(PersistentClassId{22}, get_str(559)), php::AttrMode::Isset) : php::Var{});
            if (tmp_var_5.isNull() || tmp_var_5.isUndef()) {
                return php::null;
            }
            tmp_var_6 = (tmp_var_5.isObject() ? typephp_read_property_scoped(tmp_var_5, get_str(596), get_persistent_class(PersistentClassId{21}, get_str(539)), php::AttrMode::Isset) : php::Var{});
            return tmp_var_6;
        };
    tmp_var_7 = tmp_var_4();
    if (php::exists(tmp_var_7)) {
            tmp_var_3 = php::toInt(tmp_var_7);
        } else {
            tmp_var_3 = php::toInt(0L);
        }
    tmp_var_8 = php::toInt(tmp_var_3);
    tmp_var_6.unset();
    tmp_var_5.unset();
    tmp_var_7.unset();
    tmp_var_9 = (php::Array{
        { get_str(595).str(), php::Var(tmp_var_2) }, 
        { get_str(597).str(), php::Var(tmp_var_8) }
    });
    tmp_var_2.unset();
    return tmp_var_9;
}


ZEND_METHOD(NativePlaywright_Request, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(9, 10, false);
        php::Object arg_page = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{14}, get_str(474))); })(php::getCallArg(0));
        php::Var raw_arg_id = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_id.isString()))) {
            php::throwArgumentTypeError(raw_arg_id, get_str(575), 2, get_str(117), get_str(98));
        }
        php::Str arg_id = php::toString(raw_arg_id);
        php::Var raw_arg_url = php::getCallArg(2);
        if (UNEXPECTED(!(raw_arg_url.isString()))) {
            php::throwArgumentTypeError(raw_arg_url, get_str(575), 3, get_str(202), get_str(98));
        }
        php::Str arg_url = php::toString(raw_arg_url);
        php::Var raw_arg_method = php::getCallArg(3);
        if (UNEXPECTED(!(raw_arg_method.isString()))) {
            php::throwArgumentTypeError(raw_arg_method, get_str(575), 4, get_str(100), get_str(98));
        }
        php::Str arg_method = php::toString(raw_arg_method);
        php::Array arg_headers = php::toArray(php::getCallArg(4));
        php::Var arg_postData = php::getCallArg(5);
        php::Var raw_arg_resourceType = php::getCallArg(6);
        if (UNEXPECTED(!(raw_arg_resourceType.isString()))) {
            php::throwArgumentTypeError(raw_arg_resourceType, get_str(575), 7, get_str(585), get_str(98));
        }
        php::Str arg_resourceType = php::toString(raw_arg_resourceType);
        php::Var raw_arg_frameId = php::getCallArg(7);
        if (UNEXPECTED(!(raw_arg_frameId.isString()))) {
            php::throwArgumentTypeError(raw_arg_frameId, get_str(575), 8, get_str(587), get_str(98));
        }
        php::Str arg_frameId = php::toString(raw_arg_frameId);
        php::Var raw_arg_isNavigation = php::getCallArg(8);
        if (UNEXPECTED(!(raw_arg_isNavigation.isBool()))) {
            php::throwArgumentTypeError(raw_arg_isNavigation, get_str(575), 9, get_str(586), get_str(106));
        }
        php::Bool arg_isNavigation = php::toBool(raw_arg_isNavigation);
        php::Object arg_redirectedFrom = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{22}, get_str(559))); })(php::getCallArg(9, php_nativeplaywright__request____construct_arg_9_default_value()));
        php_nativeplaywright__request____construct(this_, php::takeValue(arg_page),php::takeValue(arg_id),php::takeValue(arg_url),php::takeValue(arg_method),php::takeValue(arg_headers),php::takeValue(arg_postData),php::takeValue(arg_resourceType),php::takeValue(arg_frameId),arg_isNavigation,php::takeValue(arg_redirectedFrom));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, url) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__url(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, method) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__method(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, headers) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__headers(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, allHeaders) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__allheaders(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, headerValue) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(577), 1, get_str(254), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        auto retval = php_nativeplaywright__request__headervalue(this_, php::takeValue(arg_name));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, postData) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__postdata(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, postDataJSON) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__postdatajson(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, resourceType) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__resourcetype(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, isNavigationRequest) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__isnavigationrequest(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, frameId) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__frameid(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, frame) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__frame(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, page) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__page(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, redirectedFrom) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__redirectedfrom(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, redirectedTo) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__redirectedto(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, response) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__response(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, failure) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__failure(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, timing) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__timing(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Request, sizes) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__request__sizes(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

