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
#include <php_native_playwright_src_NativePlaywright_FrameLocator_98aef2ee5b_decl.h>
#include <php_native_playwright_src_NativePlaywright_Frame_07e74a6952_decl.h>
#include <php_native_playwright_src_NativePlaywright_Injected_9eb67510a3_decl.h>
#include <php_native_playwright_src_NativePlaywright_Locator_206b2f41f4_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Response_f8b49507a2_decl.h>
#include <php_native_playwright_src_NativePlaywright_TimeoutError_7a8c4a04a5_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

void php_nativeplaywright__frame____construct(php::Object &this_, php::Object page, php::Str id, php::Str parentId) {
typephp_write_property_scoped(this_, "page", page, get_persistent_class(PersistentClassId{12}, get_str(326)));
typephp_write_property_scoped(this_, "id", id, get_persistent_class(PersistentClassId{12}, get_str(326)));
typephp_write_property_scoped(this_, "parentId", parentId, get_persistent_class(PersistentClassId{12}, get_str(326)));

}

php::Object php_nativeplaywright__frame__page(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__frame__url(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{127}, get_str(203), get_str(326)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__frame__name(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{128}, get_str(255), get_str(326)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Bool php_nativeplaywright__frame__isdetached(php::Object &this_) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{129}, get_str(894), get_str(326)), php::AttrMode::Get)));
    return tmp_var_0;
}

php::Object php_nativeplaywright__frame__parentframe(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;

    tmp_var_6 = [&]() -> php::Var {
        tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{130}, get_str(817), get_str(326)), php::AttrMode::Get);
        tmp_var_4 = php::same(tmp_var_0, php::empty_string);
        tmp_var_0.unset();
        if (php::toBool(tmp_var_4)) {
            return php::Var(php::null);
        } else {
            tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
            php::Object tmp_var_2 = tmp_var_1;
            tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{130}, get_str(817), get_str(326)), php::AttrMode::Get);
            tmp_var_5 = php_nativeplaywright__page__framebyid(tmp_var_2, php::deindirect(tmp_var_3));
            tmp_var_1.unset();
            tmp_var_3.unset();
            return tmp_var_5;
        }
    }();
    if (UNEXPECTED(!(tmp_var_6.isNull() || (tmp_var_6.isObject() && php::instanceOf(tmp_var_6, get_persistent_class(PersistentClassId{12}, get_str(326))))))) {
        php::throwReturnTypeError(tmp_var_6, get_str(1203), get_str(549), false);
    }
    return tmp_var_6;
}

php::Array php_nativeplaywright__frame__childframes(php::Object &this_) {
    php::Array out;
    php::Var tmp_var_0;
    php::Var tmp_var_2;
    php::Var f;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Bool tmp_var_7 = 0;
    zend_class_entry *tmp_var_4 = get_persistent_class(PersistentClassId{12}, get_str(326));

    out = php::Array{};
    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;

    tmp_var_2 = php_nativeplaywright__page__frames(tmp_var_1);
    {
        php::ForeachIterator tmp_var_3{tmp_var_2, false, tmp_var_4};
        while (tmp_var_3.next()) {
            f = tmp_var_3.value();
            tmp_var_5 = typephp_read_property_cached(f, get_str(817), php::AttrMode::Get, get_property_cache(PropertyCacheId{106}));
            tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{131}, get_str(118), get_str(326)), php::AttrMode::Get);
            tmp_var_7 = php::toBool(php::same(tmp_var_5, tmp_var_6));
            tmp_var_5.unset();
            tmp_var_6.unset();
            if (php::toBool(tmp_var_7)) {
                out.appendValue(f);
            }
        }
    }
    return out;
}

void php_nativeplaywright__frame__resetcontexts(php::Object &this_) {
    php::Int &_object_prop_this___mainContext = this_.attrInt(get_persistent_prop(PersistentPropertyId{132}, get_str(859), get_str(326)));
    php::Int &_object_prop_this___utilContext = this_.attrInt(get_persistent_prop(PersistentPropertyId{133}, get_str(860), get_str(326)));
    php::Int &_object_prop_this___injectedContext = this_.attrInt(get_persistent_prop(PersistentPropertyId{134}, get_str(1204), get_str(326)));

    _object_prop_this___mainContext = 0L;
    _object_prop_this___utilContext = 0L;
    _object_prop_this___injectedContext = 0L;
}

void php_nativeplaywright__frame__contextdestroyed(php::Object &this_, php::Int id) {
    php::Int tmp_var_0 = 0;
    php::Int tmp_var_1 = 0;
    php::Int &_object_prop_this___mainContext = this_.attrInt(get_persistent_prop(PersistentPropertyId{132}, get_str(859), get_str(326)));
    php::Int &_object_prop_this___utilContext = this_.attrInt(get_persistent_prop(PersistentPropertyId{133}, get_str(860), get_str(326)));
    php::Int &_object_prop_this___injectedContext = this_.attrInt(get_persistent_prop(PersistentPropertyId{134}, get_str(1204), get_str(326)));

    tmp_var_0 = php::toInt(_object_prop_this___mainContext);
    if (php::toBool(tmp_var_0 == id)) {
        _object_prop_this___mainContext = 0L;
    }
    tmp_var_1 = php::toInt(_object_prop_this___utilContext);
    if (php::toBool(tmp_var_1 == id)) {
        _object_prop_this___utilContext = 0L;
        _object_prop_this___injectedContext = 0L;
    }
}

php::Bool php_nativeplaywright__frame__iscontextlost(php::Object &this_, php::Str msg) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    zend_function * tmp_var_2;
    php::Bool tmp_var_3 = 0;
    zend_function * tmp_var_4;
    php::Bool tmp_var_5 = 0;
    zend_function * tmp_var_6;
    php::Bool tmp_var_7 = 0;
    zend_function * tmp_var_8;
    php::Bool tmp_var_9 = 0;
    zend_function * tmp_var_10;
    php::Bool tmp_var_11 = 0;
    zend_function * tmp_var_12;
    php::Bool tmp_var_13 = 0;

    if (get_function_resolution_cache(FunctionResolutionCacheId{143}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{143}) = php::fn::function_exists(get_str(196)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{143}) == 1 ? get_func(RequestFuncId{11}, get_str(196)) : get_persistent_func(PersistentFuncId{14}, get_str(197));
    tmp_var_1 = php::call(tmp_var_0, php::VarList{msg, get_str(1205)});
    tmp_var_3 = php::toBool([&]() -> bool {
        if (!(php::toBool(tmp_var_1))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{144}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{144}) = php::fn::function_exists(get_str(196)) ? 1 : 2; }
            tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{144}) == 1 ? get_func(RequestFuncId{11}, get_str(196)) : get_persistent_func(PersistentFuncId{14}, get_str(197));
            return php::toBool(php::call(tmp_var_2, php::VarList{msg, get_str(1206)}));
        }
        return true;
    }());
    tmp_var_1.unset();
    tmp_var_5 = php::toBool([&]() -> bool {
        if (!(php::toBool(tmp_var_3))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{145}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{145}) = php::fn::function_exists(get_str(196)) ? 1 : 2; }
            tmp_var_4 = get_function_resolution_cache(FunctionResolutionCacheId{145}) == 1 ? get_func(RequestFuncId{11}, get_str(196)) : get_persistent_func(PersistentFuncId{14}, get_str(197));
            return php::toBool(php::call(tmp_var_4, php::VarList{msg, get_str(1207)}));
        }
        return true;
    }());
    tmp_var_7 = php::toBool([&]() -> bool {
        if (!(php::toBool(tmp_var_5))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{146}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{146}) = php::fn::function_exists(get_str(196)) ? 1 : 2; }
            tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{146}) == 1 ? get_func(RequestFuncId{11}, get_str(196)) : get_persistent_func(PersistentFuncId{14}, get_str(197));
            return php::toBool(php::call(tmp_var_6, php::VarList{msg, get_str(1208)}));
        }
        return true;
    }());
    tmp_var_9 = php::toBool([&]() -> bool {
        if (!(php::toBool(tmp_var_7))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{147}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{147}) = php::fn::function_exists(get_str(196)) ? 1 : 2; }
            tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{147}) == 1 ? get_func(RequestFuncId{11}, get_str(196)) : get_persistent_func(PersistentFuncId{14}, get_str(197));
            return php::toBool(php::call(tmp_var_8, php::VarList{msg, get_str(1209)}));
        }
        return true;
    }());
    tmp_var_11 = php::toBool([&]() -> bool {
        if (!(php::toBool(tmp_var_9))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{148}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{148}) = php::fn::function_exists(get_str(196)) ? 1 : 2; }
            tmp_var_10 = get_function_resolution_cache(FunctionResolutionCacheId{148}) == 1 ? get_func(RequestFuncId{11}, get_str(196)) : get_persistent_func(PersistentFuncId{14}, get_str(197));
            return php::toBool(php::call(tmp_var_10, php::VarList{msg, get_str(1210)}));
        }
        return true;
    }());
    tmp_var_13 = (php::toBool([&]() -> bool {
        if (!(php::toBool(tmp_var_11))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{149}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{149}) = php::fn::function_exists(get_str(196)) ? 1 : 2; }
            tmp_var_12 = get_function_resolution_cache(FunctionResolutionCacheId{149}) == 1 ? get_func(RequestFuncId{11}, get_str(196)) : get_persistent_func(PersistentFuncId{14}, get_str(197));
            return php::toBool(php::call(tmp_var_12, php::VarList{msg, get_str(1211)}));
        }
        return true;
    }()));
    return tmp_var_13;
}

php::Int php_nativeplaywright__frame__ensureutil(php::Object &this_) {
    php::Int tmp_var_0 = 0;
    php::Bool tmp_var_1 = 0;
    php::Int tmp_var_2 = 0;
    php::Int tmp_var_3 = 0;
    php::Int tmp_var_4 = 0;
    php::Int tmp_var_5 = 0;
    php::Var r;
    php::Var tmp_var_6;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Int ctx = 0;
    php::Var tmp_var_11;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Var tmp_var_21;
    php::Var tmp_var_22;
    zend_class_entry *tmp_var_15 = get_persistent_class(PersistentClassId{0}, get_str(75));
    php::Int &_object_prop_this___utilContext = this_.attrInt(get_persistent_prop(PersistentPropertyId{133}, get_str(860), get_str(326)));
    php::Int &_object_prop_this___injectedContext = this_.attrInt(get_persistent_prop(PersistentPropertyId{134}, get_str(1204), get_str(326)));

    tmp_var_0 = php::toInt(_object_prop_this___utilContext);
    tmp_var_1 = php::toBool(!(tmp_var_0 == 0L));
    if (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_1)) {
            tmp_var_2 = php::toInt(_object_prop_this___injectedContext);
            tmp_var_3 = php::toInt(_object_prop_this___utilContext);
            return php::toBool(tmp_var_2 == tmp_var_3);
        }
        return false;
    }())) {
        tmp_var_4 = (php::toInt(_object_prop_this___utilContext));
        return tmp_var_4;
    }
    tmp_var_5 = php::toInt(_object_prop_this___utilContext);
    if (php::toBool(tmp_var_5 == 0L)) {
        tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
        php::Object tmp_var_7 = tmp_var_6;
        tmp_var_8 = this_.attr(get_persistent_prop(PersistentPropertyId{131}, get_str(118), get_str(326)), php::AttrMode::Get);
        tmp_var_9 = get_str(15);
        tmp_var_10 = php::Array{
            { get_str(588).str(), php::Var(tmp_var_8) }, 
            { get_str(1213).str(), php::Var(tmp_var_9) }, 
            { get_str(1214).str(), php::Var(true) }
        };
        tmp_var_8.unset();
        tmp_var_9.unset();
        r = php_nativeplaywright__page__send(tmp_var_7, get_str(1212), tmp_var_10);
        tmp_var_6.unset();
        tmp_var_10.unset();
        _object_prop_this___utilContext = php::toInt(r.item(get_str(721), false));
    }
    ctx = php::toInt(_object_prop_this___utilContext);
    tmp_var_11 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_12 = tmp_var_11;
    tmp_var_13 = get_str(16);
    tmp_var_14 = php::Array{
        { get_str(968).str(), php::Var(tmp_var_13) }, 
        { get_str(969).str(), php::Var(ctx) }, 
        { get_str(719).str(), php::Var(true) }
    };
    tmp_var_13.unset();
    r = php_nativeplaywright__page__send(tmp_var_12, get_str(967), tmp_var_14);
    tmp_var_11.unset();
    tmp_var_14.unset();
    if (php::toBool(php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(723))}}))) {
        if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(723))}, {php::ArrayDimFetch, php::Var(get_str(725))}, {php::ArrayDimFetch, php::Var(get_str(420))}}, tmp_var_17)) {
            tmp_var_16 = tmp_var_17;
        } else {
            if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(723))}, {php::ArrayDimFetch, php::Var(get_str(329))}}, tmp_var_19)) {
            tmp_var_18 = tmp_var_19;
        } else {
            tmp_var_18 = php::empty_string;
        }
            tmp_var_16 = tmp_var_18;
        }
        tmp_var_20 = php::toString(tmp_var_16);
        tmp_var_21 = php::concat({get_str(1215), tmp_var_20});
        tmp_var_20.unset();
        tmp_var_22 = php::newObject(tmp_var_15, php::VarList{tmp_var_21});
        tmp_var_21.unset();
        php::throwValue(php::takeValue(tmp_var_22));
    }
    _object_prop_this___injectedContext = ctx;
    return php::toInt(ctx);
}

