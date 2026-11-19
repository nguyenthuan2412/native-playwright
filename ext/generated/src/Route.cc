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
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Request_db667c6252_decl.h>
#include <php_native_playwright_src_NativePlaywright_Route_83d7a76f49_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

void php_nativeplaywright__route____construct(php::Object &this_, php::Object page, php::Str interceptId, php::Object request) {
typephp_write_property_scoped(this_, "page", page, get_persistent_class(PersistentClassId{23}, get_str(599)));
typephp_write_property_scoped(this_, "interceptId", interceptId, get_persistent_class(PersistentClassId{23}, get_str(599)));
typephp_write_property_scoped(this_, "request", request, get_persistent_class(PersistentClassId{23}, get_str(599)));

}

php::Object php_nativeplaywright__route__request(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{76}, get_str(547), get_str(599)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Bool php_nativeplaywright__route__ishandled(php::Object &this_) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{77}, get_str(530), get_str(599)), php::AttrMode::Get)));
    return tmp_var_0;
}

void php_nativeplaywright__route__claim(php::Object &this_, php::Str op) {
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{0}, get_str(75));

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{77}, get_str(530), get_str(599)), php::AttrMode::Get))) {
        php::throwException(php::newObject(tmp_var_0, php::VarList{php::concat({get_str(600), op, get_str(230)})}));
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{77}, get_str(530), get_str(599)), php::AttrMode::Update) = true;
}

void php_nativeplaywright__route__abort(php::Object &this_, php::Str errorCode) {
    php::Array map;
    php::Var tmp_var_0;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    zend_function * tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;

    php_nativeplaywright__route__claim(this_, get_str(602));
    map = php::Array{
        { get_str(604).str(), php::Var(get_str(603)) }, 
        { get_str(606).str(), php::Var(get_str(605)) }, 
        { get_str(608).str(), php::Var(get_str(607)) }, 
        { get_str(610).str(), php::Var(get_str(609)) }, 
        { get_str(612).str(), php::Var(get_str(611)) }, 
        { get_str(614).str(), php::Var(get_str(613)) }, 
        { get_str(616).str(), php::Var(get_str(615)) }, 
        { get_str(618).str(), php::Var(get_str(617)) }, 
        { get_str(620).str(), php::Var(get_str(619)) }, 
        { get_str(622).str(), php::Var(get_str(621)) }, 
        { get_str(624).str(), php::Var(get_str(623)) }, 
        { get_str(626).str(), php::Var(get_str(625)) }, 
        { get_str(628).str(), php::Var(get_str(627)) }, 
        { get_str(18).str(), php::Var(get_str(629)) }
    };
    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{78}, get_str(433), get_str(599)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{79}, get_str(631), get_str(599)), php::AttrMode::Get);
    if (get_function_resolution_cache(FunctionResolutionCacheId{76}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{76}) = php::fn::function_exists(get_str(257)) ? 1 : 2; }
    tmp_var_4 = get_function_resolution_cache(FunctionResolutionCacheId{76}) == 1 ? get_func(RequestFuncId{19}, get_str(257)) : get_persistent_func(PersistentFuncId{23}, get_str(258));
    if (php::exists(map, {{php::ArrayDimFetch, php::Var(php::call(tmp_var_4, php::VarList{errorCode}))}}, tmp_var_5)) {
            tmp_var_3 = tmp_var_5;
        } else {
            tmp_var_3 = get_str(629);
        }
    tmp_var_6 = tmp_var_3;
    tmp_var_7 = php::Array{
        { get_str(567).str(), php::Var(tmp_var_2) }, 
        { get_str(632).str(), php::Var(tmp_var_6) }
    };
    tmp_var_2.unset();
    tmp_var_6.unset();
    php_nativeplaywright__page__send(tmp_var_1, get_str(630), tmp_var_7);
    tmp_var_0.unset();
    tmp_var_7.unset();
}