php::Array php_nativeplaywright__frame__utilcall(php::Object &this_, php::Str expression, php::Bool byValue) {
    php::Int attempt = 0;
    php::Int ctx = 0;
    php::Var r;
    php::Var tmp_var_0;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Object e;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Bool tmp_var_7 = 0;
    php::Array d;
    php::Str msg;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    zend_function * tmp_var_12;
    zend_function * tmp_var_13;
    php::Var tmp_var_14;
    php::Array tmp_var_16;
    zend_class_entry *tmp_var_15 = get_persistent_class(PersistentClassId{0}, get_str(75));

    attempt = php::toInt(0L);
    
    for (;; ++attempt) {
        try {
            ctx = php::toInt(php_nativeplaywright__frame__ensureutil(this_));
            tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
            php::Object tmp_var_1 = tmp_var_0;
            tmp_var_2 = php::Array{
                { get_str(968).str(), php::Var(expression) }, 
                { get_str(969).str(), php::Var(ctx) }, 
                { get_str(719).str(), php::Var(byValue) }, 
                { get_str(720).str(), php::Var(true) }
            };
            r = php_nativeplaywright__page__send(tmp_var_1, get_str(967), tmp_var_2);
            tmp_var_0.unset();
            tmp_var_2.unset();
        } catch (zend_object *_ex) {
            tmp_var_3 = php::catchException();
            bool tmp_var_4 = false;
            if (!tmp_var_4 && tmp_var_3 && (php::instanceOf(tmp_var_3, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
                tmp_var_4 = true;
                e = tmp_var_3;
                tmp_var_3 = php::null;
                if (php::toBool([&]() -> bool {
                    if (php::toBool(((attempt) < (3L)))) {
                        tmp_var_5 = typephp_call_method_cached(e, get_str(141), get_method_call_cache(MethodCallCacheId{43}));
                        tmp_var_7 = php::toBool(php_nativeplaywright__frame__iscontextlost(this_, php::toStringArgExact((tmp_var_6 = tmp_var_5), get_str(1217), 1, get_str(1218))));
                        tmp_var_5.unset();
                        return php::toBool(tmp_var_7);
                    }
                    return false;
                }())) {
                    this_.attr(get_persistent_prop(PersistentPropertyId{133}, get_str(860), get_str(326)), php::AttrMode::Update) = 0L;
                    this_.attr(get_persistent_prop(PersistentPropertyId{134}, get_str(1204), get_str(326)), php::AttrMode::Update) = 0L;
                    continue;
                }
                php::throwException(e);
            }
        }
        if (tmp_var_3) {
            php::throwException(php::Object(tmp_var_3));
        }
        if (php::toBool(php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(723))}}))) {
            d = php::toArray(r.item(get_str(723), false));
            if (php::exists(d, {{php::ArrayDimFetch, php::Var(get_str(725))}, {php::ArrayDimFetch, php::Var(get_str(420))}}, tmp_var_9)) {
                tmp_var_8 = tmp_var_9;
            } else {
                if (php::exists(d, {{php::ArrayDimFetch, php::Var(get_str(329))}}, tmp_var_11)) {
                tmp_var_10 = tmp_var_11;
            } else {
                tmp_var_10 = get_str(113);
            }
                tmp_var_8 = tmp_var_10;
            }
            msg = php::toString(tmp_var_8);
            if (php::toBool((php::toBool(((attempt) < (3L))) && php::toBool(php_nativeplaywright__frame__iscontextlost(this_, msg))))) {
                this_.attr(get_persistent_prop(PersistentPropertyId{133}, get_str(860), get_str(326)), php::AttrMode::Update) = 0L;
                this_.attr(get_persistent_prop(PersistentPropertyId{134}, get_str(1204), get_str(326)), php::AttrMode::Update) = 0L;
                continue;
            }
            if (get_function_resolution_cache(FunctionResolutionCacheId{150}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{150}) = php::fn::function_exists(get_str(864)) ? 1 : 2; }
            tmp_var_12 = get_function_resolution_cache(FunctionResolutionCacheId{150}) == 1 ? get_func(RequestFuncId{47}, get_str(864)) : get_persistent_func(PersistentFuncId{51}, get_str(865));
            if (get_function_resolution_cache(FunctionResolutionCacheId{151}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{151}) = php::fn::function_exists(get_str(447)) ? 1 : 2; }
            tmp_var_13 = get_function_resolution_cache(FunctionResolutionCacheId{151}) == 1 ? get_func(RequestFuncId{28}, get_str(447)) : get_persistent_func(PersistentFuncId{32}, get_str(448));
            tmp_var_14 = php::call(tmp_var_13, php::VarList{get_str(1220), msg}).item(0L, false);
            msg = php::call(tmp_var_12, php::VarList{get_str(1219), php::empty_string, php::deindirect(tmp_var_14)});
            tmp_var_14.unset();
            php::throwException(php::newObject(tmp_var_15, php::VarList{msg}));
        }
        tmp_var_16 = (php::toArray(r.item(get_str(131), false)));
        return tmp_var_16;
    }
    return php::null;
}

php::Var php_nativeplaywright__frame__utilvalue(php::Object &this_, php::Str expression) {
    php::Var tmp_var_0;
    php::Object tmp_var_1;
    php::Var tmp_var_2;
    Z_PTR_P(tmp_var_1.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    tmp_var_0 = php_nativeplaywright__frame__utilcall(this_, expression, php::toBool(true));
    tmp_var_2 = (php_nativeplaywright__util__remotevalue(tmp_var_1, tmp_var_0));
    tmp_var_0.unset();
    return tmp_var_2;
}

php::Int php_nativeplaywright__frame__maincontextid(php::Object &this_) {
    php::Var tmp_var_0;
    php::Bool tmp_var_1 = 0;
    php::Object self;
    php::Var tmp_var_2;
    php::Var tmp_var_5;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Int tmp_var_10 = 0;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{132}, get_str(859), get_str(326)), php::AttrMode::Get);
    tmp_var_1 = php::toBool(tmp_var_0 == 0L);
    tmp_var_0.unset();
    if (php::toBool(tmp_var_1)) {
        self = this_;
        tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
        php::Object tmp_var_3 = tmp_var_2;
        php::ClosureFn tmp_var_4 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
        php::checkCallArgCount(0, 0, false);
            php::Object self = php::Object(vars_.get(0));
            php::Var tmp_var_0;
            php::Bool tmp_var_1 = 0;
            php::Var tmp_var_2;
        tmp_var_0 = self.attr(get_persistent_prop(PersistentPropertyId{132}, get_str(859), get_str(326)), php::AttrMode::Get);
        tmp_var_1 = php::toBool(!(tmp_var_0 == 0L));
        tmp_var_0.unset();
        tmp_var_2 = (php::toBool(tmp_var_1) || php::toBool(self.attr(get_persistent_prop(PersistentPropertyId{129}, get_str(894), get_str(326)), php::AttrMode::Get)));
            if (UNEXPECTED(!(tmp_var_2.isBool()))) {
                php::throwReturnTypeError(tmp_var_2, get_str(458), get_str(106), false);
                return php::null;
            }
            return tmp_var_2;};
        tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
        php::Object tmp_var_6 = tmp_var_5;
        tmp_var_7 = php::Array{};
        tmp_var_8 = php_nativeplaywright__page__timeoutseconds(tmp_var_6, tmp_var_7);
        tmp_var_5.unset();
        tmp_var_7.unset();
        php_nativeplaywright__page__waitforcondition(tmp_var_3, php::toObject(php::newClosureWithParameters(tmp_var_4, { self }, this_, get_persistent_class(PersistentClassId{12}, get_str(326)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), php::toFloatArgExact((tmp_var_9 = tmp_var_8), get_str(1145), 2, get_str(102)), get_str(1222));
        tmp_var_2.unset();
        tmp_var_8.unset();
    }
    tmp_var_10 = (php::toInt(this_.attr(get_persistent_prop(PersistentPropertyId{132}, get_str(859), get_str(326)), php::AttrMode::Get)));
    return tmp_var_10;
}

php::Str php_nativeplaywright__frame__adopttomain(php::Object &this_, php::Str objectId) {
    php::Array node;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var r;
    php::Var tmp_var_8;
    php::Var tmp_var_10;
    php::Int tmp_var_11 = 0;
    php::Var tmp_var_12;
    php::Str tmp_var_13;

    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_3 = tmp_var_2;
    tmp_var_4 = php::Array{
        { get_str(712).str(), php::Var(objectId) }
    };
    tmp_var_1=php_nativeplaywright__page__send(tmp_var_3, get_str(1224), tmp_var_4);
    if (php::exists(tmp_var_1, {{php::ArrayDimFetch, php::Var(get_str(1223))}}, tmp_var_5)) {
        tmp_var_0 = tmp_var_5;
    } else {
        tmp_var_0 = php::Array{};
    }
    node = php::toArray(tmp_var_0);
    tmp_var_2.unset();
    tmp_var_4.unset();
    tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_7 = tmp_var_6;
    php_nativeplaywright__page__releaseobject(tmp_var_7, objectId);
    tmp_var_6.unset();
    tmp_var_8 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_9 = tmp_var_8;
    tmp_var_10 = node.get(get_str(521));
    tmp_var_11 = php::toInt(php_nativeplaywright__frame__maincontextid(this_));
    tmp_var_12 = php::Array{
        { get_str(521).str(), php::Var(tmp_var_10) }, 
        { get_str(721).str(), php::Var(tmp_var_11) }
    };
    tmp_var_10.unset();
    r = php_nativeplaywright__page__send(tmp_var_9, get_str(1226), tmp_var_12);
    tmp_var_8.unset();
    tmp_var_12.unset();
    tmp_var_13 = (php::toString(r.item(get_str(1228), false).item(get_str(712), false)));
    return tmp_var_13;
}

php::Array php_nativeplaywright__frame__offset(php::Object &this_) {
    php::Var tmp_var_0;
    php::Bool tmp_var_1 = 0;
    php::Array tmp_var_2;
    php::Object parent;
    php::Array tmp_var_3;
    php::Var owner;
    php::Var tmp_var_4;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var box;
    php::Var tmp_var_8;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Array q;
    php::Float tmp_var_12 = 0;
    php::Float tmp_var_13 = 0;
    php::Array tmp_var_14;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{130}, get_str(817), get_str(326)), php::AttrMode::Get);
    tmp_var_1 = php::toBool(php::same(tmp_var_0, php::empty_string));
    tmp_var_0.unset();
    if (php::toBool(tmp_var_1)) {
        tmp_var_2 = (php::Array{
            php::Var(0.0), 
            php::Var(0.0)
        });
        return tmp_var_2;
    }
    parent = php_nativeplaywright__frame__parentframe(this_);
    if (php::toBool(php::same(parent, php::null))) {
        tmp_var_3 = (php::Array{
            php::Var(0.0), 
            php::Var(0.0)
        });
        return tmp_var_3;
    }
    tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_5 = tmp_var_4;
    tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{131}, get_str(118), get_str(326)), php::AttrMode::Get);
    tmp_var_7 = php::Array{
        { get_str(588).str(), php::Var(tmp_var_6) }
    };
    tmp_var_6.unset();
    owner = php_nativeplaywright__page__send(tmp_var_5, get_str(1230), tmp_var_7);
    tmp_var_4.unset();
    tmp_var_7.unset();
    tmp_var_8 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_9 = tmp_var_8;
    tmp_var_10 = owner.item(get_str(521), false);
    tmp_var_11 = php::Array{
        { get_str(521).str(), php::Var(tmp_var_10) }
    };
    tmp_var_10.unset();
    box = php_nativeplaywright__page__send(tmp_var_9, get_str(1231), tmp_var_11);
    tmp_var_8.unset();
    tmp_var_11.unset();
    q = php::toArray(box.item(get_str(1232), false).item(get_str(1023), false));
    tmp_var_12 = php::toFloat(q.get(0L));
    tmp_var_13 = php::toFloat(q.get(1L));
    tmp_var_14 = (php::Array{
        php::Var(tmp_var_12), 
        php::Var(tmp_var_13)
    });
    return tmp_var_14;
}

php::Str php_nativeplaywright__frame__lifecyclename(php::Object &this_, php::Str waitUntil) {
    php::Str tmp_var_5;
    zend_class_entry *tmp_var_4 = get_persistent_class(PersistentClassId{0}, get_str(75));

    tmp_var_5 = ([&]() -> php::Str {
        bool tmp_var_0 = false;
        if (!tmp_var_0) {
            tmp_var_0 = php::same(waitUntil, get_str(20));
        }
        if (tmp_var_0) {
            return get_str(20);
        }
        bool tmp_var_1 = false;
        if (!tmp_var_1) {
            tmp_var_1 = php::same(waitUntil, get_str(856));
        }
        if (tmp_var_1) {
            return get_str(855);
        }
        bool tmp_var_2 = false;
        if (!tmp_var_2) {
            tmp_var_2 = php::same(waitUntil, get_str(991));
        }
        if (tmp_var_2) {
            return get_str(992);
        }
        bool tmp_var_3 = false;
        if (!tmp_var_3) {
            tmp_var_3 = php::same(waitUntil, get_str(993));
        }
        if (tmp_var_3) {
            return get_str(993);
        }
        {
            php::throwException(php::newObject(tmp_var_4, php::VarList{php::concat({get_str(1233), waitUntil, get_str(1234)})}));
            return {};
        }
    }());
    return tmp_var_5;
}

php::Bool php_nativeplaywright__frame__lifecyclereached(php::Object &this_, php::Str loaderId, php::Str event) {
    php::Var tmp_var_0;
    php::Bool tmp_var_1 = 0;
    php::Bool tmp_var_2 = 0;
    php::Bool tmp_var_3 = 0;
    php::Var tmp_var_4;
    php::Bool tmp_var_5 = 0;
    php::Bool tmp_var_6 = 0;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
    tmp_var_1 = php::toBool(!(php::same(tmp_var_0, loaderId)));
    tmp_var_0.unset();
    if (php::toBool(tmp_var_1)) {
        tmp_var_2 = (php::toBool(false));
        return tmp_var_2;
    }
    if (php::toBool(php::same(event, get_str(993)))) {
        tmp_var_3 = (php::toBool(true));
        return tmp_var_3;
    }
    tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{135}, get_str(853), get_str(326)), php::AttrMode::Get);
    tmp_var_5 = php::toBool(php::same(tmp_var_4, loaderId));
    tmp_var_4.unset();
    tmp_var_6 = (php::toBool((php::toBool(tmp_var_5) && php::toBool(php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{136}, get_str(854), get_str(326)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(event)}})))));
    return tmp_var_6;
}

php::Object php_nativeplaywright__frame__goto(php::Object &this_, php::Str url, php::Array options) {
    php::Var timeout;
    php::Var tmp_var_0;
    php::Str event;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Object tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Object tmp_var_10;
    php::Array p;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var deadline;
    zend_function * tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    php::Var r;
    php::Var tmp_var_16;
    php::Bool tmp_var_18 = 0;
    php::Var tmp_var_19;
    php::Bool tmp_var_20 = 0;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    php::Str loaderId;
    php::Var tmp_var_25;
    php::Var tmp_var_26;
    php::Object tmp_var_27;
    php::Var tmp_var_28;
    php::Var tmp_var_30;
    zend_class_entry *tmp_var_21 = get_persistent_class(PersistentClassId{0}, get_str(75));
    Z_PTR_P(tmp_var_10.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    timeout = php_nativeplaywright__page__navigationtimeoutseconds(tmp_var_1, options);
    tmp_var_0.unset();
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(990))}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_2 = get_str(20);
    }
    tmp_var_4 = php::toString(tmp_var_2);
    event = php_nativeplaywright__frame__lifecyclename(this_, tmp_var_4);
    tmp_var_4.unset();
    tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_6 = tmp_var_5;
    tmp_var_7 = php_nativeplaywright__page__context(tmp_var_6);
    tmp_var_5.unset();
    tmp_var_8 = php_nativeplaywright__browsercontext__baseurl(tmp_var_7);
    tmp_var_7.unset();
    url = php_nativeplaywright__util__resolveurl(tmp_var_10, (tmp_var_9 = tmp_var_8), url);
    tmp_var_8.unset();
    tmp_var_11 = this_.attr(get_persistent_prop(PersistentPropertyId{131}, get_str(118), get_str(326)), php::AttrMode::Get);
    p = php::Array{
        { get_str(203).str(), php::Var(url) }, 
        { get_str(588).str(), php::Var(tmp_var_11) }
    };
    tmp_var_11.unset();
    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1235))}}))) {
        ((tmp_var_12 = php::toString(options.get(get_str(1235))), p.item(get_str(1236), true) = tmp_var_12), tmp_var_12);
    }
    deadline = [&]() -> php::Var {
        if (php::toBool(((php::Var(timeout)) > (php::Var(0L))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{152}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{152}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_13 = get_function_resolution_cache(FunctionResolutionCacheId{152}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            tmp_var_14 = php::call(tmp_var_13, php::VarList{true});
            tmp_var_15 = ((php::Var(tmp_var_14)) + (php::Var(timeout)));
            tmp_var_14.unset();
            return tmp_var_15;
        } else {
            return php::Var(0.0);
        }
    }();
    tmp_var_16 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_17 = tmp_var_16;
    r = php_nativeplaywright__page__send(tmp_var_17, get_str(1237), p, timeout);
    tmp_var_16.unset();
    tmp_var_18 = php::toBool(php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(592))}}));
    if (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_18)) {
            tmp_var_19 = r.item(get_str(592), false);
            tmp_var_20 = php::toBool(!(php::same(tmp_var_19, php::empty_string)));
            tmp_var_19.unset();
            return php::toBool(tmp_var_20);
        }
        return false;
    }())) {
        tmp_var_22 = r.item(get_str(592), false);
        tmp_var_23 = php::concat({get_str(1238), tmp_var_22, get_str(1239), url});
        tmp_var_22.unset();
        tmp_var_24 = php::newObject(tmp_var_21, php::VarList{tmp_var_23});
        tmp_var_23.unset();
        php::throwValue(php::takeValue(tmp_var_24));
    }
    if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(819))}}, tmp_var_26)) {
        tmp_var_25 = tmp_var_26;
    } else {
        tmp_var_25 = php::empty_string;
    }
    loaderId = php::toString(tmp_var_25);
    if (php::toBool(php::same(loaderId, php::empty_string))) {
        tmp_var_27 = (php::Object{});
        return tmp_var_27;
    }
    php_nativeplaywright__frame__waitforloader(this_, loaderId, event, php::toFloatArgExact(deadline, get_str(1241), 3, get_str(1242)), php::toFloatArgExact(timeout, get_str(1241), 4, get_str(102)), get_str(1243));
    tmp_var_28 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_29 = tmp_var_28;
    tmp_var_30 = php_nativeplaywright__page__navigationresponse(tmp_var_29, loaderId);
    if (UNEXPECTED(!(tmp_var_30.isNull() || (tmp_var_30.isObject() && php::instanceOf(tmp_var_30, get_persistent_class(PersistentClassId{21}, get_str(540))))))) {
        php::throwReturnTypeError(tmp_var_30, get_str(1244), get_str(929), false);
    }
    tmp_var_28.unset();
    return tmp_var_30;
}