void php_nativeplaywright__route__continue(php::Object &this_, php::Array overrides) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Array p;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Object tmp_var_6;
    php::Var tmp_var_7;
    zend_function * tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    Z_PTR_P(tmp_var_6.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    php_nativeplaywright__route__claim(this_, get_str(633));
    if (get_function_resolution_cache(FunctionResolutionCacheId{77}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{77}) = php::fn::function_exists(get_str(452)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{77}) == 1 ? get_func(RequestFuncId{30}, get_str(452)) : get_persistent_func(PersistentFuncId{34}, get_str(453));
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{80}, get_str(634), get_str(599)), php::AttrMode::Get);
    overrides = php::call(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), overrides});
    tmp_var_1.unset();
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{79}, get_str(631), get_str(599)), php::AttrMode::Get);
    p = php::Array{
        { get_str(567).str(), php::Var(tmp_var_2) }
    };
    tmp_var_2.unset();
    if (php::toBool(php::exists(overrides, {{php::ArrayDimFetch, php::Var(get_str(203))}}))) {
        ((tmp_var_3 = php::toString(overrides.get(get_str(203))), p.item(get_str(203), true) = tmp_var_3), tmp_var_3);
    }
    if (php::toBool(php::exists(overrides, {{php::ArrayDimFetch, php::Var(get_str(100))}}))) {
        ((tmp_var_4 = php::toString(overrides.get(get_str(100))), p.item(get_str(100), true) = tmp_var_4), tmp_var_4);
    }
    if (php::toBool(php::exists(overrides, {{php::ArrayDimFetch, php::Var(get_str(543))}}))) {
        tmp_var_5 = php::toArray(overrides.get(get_str(543)));
        ((tmp_var_7 = php_nativeplaywright__util__headersarray(tmp_var_6, tmp_var_5), p.item(get_str(543), true) = tmp_var_7), tmp_var_7);
        tmp_var_5.unset();
    }
    if (php::toBool(php::exists(overrides, {{php::ArrayDimFetch, php::Var(get_str(577))}}))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{78}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{78}) = php::fn::function_exists(get_str(635)) ? 1 : 2; }
        tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{78}) == 1 ? get_func(RequestFuncId{37}, get_str(635)) : get_persistent_func(PersistentFuncId{41}, get_str(636));
        tmp_var_9 = php::toString(overrides.get(get_str(577)));
        ((tmp_var_10 = php::call(tmp_var_8, php::VarList{tmp_var_9}), p.item(get_str(577), true) = tmp_var_10), tmp_var_10);
        tmp_var_9.unset();
    }
    tmp_var_11 = this_.attr(get_persistent_prop(PersistentPropertyId{78}, get_str(433), get_str(599)), php::AttrMode::Get);
    php::Object tmp_var_12 = tmp_var_11;
    php_nativeplaywright__page__send(tmp_var_12, get_str(637), p);
    tmp_var_11.unset();
}

void php_nativeplaywright__route__fallback(php::Object &this_, php::Array overrides) {
    zend_function * tmp_var_1;
    php::Var tmp_var_2;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{0}, get_str(75));

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{77}, get_str(530), get_str(599)), php::AttrMode::Get))) {
        php::throwException(php::newObject(tmp_var_0, php::VarList{get_str(638)}));
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{81}, get_str(639), get_str(599)), php::AttrMode::Update) = true;
    if (get_function_resolution_cache(FunctionResolutionCacheId{79}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{79}) = php::fn::function_exists(get_str(452)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{79}) == 1 ? get_func(RequestFuncId{30}, get_str(452)) : get_persistent_func(PersistentFuncId{34}, get_str(453));
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{80}, get_str(634), get_str(599)), php::AttrMode::Get);
    this_.attr(get_persistent_prop(PersistentPropertyId{80}, get_str(634), get_str(599)), php::AttrMode::Update) = php::toArrayExact(php::call(tmp_var_1, php::VarList{php::deindirect(tmp_var_2), overrides}), "NativePlaywright\\Route::$fallbackOverrides");
    tmp_var_2.unset();
}

void php_nativeplaywright__route__fulfill(php::Object &this_, php::Array options) {
    php::Array headers;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Str body = php::empty_string;
    zend_function * tmp_var_2;
    zend_function * tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Str path;
    zend_function * tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Object tmp_var_14;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Array lower;
    zend_function * tmp_var_19;
    php::Var tmp_var_20;
    php::Int status = 0;
    php::Var tmp_var_21;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_25;
    php::Var tmp_var_26;
    zend_function * tmp_var_27;
    php::Var tmp_var_28;
    php::Var tmp_var_29;
    Z_PTR_P(tmp_var_14.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    php_nativeplaywright__route__claim(this_, get_str(640));
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(543))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::Array{};
    }
    headers = php::toArray(tmp_var_0);
    if (get_function_resolution_cache(FunctionResolutionCacheId{80}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{80}) = php::fn::function_exists(get_str(641)) ? 1 : 2; }
    tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{80}) == 1 ? get_func(RequestFuncId{38}, get_str(641)) : get_persistent_func(PersistentFuncId{42}, get_str(642));
    if (php::toBool(php::call(tmp_var_2, php::VarList{get_str(282), options}))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{81}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{81}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
        tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{81}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
        tmp_var_4 = options.get(get_str(282));
        tmp_var_5 = php::constant(get_str(0), php::ConstantLookup::UnqualifiedInNamespace);
        tmp_var_6 = php::constant(get_str(1), php::ConstantLookup::UnqualifiedInNamespace);
        tmp_var_7 = ((php::Var(tmp_var_5)) | (php::Var(tmp_var_6)));
        tmp_var_5.unset();
        tmp_var_6.unset();
        body = php::toString(php::call(tmp_var_3, php::VarList{php::deindirect(tmp_var_4), tmp_var_7}));
        tmp_var_4.unset();
        tmp_var_7.unset();
        if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(643))}}, tmp_var_9)) {
            tmp_var_8 = tmp_var_9;
        } else {
            tmp_var_8 = get_str(283);
        }
        ((tmp_var_10 = tmp_var_8, headers.item(get_str(582), true) = tmp_var_10), tmp_var_10);
    } else {
        if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(243))}}))) {
            path = php::toString(options.get(get_str(243)));
            if (get_function_resolution_cache(FunctionResolutionCacheId{82}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{82}) = php::fn::function_exists(get_str(644)) ? 1 : 2; }
            tmp_var_11 = get_function_resolution_cache(FunctionResolutionCacheId{82}) == 1 ? get_func(RequestFuncId{39}, get_str(644)) : get_persistent_func(PersistentFuncId{43}, get_str(645));
            body = php::toString(php::call(tmp_var_11, php::VarList{path}));
            if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(643))}}, tmp_var_13)) {
                tmp_var_12 = tmp_var_13;
            } else {
                tmp_var_12 = php_nativeplaywright__util__mimetype(tmp_var_14, path);
            }
            ((tmp_var_15 = tmp_var_12, headers.item(get_str(582), true) = tmp_var_15), tmp_var_15);
        } else {
            if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(564))}}, tmp_var_17)) {
                tmp_var_16 = tmp_var_17;
            } else {
                tmp_var_16 = php::empty_string;
            }
            body = php::toString(tmp_var_16);
            if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(643))}}))) {
                ((tmp_var_18 = php::toString(options.get(get_str(643))), headers.item(get_str(582), true) = tmp_var_18), tmp_var_18);
            }
        }
    }
    lower = php_nativeplaywright__util__lowerheaders(tmp_var_14, headers);
    if (php::toBool(!(php::toBool(php::exists(lower, {{php::ArrayDimFetch, php::Var(get_str(646))}}))))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{83}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{83}) = php::fn::function_exists(get_str(209)) ? 1 : 2; }
        tmp_var_19 = get_function_resolution_cache(FunctionResolutionCacheId{83}) == 1 ? get_func(RequestFuncId{13}, get_str(209)) : get_persistent_func(PersistentFuncId{16}, get_str(210));
        ((tmp_var_20 = php::toString(php::call(tmp_var_19, php::VarList{body})), headers.item(get_str(646), true) = tmp_var_20), tmp_var_20);
    }
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(541))}}, tmp_var_22)) {
        tmp_var_21 = tmp_var_22;
    } else {
        tmp_var_21 = 200L;
    }
    status = php::toInt(tmp_var_21);
    tmp_var_23 = this_.attr(get_persistent_prop(PersistentPropertyId{78}, get_str(433), get_str(599)), php::AttrMode::Get);
    php::Object tmp_var_24 = tmp_var_23;
    tmp_var_25 = this_.attr(get_persistent_prop(PersistentPropertyId{79}, get_str(631), get_str(599)), php::AttrMode::Get);
    tmp_var_26 = php_nativeplaywright__util__headersarray(tmp_var_14, headers);
    if (get_function_resolution_cache(FunctionResolutionCacheId{84}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{84}) = php::fn::function_exists(get_str(635)) ? 1 : 2; }
    tmp_var_27 = get_function_resolution_cache(FunctionResolutionCacheId{84}) == 1 ? get_func(RequestFuncId{37}, get_str(635)) : get_persistent_func(PersistentFuncId{41}, get_str(636));
    tmp_var_28 = php::call(tmp_var_27, php::VarList{body});
    tmp_var_29 = php::Array{
        { get_str(567).str(), php::Var(tmp_var_25) }, 
        { get_str(648).str(), php::Var(status) }, 
        { get_str(649).str(), php::Var(tmp_var_26) }, 
        { get_str(564).str(), php::Var(tmp_var_28) }
    };
    tmp_var_25.unset();
    tmp_var_26.unset();
    tmp_var_28.unset();
    php_nativeplaywright__page__send(tmp_var_24, get_str(647), tmp_var_29);
    tmp_var_23.unset();
    tmp_var_29.unset();
}