void php_nativeplaywright__frame__waitforloader(php::Object &this_, php::Str loaderId, php::Str event, php::Float deadline, php::Float timeout, php::Str api) {
    php::Object self;
    php::Var left;
    zend_function * tmp_var_0;
    zend_function * tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_8;
    php::Object e;
    zend_function * tmp_var_11;
    php::Str tmp_var_12;
    zend_function * tmp_var_13;
    php::Int tmp_var_14 = 0;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    zend_class_entry *tmp_var_10 = get_persistent_class(PersistentClassId{6}, get_str(159));

    self = this_;
    left = [&]() -> php::Var {
        if (php::toBool(((deadline) > (php::toFloat(0L))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{153}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{153}) = php::fn::function_exists(get_str(483)) ? 1 : 2; }
            tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{153}) == 1 ? get_func(RequestFuncId{34}, get_str(483)) : get_persistent_func(PersistentFuncId{38}, get_str(484));
            if (get_function_resolution_cache(FunctionResolutionCacheId{154}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{154}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{154}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            tmp_var_2 = php::call(tmp_var_1, php::VarList{true});
            tmp_var_3 = ((php::Var(deadline)) - (php::Var(tmp_var_2)));
            tmp_var_2.unset();
            tmp_var_4 = php::call(tmp_var_0, php::VarList{0.001, tmp_var_3});
            tmp_var_3.unset();
            return tmp_var_4;
        } else {
            return php::Var(0.0);
        }
    }();
    try {
        tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
        php::Object tmp_var_6 = tmp_var_5;
        php::ClosureFn tmp_var_7 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
        php::checkCallArgCount(0, 0, false);
            php::Object self = php::Object(vars_.get(0));
            php::Str loaderId = php::toString(vars_.get(1));
            php::Str event = php::toString(vars_.get(2));
            php::Var tmp_var_1;
            zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{0}, get_str(75));
            if (php::toBool(self.attr(get_persistent_prop(PersistentPropertyId{129}, get_str(894), get_str(326)), php::AttrMode::Get))) {
                php::throwException(php::newObject(tmp_var_0, php::VarList{get_str(1245)}));
            }
            tmp_var_1 = php::toBool(php_nativeplaywright__frame__lifecyclereached(self, loaderId, event));
            if (UNEXPECTED(!(tmp_var_1.isBool()))) {
                php::throwReturnTypeError(tmp_var_1, get_str(458), get_str(106), false);
                return php::null;
            }
            return tmp_var_1;
        };
        php_nativeplaywright__page__waitforcondition(tmp_var_6, php::toObject(php::newClosureWithParameters(tmp_var_7, { self, loaderId, event }, this_, get_persistent_class(PersistentClassId{12}, get_str(326)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), php::toFloatArgExact(left, get_str(1145), 2, get_str(102)), api);
        tmp_var_5.unset();
    } catch (zend_object *_ex) {
        tmp_var_8 = php::catchException();
        bool tmp_var_9 = false;
        if (!tmp_var_9 && tmp_var_8 && (php::instanceOf(tmp_var_8, get_persistent_class(PersistentClassId{6}, get_str(159))))) {
            tmp_var_9 = true;
            e = tmp_var_8;
            tmp_var_8 = php::null;
            if (get_function_resolution_cache(FunctionResolutionCacheId{155}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{155}) = php::fn::function_exists(get_str(153)) ? 1 : 2; }
            tmp_var_11 = get_function_resolution_cache(FunctionResolutionCacheId{155}) == 1 ? get_func(RequestFuncId{6}, get_str(153)) : get_persistent_func(PersistentFuncId{6}, get_str(154));
            tmp_var_12 = api;
            if (get_function_resolution_cache(FunctionResolutionCacheId{156}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{156}) = php::fn::function_exists(get_str(156)) ? 1 : 2; }
            tmp_var_13 = get_function_resolution_cache(FunctionResolutionCacheId{156}) == 1 ? get_func(RequestFuncId{7}, get_str(156)) : get_persistent_func(PersistentFuncId{7}, get_str(157));
            tmp_var_14 = php::toInt(php::call(tmp_var_13, php::VarList{((timeout) * (php::toFloat(1000L)))}));
            tmp_var_15 = php::call(tmp_var_11, php::VarList{get_str(155), tmp_var_12, tmp_var_14});
            tmp_var_12.unset();
            tmp_var_16 = php::newObject(tmp_var_10, php::VarList{tmp_var_15});
            tmp_var_15.unset();
            php::throwValue(php::takeValue(tmp_var_16));
        }
    }
    if (tmp_var_8) {
        php::throwException(php::Object(tmp_var_8));
    }
}

php::Object php_nativeplaywright__frame__expectnavigation(php::Object &this_, php::Object action, php::Array options) {
    php::Var timeout;
    php::Var tmp_var_0;
    php::Str event;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Str oldLoader;
    php::Int oldSame = 0;
    php::Var pattern;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Str base;
    php::Var tmp_var_7;
    php::Object tmp_var_9;
    php::Object self;
    php::Var tmp_var_10;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Int &_object_prop_this___sameDocumentNavigations = this_.attrInt(get_persistent_prop(PersistentPropertyId{122}, get_str(849), get_str(326)));

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    timeout = php_nativeplaywright__page__navigationtimeoutseconds(tmp_var_1, options);
    tmp_var_0.unset();
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(990))}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_2 = get_str(20);
    }
    tmp_var_4 = php::toString(tmp_var_2);
    event = php_nativeplaywright__frame__lifecyclename(this_, tmp_var_4);
    tmp_var_4.unset();
    oldLoader = this_.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
    oldSame = php::toInt(_object_prop_this___sameDocumentNavigations);
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(203))}}, tmp_var_6)) {
        tmp_var_5 = tmp_var_6;
    } else {
        tmp_var_5 = php::null;
    }
    pattern = tmp_var_5;
    tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_8 = tmp_var_7;
    tmp_var_9 = php_nativeplaywright__page__context(tmp_var_8);
    tmp_var_7.unset();
    base = php_nativeplaywright__browsercontext__baseurl(tmp_var_9);
    tmp_var_9.unset();
    typephp_call_cached(action, get_function_call_cache(FunctionCallCacheId{19}));
    self = this_;
    tmp_var_10 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_11 = tmp_var_10;
    php::ClosureFn tmp_var_12 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object self = php::Object(vars_.get(0));
        php::Str oldLoader = php::toString(vars_.get(1));
        php::Int oldSame = php::toInt(vars_.get(2));
        php::Str event = php::toString(vars_.get(3));
        php::Var pattern = vars_.get(4);
        php::Str base = php::toString(vars_.get(5));
        php::Bool navigated = 0;
        php::Var tmp_var_1;
        php::Bool tmp_var_2 = 0;
        php::Var tmp_var_3;
        php::Bool tmp_var_4 = 0;
        php::Bool tmp_var_5 = 0;
        php::Var tmp_var_6;
        php::Bool tmp_var_7 = 0;
        php::Var tmp_var_8;
        php::Var tmp_var_9;
        php::Var tmp_var_10;
        php::Object tmp_var_11;
        php::Bool tmp_var_12 = 0;
        php::Var tmp_var_13;
        zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{0}, get_str(75));
        Z_PTR_P(tmp_var_11.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));
        if (php::toBool(self.attr(get_persistent_prop(PersistentPropertyId{129}, get_str(894), get_str(326)), php::AttrMode::Get))) {
            php::throwException(php::newObject(tmp_var_0, php::VarList{get_str(1245)}));
        }
        tmp_var_1 = self.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
        tmp_var_2 = php::toBool(!(php::same(tmp_var_1, oldLoader)));
        tmp_var_1.unset();
        tmp_var_5 = php::toBool([&]() -> bool {
            if (php::toBool(tmp_var_2)) {
                tmp_var_3 = self.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
                tmp_var_4 = php::toBool(php_nativeplaywright__frame__lifecyclereached(self, php::deindirect(tmp_var_3), event));
                tmp_var_3.unset();
                return php::toBool(tmp_var_4);
            }
            return false;
        }());
        navigated = php::toBool([&]() -> bool {
            if (!(php::toBool(tmp_var_5))) {
                tmp_var_6 = self.attr(get_persistent_prop(PersistentPropertyId{122}, get_str(849), get_str(326)), php::AttrMode::Get);
                tmp_var_7 = php::toBool(!(tmp_var_6 == oldSame));
                tmp_var_6.unset();
                return php::toBool(tmp_var_7);
            }
            return true;
        }());
        if (php::toBool(!(php::toBool(navigated)))) {
            tmp_var_8 = php::toBool(false);
            if (UNEXPECTED(!(tmp_var_8.isBool()))) {
                php::throwReturnTypeError(tmp_var_8, get_str(458), get_str(106), false);
                return php::null;
            }
            return tmp_var_8;
        }
        tmp_var_13 = php::toBool([&]() -> bool {
            if (!(php::toBool(php::same(pattern, php::null)))) {
                tmp_var_9 = pattern;
                tmp_var_10 = self.attr(get_persistent_prop(PersistentPropertyId{127}, get_str(203), get_str(326)), php::AttrMode::Get);
                tmp_var_12 = php::toBool(php_nativeplaywright__util__urlmatches(tmp_var_11, tmp_var_9, php::deindirect(tmp_var_10), base));
                tmp_var_9.unset();
                tmp_var_10.unset();
                return php::toBool(tmp_var_12);
            }
            return true;
        }());
        if (UNEXPECTED(!(tmp_var_13.isBool()))) {
            php::throwReturnTypeError(tmp_var_13, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_13;
    };
    php_nativeplaywright__page__waitforcondition(tmp_var_11, php::toObject(php::newClosureWithParameters(tmp_var_12, { self, oldLoader, oldSame, event, pattern, base }, this_, get_persistent_class(PersistentClassId{12}, get_str(326)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), php::toFloatArgExact(timeout, get_str(1145), 2, get_str(102)), get_str(1246));
    tmp_var_10.unset();
    tmp_var_19 = [&]() -> php::Var {
        tmp_var_13 = this_.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
        tmp_var_17 = !(php::same(tmp_var_13, oldLoader));
        tmp_var_13.unset();
        if (php::toBool(tmp_var_17)) {
            tmp_var_14 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
            php::Object tmp_var_15 = tmp_var_14;
            tmp_var_16 = this_.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
            tmp_var_18 = php_nativeplaywright__page__navigationresponse(tmp_var_15, php::deindirect(tmp_var_16));
            tmp_var_14.unset();
            tmp_var_16.unset();
            return tmp_var_18;
        } else {
            return php::Var(php::null);
        }
    }();
    if (UNEXPECTED(!(tmp_var_19.isNull() || (tmp_var_19.isObject() && php::instanceOf(tmp_var_19, get_persistent_class(PersistentClassId{21}, get_str(540))))))) {
        php::throwReturnTypeError(tmp_var_19, get_str(1247), get_str(929), false);
    }
    return tmp_var_19;
}

void php_nativeplaywright__frame__waitforloadstate(php::Object &this_, php::Str state, php::Array options) {
    php::Str event;
    php::Object self;
    php::Var tmp_var_0;
    php::Var tmp_var_3;
    php::Var tmp_var_5;
    php::Var tmp_var_6;

    event = php_nativeplaywright__frame__lifecyclename(this_, state);
    self = this_;
    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    php::ClosureFn tmp_var_2 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object self = php::Object(vars_.get(0));
        php::Str event = php::toString(vars_.get(1));
        php::Var tmp_var_0;
        php::Var tmp_var_1;
    tmp_var_0 = self.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
    tmp_var_1 = php_nativeplaywright__frame__lifecyclereached(self, php::deindirect(tmp_var_0), event);
        if (UNEXPECTED(!(tmp_var_1.isBool()))) {
            php::throwReturnTypeError(tmp_var_1, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_1;};
    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_4 = tmp_var_3;
    tmp_var_5 = php_nativeplaywright__page__navigationtimeoutseconds(tmp_var_4, options);
    tmp_var_3.unset();
    php_nativeplaywright__page__waitforcondition(tmp_var_1, php::toObject(php::newClosureWithParameters(tmp_var_2, { self, event }, this_, get_persistent_class(PersistentClassId{12}, get_str(326)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), php::toFloatArgExact((tmp_var_6 = tmp_var_5), get_str(1145), 2, get_str(102)), get_str(1248));
    tmp_var_0.unset();
    tmp_var_5.unset();
}

void php_nativeplaywright__frame__waitforurl(php::Object &this_, php::Var url, php::Array options) {
    php::Str event;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Object self;
    php::Str base;
    php::Var tmp_var_3;
    php::Object tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_9;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    if (UNEXPECTED(!(url.isString() || (url.isObject() && php::instanceOf(url, get_persistent_class(PersistentClassId{5}, get_str(148))))))) {
        php::throwArgumentTypeError(url, get_str(1250), 1, get_str(203), get_str(208));
    }

    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(990))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = get_str(20);
    }
    tmp_var_2 = php::toString(tmp_var_0);
    event = php_nativeplaywright__frame__lifecyclename(this_, tmp_var_2);
    tmp_var_2.unset();
    self = this_;
    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_4 = tmp_var_3;
    tmp_var_5 = php_nativeplaywright__page__context(tmp_var_4);
    tmp_var_3.unset();
    base = php_nativeplaywright__browsercontext__baseurl(tmp_var_5);
    tmp_var_5.unset();
    tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_7 = tmp_var_6;
    php::ClosureFn tmp_var_8 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Var url = vars_.get(0);
        php::Object self = php::Object(vars_.get(1));
        php::Str base = php::toString(vars_.get(2));
        php::Str event = php::toString(vars_.get(3));
        php::Var tmp_var_0;
        php::Var tmp_var_1;
        php::Object tmp_var_2;
        php::Bool tmp_var_3 = 0;
        php::Var tmp_var_4;
        php::Bool tmp_var_5 = 0;
        php::Var tmp_var_6;
        Z_PTR_P(tmp_var_2.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));
    tmp_var_0 = url;
    tmp_var_1 = self.attr(get_persistent_prop(PersistentPropertyId{127}, get_str(203), get_str(326)), php::AttrMode::Get);
    tmp_var_3 = php::toBool(php_nativeplaywright__util__urlmatches(tmp_var_2, tmp_var_0, php::deindirect(tmp_var_1), base));
    tmp_var_0.unset();
    tmp_var_1.unset();
    tmp_var_6 = [&]() -> bool {
            if (php::toBool(tmp_var_3)) {
                tmp_var_4 = self.attr(get_persistent_prop(PersistentPropertyId{121}, get_str(819), get_str(326)), php::AttrMode::Get);
                tmp_var_5 = php::toBool(php_nativeplaywright__frame__lifecyclereached(self, php::deindirect(tmp_var_4), event));
                tmp_var_4.unset();
                return php::toBool(tmp_var_5);
            }
            return false;
        }();
        if (UNEXPECTED(!(tmp_var_6.isBool()))) {
            php::throwReturnTypeError(tmp_var_6, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_6;};
    tmp_var_9 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_10 = tmp_var_9;
    tmp_var_11 = php_nativeplaywright__page__navigationtimeoutseconds(tmp_var_10, options);
    tmp_var_9.unset();
    php_nativeplaywright__page__waitforcondition(tmp_var_7, php::toObject(php::newClosureWithParameters(tmp_var_8, { url, self, base, event }, this_, get_persistent_class(PersistentClassId{12}, get_str(326)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), php::toFloatArgExact((tmp_var_12 = tmp_var_11), get_str(1145), 2, get_str(102)), get_str(1249));
    tmp_var_6.unset();
    tmp_var_11.unset();
}

php::Str php_nativeplaywright__frame__title(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (php::toString(php_nativeplaywright__frame__utilvalue(this_, get_str(1252))));
    return tmp_var_0;
}

php::Str php_nativeplaywright__frame__content(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (php::toString(php_nativeplaywright__frame__utilvalue(this_, php::concat(get_str(1253), get_str(1254)))));
    return tmp_var_0;
}

void php_nativeplaywright__frame__setcontent(php::Object &this_, php::Str html, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Str until;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Str want;
    php::Var deadline;
    zend_function * tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_9;
    php::Var ok;
    zend_function * tmp_var_10;
    php::Var tmp_var_11;
    php::Bool tmp_var_12 = 0;
    php::Var tmp_var_14;
    zend_class_entry *tmp_var_13 = get_persistent_class(PersistentClassId{6}, get_str(159));
    Z_PTR_P(tmp_var_0.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_1 = php_nativeplaywright__locator__js(tmp_var_0, html);
    tmp_var_2 = php::concat({get_str(1255), tmp_var_1, get_str(1256)});
    tmp_var_1.unset();
    php_nativeplaywright__frame__utilvalue(this_, tmp_var_2);
    tmp_var_2.unset();
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(990))}}, tmp_var_4)) {
        tmp_var_3 = tmp_var_4;
    } else {
        tmp_var_3 = get_str(20);
    }
    until = php::toString(tmp_var_3);
    want = (php::toBool(php::same(until, get_str(856)))) ? (get_str(1257)) : (get_str(1258));
    if (get_function_resolution_cache(FunctionResolutionCacheId{157}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{157}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
    tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{157}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
    tmp_var_6 = php::call(tmp_var_5, php::VarList{true});
    tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_8 = tmp_var_7;
    tmp_var_9 = php_nativeplaywright__page__navigationtimeoutseconds(tmp_var_8, options);
    tmp_var_7.unset();
    deadline = ((php::Var(tmp_var_6)) + (php::Var(tmp_var_9)));
    tmp_var_6.unset();
    tmp_var_9.unset();

    while (php::toBool(true)) {
        ok = php_nativeplaywright__frame__utilvalue(this_, php::concat({get_str(390), want, get_str(1259)}));
        if (php::toBool(php::same(ok, php::true_))) {
            break;
        }
        if (get_function_resolution_cache(FunctionResolutionCacheId{158}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{158}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
        tmp_var_10 = get_function_resolution_cache(FunctionResolutionCacheId{158}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
        tmp_var_11 = php::call(tmp_var_10, php::VarList{true});
        tmp_var_12 = php::toBool(((php::Var(tmp_var_11)) > (php::Var(deadline))));
        tmp_var_11.unset();
        if (php::toBool(tmp_var_12)) {
            php::throwException(php::newObject(tmp_var_13, php::VarList{get_str(1260)}));
        }
        tmp_var_14 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
        php::Object tmp_var_15 = tmp_var_14;
        php_nativeplaywright__page__waitfortimeout(tmp_var_15, php::toFloat(10L));
        tmp_var_14.unset();
    }
}

php::Var php_nativeplaywright__frame__evaluate(php::Object &this_, php::Str js, php::Var arg) {
    php::Int attempt = 0;
    php::Object tmp_var_0;
    php::Var tmp_var_1;
    php::Str tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Int tmp_var_6 = 0;
    php::Var tmp_var_7;
    php::Array p;
    php::Var tmp_var_8;
    php::Bool tmp_var_9 = 0;
    php::Var tmp_var_10;
    php::Bool tmp_var_11 = 0;
    php::Var tmp_var_12;
    php::Var r;
    php::Var tmp_var_13;
    php::Array d;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Var tmp_var_21;
    php::Var tmp_var_22;
    php::Array res;
    php::Var tmp_var_23;
    php::Str oid;
    php::Var tmp_var_24;
    php::Var tmp_var_25;
    php::Var tmp_var_27;
    php::Var tmp_var_28;
    php::Var tmp_var_30;
    php::Var tmp_var_31;
    php::Var tmp_var_33;
    php::Object e;
    php::Var tmp_var_35;
    php::Var tmp_var_36;
    php::Bool tmp_var_37 = 0;
    zend_class_entry *tmp_var_15 = get_persistent_class(PersistentClassId{0}, get_str(75));
    Z_PTR_P(tmp_var_0.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    attempt = php::toInt(0L);
    
    for (;; ++attempt) {
        try {
            if (php::toBool(php_nativeplaywright__util__isfunction(tmp_var_0, js))) {
                tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
                php::Object tmp_var_2 = tmp_var_1;
                tmp_var_3 = js;
                tmp_var_4 = php::Array{
                        { get_str(109).str(), php::Var(arg) }
                    };
                tmp_var_5 = php::Array{
                    php::Var(tmp_var_4)
                };
                tmp_var_4.unset();
                tmp_var_6 = php::toInt(php_nativeplaywright__frame__maincontextid(this_));
                tmp_var_7 = (php_nativeplaywright__page__callfunction(tmp_var_2, tmp_var_3, tmp_var_5, php::empty_string, php::toInt(tmp_var_6)));
                tmp_var_1.unset();
                tmp_var_3.unset();
                tmp_var_5.unset();
                return tmp_var_7;
            }
            p = php::Array{
                { get_str(968).str(), php::Var(js) }, 
                { get_str(719).str(), php::Var(false) }, 
                { get_str(720).str(), php::Var(true) }
            };
            tmp_var_8 = this_.attr(get_persistent_prop(PersistentPropertyId{130}, get_str(817), get_str(326)), php::AttrMode::Get);
            tmp_var_9 = php::toBool(!(php::same(tmp_var_8, php::empty_string)));
            tmp_var_8.unset();
            if (php::toBool([&]() -> bool {
                if (!(php::toBool(tmp_var_9))) {
                    tmp_var_10 = this_.attr(get_persistent_prop(PersistentPropertyId{132}, get_str(859), get_str(326)), php::AttrMode::Get);
                    tmp_var_11 = php::toBool(!(tmp_var_10 == 0L));
                    tmp_var_10.unset();
                    return php::toBool(tmp_var_11);
                }
                return true;
            }())) {
                ((tmp_var_12 = php_nativeplaywright__frame__maincontextid(this_), p.item(get_str(969), true) = tmp_var_12), tmp_var_12);
            }
            tmp_var_13 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
            php::Object tmp_var_14 = tmp_var_13;
            r = php_nativeplaywright__page__send(tmp_var_14, get_str(967), p);
            tmp_var_13.unset();
            if (php::toBool(php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(723))}}))) {
                d = php::toArray(r.item(get_str(723), false));
                if (php::exists(d, {{php::ArrayDimFetch, php::Var(get_str(725))}, {php::ArrayDimFetch, php::Var(get_str(420))}}, tmp_var_17)) {
                    tmp_var_16 = tmp_var_17;
                } else {
                    if (php::exists(d, {{php::ArrayDimFetch, php::Var(get_str(329))}}, tmp_var_19)) {
                    tmp_var_18 = tmp_var_19;
                } else {
                    tmp_var_18 = get_str(113);
                }
                    tmp_var_16 = tmp_var_18;
                }
                tmp_var_20 = php::toString(tmp_var_16);
                tmp_var_21 = php::concat({get_str(1261), tmp_var_20});
                tmp_var_20.unset();
                tmp_var_22 = php::newObject(tmp_var_15, php::VarList{tmp_var_21});
                tmp_var_21.unset();
                php::throwValue(php::takeValue(tmp_var_22));
            }
            res = php::toArray(r.item(get_str(131), false));
            if (php::toBool(!(php::toBool(php::exists(res, {{php::ArrayDimFetch, php::Var(get_str(712))}}))))) {
                tmp_var_23 = (php_nativeplaywright__util__remotevalue(tmp_var_0, res));
                return tmp_var_23;
            }
            oid = php::toString(res.get(get_str(712)));
            try {
                tmp_var_25 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
                php::Object tmp_var_26 = tmp_var_25;
                tmp_var_27 = php::Array{};
                tmp_var_24 = php_nativeplaywright__page__callfunction(tmp_var_26, get_str(1262), tmp_var_27, oid);
                tmp_var_25.unset();
                tmp_var_27.unset();
                tmp_var_28 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
                php::Object tmp_var_29 = tmp_var_28;
                php_nativeplaywright__page__releaseobject(tmp_var_29, oid);
                tmp_var_28.unset();
                return tmp_var_24;
            } catch (zend_object *_ex) {
                tmp_var_30 = php::catchException();
            }
            tmp_var_31 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
            php::Object tmp_var_32 = tmp_var_31;
            php_nativeplaywright__page__releaseobject(tmp_var_32, oid);
            tmp_var_31.unset();

            if (tmp_var_30) {
                php::throwException(php::Object(tmp_var_30));
            }
        } catch (zend_object *_ex) {
            tmp_var_33 = php::catchException();
            bool tmp_var_34 = false;
            if (!tmp_var_34 && tmp_var_33 && (php::instanceOf(tmp_var_33, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
                tmp_var_34 = true;
                e = tmp_var_33;
                tmp_var_33 = php::null;
                if (php::toBool([&]() -> bool {
                    if (php::toBool(((attempt) < (3L)))) {
                        tmp_var_35 = typephp_call_method_cached(e, get_str(141), get_method_call_cache(MethodCallCacheId{44}));
                        tmp_var_37 = php::toBool(php_nativeplaywright__frame__iscontextlost(this_, php::toStringArgExact((tmp_var_36 = tmp_var_35), get_str(1217), 1, get_str(1218))));
                        tmp_var_35.unset();
                        return php::toBool(tmp_var_37);
                    }
                    return false;
                }())) {
                    this_.attr(get_persistent_prop(PersistentPropertyId{132}, get_str(859), get_str(326)), php::AttrMode::Update) = 0L;
                    continue;
                }
                php::throwException(e);
            }
        }
        if (tmp_var_33) {
            php::throwException(php::Object(tmp_var_33));
        }
    }
    return php::null;
}

php::Var php_nativeplaywright__frame__waitforfunction(php::Object &this_, php::Str js, php::Var arg, php::Array options) {
    php::Str fn;
    php::Object tmp_var_0;
    php::Var polling;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Str wait;
    php::Var timeout;
    php::Var tmp_var_3;
    php::Var deadline;
    zend_function * tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Int slice = 0;
    zend_function * tmp_var_8;
    zend_function * tmp_var_9;
    zend_function * tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Str wrapper;
    php::Var r;
    php::Var tmp_var_15;
    php::Str tmp_var_17;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Int tmp_var_20 = 0;
    zend_function * tmp_var_21;
    php::Var tmp_var_22;
    php::Bool tmp_var_23 = 0;
    php::Var tmp_var_24;
    php::Var tmp_var_25;
    php::Var tmp_var_26;
    php::Var tmp_var_27;
    php::Object e;
    php::Var tmp_var_29;
    php::Var tmp_var_30;
    php::Bool tmp_var_31 = 0;
    zend_function * tmp_var_32;
    php::Var tmp_var_33;
    php::Bool tmp_var_34 = 0;
    zend_function * tmp_var_36;
    zend_function * tmp_var_37;
    php::Int tmp_var_38 = 0;
    php::Var tmp_var_39;
    php::Var tmp_var_40;
    zend_class_entry *tmp_var_35 = get_persistent_class(PersistentClassId{6}, get_str(159));
    Z_PTR_P(tmp_var_0.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    fn = (php::toBool(php_nativeplaywright__util__isfunction(tmp_var_0, js))) ? (js) : (php::concat({get_str(1263), js, get_str(230)}));
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1264))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = get_str(1265);
    }
    polling = tmp_var_1;
    wait = (php::toBool(php::same(polling, get_str(1265)))) ? (get_str(1266)) : (php::concat({get_str(1267), php::toInt(polling), get_str(1268)}));
    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
    php::Object tmp_var_4 = tmp_var_3;
    timeout = php_nativeplaywright__page__timeoutseconds(tmp_var_4, options);
    tmp_var_3.unset();
    deadline = [&]() -> php::Var {
        if (php::toBool(((php::Var(timeout)) > (php::Var(0L))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{159}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{159}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{159}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            tmp_var_6 = php::call(tmp_var_5, php::VarList{true});
            tmp_var_7 = ((php::Var(tmp_var_6)) + (php::Var(timeout)));
            tmp_var_6.unset();
            return tmp_var_7;
        } else {
            return php::Var(0.0);
        }
    }();

    while (php::toBool(true)) {
        slice = php::toInt(1000L);
        if (php::toBool(((php::Var(deadline)) > (php::Var(0L))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{160}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{160}) = php::fn::function_exists(get_str(483)) ? 1 : 2; }
            tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{160}) == 1 ? get_func(RequestFuncId{34}, get_str(483)) : get_persistent_func(PersistentFuncId{38}, get_str(484));
            if (get_function_resolution_cache(FunctionResolutionCacheId{161}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{161}) = php::fn::function_exists(get_str(1269)) ? 1 : 2; }
            tmp_var_9 = get_function_resolution_cache(FunctionResolutionCacheId{161}) == 1 ? get_func(RequestFuncId{55}, get_str(1269)) : get_persistent_func(PersistentFuncId{59}, get_str(1270));
            if (get_function_resolution_cache(FunctionResolutionCacheId{162}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{162}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_10 = get_function_resolution_cache(FunctionResolutionCacheId{162}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            tmp_var_11 = php::call(tmp_var_10, php::VarList{true});
            tmp_var_12 = ((php::Var(deadline)) - (php::Var(tmp_var_11)));
            tmp_var_11.unset();
            tmp_var_13 = ((php::Var(tmp_var_12)) * (php::Var(1000L)));
            tmp_var_12.unset();
            tmp_var_14 = php::call(tmp_var_9, php::VarList{1000L, tmp_var_13});
            tmp_var_13.unset();
            slice = php::toInt(php::call(tmp_var_8, php::VarList{1L, tmp_var_14}));
            tmp_var_14.unset();
        }
        wrapper = php::concat({get_str(1271), fn, get_str(1272), slice, get_str(1273), get_str(1274), wait, get_str(1275)});
        try {
            tmp_var_15 = this_.attr(get_persistent_prop(PersistentPropertyId{126}, get_str(433), get_str(326)), php::AttrMode::Get);
            php::Object tmp_var_16 = tmp_var_15;
            tmp_var_17 = wrapper;
            tmp_var_18 = php::Array{
                    { get_str(109).str(), php::Var(arg) }
                };
            tmp_var_19 = php::Array{
                php::Var(tmp_var_18)
            };
            tmp_var_18.unset();
            tmp_var_20 = php::toInt(php_nativeplaywright__frame__maincontextid(this_));
            r = php_nativeplaywright__page__callfunction(tmp_var_16, tmp_var_17, tmp_var_19, php::empty_string, php::toInt(tmp_var_20));
            tmp_var_15.unset();
            tmp_var_17.unset();
            tmp_var_19.unset();
            if (get_function_resolution_cache(FunctionResolutionCacheId{163}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{163}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
            tmp_var_21 = get_function_resolution_cache(FunctionResolutionCacheId{163}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
            tmp_var_22 = php::call(tmp_var_21, php::VarList{r});
            tmp_var_23 = php::toBool((php::toBool(tmp_var_22) && php::toBool(!(php::toBool(php::empty(r, {{php::ArrayDimFetch, php::Var(get_str(1276))}}))))));
            tmp_var_22.unset();
            if (php::toBool(tmp_var_23)) {
                if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(1277))}}, tmp_var_25)) {
                    tmp_var_24 = tmp_var_25;
                } else {
                    tmp_var_24 = true;
                }
                tmp_var_26 = (tmp_var_24);
                return tmp_var_26;
            }
        } catch (zend_object *_ex) {
            tmp_var_27 = php::catchException();
            bool tmp_var_28 = false;
            if (!tmp_var_28 && tmp_var_27 && (php::instanceOf(tmp_var_27, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
                tmp_var_28 = true;
                e = tmp_var_27;
                tmp_var_27 = php::null;
                tmp_var_29 = typephp_call_method_cached(e, get_str(141), get_method_call_cache(MethodCallCacheId{45}));
                tmp_var_31 = php::toBool(!(php::toBool(php_nativeplaywright__frame__iscontextlost(this_, php::toStringArgExact((tmp_var_30 = tmp_var_29), get_str(1217), 1, get_str(1218))))));
                tmp_var_29.unset();
                if (php::toBool(tmp_var_31)) {
                    php::throwException(e);
                }
                this_.attr(get_persistent_prop(PersistentPropertyId{132}, get_str(859), get_str(326)), php::AttrMode::Update) = 0L;
            }
        }
        if (tmp_var_27) {
            php::throwException(php::Object(tmp_var_27));
        }
        if (php::toBool([&]() -> bool {
            if (php::toBool(((php::Var(deadline)) > (php::Var(0L))))) {
                if (get_function_resolution_cache(FunctionResolutionCacheId{164}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{164}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
                tmp_var_32 = get_function_resolution_cache(FunctionResolutionCacheId{164}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
                tmp_var_33 = php::call(tmp_var_32, php::VarList{true});
                tmp_var_34 = php::toBool(((php::Var(tmp_var_33)) >= (php::Var(deadline))));
                tmp_var_33.unset();
                return php::toBool(tmp_var_34);
            }
            return false;
        }())) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{165}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{165}) = php::fn::function_exists(get_str(153)) ? 1 : 2; }
            tmp_var_36 = get_function_resolution_cache(FunctionResolutionCacheId{165}) == 1 ? get_func(RequestFuncId{6}, get_str(153)) : get_persistent_func(PersistentFuncId{6}, get_str(154));
            if (get_function_resolution_cache(FunctionResolutionCacheId{166}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{166}) = php::fn::function_exists(get_str(156)) ? 1 : 2; }
            tmp_var_37 = get_function_resolution_cache(FunctionResolutionCacheId{166}) == 1 ? get_func(RequestFuncId{7}, get_str(156)) : get_persistent_func(PersistentFuncId{7}, get_str(157));
            tmp_var_38 = php::toInt(php::call(tmp_var_37, php::VarList{((php::Var(timeout)) * (php::Var(1000L)))}));
            tmp_var_39 = php::call(tmp_var_36, php::VarList{get_str(1278), tmp_var_38});
            tmp_var_40 = php::newObject(tmp_var_35, php::VarList{tmp_var_39});
            tmp_var_39.unset();
            php::throwValue(php::takeValue(tmp_var_40));
        }
    }
    return php::null;
}

void php_nativeplaywright__frame__addscripttag(php::Object &this_, php::Array options) {
    php::Str content;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Str tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;

    content = [&]() -> php::Str {
        if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(243))}}))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{167}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{167}) = php::fn::function_exists(get_str(644)) ? 1 : 2; }
            tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{167}) == 1 ? get_func(RequestFuncId{39}, get_str(644)) : get_persistent_func(PersistentFuncId{43}, get_str(645));
            tmp_var_1 = php::toString(options.get(get_str(243)));
            tmp_var_2 = php::toString(php::call(tmp_var_0, php::VarList{tmp_var_1}));
            tmp_var_1.unset();
            tmp_var_3 = options.get(get_str(243));
            tmp_var_6 = php::concat({tmp_var_2, get_str(1279), php::toString(tmp_var_3)});
            tmp_var_2.unset();
            tmp_var_3.unset();
            return tmp_var_6;
        } else {
            if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1023))}}, tmp_var_5)) {
        tmp_var_4 = tmp_var_5;
    } else {
        tmp_var_4 = php::empty_string;
    }
            return php::toString(tmp_var_4);
        }
    }();
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(203))}}, tmp_var_8)) {
            tmp_var_7 = tmp_var_8;
        } else {
            tmp_var_7 = php::null;
        }
    tmp_var_9 = tmp_var_7;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(425))}}, tmp_var_11)) {
            tmp_var_10 = tmp_var_11;
        } else {
            tmp_var_10 = php::null;
        }
    tmp_var_12 = tmp_var_10;
    tmp_var_13 = php::Array{
        { get_str(203).str(), php::Var(tmp_var_9) }, 
        { get_str(425).str(), php::Var(tmp_var_12) }, 
        { get_str(1023).str(), php::Var(content) }
    };
    tmp_var_9.unset();
    tmp_var_12.unset();
    php_nativeplaywright__frame__evaluate(this_, php::concat({get_str(1280), get_str(1281), get_str(1282)}), tmp_var_13);
    tmp_var_13.unset();
}

void php_nativeplaywright__frame__addstyletag(php::Object &this_, php::Array options) {
    php::Str content;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Str tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;

    content = [&]() -> php::Str {
        if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(243))}}))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{168}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{168}) = php::fn::function_exists(get_str(644)) ? 1 : 2; }
            tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{168}) == 1 ? get_func(RequestFuncId{39}, get_str(644)) : get_persistent_func(PersistentFuncId{43}, get_str(645));
            tmp_var_1 = php::toString(options.get(get_str(243)));
            tmp_var_4 = php::toString(php::call(tmp_var_0, php::VarList{tmp_var_1}));
            tmp_var_1.unset();
            return tmp_var_4;
        } else {
            if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1023))}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_2 = php::empty_string;
    }
            return php::toString(tmp_var_2);
        }
    }();
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(203))}}, tmp_var_6)) {
            tmp_var_5 = tmp_var_6;
        } else {
            tmp_var_5 = php::null;
        }
    tmp_var_7 = tmp_var_5;
    tmp_var_8 = php::Array{
        { get_str(203).str(), php::Var(tmp_var_7) }, 
        { get_str(1023).str(), php::Var(content) }
    };
    tmp_var_7.unset();
    php_nativeplaywright__frame__evaluate(this_, php::concat({get_str(1283), get_str(1284), get_str(1285)}), tmp_var_8);
    tmp_var_8.unset();
}