ZEND_METHOD(NativePlaywright_Route, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(3, 3, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(475)));
        php::Var raw_arg_interceptId = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_interceptId.isString()))) {
            php::throwArgumentTypeError(raw_arg_interceptId, get_str(650), 2, get_str(631), get_str(98));
        }
        php::Str arg_interceptId = php::toString(raw_arg_interceptId);
        php::Object arg_request = php::toObject(php::getCallArg(2), get_persistent_class(PersistentClassId{22}, get_str(560)));
        php_nativeplaywright__route____construct(this_, php::takeValue(arg_page),php::takeValue(arg_interceptId),php::takeValue(arg_request));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Route, request) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__route__request(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Route, isHandled) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__route__ishandled(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Route, claim) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_op = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_op.isString()))) {
            php::throwArgumentTypeError(raw_arg_op, get_str(651), 1, get_str(652), get_str(98));
        }
        php::Str arg_op = php::toString(raw_arg_op);
        php_nativeplaywright__route__claim(this_, php::takeValue(arg_op));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Route, abort) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Var raw_arg_errorCode = php::getCallArg(0, php_nativeplaywright__route__abort_arg_0_default_value());
        if (UNEXPECTED(!(raw_arg_errorCode.isString()))) {
            php::throwArgumentTypeError(raw_arg_errorCode, get_str(653), 1, get_str(654), get_str(98));
        }
        php::Str arg_errorCode = php::toString(raw_arg_errorCode);
        php_nativeplaywright__route__abort(this_, php::takeValue(arg_errorCode));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Route, continue) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_overrides = php::toArray(php::getCallArg(0, php_nativeplaywright__route__continue_arg_0_default_value()));
        php_nativeplaywright__route__continue(this_, php::takeValue(arg_overrides));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Route, fallback) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_overrides = php::toArray(php::getCallArg(0, php_nativeplaywright__route__fallback_arg_0_default_value()));
        php_nativeplaywright__route__fallback(this_, php::takeValue(arg_overrides));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Route, fulfill) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__route__fulfill_arg_0_default_value()));
        php_nativeplaywright__route__fulfill(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