php::Object php_nativeplaywright__frame__locator(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_1;
    php::Object tmp_var_2;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_1 = php::newObject(tmp_var_0, php::VarList{this_, selector});
    tmp_var_2 = (php_nativeplaywright__locator__filter(tmp_var_1, options));
    tmp_var_1.unset();
    return tmp_var_2;
}

php::Object php_nativeplaywright__frame__getbytext(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Bool tmp_var_4 = 0;
    php::Object tmp_var_5;
    php::Var tmp_var_6;
    php::Object tmp_var_7;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{11}, get_str(311));
    Z_PTR_P(tmp_var_5.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_1 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_2 = false;
    }
    tmp_var_4 = php::toBool(tmp_var_2);
    tmp_var_6 = php_nativeplaywright__locator__bytext(tmp_var_5, tmp_var_1, php::toBool(tmp_var_4));
    tmp_var_1.unset();
    tmp_var_7 = (php::newObject(tmp_var_0, php::VarList{this_, tmp_var_6}));
    tmp_var_6.unset();
    return tmp_var_7;
}

php::Object php_nativeplaywright__frame__getbyrole(php::Object &this_, php::Str role, php::Array options) {
    php::Object tmp_var_1;
    php::Var tmp_var_2;
    php::Object tmp_var_3;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{11}, get_str(311));
    Z_PTR_P(tmp_var_1.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_2 = php_nativeplaywright__locator__byrole(tmp_var_1, role, options);
    tmp_var_3 = (php::newObject(tmp_var_0, php::VarList{this_, tmp_var_2}));
    tmp_var_2.unset();
    return tmp_var_3;
}

php::Object php_nativeplaywright__frame__getbylabel(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Bool tmp_var_4 = 0;
    php::Object tmp_var_5;
    php::Var tmp_var_6;
    php::Object tmp_var_7;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{11}, get_str(311));
    Z_PTR_P(tmp_var_5.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_1 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_2 = false;
    }
    tmp_var_4 = php::toBool(tmp_var_2);
    tmp_var_6 = php_nativeplaywright__locator__bylabel(tmp_var_5, tmp_var_1, php::toBool(tmp_var_4));
    tmp_var_1.unset();
    tmp_var_7 = (php::newObject(tmp_var_0, php::VarList{this_, tmp_var_6}));
    tmp_var_6.unset();
    return tmp_var_7;
}

php::Object php_nativeplaywright__frame__getbyplaceholder(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Bool tmp_var_4 = 0;
    php::Object tmp_var_5;
    php::Var tmp_var_6;
    php::Object tmp_var_7;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{11}, get_str(311));
    Z_PTR_P(tmp_var_5.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_1 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_2 = false;
    }
    tmp_var_4 = php::toBool(tmp_var_2);
    tmp_var_6 = php_nativeplaywright__locator__byattr(tmp_var_5, get_str(320), tmp_var_1, php::toBool(tmp_var_4));
    tmp_var_1.unset();
    tmp_var_7 = (php::newObject(tmp_var_0, php::VarList{this_, tmp_var_6}));
    tmp_var_6.unset();
    return tmp_var_7;
}

php::Object php_nativeplaywright__frame__getbyalttext(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Bool tmp_var_4 = 0;
    php::Object tmp_var_5;
    php::Var tmp_var_6;
    php::Object tmp_var_7;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{11}, get_str(311));
    Z_PTR_P(tmp_var_5.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_1 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_2 = false;
    }
    tmp_var_4 = php::toBool(tmp_var_2);
    tmp_var_6 = php_nativeplaywright__locator__byattr(tmp_var_5, get_str(321), tmp_var_1, php::toBool(tmp_var_4));
    tmp_var_1.unset();
    tmp_var_7 = (php::newObject(tmp_var_0, php::VarList{this_, tmp_var_6}));
    tmp_var_6.unset();
    return tmp_var_7;
}

php::Object php_nativeplaywright__frame__getbytitle(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Bool tmp_var_4 = 0;
    php::Object tmp_var_5;
    php::Var tmp_var_6;
    php::Object tmp_var_7;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{11}, get_str(311));
    Z_PTR_P(tmp_var_5.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_1 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_2 = false;
    }
    tmp_var_4 = php::toBool(tmp_var_2);
    tmp_var_6 = php_nativeplaywright__locator__byattr(tmp_var_5, get_str(322), tmp_var_1, php::toBool(tmp_var_4));
    tmp_var_1.unset();
    tmp_var_7 = (php::newObject(tmp_var_0, php::VarList{this_, tmp_var_6}));
    tmp_var_6.unset();
    return tmp_var_7;
}

php::Object php_nativeplaywright__frame__getbytestid(php::Object &this_, php::Str testId) {
    php::Object tmp_var_1;
    php::Var tmp_var_2;
    php::Object tmp_var_3;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{11}, get_str(311));
    Z_PTR_P(tmp_var_1.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_2 = php_nativeplaywright__locator__bytestid(tmp_var_1, testId);
    tmp_var_3 = (php::newObject(tmp_var_0, php::VarList{this_, tmp_var_2}));
    tmp_var_2.unset();
    return tmp_var_3;
}

php::Object php_nativeplaywright__frame__framelocator(php::Object &this_, php::Str selector) {
    php::Object tmp_var_1;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{10}, get_str(308));

    tmp_var_1 = (php::newObject(tmp_var_0, php::VarList{this_, selector}));
    return tmp_var_1;
}

void php_nativeplaywright__frame__click(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__click(tmp_var_0, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__frame__dblclick(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__dblclick(tmp_var_0, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__frame__tap(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__tap(tmp_var_0, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__frame__fill(php::Object &this_, php::Str selector, php::Str value, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__fill(tmp_var_0, value, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__frame__type(php::Object &this_, php::Str selector, php::Str text, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__presssequentially(tmp_var_0, text, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__frame__press(php::Object &this_, php::Str selector, php::Str key, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__press(tmp_var_0, key, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__frame__hover(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__hover(tmp_var_0, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__frame__focus(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__focus(tmp_var_0, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__frame__check(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__check(tmp_var_0, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__frame__uncheck(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__uncheck(tmp_var_0, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__frame__setchecked(php::Object &this_, php::Str selector, php::Bool checked, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__setchecked(tmp_var_0, php::toBool(checked), options);
    tmp_var_0.unset();
}

php::Array php_nativeplaywright__frame__selectoption(php::Object &this_, php::Str selector, php::Var values, php::Array options) {
    php::Object tmp_var_0;
    php::Array tmp_var_1;
    if (UNEXPECTED(!(values.isString() || values.isArray()))) {
        php::throwArgumentTypeError(values, get_str(1287), 2, get_str(1047), get_str(523));
    }

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = (php_nativeplaywright__locator__selectoption(tmp_var_0, values, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

void php_nativeplaywright__frame__setinputfiles(php::Object &this_, php::Str selector, php::Var files, php::Array options) {
    php::Object tmp_var_0;
    if (UNEXPECTED(!(files.isString() || files.isArray()))) {
        php::throwArgumentTypeError(files, get_str(1288), 2, get_str(520), get_str(523));
    }

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__setinputfiles(tmp_var_0, files, options);
    tmp_var_0.unset();
}

void php_nativeplaywright__frame__draganddrop(php::Object &this_, php::Str source, php::Str target, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, source);
    tmp_var_1 = php_nativeplaywright__frame__locator(this_, target);
    php_nativeplaywright__locator__dragto(tmp_var_0, tmp_var_1, options);
    tmp_var_0.unset();
    tmp_var_1.unset();
}

void php_nativeplaywright__frame__dispatchevent(php::Object &this_, php::Str selector, php::Str type, php::Array eventInit, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__dispatchevent(tmp_var_0, type, eventInit, options);
    tmp_var_0.unset();
}

php::Var php_nativeplaywright__frame__textcontent(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = php_nativeplaywright__locator__textcontent(tmp_var_0, options);
    if (UNEXPECTED(!(tmp_var_1.isNull() || tmp_var_1.isString()))) {
        php::throwReturnTypeError(tmp_var_1, get_str(1290), get_str(545), false);
    }
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Str php_nativeplaywright__frame__innertext(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Str tmp_var_1;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = (php_nativeplaywright__locator__innertext(tmp_var_0, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Str php_nativeplaywright__frame__innerhtml(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Str tmp_var_1;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = (php_nativeplaywright__locator__innerhtml(tmp_var_0, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Var php_nativeplaywright__frame__getattribute(php::Object &this_, php::Str selector, php::Str name, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = php_nativeplaywright__locator__getattribute(tmp_var_0, name, options);
    if (UNEXPECTED(!(tmp_var_1.isNull() || tmp_var_1.isString()))) {
        php::throwReturnTypeError(tmp_var_1, get_str(1291), get_str(545), false);
    }
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Str php_nativeplaywright__frame__inputvalue(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Str tmp_var_1;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = (php_nativeplaywright__locator__inputvalue(tmp_var_0, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__frame__isvisible(php::Object &this_, php::Str selector) {
    php::Object tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = (php::toBool(php_nativeplaywright__locator__isvisible(tmp_var_0)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__frame__ishidden(php::Object &this_, php::Str selector) {
    php::Object tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = (php::toBool(php_nativeplaywright__locator__ishidden(tmp_var_0)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__frame__isenabled(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = (php::toBool(php_nativeplaywright__locator__isenabled(tmp_var_0, options)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__frame__isdisabled(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = (php::toBool(php_nativeplaywright__locator__isdisabled(tmp_var_0, options)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__frame__iseditable(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = (php::toBool(php_nativeplaywright__locator__iseditable(tmp_var_0, options)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__frame__ischecked(php::Object &this_, php::Str selector, php::Array options) {
    php::Object tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = (php::toBool(php_nativeplaywright__locator__ischecked(tmp_var_0, options)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__frame__waitforselector(php::Object &this_, php::Str selector, php::Array options) {
    php::Object loc;
    php::Str state;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;

    loc = php_nativeplaywright__frame__locator(this_, selector);
    php_nativeplaywright__locator__waitfor(loc, options);
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(674))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = get_str(1293);
    }
    state = php::toString(tmp_var_0);
    tmp_var_2 = (php::toBool((php::toBool(php::same(state, get_str(894))) || php::toBool(php::same(state, get_str(1294)))))) ? (php::Var(php::null)) : (php::Var(loc));
    if (UNEXPECTED(!(tmp_var_2.isNull() || (tmp_var_2.isObject() && php::instanceOf(tmp_var_2, get_persistent_class(PersistentClassId{11}, get_str(311))))))) {
        php::throwReturnTypeError(tmp_var_2, get_str(1295), get_str(1296), false);
    }
    return tmp_var_2;
}

php::Var php_nativeplaywright__frame__evalonselector(php::Object &this_, php::Str selector, php::Str js, php::Var arg) {
    php::Object tmp_var_0;
    php::Str tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = js;
    tmp_var_2 = arg;
    tmp_var_3 = php::Array{
        { get_str(102).str(), php::Var(0L) }
    };
    tmp_var_4 = (php_nativeplaywright__locator__evaluate(tmp_var_0, tmp_var_1, tmp_var_2, tmp_var_3));
    tmp_var_0.unset();
    tmp_var_1.unset();
    tmp_var_2.unset();
    tmp_var_3.unset();
    return tmp_var_4;
}

php::Var php_nativeplaywright__frame__evalonselectorall(php::Object &this_, php::Str selector, php::Str js, php::Var arg) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;

    tmp_var_0 = php_nativeplaywright__frame__locator(this_, selector);
    tmp_var_1 = (php_nativeplaywright__locator__evaluateall(tmp_var_0, js, arg));
    tmp_var_0.unset();
    return tmp_var_1;
}


ZEND_METHOD(NativePlaywright_Frame, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(475)));
        php::Var raw_arg_id = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_id.isString()))) {
            php::throwArgumentTypeError(raw_arg_id, get_str(1298), 2, get_str(118), get_str(98));
        }
        php::Str arg_id = php::toString(raw_arg_id);
        php::Var raw_arg_parentId = php::getCallArg(2, php_nativeplaywright__frame____construct_arg_2_default_value());
        if (UNEXPECTED(!(raw_arg_parentId.isString()))) {
            php::throwArgumentTypeError(raw_arg_parentId, get_str(1298), 3, get_str(817), get_str(98));
        }
        php::Str arg_parentId = php::toString(raw_arg_parentId);
        php_nativeplaywright__frame____construct(this_, php::takeValue(arg_page),php::takeValue(arg_id),php::takeValue(arg_parentId));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, page) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__frame__page(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, url) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__frame__url(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, name) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__frame__name(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, isDetached) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__frame__isdetached(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, parentFrame) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__frame__parentframe(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, childFrames) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__frame__childframes(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, resetContexts) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__frame__resetcontexts(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, contextDestroyed) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_id = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_id.isInt()))) {
            php::throwArgumentTypeError(raw_arg_id, get_str(1299), 1, get_str(118), get_str(89));
        }
        php::Int arg_id = php::toInt(raw_arg_id);
        php_nativeplaywright__frame__contextdestroyed(this_, arg_id);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, isContextLost) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_msg = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_msg.isString()))) {
            php::throwArgumentTypeError(raw_arg_msg, get_str(1217), 1, get_str(1218), get_str(98));
        }
        php::Str arg_msg = php::toString(raw_arg_msg);
        auto retval = php_nativeplaywright__frame__iscontextlost(this_, php::takeValue(arg_msg));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, ensureUtil) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__frame__ensureutil(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, utilCall) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_expression = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_expression.isString()))) {
            php::throwArgumentTypeError(raw_arg_expression, get_str(1300), 1, get_str(968), get_str(98));
        }
        php::Str arg_expression = php::toString(raw_arg_expression);
        php::Var raw_arg_byValue = php::getCallArg(1, php_nativeplaywright__frame__utilcall_arg_1_default_value());
        if (UNEXPECTED(!(raw_arg_byValue.isBool()))) {
            php::throwArgumentTypeError(raw_arg_byValue, get_str(1300), 2, get_str(1301), get_str(106));
        }
        php::Bool arg_byValue = php::toBool(raw_arg_byValue);
        auto retval = php_nativeplaywright__frame__utilcall(this_, php::takeValue(arg_expression),arg_byValue);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, utilValue) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_expression = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_expression.isString()))) {
            php::throwArgumentTypeError(raw_arg_expression, get_str(1302), 1, get_str(968), get_str(98));
        }
        php::Str arg_expression = php::toString(raw_arg_expression);
        auto retval = php_nativeplaywright__frame__utilvalue(this_, php::takeValue(arg_expression));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, mainContextId) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__frame__maincontextid(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, adoptToMain) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_objectId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_objectId.isString()))) {
            php::throwArgumentTypeError(raw_arg_objectId, get_str(1303), 1, get_str(712), get_str(98));
        }
        php::Str arg_objectId = php::toString(raw_arg_objectId);
        auto retval = php_nativeplaywright__frame__adopttomain(this_, php::takeValue(arg_objectId));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, offset) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__frame__offset(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, lifecycleName) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_waitUntil = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_waitUntil.isString()))) {
            php::throwArgumentTypeError(raw_arg_waitUntil, get_str(1304), 1, get_str(990), get_str(98));
        }
        php::Str arg_waitUntil = php::toString(raw_arg_waitUntil);
        auto retval = php_nativeplaywright__frame__lifecyclename(this_, php::takeValue(arg_waitUntil));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, lifecycleReached) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_loaderId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_loaderId.isString()))) {
            php::throwArgumentTypeError(raw_arg_loaderId, get_str(1305), 1, get_str(819), get_str(98));
        }
        php::Str arg_loaderId = php::toString(raw_arg_loaderId);
        php::Var raw_arg_event = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1305), 2, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        auto retval = php_nativeplaywright__frame__lifecyclereached(this_, php::takeValue(arg_loaderId),php::takeValue(arg_event));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, goto) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_url = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_url.isString()))) {
            php::throwArgumentTypeError(raw_arg_url, get_str(1244), 1, get_str(203), get_str(98));
        }
        php::Str arg_url = php::toString(raw_arg_url);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__goto_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__goto(this_, php::takeValue(arg_url),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, waitForLoader) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(5, 5, false);
        php::Var raw_arg_loaderId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_loaderId.isString()))) {
            php::throwArgumentTypeError(raw_arg_loaderId, get_str(1241), 1, get_str(819), get_str(98));
        }
        php::Str arg_loaderId = php::toString(raw_arg_loaderId);
        php::Var raw_arg_event = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1241), 2, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Var raw_arg_deadline = php::getCallArg(2);
        if (UNEXPECTED(!((raw_arg_deadline.isFloat() || raw_arg_deadline.isInt())))) {
            php::throwArgumentTypeError(raw_arg_deadline, get_str(1241), 3, get_str(1242), get_str(103));
        }
        php::Float arg_deadline = php::toFloat(raw_arg_deadline);
        php::Var raw_arg_timeout = php::getCallArg(3);
        if (UNEXPECTED(!((raw_arg_timeout.isFloat() || raw_arg_timeout.isInt())))) {
            php::throwArgumentTypeError(raw_arg_timeout, get_str(1241), 4, get_str(102), get_str(103));
        }
        php::Float arg_timeout = php::toFloat(raw_arg_timeout);
        php::Var raw_arg_api = php::getCallArg(4);
        if (UNEXPECTED(!(raw_arg_api.isString()))) {
            php::throwArgumentTypeError(raw_arg_api, get_str(1241), 5, get_str(1306), get_str(98));
        }
        php::Str arg_api = php::toString(raw_arg_api);
        php_nativeplaywright__frame__waitforloader(this_, php::takeValue(arg_loaderId),php::takeValue(arg_event),arg_deadline,arg_timeout,php::takeValue(arg_api));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, expectNavigation) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Object arg_action = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__expectnavigation_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__expectnavigation(this_, php::takeValue(arg_action),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, waitForLoadState) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 2, false);
        php::Var raw_arg_state = php::getCallArg(0, php_nativeplaywright__frame__waitforloadstate_arg_0_default_value());
        if (UNEXPECTED(!(raw_arg_state.isString()))) {
            php::throwArgumentTypeError(raw_arg_state, get_str(1307), 1, get_str(674), get_str(98));
        }
        php::Str arg_state = php::toString(raw_arg_state);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__waitforloadstate_arg_1_default_value()));
        php_nativeplaywright__frame__waitforloadstate(this_, php::takeValue(arg_state),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, waitForURL) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_url = php::getCallArg(0);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__waitforurl_arg_1_default_value()));
        php_nativeplaywright__frame__waitforurl(this_, php::takeValue(arg_url),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, title) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__frame__title(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, content) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__frame__content(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, setContent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_html = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_html.isString()))) {
            php::throwArgumentTypeError(raw_arg_html, get_str(1308), 1, get_str(274), get_str(98));
        }
        php::Str arg_html = php::toString(raw_arg_html);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__setcontent_arg_1_default_value()));
        php_nativeplaywright__frame__setcontent(this_, php::takeValue(arg_html),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, evaluate) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_js = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_js.isString()))) {
            php::throwArgumentTypeError(raw_arg_js, get_str(1309), 1, get_str(277), get_str(98));
        }
        php::Str arg_js = php::toString(raw_arg_js);
        php::Var arg_arg = php::getCallArg(1, php_nativeplaywright__frame__evaluate_arg_1_default_value());
        auto retval = php_nativeplaywright__frame__evaluate(this_, php::takeValue(arg_js),php::takeValue(arg_arg));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, waitForFunction) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 3, false);
        php::Var raw_arg_js = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_js.isString()))) {
            php::throwArgumentTypeError(raw_arg_js, get_str(1310), 1, get_str(277), get_str(98));
        }
        php::Str arg_js = php::toString(raw_arg_js);
        php::Var arg_arg = php::getCallArg(1, php_nativeplaywright__frame__waitforfunction_arg_1_default_value());
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__frame__waitforfunction_arg_2_default_value()));
        auto retval = php_nativeplaywright__frame__waitforfunction(this_, php::takeValue(arg_js),php::takeValue(arg_arg),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, addScriptTag) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0));
        php_nativeplaywright__frame__addscripttag(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, addStyleTag) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0));
        php_nativeplaywright__frame__addstyletag(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, locator) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1311), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__locator_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__locator(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, getByText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1312), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__getbytext_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__getbytext(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, getByRole) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_role = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_role.isString()))) {
            php::throwArgumentTypeError(raw_arg_role, get_str(1313), 1, get_str(331), get_str(98));
        }
        php::Str arg_role = php::toString(raw_arg_role);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__getbyrole_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__getbyrole(this_, php::takeValue(arg_role),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, getByLabel) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1314), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__getbylabel_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__getbylabel(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, getByPlaceholder) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1315), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__getbyplaceholder_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__getbyplaceholder(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, getByAltText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1316), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__getbyalttext_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__getbyalttext(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, getByTitle) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1317), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__getbytitle_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__getbytitle(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, getByTestId) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_testId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_testId.isString()))) {
            php::throwArgumentTypeError(raw_arg_testId, get_str(1318), 1, get_str(337), get_str(98));
        }
        php::Str arg_testId = php::toString(raw_arg_testId);
        auto retval = php_nativeplaywright__frame__getbytestid(this_, php::takeValue(arg_testId));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, frameLocator) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1319), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        auto retval = php_nativeplaywright__frame__framelocator(this_, php::takeValue(arg_selector));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, click) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1320), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__click_arg_1_default_value()));
        php_nativeplaywright__frame__click(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, dblclick) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1321), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__dblclick_arg_1_default_value()));
        php_nativeplaywright__frame__dblclick(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, tap) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1322), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__tap_arg_1_default_value()));
        php_nativeplaywright__frame__tap(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, fill) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1323), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_value = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_value.isString()))) {
            php::throwArgumentTypeError(raw_arg_value, get_str(1323), 2, get_str(109), get_str(98));
        }
        php::Str arg_value = php::toString(raw_arg_value);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__frame__fill_arg_2_default_value()));
        php_nativeplaywright__frame__fill(this_, php::takeValue(arg_selector),php::takeValue(arg_value),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, type) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1324), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_text = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1324), 2, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__frame__type_arg_2_default_value()));
        php_nativeplaywright__frame__type(this_, php::takeValue(arg_selector),php::takeValue(arg_text),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, press) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1325), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_key = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_key.isString()))) {
            php::throwArgumentTypeError(raw_arg_key, get_str(1325), 2, get_str(416), get_str(98));
        }
        php::Str arg_key = php::toString(raw_arg_key);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__frame__press_arg_2_default_value()));
        php_nativeplaywright__frame__press(this_, php::takeValue(arg_selector),php::takeValue(arg_key),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, hover) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1326), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__hover_arg_1_default_value()));
        php_nativeplaywright__frame__hover(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, focus) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1327), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__focus_arg_1_default_value()));
        php_nativeplaywright__frame__focus(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, check) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1328), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__check_arg_1_default_value()));
        php_nativeplaywright__frame__check(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, uncheck) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1329), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__uncheck_arg_1_default_value()));
        php_nativeplaywright__frame__uncheck(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, setChecked) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1330), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_checked = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_checked.isBool()))) {
            php::throwArgumentTypeError(raw_arg_checked, get_str(1330), 2, get_str(1182), get_str(106));
        }
        php::Bool arg_checked = php::toBool(raw_arg_checked);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__frame__setchecked_arg_2_default_value()));
        php_nativeplaywright__frame__setchecked(this_, php::takeValue(arg_selector),arg_checked,php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, selectOption) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1287), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var arg_values = php::getCallArg(1);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__frame__selectoption_arg_2_default_value()));
        auto retval = php_nativeplaywright__frame__selectoption(this_, php::takeValue(arg_selector),php::takeValue(arg_values),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, setInputFiles) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1288), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var arg_files = php::getCallArg(1);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__frame__setinputfiles_arg_2_default_value()));
        php_nativeplaywright__frame__setinputfiles(this_, php::takeValue(arg_selector),php::takeValue(arg_files),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, dragAndDrop) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_source = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_source.isString()))) {
            php::throwArgumentTypeError(raw_arg_source, get_str(1331), 1, get_str(750), get_str(98));
        }
        php::Str arg_source = php::toString(raw_arg_source);
        php::Var raw_arg_target = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_target.isString()))) {
            php::throwArgumentTypeError(raw_arg_target, get_str(1331), 2, get_str(1184), get_str(98));
        }
        php::Str arg_target = php::toString(raw_arg_target);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__frame__draganddrop_arg_2_default_value()));
        php_nativeplaywright__frame__draganddrop(this_, php::takeValue(arg_source),php::takeValue(arg_target),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, dispatchEvent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 4, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1332), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_type = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_type.isString()))) {
            php::throwArgumentTypeError(raw_arg_type, get_str(1332), 2, get_str(425), get_str(98));
        }
        php::Str arg_type = php::toString(raw_arg_type);
        php::Array arg_eventInit = php::toArray(php::getCallArg(2, php_nativeplaywright__frame__dispatchevent_arg_2_default_value()));
        php::Array arg_options = php::toArray(php::getCallArg(3, php_nativeplaywright__frame__dispatchevent_arg_3_default_value()));
        php_nativeplaywright__frame__dispatchevent(this_, php::takeValue(arg_selector),php::takeValue(arg_type),php::takeValue(arg_eventInit),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, textContent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1290), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__textcontent_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__textcontent(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, innerText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1333), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__innertext_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__innertext(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, innerHTML) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1334), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__innerhtml_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__innerhtml(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, getAttribute) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1291), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_name = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(1291), 2, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__frame__getattribute_arg_2_default_value()));
        auto retval = php_nativeplaywright__frame__getattribute(this_, php::takeValue(arg_selector),php::takeValue(arg_name),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, inputValue) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1335), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__inputvalue_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__inputvalue(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, isVisible) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1336), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        auto retval = php_nativeplaywright__frame__isvisible(this_, php::takeValue(arg_selector));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, isHidden) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1337), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        auto retval = php_nativeplaywright__frame__ishidden(this_, php::takeValue(arg_selector));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, isEnabled) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1338), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__isenabled_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__isenabled(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, isDisabled) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1339), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__isdisabled_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__isdisabled(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, isEditable) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1340), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__iseditable_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__iseditable(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, isChecked) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1341), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__ischecked_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__ischecked(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, waitForSelector) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1295), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__frame__waitforselector_arg_1_default_value()));
        auto retval = php_nativeplaywright__frame__waitforselector(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, evalOnSelector) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1342), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_js = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_js.isString()))) {
            php::throwArgumentTypeError(raw_arg_js, get_str(1342), 2, get_str(277), get_str(98));
        }
        php::Str arg_js = php::toString(raw_arg_js);
        php::Var arg_arg = php::getCallArg(2, php_nativeplaywright__frame__evalonselector_arg_2_default_value());
        auto retval = php_nativeplaywright__frame__evalonselector(this_, php::takeValue(arg_selector),php::takeValue(arg_js),php::takeValue(arg_arg));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Frame, evalOnSelectorAll) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1343), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php::Var raw_arg_js = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_js.isString()))) {
            php::throwArgumentTypeError(raw_arg_js, get_str(1343), 2, get_str(277), get_str(98));
        }
        php::Str arg_js = php::toString(raw_arg_js);
        php::Var arg_arg = php::getCallArg(2, php_nativeplaywright__frame__evalonselectorall_arg_2_default_value());
        auto retval = php_nativeplaywright__frame__evalonselectorall(this_, php::takeValue(arg_selector),php::takeValue(arg_js),php::takeValue(arg_arg));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

