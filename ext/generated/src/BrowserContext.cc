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
#include <php_native_playwright_src_NativePlaywright_BrowserContext_cd971a2234_decl.h>
#include <php_native_playwright_src_NativePlaywright_Browser_5c08077592_decl.h>
#include <php_native_playwright_src_NativePlaywright_CDPSession_9157bcb704_decl.h>
#include <php_native_playwright_src_NativePlaywright_EventEmitter_2f3b042d92_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Locator_206b2f41f4_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_RouteHandler_a91721537d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

void php_nativeplaywright__browsercontext____construct(php::Object &this_, php::Object browser, php::Object t, php::Str id, php::Array options, php::Bool isDefault) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{27}, get_str(701));
typephp_write_property_scoped(this_, "browser", browser, get_persistent_class(PersistentClassId{27}, get_str(701)));
typephp_write_property_scoped(this_, "t", t, get_persistent_class(PersistentClassId{27}, get_str(701)));
typephp_write_property_scoped(this_, "id", id, get_persistent_class(PersistentClassId{27}, get_str(701)));
typephp_write_property_scoped(this_, "options", options, get_persistent_class(PersistentClassId{27}, get_str(701)));
typephp_write_property_scoped(this_, "isDefault", isDefault, get_persistent_class(PersistentClassId{27}, get_str(701)));

    ((tmp_var_1 = ([&]() -> php::Var {
        tmp_var_0 = (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(780))}}))) ? (php::Var(php::toArray(options.get(get_str(780))))) : (php::Var(php::null));
        if (UNEXPECTED(!(tmp_var_0.isNull() || tmp_var_0.isArray()))) {
            php::throwExceptionEx(zend_ce_type_error, 0, "NativePlaywright\\BrowserContext::$geolocation must be of type ?array, %s given", tmp_var_0.typeStr());
        }
        return tmp_var_0;
    }()), typephp_write_property_scoped(this_, get_str(780), tmp_var_1, tmp_var_2)), tmp_var_1);
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(799))}}, tmp_var_4)) {
        tmp_var_3 = tmp_var_4;
    } else {
        tmp_var_3 = php::Array{};
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{141}, get_str(1069), get_str(701)), php::AttrMode::Update) = php::toArray(tmp_var_3);
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(803))}}, tmp_var_6)) {
        tmp_var_5 = tmp_var_6;
    } else {
        tmp_var_5 = false;
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{142}, get_str(803), get_str(701)), php::AttrMode::Update) = php::toBool(tmp_var_5);
}

void php_nativeplaywright__browsercontext__initialize(php::Object &this_) {
    php::Array o;
    php::Bool accept = 0;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Str dir;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_5;
    zend_function * tmp_var_6;
    php::Var tmp_var_7;
    zend_function * tmp_var_8;
    zend_function * tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    zend_function * tmp_var_12;
    zend_function * tmp_var_13;
    zend_function * tmp_var_14;
    php::Array p;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Bool tmp_var_18 = 0;
    php::Var tmp_var_19;
    php::Array calls;
    php::Var tmp_var_20;
    php::Var tmp_var_21;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    php::Var state;
    zend_function * tmp_var_25;
    php::Var tmp_var_26;
    zend_function * tmp_var_27;
    zend_function * tmp_var_28;
    php::Var tmp_var_29;
    php::Var tmp_var_30;
    php::Var tmp_var_31;
    php::Var tmp_var_32;
    php::Var tmp_var_33;
    php::Var tmp_var_34;
    php::Var tmp_var_35;
    php::Var tmp_var_36;
    php::Var origin;
    php::Array items;
    php::Var tmp_var_39;
    php::Var tmp_var_40;
    php::Var tmp_var_41;
    php::Var kv;
    php::Var tmp_var_43;
    php::Var tmp_var_44;
    php::Object tmp_var_45;
    php::Var tmp_var_46;
    php::Var tmp_var_47;
    zend_class_entry *tmp_var_38 = get_persistent_class(PersistentClassId{27}, get_str(701));
    Z_PTR_P(tmp_var_45.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    o = this_.attr(get_persistent_prop(PersistentPropertyId{143}, get_str(736), get_str(701)), php::AttrMode::Get);
    if (php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(1530))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = true;
    }
    accept = php::toBool(tmp_var_0);
    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{144}, get_str(694), get_str(701)), php::AttrMode::Get);
    php::Object tmp_var_4 = tmp_var_3;
    tmp_var_5 = php_nativeplaywright__browser__launchoption(tmp_var_4, get_str(1532));
    if (php::exists(tmp_var_5)) {
        tmp_var_2 = tmp_var_5;
    } else {
        tmp_var_2 = php::empty_string;
    }
    dir = php::toString(tmp_var_2);
    tmp_var_3.unset();
    tmp_var_5.unset();
    if (php::toBool(php::same(dir, php::empty_string))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{216}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{216}) = php::fn::function_exists(get_str(1438)) ? 1 : 2; }
        tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{216}) == 1 ? get_func(RequestFuncId{59}, get_str(1438)) : get_persistent_func(PersistentFuncId{63}, get_str(1439));
        tmp_var_7 = php::call(tmp_var_6, php::VarList{});
        if (get_function_resolution_cache(FunctionResolutionCacheId{217}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{217}) = php::fn::function_exists(get_str(1441)) ? 1 : 2; }
        tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{217}) == 1 ? get_func(RequestFuncId{60}, get_str(1441)) : get_persistent_func(PersistentFuncId{64}, get_str(1442));
        if (get_function_resolution_cache(FunctionResolutionCacheId{218}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{218}) = php::fn::function_exists(get_str(1443)) ? 1 : 2; }
        tmp_var_9 = get_function_resolution_cache(FunctionResolutionCacheId{218}) == 1 ? get_func(RequestFuncId{61}, get_str(1443)) : get_persistent_func(PersistentFuncId{65}, get_str(1444));
        tmp_var_10 = php::call(tmp_var_9, php::VarList{6L});
        tmp_var_11 = php::call(tmp_var_8, php::VarList{tmp_var_10});
        tmp_var_10.unset();
        dir = php::concat({php::toString(tmp_var_7), get_str(1533), php::toString(tmp_var_11)});
        tmp_var_7.unset();
        tmp_var_11.unset();
        this_.attr(get_persistent_prop(PersistentPropertyId{145}, get_str(1534), get_str(701)), php::AttrMode::Update) = true;
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{219}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{219}) = php::fn::function_exists(get_str(684)) ? 1 : 2; }
    tmp_var_12 = get_function_resolution_cache(FunctionResolutionCacheId{219}) == 1 ? get_func(RequestFuncId{41}, get_str(684)) : get_persistent_func(PersistentFuncId{45}, get_str(685));
    if (php::toBool(!(php::toBool(php::call(tmp_var_12, php::VarList{dir}))))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{220}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{220}) = php::fn::function_exists(get_str(686)) ? 1 : 2; }
        tmp_var_13 = get_function_resolution_cache(FunctionResolutionCacheId{220}) == 1 ? get_func(RequestFuncId{42}, get_str(686)) : get_persistent_func(PersistentFuncId{46}, get_str(687));
        php::call(tmp_var_13, php::VarList{dir, 511L, true});
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{221}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{221}) = php::fn::function_exists(get_str(1448)) ? 1 : 2; }
    tmp_var_14 = get_function_resolution_cache(FunctionResolutionCacheId{221}) == 1 ? get_func(RequestFuncId{63}, get_str(1448)) : get_persistent_func(PersistentFuncId{67}, get_str(1449));
    this_.attr(get_persistent_prop(PersistentPropertyId{146}, get_str(1535), get_str(701)), php::AttrMode::Update) = php::toString(php::call(tmp_var_14, php::VarList{dir}));
    tmp_var_15 = (php::toBool(accept)) ? (get_str(1536)) : (get_str(1537));
    tmp_var_16 = this_.attr(get_persistent_prop(PersistentPropertyId{146}, get_str(1535), get_str(701)), php::AttrMode::Get);
    p = php::Array{
        { get_str(1538).str(), php::Var(tmp_var_15) }, 
        { get_str(1539).str(), php::Var(tmp_var_16) }, 
        { get_str(1540).str(), php::Var(true) }
    };
    tmp_var_15.unset();
    tmp_var_16.unset();
    tmp_var_17 = this_.attr(get_persistent_prop(PersistentPropertyId{147}, get_str(118), get_str(701)), php::AttrMode::Get);
    tmp_var_18 = php::toBool(!(php::same(tmp_var_17, php::empty_string)));
    tmp_var_17.unset();
    if (php::toBool(tmp_var_18)) {
        ((tmp_var_19 = this_.attr(get_persistent_prop(PersistentPropertyId{147}, get_str(118), get_str(701)), php::AttrMode::Get), p.item(get_str(696), true) = tmp_var_19), tmp_var_19);
    }
    tmp_var_20 = php::Array{
            php::Var(get_str(1541)), 
            php::Var(p)
        };
    calls = php::Array{
        php::Var(tmp_var_20)
    };
    tmp_var_20.unset();
    if (php::toBool(!(php::toBool(php::empty(o, {{php::ArrayDimFetch, php::Var(get_str(1542))}}))))) {
        tmp_var_21 = php::toArray(o.get(get_str(1542)));
        tmp_var_22 = php_nativeplaywright__browsercontext__permissionparams(this_, tmp_var_21, php::empty_string);
        tmp_var_21.unset();
        ((tmp_var_23 = php::Array{
            php::Var(get_str(1543)), 
            php::Var(tmp_var_22)
        }, calls.append(tmp_var_23)), tmp_var_23);
        tmp_var_22.unset();
    }
    tmp_var_24 = this_.attr(get_persistent_prop(PersistentPropertyId{148}, get_str(660), get_str(701)), php::AttrMode::Get);
    typephp_call_method_cached(tmp_var_24, get_str(710), get_method_call_cache(MethodCallCacheId{59}), php::VarList{calls, php::empty_string, true});
    tmp_var_24.unset();
    if (php::toBool(php::exists(o, {{php::ArrayDimFetch, php::Var(get_str(1545))}}))) {
        state = [&]() -> php::Var {
            if (get_function_resolution_cache(FunctionResolutionCacheId{222}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{222}) = php::fn::function_exists(get_str(71)) ? 1 : 2; }
            tmp_var_25 = get_function_resolution_cache(FunctionResolutionCacheId{222}) == 1 ? get_func(RequestFuncId{0}, get_str(71)) : get_persistent_func(PersistentFuncId{0}, get_str(72));
            tmp_var_26 = o.get(get_str(1545));
            tmp_var_31 = php::call(tmp_var_25, php::VarList{php::deindirect(tmp_var_26)});
            tmp_var_26.unset();
            if (php::toBool(tmp_var_31)) {
                if (get_function_resolution_cache(FunctionResolutionCacheId{223}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{223}) = php::fn::function_exists(get_str(92)) ? 1 : 2; }
                tmp_var_27 = get_function_resolution_cache(FunctionResolutionCacheId{223}) == 1 ? get_func(RequestFuncId{2}, get_str(92)) : get_persistent_func(PersistentFuncId{2}, get_str(93));
                if (get_function_resolution_cache(FunctionResolutionCacheId{224}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{224}) = php::fn::function_exists(get_str(644)) ? 1 : 2; }
                tmp_var_28 = get_function_resolution_cache(FunctionResolutionCacheId{224}) == 1 ? get_func(RequestFuncId{39}, get_str(644)) : get_persistent_func(PersistentFuncId{43}, get_str(645));
                tmp_var_29 = o.get(get_str(1545));
                tmp_var_30 = php::toString(php::call(tmp_var_28, php::VarList{php::deindirect(tmp_var_29)}));
                tmp_var_29.unset();
                tmp_var_32 = php::call(tmp_var_27, php::VarList{tmp_var_30, true});
                tmp_var_30.unset();
                return tmp_var_32;
            } else {
                return php::Var(php::toArray(o.get(get_str(1545))));
            }
        }();
        if (php::toBool(!(php::toBool(php::empty(state, {{php::ArrayDimFetch, php::Var(get_str(1546))}}))))) {
            tmp_var_33 = php::toArray(state.item(get_str(1546), false));
            php_nativeplaywright__browsercontext__addcookies(this_, tmp_var_33);
            tmp_var_33.unset();
        }
        if (php::exists(state, {{php::ArrayDimFetch, php::Var(get_str(1548))}}, tmp_var_35)) {
            tmp_var_34 = tmp_var_35;
        } else {
            tmp_var_34 = php::Array{};
        }

        tmp_var_36 = php::toArray(tmp_var_34);
        {
            php::ForeachIterator tmp_var_37{tmp_var_36, false, tmp_var_38};
            while (tmp_var_37.next()) {
                origin = tmp_var_37.value();
                items = php::Array{};
                if (php::exists(origin, {{php::ArrayDimFetch, php::Var(get_str(1549))}}, tmp_var_40)) {
                    tmp_var_39 = tmp_var_40;
                } else {
                    tmp_var_39 = php::Array{};
                }

                tmp_var_41 = php::toArray(tmp_var_39);
                {
                    php::ForeachIterator tmp_var_42{tmp_var_41, false, tmp_var_38};
                    while (tmp_var_42.next()) {
                        kv = tmp_var_42.value();
                        ((tmp_var_43 = php::toString(kv.item(get_str(109), false)), items.item(php::toString(kv.item(get_str(255), false)), true) = tmp_var_43), tmp_var_43);
                    }
                }
                [&]() -> php::Var {
                auto&& tmp_var_48 = this_.attr(get_persistent_prop(PersistentPropertyId{149}, get_str(748), get_str(701)), php::AttrMode::Update);
                php::Var tmp_var_49 = php::null;
                tmp_var_44 = php::toString(origin.item(get_str(1551), false));
                tmp_var_46 = php_nativeplaywright__locator__js(tmp_var_45, tmp_var_44);
                tmp_var_44.unset();
                tmp_var_47 = php_nativeplaywright__locator__js(tmp_var_45, php::toObject(items));
                php::Var tmp_var_50 = php::concat({get_str(1550), tmp_var_46, get_str(1552), get_str(1553), get_str(1554), tmp_var_47, get_str(1555)});
                tmp_var_46.unset();
                tmp_var_47.unset();
                tmp_var_48.append(tmp_var_50);
                return tmp_var_50;
                }();
            }
        }
    }
}

php::Object php_nativeplaywright__browsercontext__transport(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{148}, get_str(660), get_str(701)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Float php_nativeplaywright__browsercontext__defaulttimeout(php::Object &this_) {
    php::Float tmp_var_0 = 0;
    php::Float tmp_var_1 = 0;
    php::Float &_object_prop_this___defaultTimeoutMs = this_.attrFloat(get_persistent_prop(PersistentPropertyId{150}, get_str(727), get_str(701)));

    tmp_var_0 = php::toFloat(_object_prop_this___defaultTimeoutMs);
    tmp_var_1 = (php::toFloat(((tmp_var_0) / (php::toFloat(1000L)))));
    return tmp_var_1;
}

php::Str php_nativeplaywright__browsercontext__id(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{147}, get_str(118), get_str(701)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Array php_nativeplaywright__browsercontext__options(php::Object &this_) {
    php::Array tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{143}, get_str(736), get_str(701)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Object php_nativeplaywright__browsercontext__browser(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{144}, get_str(694), get_str(701)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__browsercontext__baseurl(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Str tmp_var_2;

    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{143}, get_str(736), get_str(701)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(get_str(304))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::empty_string;
    }
    tmp_var_2 = (php::toString(tmp_var_0));
    return tmp_var_2;
}

php::Float php_nativeplaywright__browsercontext__defaulttimeoutms(php::Object &this_) {
    php::Float tmp_var_0 = 0;
    php::Float &_object_prop_this___defaultTimeoutMs = this_.attrFloat(get_persistent_prop(PersistentPropertyId{150}, get_str(727), get_str(701)));

    tmp_var_0 = (php::toFloat(_object_prop_this___defaultTimeoutMs));
    return tmp_var_0;
}

php::Float php_nativeplaywright__browsercontext__defaultnavigationtimeoutms(php::Object &this_) {
    php::Float tmp_var_0 = 0;
    php::Var tmp_var_1;
    php::Float tmp_var_2 = 0;
    php::Float &_object_prop_this___defaultTimeoutMs = this_.attrFloat(get_persistent_prop(PersistentPropertyId{150}, get_str(727), get_str(701)));

    tmp_var_1 = (this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{151}, get_str(730), get_str(701)), php::AttrMode::Isset) : php::Var{});
    if (php::exists(tmp_var_1)) {
        tmp_var_0 = php::toFloat(tmp_var_1);
    } else {
        tmp_var_0 = php::toFloat(_object_prop_this___defaultTimeoutMs);
    }
    tmp_var_2 = (php::toFloat(tmp_var_0));
    tmp_var_1.unset();
    return tmp_var_2;
}

void php_nativeplaywright__browsercontext__setdefaulttimeout(php::Object &this_, php::Float ms) {
    php::Float &_object_prop_this___defaultTimeoutMs = this_.attrFloat(get_persistent_prop(PersistentPropertyId{150}, get_str(727), get_str(701)));

    _object_prop_this___defaultTimeoutMs = ms;
}

void php_nativeplaywright__browsercontext__setdefaultnavigationtimeout(php::Object &this_, php::Float ms) {
    this_.attr(get_persistent_prop(PersistentPropertyId{151}, get_str(730), get_str(701)), php::AttrMode::Update) = ms;
}

php::Bool php_nativeplaywright__browsercontext__haslisteners(php::Object &this_, php::Str event) {
    php::Int tmp_var_0 = 0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php::toInt(php_nativeplaywright__browsercontext__listenercount(this_, event));
    tmp_var_1 = (php::toBool(((tmp_var_0) > (0L))));
    return tmp_var_1;
}

void php_nativeplaywright__browsercontext__emitfrompage(php::Object &this_, php::Str event, php::Var arg) {
    php_nativeplaywright__browsercontext__emit(this_, event, arg);
}

php::Object php_nativeplaywright__browsercontext__newpage(php::Object &this_) {
    php::Var tmp_var_1;
    php::Object tmp_var_3;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{0}, get_str(75));

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{152}, get_str(76), get_str(701)), php::AttrMode::Get))) {
        php::throwException(php::newObject(tmp_var_0, php::VarList{get_str(1556)}));
    }
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{144}, get_str(694), get_str(701)), php::AttrMode::Get);
    php::Object tmp_var_2 = tmp_var_1;
    tmp_var_3 = (php_nativeplaywright__browser__createpage(tmp_var_2, this_));
    tmp_var_1.unset();
    return tmp_var_3;
}

php::Array php_nativeplaywright__browsercontext__pages(php::Object &this_) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Array tmp_var_2;

    if (get_function_resolution_cache(FunctionResolutionCacheId{225}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{225}) = php::fn::function_exists(get_str(454)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{225}) == 1 ? get_func(RequestFuncId{31}, get_str(454)) : get_persistent_func(PersistentFuncId{35}, get_str(455));
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Get);
    tmp_var_2 = (php::call(tmp_var_0, php::VarList{php::deindirect(tmp_var_1)}));
    tmp_var_1.unset();
    return tmp_var_2;
}

void php_nativeplaywright__browsercontext__didcreatepage(php::Object &this_, php::Object page) {
    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Update);
    php::Var tmp_var_1 = page.attr(get_persistent_prop(PersistentPropertyId{118}, get_str(977), get_str(475)), php::AttrMode::Get);
    php::Var tmp_var_2 = page;
    static_cast<void>(tmp_var_0.item(tmp_var_1, true) = tmp_var_2);
    return tmp_var_2;
    }();
    php_nativeplaywright__browsercontext__emit(this_, get_str(433), page);
}

void php_nativeplaywright__browsercontext__pageclosed(php::Object &this_, php::Object page) {
    this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Get).offsetUnset(page.attr(get_persistent_prop(PersistentPropertyId{118}, get_str(977), get_str(475)), php::AttrMode::Get));
}

void php_nativeplaywright__browsercontext__setowner(php::Object &this_, php::Object page) {
    this_.attr(get_persistent_prop(PersistentPropertyId{154}, get_str(1559), get_str(701)), php::AttrMode::Update) = page;
}

php::Bool php_nativeplaywright__browsercontext__ownedby(php::Object &this_, php::Object page) {
    php::Var tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{154}, get_str(1559), get_str(701)), php::AttrMode::Get);
    tmp_var_1 = (php::toBool(php::same(tmp_var_0, page)));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__browsercontext__expectpage(php::Object &this_, php::Object action, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Object tmp_var_5;

    tmp_var_0 = action;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1022))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = php::null;
    }
    tmp_var_3 = tmp_var_1;
    tmp_var_4 = (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(102))}}))) ? (php::Var(php::toFloat(options.get(get_str(102))))) : (php::Var(php::null));
    tmp_var_5 = (php::toObject(php_nativeplaywright__browsercontext__expectevent(this_, get_str(433), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_0), ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(tmp_var_3), tmp_var_4), get_persistent_class(PersistentClassId{14}, get_str(475))));
    tmp_var_0.unset();
    tmp_var_3.unset();
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Array php_nativeplaywright__browsercontext__cookieout(php::Object &this_, php::Array c) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Bool tmp_var_9 = 0;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Bool tmp_var_12 = 0;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    php::Array tmp_var_16;

    tmp_var_0 = php::toString(c.get(get_str(255)));
    tmp_var_1 = php::toString(c.get(get_str(109)));
    tmp_var_2 = php::toString(c.get(get_str(1560)));
    tmp_var_3 = php::toString(c.get(get_str(243)));
    tmp_var_6 = [&]() -> php::Var {
            if (php::toBool(!(php::toBool(php::empty(c, {{php::ArrayDimFetch, php::Var(get_str(1561))}}))))) {
                return php::Var(-1L);
            } else {
                if (php::exists(c, {{php::ArrayDimFetch, php::Var(get_str(1562))}}, tmp_var_5)) {
            tmp_var_4 = tmp_var_5;
        } else {
            tmp_var_4 = -1L;
        }
                return php::Var(php::toFloat(tmp_var_4));
            }
        }();
    if (php::exists(c, {{php::ArrayDimFetch, php::Var(get_str(1563))}}, tmp_var_8)) {
            tmp_var_7 = tmp_var_8;
        } else {
            tmp_var_7 = false;
        }
    tmp_var_9 = php::toBool(tmp_var_7);
    if (php::exists(c, {{php::ArrayDimFetch, php::Var(get_str(1564))}}, tmp_var_11)) {
            tmp_var_10 = tmp_var_11;
        } else {
            tmp_var_10 = false;
        }
    tmp_var_12 = php::toBool(tmp_var_10);
    if (php::exists(c, {{php::ArrayDimFetch, php::Var(get_str(1565))}}, tmp_var_14)) {
            tmp_var_13 = tmp_var_14;
        } else {
            tmp_var_13 = get_str(1566);
        }
    tmp_var_15 = php::toString(tmp_var_13);
    tmp_var_16 = (php::Array{
        { get_str(255).str(), php::Var(tmp_var_0) }, 
        { get_str(109).str(), php::Var(tmp_var_1) }, 
        { get_str(1560).str(), php::Var(tmp_var_2) }, 
        { get_str(243).str(), php::Var(tmp_var_3) }, 
        { get_str(1562).str(), php::Var(tmp_var_6) }, 
        { get_str(1563).str(), php::Var(tmp_var_9) }, 
        { get_str(1564).str(), php::Var(tmp_var_12) }, 
        { get_str(1565).str(), php::Var(tmp_var_15) }
    });
    tmp_var_0.unset();
    tmp_var_1.unset();
    tmp_var_2.unset();
    tmp_var_3.unset();
    tmp_var_6.unset();
    tmp_var_15.unset();
    return tmp_var_16;
}

php::Array php_nativeplaywright__browsercontext__ctxparam(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Array tmp_var_3;
    php::Array tmp_var_4;

    tmp_var_4 = ([&]() -> php::Array {
        tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{147}, get_str(118), get_str(701)), php::AttrMode::Get);
        tmp_var_2 = php::same(tmp_var_0, php::empty_string);
        tmp_var_0.unset();
        if (php::toBool(tmp_var_2)) {
            return php::Array{};
        } else {
            tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{147}, get_str(118), get_str(701)), php::AttrMode::Get);
            tmp_var_3 = php::Array{
        { get_str(696).str(), php::Var(tmp_var_1) }
    };
            tmp_var_1.unset();
            return tmp_var_3;
        }
    }());
    return tmp_var_4;
}

php::Array php_nativeplaywright__browsercontext__cookies(php::Object &this_, php::Var urls) {
    php::Var r;
    php::Var tmp_var_0;
    php::Var tmp_var_2;
    php::Array out;
    zend_function * tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var c;
    php::Var tmp_var_9;
    php::Bool tmp_var_10 = 0;
    zend_class_entry *tmp_var_8 = get_persistent_class(PersistentClassId{27}, get_str(701));
    if (UNEXPECTED(!(urls.isString() || urls.isArray()))) {
        php::throwArgumentTypeError(urls, get_str(1569), 1, get_str(1570), get_str(523));
    }

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{144}, get_str(694), get_str(701)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    tmp_var_2 = php_nativeplaywright__browsercontext__ctxparam(this_);
    r = php_nativeplaywright__browser__send(tmp_var_1, get_str(1567), tmp_var_2);
    tmp_var_0.unset();
    tmp_var_2.unset();
    out = php::Array{};
    urls = [&]() -> php::Var {
        if (get_function_resolution_cache(FunctionResolutionCacheId{226}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{226}) = php::fn::function_exists(get_str(71)) ? 1 : 2; }
        tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{226}) == 1 ? get_func(RequestFuncId{0}, get_str(71)) : get_persistent_func(PersistentFuncId{0}, get_str(72));
        if (php::toBool(php::call(tmp_var_3, php::VarList{urls}))) {
            return php::Var(php::Array{
        php::Var(urls)
    });
        } else {
            return php::Var(urls);
        }
    }();
    if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(1546))}}, tmp_var_5)) {
        tmp_var_4 = tmp_var_5;
    } else {
        tmp_var_4 = php::Array{};
    }

    tmp_var_6 = php::toArray(tmp_var_4);
    {
        php::ForeachIterator tmp_var_7{tmp_var_6, false, tmp_var_8};
        while (tmp_var_7.next()) {
            c = tmp_var_7.value();
            c = php_nativeplaywright__browsercontext__cookieout(this_, php::toArray(c));
            tmp_var_9 = php::Array{};
            tmp_var_10 = php::toBool(!(php::same(urls, tmp_var_9)));
            tmp_var_9.unset();
            if (php::toBool((php::toBool(tmp_var_10) && php::toBool(!(php::toBool(php_nativeplaywright__browsercontext__cookiematchesany(this_, c, urls))))))) {
                continue;
            }
            out.appendValue(c);
        }
    }
    return out;
}

php::Bool php_nativeplaywright__browsercontext__cookiematchesany(php::Object &this_, php::Array c, php::Array urls) {
    php::Var u;
    php::Var p;
    zend_function * tmp_var_2;
    zend_function * tmp_var_3;
    php::Bool tmp_var_4 = 0;
    php::Var host;
    zend_function * tmp_var_5;
    php::Var tmp_var_6;
    php::Var domain;
    zend_function * tmp_var_7;
    zend_function * tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    zend_function * tmp_var_11;
    php::Str path;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    zend_function * tmp_var_14;
    php::Str tmp_var_15;
    php::Var tmp_var_16;
    php::Bool tmp_var_17 = 0;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Var tmp_var_21;
    php::Bool tmp_var_22 = 0;
    php::Bool tmp_var_23 = 0;
    php::Bool tmp_var_24 = 0;
    php::Bool tmp_var_25 = 0;
    zend_class_entry *tmp_var_1 = get_persistent_class(PersistentClassId{27}, get_str(701));

    {
        php::ForeachIterator tmp_var_0{urls, false, tmp_var_1};
        while (tmp_var_0.nextValue(u)) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{227}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{227}) = php::fn::function_exists(get_str(236)) ? 1 : 2; }
            tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{227}) == 1 ? get_func(RequestFuncId{17}, get_str(236)) : get_persistent_func(PersistentFuncId{21}, get_str(237));
            p = php::call(tmp_var_2, php::VarList{php::toString(u)});
            if (get_function_resolution_cache(FunctionResolutionCacheId{228}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{228}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
            tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{228}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
            tmp_var_4 = php::toBool(!(php::toBool(php::call(tmp_var_3, php::VarList{p}))));
            if (php::toBool((php::toBool(tmp_var_4) || php::toBool(!(php::toBool(php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(239))}}))))))) {
                continue;
            }
            if (get_function_resolution_cache(FunctionResolutionCacheId{229}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{229}) = php::fn::function_exists(get_str(257)) ? 1 : 2; }
            tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{229}) == 1 ? get_func(RequestFuncId{19}, get_str(257)) : get_persistent_func(PersistentFuncId{23}, get_str(258));
            tmp_var_6 = php::toString(p.item(get_str(239), false));
            host = php::call(tmp_var_5, php::VarList{tmp_var_6});
            tmp_var_6.unset();
            if (get_function_resolution_cache(FunctionResolutionCacheId{230}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{230}) = php::fn::function_exists(get_str(257)) ? 1 : 2; }
            tmp_var_7 = get_function_resolution_cache(FunctionResolutionCacheId{230}) == 1 ? get_func(RequestFuncId{19}, get_str(257)) : get_persistent_func(PersistentFuncId{23}, get_str(258));
            if (get_function_resolution_cache(FunctionResolutionCacheId{231}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{231}) = php::fn::function_exists(get_str(251)) ? 1 : 2; }
            tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{231}) == 1 ? get_func(RequestFuncId{18}, get_str(251)) : get_persistent_func(PersistentFuncId{22}, get_str(252));
            tmp_var_9 = c.get(get_str(1560));
            tmp_var_10 = php::call(tmp_var_8, php::VarList{php::deindirect(tmp_var_9), get_str(384)});
            tmp_var_9.unset();
            domain = php::call(tmp_var_7, php::VarList{tmp_var_10});
            tmp_var_10.unset();
            if (php::toBool([&]() -> bool {
                if (php::toBool(!(php::same(host, domain)))) {
                    if (get_function_resolution_cache(FunctionResolutionCacheId{232}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{232}) = php::fn::function_exists(get_str(449)) ? 1 : 2; }
                    tmp_var_11 = get_function_resolution_cache(FunctionResolutionCacheId{232}) == 1 ? get_func(RequestFuncId{29}, get_str(449)) : get_persistent_func(PersistentFuncId{33}, get_str(450));
                    return php::toBool(!(php::toBool(php::call(tmp_var_11, php::VarList{host, php::concat({get_str(384), php::toString(domain)})}))));
                }
                return false;
            }())) {
                continue;
            }
            if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(243))}}, tmp_var_13)) {
                tmp_var_12 = tmp_var_13;
            } else {
                tmp_var_12 = get_str(211);
            }
            path = php::toString(tmp_var_12);
            if (get_function_resolution_cache(FunctionResolutionCacheId{233}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{233}) = php::fn::function_exists(get_str(199)) ? 1 : 2; }
            tmp_var_14 = get_function_resolution_cache(FunctionResolutionCacheId{233}) == 1 ? get_func(RequestFuncId{12}, get_str(199)) : get_persistent_func(PersistentFuncId{15}, get_str(200));
            tmp_var_15 = path;
            tmp_var_16 = c.get(get_str(243));
            tmp_var_17 = php::toBool(!(php::toBool(php::call(tmp_var_14, php::VarList{tmp_var_15, php::deindirect(tmp_var_16)}))));
            tmp_var_15.unset();
            tmp_var_16.unset();
            if (php::toBool(tmp_var_17)) {
                continue;
            }
            tmp_var_18 = c.get(get_str(1564));
            tmp_var_23 = php::toBool([&]() -> bool {
                if (php::toBool(tmp_var_18)) {
                    if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(238))}}, tmp_var_20)) {
                tmp_var_19 = tmp_var_20;
            } else {
                tmp_var_19 = php::empty_string;
            }
                    tmp_var_21 = tmp_var_19;
                    tmp_var_22 = php::toBool(!(php::same(tmp_var_21, get_str(1571))));
                    tmp_var_21.unset();
                    return php::toBool(tmp_var_22);
                }
                return false;
            }());
            tmp_var_18.unset();
            if (php::toBool((php::toBool(tmp_var_23) && php::toBool(!(php::same(host, get_str(1572))))))) {
                continue;
            }
            tmp_var_24 = (php::toBool(true));
            return tmp_var_24;
        }
    }
    tmp_var_25 = (php::toBool(false));
    return tmp_var_25;
}

void php_nativeplaywright__browsercontext__addcookies(php::Object &this_, php::Array cookies) {
    php::Array list;
    php::Var c;
    php::Array x;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Bool tmp_var_10 = 0;
    php::Float tmp_var_11 = 0;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var k;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Var tmp_var_21;
    zend_class_entry *tmp_var_1 = get_persistent_class(PersistentClassId{27}, get_str(701));
    zend_class_entry *tmp_var_5 = get_persistent_class(PersistentClassId{0}, get_str(75));

    list = php::Array{};
    {
        php::ForeachIterator tmp_var_0{cookies, false, tmp_var_1};
        while (tmp_var_0.nextValue(c)) {
            c = php::toArray(c);
            tmp_var_2 = php::toString(c.item(get_str(255), false));
            tmp_var_3 = php::toString(c.item(get_str(109), false));
            x = php::Array{
                { get_str(255).str(), php::Var(tmp_var_2) }, 
                { get_str(109).str(), php::Var(tmp_var_3) }
            };
            tmp_var_2.unset();
            tmp_var_3.unset();
            if (php::toBool(php::exists(c, {{php::ArrayDimFetch, php::Var(get_str(203))}}))) {
                ((tmp_var_4 = php::toString(c.item(get_str(203), false)), x.item(get_str(203), true) = tmp_var_4), tmp_var_4);
            } else {
                if (php::toBool(!(php::toBool(php::exists(c, {{php::ArrayDimFetch, php::Var(get_str(1560))}}))))) {
                    php::throwException(php::newObject(tmp_var_5, php::VarList{get_str(1573)}));
                }
                ((tmp_var_6 = php::toString(c.item(get_str(1560), false)), x.item(get_str(1560), true) = tmp_var_6), tmp_var_6);
                if (php::exists(c, {{php::ArrayDimFetch, php::Var(get_str(243))}}, tmp_var_8)) {
                    tmp_var_7 = tmp_var_8;
                } else {
                    tmp_var_7 = get_str(211);
                }
                ((tmp_var_9 = php::toString(tmp_var_7), x.item(get_str(243), true) = tmp_var_9), tmp_var_9);
            }
            tmp_var_10 = php::toBool(php::exists(c, {{php::ArrayDimFetch, php::Var(get_str(1562))}}));
            if (php::toBool([&]() -> bool {
                if (php::toBool(tmp_var_10)) {
                    tmp_var_11 = php::toFloat(c.item(get_str(1562), false));
                    return php::toBool(((tmp_var_11) >= (php::toFloat(0L))));
                }
                return false;
            }())) {
                ((tmp_var_12 = php::toFloat(c.item(get_str(1562), false)), x.item(get_str(1562), true) = tmp_var_12), tmp_var_12);
            }

            tmp_var_13 = php::Array{
                php::Var(get_str(1563)), 
                php::Var(get_str(1564))
            };
            {
                php::ForeachIterator tmp_var_14{tmp_var_13, false, tmp_var_1};
                while (tmp_var_14.next()) {
                    k = tmp_var_14.value();
                    if (php::toBool(php::exists(c, {{php::ArrayDimFetch, php::Var(k)}}))) {
                        ((tmp_var_15 = php::toBool(c.item(k, false)), x.item(k, true) = tmp_var_15), tmp_var_15);
                    }
                }
            }
            if (php::toBool(php::exists(c, {{php::ArrayDimFetch, php::Var(get_str(1565))}}))) {
                ((tmp_var_16 = php::toString(c.item(get_str(1565), false)), x.item(get_str(1565), true) = tmp_var_16), tmp_var_16);
            }
            list.appendValue(x);
        }
    }
    tmp_var_17 = this_.attr(get_persistent_prop(PersistentPropertyId{144}, get_str(694), get_str(701)), php::AttrMode::Get);
    php::Object tmp_var_18 = tmp_var_17;
    tmp_var_19 = php::Array{
        { get_str(1546).str(), php::Var(list) }
    };
    tmp_var_20 = php_nativeplaywright__browsercontext__ctxparam(this_);
    tmp_var_21 = ((tmp_var_19) + (tmp_var_20));
    tmp_var_19.unset();
    tmp_var_20.unset();
    php_nativeplaywright__browser__send(tmp_var_18, get_str(1574), tmp_var_21);
    tmp_var_17.unset();
    tmp_var_21.unset();
}

void php_nativeplaywright__browsercontext__clearcookies(php::Object &this_, php::Array options) {
    php::Array keep;
    php::Var tmp_var_0;
    php::Bool tmp_var_1 = 0;
    php::Var tmp_var_2;
    php::Var c;
    php::Bool match = 0;
    php::Var tmp_var_5;
    php::Var k;
    php::Str want;
    php::Bool ok = 0;
    php::Object tmp_var_7;
    zend_function * tmp_var_8;
    php::Str tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Bool tmp_var_13 = 0;
    php::Bool tmp_var_14 = 0;
    php::Var tmp_var_15;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Bool tmp_var_19 = 0;
    zend_class_entry *tmp_var_4 = get_persistent_class(PersistentClassId{27}, get_str(701));
    Z_PTR_P(tmp_var_7.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    keep = php::Array{};
    tmp_var_0 = php::Array{};
    tmp_var_1 = php::toBool(!(php::same(options, tmp_var_0)));
    tmp_var_0.unset();
    if (php::toBool(tmp_var_1)) {

        tmp_var_2 = php_nativeplaywright__browsercontext__cookies(this_);
        {
            php::ForeachIterator tmp_var_3{tmp_var_2, false, tmp_var_4};
            while (tmp_var_3.next()) {
                c = tmp_var_3.value();
                match = php::toBool(true);

                tmp_var_5 = php::Array{
                    php::Var(get_str(255)), 
                    php::Var(get_str(1560)), 
                    php::Var(get_str(243))
                };
                {
                    php::ForeachIterator tmp_var_6{tmp_var_5, false, tmp_var_4};
                    while (tmp_var_6.next()) {
                        k = tmp_var_6.value();
                        if (php::toBool(!(php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(k)}}))))) {
                            continue;
                        }
                        want = php::toString(options.item(k, false));
                        ok = php::toBool([&]() -> php::Bool {
                            if (php::toBool(php_nativeplaywright__util__isregex(tmp_var_7, want))) {
                                if (get_function_resolution_cache(FunctionResolutionCacheId{234}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{234}) = php::fn::function_exists(get_str(194)) ? 1 : 2; }
                                tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{234}) == 1 ? get_func(RequestFuncId{10}, get_str(194)) : get_persistent_func(PersistentFuncId{13}, get_str(195));
                                tmp_var_9 = want;
                                tmp_var_10 = c.item(k, false);
                                tmp_var_11 = php::call(tmp_var_8, php::VarList{tmp_var_9, php::deindirect(tmp_var_10)});
                                tmp_var_9.unset();
                                tmp_var_10.unset();
                                tmp_var_13 = php::same(tmp_var_11, 1L);
                                tmp_var_11.unset();
                                return tmp_var_13;
                            } else {
                                tmp_var_12 = c.item(k, false);
                                tmp_var_14 = php::same(tmp_var_12, want);
                                tmp_var_12.unset();
                                return tmp_var_14;
                            }
                        }());
                        match = php::toBool((php::toBool(match) && php::toBool(ok)));
                    }
                }
                if (php::toBool(!(php::toBool(match)))) {
                    keep.appendValue(c);
                }
            }
        }
    }
    tmp_var_15 = this_.attr(get_persistent_prop(PersistentPropertyId{144}, get_str(694), get_str(701)), php::AttrMode::Get);
    php::Object tmp_var_16 = tmp_var_15;
    tmp_var_17 = php_nativeplaywright__browsercontext__ctxparam(this_);
    php_nativeplaywright__browser__send(tmp_var_16, get_str(1575), tmp_var_17);
    tmp_var_15.unset();
    tmp_var_17.unset();
    tmp_var_18 = php::Array{};
    tmp_var_19 = php::toBool(!(php::same(keep, tmp_var_18)));
    tmp_var_18.unset();
    if (php::toBool(tmp_var_19)) {
        php_nativeplaywright__browsercontext__addcookies(this_, keep);
    }
}

php::Array php_nativeplaywright__browsercontext__storagestate(php::Object &this_, php::Array options) {
    php::Array origins;
    php::Var tmp_var_0;
    php::Var page;
    php::Var tmp_var_3;
    php::Var f;
    php::Var r;
    zend_function * tmp_var_5;
    php::Var tmp_var_6;
    php::Bool tmp_var_7 = 0;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Bool tmp_var_10 = 0;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Object e;
    php::Array state;
    php::Var tmp_var_14;
    zend_function * tmp_var_15;
    php::Var tmp_var_16;
    zend_function * tmp_var_17;
    php::Var tmp_var_18;
    zend_function * tmp_var_19;
    php::Array tmp_var_20;
    php::Var tmp_var_21;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{27}, get_str(701));

    origins = php::Array{};

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_1{tmp_var_0, false, tmp_var_2};
        while (tmp_var_1.next()) {
            page = tmp_var_1.value();

            tmp_var_3 = typephp_call_method_cached(page, get_str(816), get_method_call_cache(MethodCallCacheId{60}));
            {
                php::ForeachIterator tmp_var_4{tmp_var_3, false, tmp_var_2};
                while (tmp_var_4.next()) {
                    f = tmp_var_4.value();
                    try {
                        r = typephp_call_method_cached(f, get_str(960), get_method_call_cache(MethodCallCacheId{61}), php::VarList{php::concat(get_str(1576), get_str(1577))});
                        if (get_function_resolution_cache(FunctionResolutionCacheId{235}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{235}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
                        tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{235}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
                        tmp_var_6 = php::call(tmp_var_5, php::VarList{r});
                        tmp_var_7 = php::toBool((php::toBool(tmp_var_6) && php::toBool(!(php::toBool(php::exists(origins, {{php::ArrayDimFetch, php::Var(r.item(get_str(1551), false))}}))))));
                        tmp_var_6.unset();
                        if (php::toBool([&]() -> bool {
                            if (php::toBool(tmp_var_7)) {
                                tmp_var_8 = r.item(get_str(1549), false);
                                tmp_var_9 = php::Array{};
                                tmp_var_10 = php::toBool(!(php::same(tmp_var_8, tmp_var_9)));
                                tmp_var_8.unset();
                                tmp_var_9.unset();
                                return php::toBool(tmp_var_10);
                            }
                            return false;
                        }())) {
                            ((tmp_var_11 = r, origins.item(r.item(get_str(1551), false), true) = tmp_var_11), tmp_var_11);
                        }
                    } catch (zend_object *_ex) {
                        tmp_var_12 = php::catchException();
                        bool tmp_var_13 = false;
                        if (!tmp_var_13 && tmp_var_12 && (php::instanceOf(tmp_var_12, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
                            tmp_var_13 = true;
                            e = tmp_var_12;
                            tmp_var_12 = php::null;
                        }
                    }
                    if (tmp_var_12) {
                        php::throwException(php::Object(tmp_var_12));
                    }
                }
            }
        }
    }
    tmp_var_14 = php_nativeplaywright__browsercontext__cookies(this_);
    if (get_function_resolution_cache(FunctionResolutionCacheId{236}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{236}) = php::fn::function_exists(get_str(454)) ? 1 : 2; }
    tmp_var_15 = get_function_resolution_cache(FunctionResolutionCacheId{236}) == 1 ? get_func(RequestFuncId{31}, get_str(454)) : get_persistent_func(PersistentFuncId{35}, get_str(455));
    tmp_var_16 = php::call(tmp_var_15, php::VarList{origins});
    state = php::Array{
        { get_str(1546).str(), php::Var(tmp_var_14) }, 
        { get_str(1548).str(), php::Var(tmp_var_16) }
    };
    tmp_var_14.unset();
    tmp_var_16.unset();
    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(243))}}))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{237}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{237}) = php::fn::function_exists(get_str(1094)) ? 1 : 2; }
        tmp_var_17 = get_function_resolution_cache(FunctionResolutionCacheId{237}) == 1 ? get_func(RequestFuncId{54}, get_str(1094)) : get_persistent_func(PersistentFuncId{58}, get_str(1095));
        tmp_var_18 = php::toString(options.get(get_str(243)));
        if (get_function_resolution_cache(FunctionResolutionCacheId{238}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{238}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
        tmp_var_19 = get_function_resolution_cache(FunctionResolutionCacheId{238}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
        tmp_var_20 = state;
        tmp_var_21 = php::constant(get_str(1578), php::ConstantLookup::UnqualifiedInNamespace);
        tmp_var_22 = php::constant(get_str(0), php::ConstantLookup::UnqualifiedInNamespace);
        tmp_var_23 = ((php::Var(tmp_var_21)) | (php::Var(tmp_var_22)));
        tmp_var_21.unset();
        tmp_var_22.unset();
        tmp_var_24 = php::call(tmp_var_19, php::VarList{tmp_var_20, tmp_var_23});
        tmp_var_20.unset();
        tmp_var_23.unset();
        php::call(tmp_var_17, php::VarList{tmp_var_18, tmp_var_24});
        tmp_var_18.unset();
        tmp_var_24.unset();
    }
    return state;
}

php::Array php_nativeplaywright__browsercontext__permissionparams(php::Object &this_, php::Array permissions, php::Str origin) {
    php::Array map;
    php::Array out;
    php::Var p;
    php::Var v;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Array params;
    zend_function * tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    zend_class_entry *tmp_var_1 = get_persistent_class(PersistentClassId{27}, get_str(701));
    zend_class_entry *tmp_var_4 = get_persistent_class(PersistentClassId{0}, get_str(75));

    map = php::Array{
        { get_str(780).str(), php::Var(get_str(780)) }, 
        { get_str(1579).str(), php::Var(get_str(1579)) }, 
        { get_str(1581).str(), php::Var(get_str(1580)) }, 
        { get_str(1582).str(), php::Var(get_str(1582)) }, 
        { get_str(1584).str(), php::Var(get_str(1583)) }, 
        { get_str(1586).str(), php::Var(get_str(1585)) }, 
        { get_str(1588).str(), php::Var(get_str(1587)) }, 
        { get_str(1590).str(), php::Var(get_str(1589)) }, 
        { get_str(1591).str(), php::Var(get_str(1589)) }, 
        { get_str(1592).str(), php::Var(get_str(1589)) }, 
        { get_str(1593).str(), php::Var(get_str(1589)) }, 
        { get_str(1595).str(), php::Var(get_str(1594)) }, 
        { get_str(1597).str(), php::Var(get_str(1596)) }, 
        { get_str(1599).str(), php::Var(get_str(1598)) }, 
        { get_str(1601).str(), php::Var(get_str(1600)) }, 
        { get_str(1603).str(), php::Var(get_str(1602)) }, 
        { get_str(1605).str(), php::Var(get_str(1604)) }, 
        { get_str(1607).str(), php::Var(get_str(1606)) }, 
        { get_str(1609).str(), php::Var(get_str(1608)) }
    };
    out = php::Array{};
    {
        php::ForeachIterator tmp_var_0{permissions, false, tmp_var_1};
        while (tmp_var_0.nextValue(p)) {
            if (php::exists(map, {{php::ArrayDimFetch, php::Var(php::toString(p))}}, tmp_var_3)) {
                tmp_var_2 = tmp_var_3;
            } else {
                tmp_var_2 = php::null;
            }
            v = tmp_var_2;
            if (php::toBool(php::same(v, php::null))) {
                php::throwException(php::newObject(tmp_var_4, php::VarList{php::concat({get_str(1610), p})}));
            }
            out.item(v, true) = true;
        }
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{239}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{239}) = php::fn::function_exists(get_str(1611)) ? 1 : 2; }
    tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{239}) == 1 ? get_func(RequestFuncId{65}, get_str(1611)) : get_persistent_func(PersistentFuncId{70}, get_str(1612));
    tmp_var_6 = php::call(tmp_var_5, php::VarList{out});
    tmp_var_7 = php::Array{
        { get_str(1542).str(), php::Var(tmp_var_6) }
    };
    tmp_var_6.unset();
    tmp_var_8 = php_nativeplaywright__browsercontext__ctxparam(this_);
    params = ((tmp_var_7) + (tmp_var_8));
    tmp_var_7.unset();
    tmp_var_8.unset();
    if (php::toBool(!(php::same(origin, php::empty_string)))) {
        params.item(get_str(1551), true) = origin;
    }
    return params;
}

void php_nativeplaywright__browsercontext__grantpermissions(php::Object &this_, php::Array permissions, php::Array options) {
    php::Var tmp_var_0;
    php::Array tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{144}, get_str(694), get_str(701)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    tmp_var_2 = permissions;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1551))}}, tmp_var_4)) {
        tmp_var_3 = tmp_var_4;
    } else {
        tmp_var_3 = php::empty_string;
    }
    tmp_var_5 = php::toString(tmp_var_3);
    tmp_var_6 = php_nativeplaywright__browsercontext__permissionparams(this_, tmp_var_2, tmp_var_5);
    tmp_var_2.unset();
    tmp_var_5.unset();
    php_nativeplaywright__browser__send(tmp_var_1, get_str(1543), tmp_var_6);
    tmp_var_0.unset();
    tmp_var_6.unset();
}

void php_nativeplaywright__browsercontext__clearpermissions(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_2;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{144}, get_str(694), get_str(701)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    tmp_var_2 = php_nativeplaywright__browsercontext__ctxparam(this_);
    php_nativeplaywright__browser__send(tmp_var_1, get_str(1613), tmp_var_2);
    tmp_var_0.unset();
    tmp_var_2.unset();
}

php::Var php_nativeplaywright__browsercontext__geolocation(php::Object &this_) {
    php::Var tmp_var_0;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{140}, get_str(780), get_str(701)), php::AttrMode::Get);
    if (UNEXPECTED(!(tmp_var_0.isNull() || tmp_var_0.isArray()))) {
        php::throwReturnTypeError(tmp_var_0, get_str(1614), get_str(91), false);
    }
    return tmp_var_0;
}

void php_nativeplaywright__browsercontext__setgeolocation(php::Object &this_, php::Var geo) {
    php::Var tmp_var_0;
    php::Var tmp_var_2;
    php::Var p;
    php::Float tmp_var_4 = 0;
    php::Float tmp_var_5 = 0;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Float tmp_var_8 = 0;
    php::Var tmp_var_9;
    zend_class_entry *tmp_var_1 = get_persistent_class(PersistentClassId{27}, get_str(701));
    if (UNEXPECTED(!(geo.isNull() || geo.isArray()))) {
        php::throwArgumentTypeError(geo, get_str(1615), 1, get_str(1616), get_str(91));
    }

    typephp_write_property_scoped(this_, get_str(780), ([&]() -> php::Var {
        tmp_var_0 = geo;
        if (UNEXPECTED(!(tmp_var_0.isNull() || tmp_var_0.isArray()))) {
            php::throwExceptionEx(zend_ce_type_error, 0, "NativePlaywright\\BrowserContext::$geolocation must be of type ?array, %s given", tmp_var_0.typeStr());
        }
        return tmp_var_0;
    }()), tmp_var_1);

    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_3{tmp_var_2, false, tmp_var_1};
        while (tmp_var_3.next()) {
            p = tmp_var_3.value();
            tmp_var_9 = [&]() -> php::Array {
                if (php::toBool(php::same(geo, php::null))) {
                    return php::Array{};
                } else {
                    tmp_var_4 = php::toFloat(geo.item(get_str(782), false));
                    tmp_var_5 = php::toFloat(geo.item(get_str(783), false));
                    if (php::exists(geo, {{php::ArrayDimFetch, php::Var(get_str(784))}}, tmp_var_7)) {
                    tmp_var_6 = tmp_var_7;
                } else {
                    tmp_var_6 = 0L;
                }
                    tmp_var_8 = php::toFloat(tmp_var_6);
                    return php::Array{
                { get_str(782).str(), php::Var(tmp_var_4) }, 
                { get_str(783).str(), php::Var(tmp_var_5) }, 
                { get_str(784).str(), php::Var(tmp_var_8) }
            };
                }
            }();
            typephp_call_method_cached(p, get_str(119), get_method_call_cache(MethodCallCacheId{62}), php::VarList{get_str(781), tmp_var_9});
            tmp_var_9.unset();
        }
    }
}

php::Array php_nativeplaywright__browsercontext__extrahttpheaders(php::Object &this_) {
    php::Array tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{141}, get_str(1069), get_str(701)), php::AttrMode::Get));
    return tmp_var_0;
}

void php_nativeplaywright__browsercontext__setextrahttpheaders(php::Object &this_, php::Array headers) {
    php::Var tmp_var_0;
    php::Var p;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{27}, get_str(701));

    this_.attr(get_persistent_prop(PersistentPropertyId{141}, get_str(1069), get_str(701)), php::AttrMode::Update) = headers;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_1{tmp_var_0, false, tmp_var_2};
        while (tmp_var_1.next()) {
            p = tmp_var_1.value();
            typephp_call_method_cached(p, get_str(1070), get_method_call_cache(MethodCallCacheId{63}));
        }
    }
}

php::Bool php_nativeplaywright__browsercontext__isoffline(php::Object &this_) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{142}, get_str(803), get_str(701)), php::AttrMode::Get)));
    return tmp_var_0;
}

void php_nativeplaywright__browsercontext__setoffline(php::Object &this_, php::Bool offline) {
    php::Var tmp_var_0;
    php::Var p;
    php::Var tmp_var_3;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{27}, get_str(701));

    this_.attr(get_persistent_prop(PersistentPropertyId{142}, get_str(803), get_str(701)), php::AttrMode::Update) = offline;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_1{tmp_var_0, false, tmp_var_2};
        while (tmp_var_1.next()) {
            p = tmp_var_1.value();
            tmp_var_3 = php::Array{
                { get_str(803).str(), php::Var(offline) }, 
                { get_str(804).str(), php::Var(0L) }, 
                { get_str(805).str(), php::Var(-1L) }, 
                { get_str(806).str(), php::Var(-1L) }
            };
            typephp_call_method_cached(p, get_str(119), get_method_call_cache(MethodCallCacheId{64}), php::VarList{get_str(802), tmp_var_3});
            tmp_var_3.unset();
        }
    }
}

php::Var php_nativeplaywright__browsercontext__httpcredentials(php::Object &this_) {
    php::Var tmp_var_0;

    tmp_var_0 = (php::toBool(php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{143}, get_str(736), get_str(701)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(get_str(886))}}))) ? (php::Var(php::toArray(this_.attr(get_persistent_prop(PersistentPropertyId{143}, get_str(736), get_str(701)), php::AttrMode::Get).item(get_str(886), false)))) : (php::Var(php::null));
    if (UNEXPECTED(!(tmp_var_0.isNull() || tmp_var_0.isArray()))) {
        php::throwReturnTypeError(tmp_var_0, get_str(1617), get_str(91), false);
    }
    return tmp_var_0;
}

php::Str php_nativeplaywright__browsercontext__scriptsource(php::Object &this_, php::Var script, php::Var arg) {
    zend_function * tmp_var_0;
    zend_function * tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Str tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Str tmp_var_8;
    php::Object tmp_var_9;
    php::Var tmp_var_10;
    php::Object tmp_var_11;
    php::Var tmp_var_12;
    php::Str tmp_var_13;
    php::Var tmp_var_14;
    Z_PTR_P(tmp_var_9.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));
    Z_PTR_P(tmp_var_11.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));
    if (UNEXPECTED(!(script.isString() || script.isArray()))) {
        php::throwArgumentTypeError(script, get_str(1620), 1, get_str(971), get_str(523));
    }

    if (get_function_resolution_cache(FunctionResolutionCacheId{240}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{240}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{240}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
    if (php::toBool(php::call(tmp_var_0, php::VarList{script}))) {
        if (php::toBool(php::exists(script, {{php::ArrayDimFetch, php::Var(get_str(243))}}))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{241}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{241}) = php::fn::function_exists(get_str(644)) ? 1 : 2; }
            tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{241}) == 1 ? get_func(RequestFuncId{39}, get_str(644)) : get_persistent_func(PersistentFuncId{43}, get_str(645));
            tmp_var_2 = php::toString(script.item(get_str(243), false));
            tmp_var_3 = php::toString(php::call(tmp_var_1, php::VarList{tmp_var_2}));
            tmp_var_2.unset();
            tmp_var_4 = script.item(get_str(243), false);
            tmp_var_5 = (php::concat({tmp_var_3, get_str(1279), php::toString(tmp_var_4)}));
            tmp_var_3.unset();
            tmp_var_4.unset();
            return tmp_var_5;
        }
        if (php::exists(script, {{php::ArrayDimFetch, php::Var(get_str(1023))}}, tmp_var_7)) {
            tmp_var_6 = tmp_var_7;
        } else {
            tmp_var_6 = php::empty_string;
        }
        tmp_var_8 = (php::toString(tmp_var_6));
        return tmp_var_8;
    }
    if (php::toBool((php::toBool(!(php::same(arg, php::null))) || php::toBool(php_nativeplaywright__util__isfunction(tmp_var_9, php::toStringArgExact(script, get_str(306), 1, get_str(277))))))) {
        tmp_var_10 = script;
        tmp_var_12 = php_nativeplaywright__locator__js(tmp_var_11, arg);
        tmp_var_13 = (php::concat({get_str(1618), php::toString(tmp_var_10), get_str(1619), tmp_var_12, get_str(230)}));
        tmp_var_10.unset();
        tmp_var_12.unset();
        return tmp_var_13;
    }
    tmp_var_14 = (script);
    if (UNEXPECTED(!(tmp_var_14.isString()))) {
        php::throwReturnTypeError(tmp_var_14, get_str(1620), get_str(98), true);
    }
    return tmp_var_14;
}

php::Array php_nativeplaywright__browsercontext__initscripts(php::Object &this_) {
    php::Array tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{149}, get_str(748), get_str(701)), php::AttrMode::Get));
    return tmp_var_0;
}

void php_nativeplaywright__browsercontext__addinitscript(php::Object &this_, php::Var script, php::Var arg) {
    php::Str src;
    php::Var tmp_var_3;
    php::Var p;
    php::Var tmp_var_6;
    zend_class_entry *tmp_var_5 = get_persistent_class(PersistentClassId{27}, get_str(701));
    if (UNEXPECTED(!(script.isString() || script.isArray()))) {
        php::throwArgumentTypeError(script, get_str(1621), 1, get_str(971), get_str(523));
    }

    src = php_nativeplaywright__browsercontext__scriptsource(this_, script, arg);
    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{149}, get_str(748), get_str(701)), php::AttrMode::Update);
    php::Var tmp_var_1 = php::null;
    php::Var tmp_var_2 = src;
    tmp_var_0.append(tmp_var_2);
    return tmp_var_2;
    }();

    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_4{tmp_var_3, false, tmp_var_5};
        while (tmp_var_4.next()) {
            p = tmp_var_4.value();
            tmp_var_6 = php::Array{
                { get_str(750).str(), php::Var(src) }
            };
            typephp_call_method_cached(p, get_str(119), get_method_call_cache(MethodCallCacheId{65}), php::VarList{get_str(749), tmp_var_6});
            tmp_var_6.unset();
        }
    }
}

php::Array php_nativeplaywright__browsercontext__bindingnames(php::Object &this_) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Array tmp_var_2;

    if (get_function_resolution_cache(FunctionResolutionCacheId{242}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{242}) = php::fn::function_exists(get_str(1611)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{242}) == 1 ? get_func(RequestFuncId{65}, get_str(1611)) : get_persistent_func(PersistentFuncId{70}, get_str(1612));
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{155}, get_str(957), get_str(701)), php::AttrMode::Get);
    tmp_var_2 = (php::call(tmp_var_0, php::VarList{php::deindirect(tmp_var_1)}));
    tmp_var_1.unset();
    return tmp_var_2;
}

php::Object php_nativeplaywright__browsercontext__binding(php::Object &this_, php::Str name) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;

    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{155}, get_str(957), get_str(701)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(name)}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::null;
    }
    tmp_var_2 = tmp_var_0;
    if (UNEXPECTED(!(tmp_var_2.isNull() || (tmp_var_2.isObject() && php::instanceOf(tmp_var_2, get_persistent_class(PersistentClassId{5}, get_str(148))))))) {
        php::throwReturnTypeError(tmp_var_2, get_str(1622), get_str(1623), false);
    }
    return tmp_var_2;
}

void php_nativeplaywright__browsercontext__exposebinding(php::Object &this_, php::Str name, php::Object fn) {
    php::Var tmp_var_3;
    php::Var p;
    zend_class_entry *tmp_var_5 = get_persistent_class(PersistentClassId{27}, get_str(701));

    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{155}, get_str(957), get_str(701)), php::AttrMode::Update);
    php::Var tmp_var_1 = name;
    php::Var tmp_var_2 = fn;
    static_cast<void>(tmp_var_0.item(tmp_var_1, true) = tmp_var_2);
    return tmp_var_2;
    }();

    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_4{tmp_var_3, false, tmp_var_5};
        while (tmp_var_4.next()) {
            p = tmp_var_4.value();
            typephp_call_method_cached(p, get_str(958), get_method_call_cache(MethodCallCacheId{66}), php::VarList{name});
        }
    }
}

void php_nativeplaywright__browsercontext__exposefunction(php::Object &this_, php::Str name, php::Object fn) {
    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(1, 2, true);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!(tmp_var_0.isArray()))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(750), get_str(665));
            return php::null;
        }
        php::Array source = php::toArray(tmp_var_0);
        tmp_var_0.unset();
        php::Array args;
        for (uint32_t i = 1; i < php::getCallArgNum(); i++) {
            args.appendValue(php::getCallArg(i));
        }
        php::appendCallExtraNamedArgs(args);
        php::Object fn = php::Object(vars_.get(0));
    php::Args tmp_var_1{php::ArgList{}};
    tmp_var_1.appendUnpacked(args);
    return typephp_call_cached(fn, get_function_call_cache(FunctionCallCacheId{22}), tmp_var_1);};
    php_nativeplaywright__browsercontext__exposebinding(this_, name, php::toObject(php::newClosureWithParameters(tmp_var_0, { fn }, this_, get_persistent_class(PersistentClassId{27}, get_str(701)), { php::ClosureParameter{"source", false, false, true}, php::ClosureParameter{"args", false, true, false} }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))));
}

php::Bool php_nativeplaywright__browsercontext__hasroutes(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Bool tmp_var_2 = 0;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{156}, get_str(930), get_str(701)), php::AttrMode::Get);
    tmp_var_1 = php::Array{};
    tmp_var_2 = (php::toBool(!(php::same(tmp_var_0, tmp_var_1))));
    tmp_var_0.unset();
    tmp_var_1.unset();
    return tmp_var_2;
}

php::Array php_nativeplaywright__browsercontext__routehandlers(php::Object &this_) {
    php::Array tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{156}, get_str(930), get_str(701)), php::AttrMode::Get));
    return tmp_var_0;
}

void php_nativeplaywright__browsercontext__route(php::Object &this_, php::Var url, php::Object handler, php::Array options) {
    php::Var tmp_var_1;
    php::Object tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Int tmp_var_5 = 0;
    php::Var tmp_var_9;
    php::Var p;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{24}, get_str(656));
    zend_class_entry *tmp_var_11 = get_persistent_class(PersistentClassId{27}, get_str(701));
    if (UNEXPECTED(!(url.isString() || (url.isObject() && php::instanceOf(url, get_persistent_class(PersistentClassId{5}, get_str(148))))))) {
        php::throwArgumentTypeError(url, get_str(1624), 1, get_str(203), get_str(208));
    }

    [&]() -> php::Var {
    auto&& tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{156}, get_str(930), get_str(701)), php::AttrMode::Update);
    php::Var tmp_var_7 = php::null;
    tmp_var_1 = url;
    tmp_var_2 = handler;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(657))}}, tmp_var_4)) {
        tmp_var_3 = tmp_var_4;
    } else {
        tmp_var_3 = 0L;
    }
    tmp_var_5 = php::toInt(tmp_var_3);
    php::Var tmp_var_8 = php::newObject(tmp_var_0, php::VarList{tmp_var_1, tmp_var_2, tmp_var_5});
    tmp_var_1.unset();
    tmp_var_2.unset();
    tmp_var_6.append(tmp_var_8);
    return tmp_var_8;
    }();

    tmp_var_9 = this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_10{tmp_var_9, false, tmp_var_11};
        while (tmp_var_10.next()) {
            p = tmp_var_10.value();
            typephp_call_method_cached(p, get_str(947), get_method_call_cache(MethodCallCacheId{67}));
        }
    }
}

void php_nativeplaywright__browsercontext__unroute(php::Object &this_, php::Var url, php::Object handler) {
    zend_function * tmp_var_0;
    zend_function * tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var p;
    zend_class_entry *tmp_var_7 = get_persistent_class(PersistentClassId{27}, get_str(701));
    if (UNEXPECTED(!(url.isString() || (url.isObject() && php::instanceOf(url, get_persistent_class(PersistentClassId{5}, get_str(148))))))) {
        php::throwArgumentTypeError(url, get_str(1625), 1, get_str(203), get_str(208));
    }

    if (get_function_resolution_cache(FunctionResolutionCacheId{243}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{243}) = php::fn::function_exists(get_str(454)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{243}) == 1 ? get_func(RequestFuncId{31}, get_str(454)) : get_persistent_func(PersistentFuncId{35}, get_str(455));
    if (get_function_resolution_cache(FunctionResolutionCacheId{244}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{244}) = php::fn::function_exists(get_str(456)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{244}) == 1 ? get_func(RequestFuncId{32}, get_str(456)) : get_persistent_func(PersistentFuncId{36}, get_str(457));
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{156}, get_str(930), get_str(701)), php::AttrMode::Get);
    php::ClosureFn tmp_var_3 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(1, 1, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!((tmp_var_0.isObject() && php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{24}, get_str(656))))))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(949), get_str(950));
            return php::null;
        }
        php::Object h = php::Object(tmp_var_0);
        tmp_var_0.unset();
        php::Var url = vars_.get(0);
        php::Object handler = php::Object(vars_.get(1));
        php::Var tmp_var_1;
        php::Bool tmp_var_2 = 0;
        php::Var tmp_var_3;
        php::Bool tmp_var_4 = 0;
        php::Var tmp_var_5;
    tmp_var_1 = h.attr(get_persistent_prop(PersistentPropertyId{82}, get_str(203), get_str(656)), php::AttrMode::Get);
    tmp_var_2 = php::toBool(php::same(tmp_var_1, url));
    tmp_var_1.unset();
    tmp_var_5 = !(php::toBool((php::toBool(tmp_var_2) && php::toBool([&]() -> bool {
            if (!(php::toBool(php::same(handler, php::null)))) {
                tmp_var_3 = h.attr(get_persistent_prop(PersistentPropertyId{116}, get_str(944), get_str(656)), php::AttrMode::Get);
                tmp_var_4 = php::toBool(php::same(tmp_var_3, handler));
                tmp_var_3.unset();
                return php::toBool(tmp_var_4);
            }
            return true;
        }()))));
        if (UNEXPECTED(!(tmp_var_5.isBool()))) {
            php::throwReturnTypeError(tmp_var_5, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_5;};
    tmp_var_4 = php::call(tmp_var_1, php::VarList{php::deindirect(tmp_var_2), php::newClosureWithParameters(tmp_var_3, { url, handler }, this_, get_persistent_class(PersistentClassId{27}, get_str(701)), { php::ClosureParameter{"h", false, false, true} }, php::ClosureStrictTypes::Enabled)});
    tmp_var_2.unset();
    this_.attr(get_persistent_prop(PersistentPropertyId{156}, get_str(930), get_str(701)), php::AttrMode::Update) = php::toArrayExact(php::call(tmp_var_0, php::VarList{tmp_var_4}), "NativePlaywright\\BrowserContext::$routes");
    tmp_var_4.unset();

    tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_6{tmp_var_5, false, tmp_var_7};
        while (tmp_var_6.next()) {
            p = tmp_var_6.value();
            typephp_call_method_cached(p, get_str(947), get_method_call_cache(MethodCallCacheId{68}));
        }
    }
}

void php_nativeplaywright__browsercontext__unrouteall(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var p;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{27}, get_str(701));

    this_.attr(get_persistent_prop(PersistentPropertyId{156}, get_str(930), get_str(701)), php::AttrMode::Update) = php::Array{};

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_1{tmp_var_0, false, tmp_var_2};
        while (tmp_var_1.next()) {
            p = tmp_var_1.value();
            typephp_call_method_cached(p, get_str(947), get_method_call_cache(MethodCallCacheId{69}));
        }
    }
}

php::Object php_nativeplaywright__browsercontext__newcdpsession(php::Object &this_, php::Object page) {
    php::Object tmp_var_0;

    tmp_var_0 = (php_nativeplaywright__page__newcdpsession(page));
    return tmp_var_0;
}

php::Str php_nativeplaywright__browsercontext__downloaddir(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{146}, get_str(1535), get_str(701)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Bool php_nativeplaywright__browsercontext__isclosed(php::Object &this_) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{152}, get_str(76), get_str(701)), php::AttrMode::Get)));
    return tmp_var_0;
}

void php_nativeplaywright__browsercontext__close(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_2;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Object e;
    php::Var tmp_var_8;
    php::Var p;
    php::Bool tmp_var_11 = 0;
    php::Var tmp_var_12;
    php::Bool tmp_var_13 = 0;
    php::Bool tmp_var_14 = 0;
    zend_function * tmp_var_15;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    zend_function * tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Var tmp_var_21;
    php::Var f;
    zend_function * tmp_var_24;
    zend_function * tmp_var_26;
    php::Var tmp_var_27;
    php::Var tmp_var_28;
    zend_class_entry *tmp_var_10 = get_persistent_class(PersistentClassId{27}, get_str(701));

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{152}, get_str(76), get_str(701)), php::AttrMode::Get))) {
        return;
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{152}, get_str(76), get_str(701)), php::AttrMode::Update) = true;
    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{157}, get_str(858), get_str(701)), php::AttrMode::Get))) {
        tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{144}, get_str(694), get_str(701)), php::AttrMode::Get);
        php::Object tmp_var_1 = tmp_var_0;
        php_nativeplaywright__browser__close(tmp_var_1);
        tmp_var_0.unset();
    } else {
        try {
            tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{144}, get_str(694), get_str(701)), php::AttrMode::Get);
            php::Object tmp_var_3 = tmp_var_2;
            tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{147}, get_str(118), get_str(701)), php::AttrMode::Get);
            tmp_var_5 = php::Array{
                { get_str(696).str(), php::Var(tmp_var_4) }
            };
            tmp_var_4.unset();
            php_nativeplaywright__browser__send(tmp_var_3, get_str(1627), tmp_var_5);
            tmp_var_2.unset();
            tmp_var_5.unset();
        } catch (zend_object *_ex) {
            tmp_var_6 = php::catchException();
            bool tmp_var_7 = false;
            if (!tmp_var_7 && tmp_var_6 && (php::instanceOf(tmp_var_6, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
                tmp_var_7 = true;
                e = tmp_var_6;
                tmp_var_6 = php::null;
            }
        }
        if (tmp_var_6) {
            php::throwException(php::Object(tmp_var_6));
        }
    }

    tmp_var_8 = this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_9{tmp_var_8, false, tmp_var_10};
        while (tmp_var_9.next()) {
            p = tmp_var_9.value();
            typephp_call_method_cached(p, get_str(980), get_method_call_cache(MethodCallCacheId{70}));
        }
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{153}, get_str(1558), get_str(701)), php::AttrMode::Update) = php::Array{};
    tmp_var_11 = php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{145}, get_str(1534), get_str(701)), php::AttrMode::Get));
    tmp_var_14 = php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_11)) {
            tmp_var_12 = this_.attr(get_persistent_prop(PersistentPropertyId{146}, get_str(1535), get_str(701)), php::AttrMode::Get);
            tmp_var_13 = php::toBool(!(php::same(tmp_var_12, php::empty_string)));
            tmp_var_12.unset();
            return php::toBool(tmp_var_13);
        }
        return false;
    }());
    if (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_14)) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{245}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{245}) = php::fn::function_exists(get_str(684)) ? 1 : 2; }
            tmp_var_15 = get_function_resolution_cache(FunctionResolutionCacheId{245}) == 1 ? get_func(RequestFuncId{41}, get_str(684)) : get_persistent_func(PersistentFuncId{45}, get_str(685));
            tmp_var_16 = this_.attr(get_persistent_prop(PersistentPropertyId{146}, get_str(1535), get_str(701)), php::AttrMode::Get);
            tmp_var_17 = php::call(tmp_var_15, php::VarList{php::deindirect(tmp_var_16)});
            tmp_var_16.unset();
            return php::toBool(tmp_var_17);
        }
        return false;
    }())) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{246}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{246}) = php::fn::function_exists(get_str(1628)) ? 1 : 2; }
        tmp_var_18 = get_function_resolution_cache(FunctionResolutionCacheId{246}) == 1 ? get_func(RequestFuncId{66}, get_str(1628)) : get_persistent_func(PersistentFuncId{71}, get_str(205));
        tmp_var_19 = this_.attr(get_persistent_prop(PersistentPropertyId{146}, get_str(1535), get_str(701)), php::AttrMode::Get);
        tmp_var_20 = php::concat({tmp_var_19, get_str(1629)});
        tmp_var_19.unset();

        tmp_var_21 = php::toArray(php::call(tmp_var_18, php::VarList{tmp_var_20}));
        {
            php::ForeachIterator tmp_var_22{tmp_var_21, false, tmp_var_10};
            while (tmp_var_22.next()) {
                f = tmp_var_22.value();
                auto tmp_var_23 = EG(error_reporting);
                php::call(get_persistent_func(PersistentFuncId{19}, get_str(219)), {E_FATAL_ERRORS});
                if (get_function_resolution_cache(FunctionResolutionCacheId{247}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{247}) = php::fn::function_exists(get_str(699)) ? 1 : 2; }
                tmp_var_24 = get_function_resolution_cache(FunctionResolutionCacheId{247}) == 1 ? get_func(RequestFuncId{46}, get_str(699)) : get_persistent_func(PersistentFuncId{50}, get_str(700));
                php::call(tmp_var_24, php::VarList{php::toString(f)});
                php::call(get_persistent_func(PersistentFuncId{19}, get_str(219)), {tmp_var_23});
            }
        }
        auto tmp_var_25 = EG(error_reporting);
        php::call(get_persistent_func(PersistentFuncId{19}, get_str(219)), {E_FATAL_ERRORS});
        if (get_function_resolution_cache(FunctionResolutionCacheId{248}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{248}) = php::fn::function_exists(get_str(1630)) ? 1 : 2; }
        tmp_var_26 = get_function_resolution_cache(FunctionResolutionCacheId{248}) == 1 ? get_func(RequestFuncId{67}, get_str(1630)) : get_persistent_func(PersistentFuncId{72}, get_str(1631));
        tmp_var_27 = this_.attr(get_persistent_prop(PersistentPropertyId{146}, get_str(1535), get_str(701)), php::AttrMode::Get);
        php::call(tmp_var_26, php::VarList{php::deindirect(tmp_var_27)});
        tmp_var_27.unset();
        php::call(get_persistent_func(PersistentFuncId{19}, get_str(219)), {tmp_var_25});
    }
    tmp_var_28 = this_.attr(get_persistent_prop(PersistentPropertyId{144}, get_str(694), get_str(701)), php::AttrMode::Get);
    php::Object tmp_var_29 = tmp_var_28;
    php_nativeplaywright__browser__contextclosed(tmp_var_29, this_);
    tmp_var_28.unset();
    php_nativeplaywright__browsercontext__emit(this_, get_str(171), this_);
}

void php_nativeplaywright__browsercontext__on(php::Object &this_, php::Str event, php::Object handler) {
    php::Int &_object_prop_this___handlerSeq = this_.attrInt(get_persistent_prop(PersistentPropertyId{159}, get_str(1130), get_str(701)));

    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Update);
    php::Var tmp_var_1 = event;
    auto&& tmp_var_2 = tmp_var_0.item(tmp_var_1, true);
    php::Var tmp_var_3 = ++_object_prop_this___handlerSeq;
    php::Var tmp_var_4 = php::Array{
        php::Var(handler), 
        php::Var(false)
    };
    (tmp_var_2.isArray() ? static_cast<void>(tmp_var_2.item(tmp_var_3, true) = tmp_var_4) : tmp_var_2.offsetSet(tmp_var_3, tmp_var_4));
    return tmp_var_4;
    }();
    php_nativeplaywright__browsercontext__onlisteneradded(this_, event);
}

void php_nativeplaywright__browsercontext__once(php::Object &this_, php::Str event, php::Object handler) {
    php::Int &_object_prop_this___handlerSeq = this_.attrInt(get_persistent_prop(PersistentPropertyId{159}, get_str(1130), get_str(701)));

    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Update);
    php::Var tmp_var_1 = event;
    auto&& tmp_var_2 = tmp_var_0.item(tmp_var_1, true);
    php::Var tmp_var_3 = ++_object_prop_this___handlerSeq;
    php::Var tmp_var_4 = php::Array{
        php::Var(handler), 
        php::Var(true)
    };
    (tmp_var_2.isArray() ? static_cast<void>(tmp_var_2.item(tmp_var_3, true) = tmp_var_4) : tmp_var_2.offsetSet(tmp_var_3, tmp_var_4));
    return tmp_var_4;
    }();
    php_nativeplaywright__browsercontext__onlisteneradded(this_, event);
}

void php_nativeplaywright__browsercontext__off(php::Object &this_, php::Str event, php::Object handler) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var k;
    php::Var h;
    php::Var tmp_var_5;
    php::Bool tmp_var_6 = 0;
    zend_class_entry *tmp_var_4 = get_persistent_class(PersistentClassId{27}, get_str(701));

    if (php::toBool(php::same(handler, php::null))) {
        this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Get).offsetUnset(event);
        return;
    }
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(event)}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::Array{};
    }

    tmp_var_2 = tmp_var_0;
    {
        php::ForeachIterator tmp_var_3{tmp_var_2, false, tmp_var_4};
        while (tmp_var_3.next()) {
            k = tmp_var_3.key();
            h = tmp_var_3.value();
            tmp_var_5 = h.item(0L, false);
            tmp_var_6 = php::toBool(php::same(tmp_var_5, handler));
            tmp_var_5.unset();
            if (php::toBool(tmp_var_6)) {
                [&]() {
                auto &&tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Get);
                php::Var tmp_var_8 = event;
                php::Var tmp_var_9 = k;
                php::unset(tmp_var_7, {{php::ArrayDimFetch, tmp_var_8}, {php::ArrayDimFetch, tmp_var_9}});
                }();
            }
        }
    }
}

void php_nativeplaywright__browsercontext__removealllisteners(php::Object &this_, php::Str event) {
    if (php::toBool(php::same(event, php::empty_string))) {
        this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Update) = php::Array{};
    } else {
        this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Get).offsetUnset(event);
    }
}

php::Int php_nativeplaywright__browsercontext__listenercount(php::Object &this_, php::Str event) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;

    if (get_function_resolution_cache(FunctionResolutionCacheId{249}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{249}) = php::fn::function_exists(get_str(162)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{249}) == 1 ? get_func(RequestFuncId{8}, get_str(162)) : get_persistent_func(PersistentFuncId{8}, get_str(163));
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(event)}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = php::Array{};
    }
    tmp_var_3 = tmp_var_1;
    tmp_var_4 = (php::call(tmp_var_0, php::VarList{tmp_var_3}));
    if (UNEXPECTED(!(tmp_var_4.isInt()))) {
        php::throwReturnTypeError(tmp_var_4, get_str(1633), get_str(89), true);
    }
    return php::toInt(tmp_var_4);
    tmp_var_3.unset();
}

void php_nativeplaywright__browsercontext__onlisteneradded(php::Object &this_, php::Str event) {
}

void php_nativeplaywright__browsercontext__emit(php::Object &this_, php::Str event, php::Var arg) {
    php::Var hs;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Object t;
    php::Var tmp_var_4;
    php::Var k;
    php::Var h;
    php::Var fn;
    zend_class_entry *tmp_var_6 = get_persistent_class(PersistentClassId{27}, get_str(701));

    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(event)}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::Array{};
    }
    hs = tmp_var_0;
    tmp_var_2 = php::Array{};
    tmp_var_3 = php::toBool(php::same(hs, tmp_var_2));
    tmp_var_2.unset();
    if (php::toBool(tmp_var_3)) {
        return;
    }
    t = php_nativeplaywright__browsercontext__transport(this_);

    tmp_var_4 = hs;
    {
        php::ForeachIterator tmp_var_5{tmp_var_4, false, tmp_var_6};
        while (tmp_var_5.next()) {
            k = tmp_var_5.key();
            h = tmp_var_5.value();
            if (php::toBool(h.item(1L, false))) {
                [&]() {
                auto &&tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Get);
                php::Var tmp_var_8 = event;
                php::Var tmp_var_9 = k;
                php::unset(tmp_var_7, {{php::ArrayDimFetch, tmp_var_8}, {php::ArrayDimFetch, tmp_var_9}});
                }();
            }
            fn = h.item(0L, false);
            php::ClosureFn tmp_var_10 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
            php::checkCallArgCount(0, 0, false);
                php::Var fn = vars_.get(0);
                php::Var arg = vars_.get(1);
                typephp_call_cached(fn, get_function_call_cache(FunctionCallCacheId{23}), php::VarList{arg});
            return php::null;
            };
            typephp_call_method_cached(t, get_str(666), get_method_call_cache(MethodCallCacheId{71}), php::VarList{php::newClosureWithParameters(tmp_var_10, { fn, arg }, this_, get_persistent_class(PersistentClassId{27}, get_str(701)), {  }, php::ClosureStrictTypes::Enabled)});
        }
    }
}

php::Var php_nativeplaywright__browsercontext__waitforevent(php::Object &this_, php::Str event, php::Object predicate, php::Var timeout) {
    php::Var tmp_var_0;
    if (timeout.isInt()) {
        timeout = php::toFloat(timeout);
    }
    if (UNEXPECTED(!(timeout.isNull() || timeout.isFloat()))) {
        php::throwArgumentTypeError(timeout, get_str(1634), 3, get_str(102), get_str(709));
    }

    tmp_var_0 = (php_nativeplaywright__browsercontext__expectevent(this_, event, php::Object{}, predicate, timeout));
    return tmp_var_0;
}

php::Var php_nativeplaywright__browsercontext__expectevent(php::Object &this_, php::Str event, php::Object action, php::Object predicate, php::Var timeout) {
    php::Object t;
    php::Var w;
    php::Var id;
    php::Var tmp_var_6;
    php::Var secs;
    php::Var tmp_var_10;
    if (timeout.isInt()) {
        timeout = php::toFloat(timeout);
    }
    if (UNEXPECTED(!(timeout.isNull() || timeout.isFloat()))) {
        php::throwArgumentTypeError(timeout, get_str(1635), 4, get_str(102), get_str(709));
    }

    t = php_nativeplaywright__browsercontext__transport(this_);
    w = typephp_call_method_cached(t, get_str(117), get_method_call_cache(MethodCallCacheId{72}));
    id = ++this_.attr(get_persistent_prop(PersistentPropertyId{159}, get_str(1130), get_str(701)), php::AttrMode::Update);
    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Update);
    php::Var tmp_var_1 = event;
    auto&& tmp_var_3 = tmp_var_0.item(tmp_var_1, true);
    php::Var tmp_var_4 = id;
    php::ClosureFn tmp_var_2 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(1, 1, false);
            auto arg = php::getCallArg(0);
            php::Var w = vars_.get(0);
            php::Object predicate = php::Object(vars_.get(1));
            if (php::toBool((php::toBool(php::same(predicate, php::null)) || php::toBool(typephp_call_cached(predicate, get_function_call_cache(FunctionCallCacheId{24}), php::VarList{arg}))))) {
                typephp_call_method_cached(w, get_str(136), get_method_call_cache(MethodCallCacheId{73}), php::VarList{arg});
            }
    return php::null;
    };
    php::Var tmp_var_5 = php::Array{
        php::Var(php::newClosureWithParameters(tmp_var_2, { w, predicate }, this_, get_persistent_class(PersistentClassId{27}, get_str(701)), { php::ClosureParameter{"arg", false, false, true} }, php::ClosureStrictTypes::Enabled)), 
        php::Var(false)
    };
    (tmp_var_3.isArray() ? static_cast<void>(tmp_var_3.item(tmp_var_4, true) = tmp_var_5) : tmp_var_3.offsetSet(tmp_var_4, tmp_var_5));
    return tmp_var_5;
    }();
    php_nativeplaywright__browsercontext__onlisteneradded(this_, event);
    try {
        if (php::toBool(!(php::same(action, php::null)))) {
            typephp_call_cached(action, get_function_call_cache(FunctionCallCacheId{25}));
        }
        secs = (php::toBool(php::same(timeout, php::null))) ? (php::Var(php_nativeplaywright__browsercontext__defaulttimeout(this_))) : (php::Var(((php::Var(timeout)) / (php::Var(1000L)))));
        tmp_var_6 = typephp_call_method_cached(t, get_str(122), get_method_call_cache(MethodCallCacheId{74}), php::VarList{w, secs, php::concat({get_str(1135), event, get_str(396)})});
        [&]() {
        auto &&tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Get);
        php::Var tmp_var_8 = event;
        php::Var tmp_var_9 = id;
        php::unset(tmp_var_7, {{php::ArrayDimFetch, tmp_var_8}, {php::ArrayDimFetch, tmp_var_9}});
        }();
        return tmp_var_6;
    } catch (zend_object *_ex) {
        tmp_var_10 = php::catchException();
    }
    [&]() {
    auto &&tmp_var_11 = this_.attr(get_persistent_prop(PersistentPropertyId{158}, get_str(1129), get_str(701)), php::AttrMode::Get);
    php::Var tmp_var_12 = event;
    php::Var tmp_var_13 = id;
    php::unset(tmp_var_11, {{php::ArrayDimFetch, tmp_var_12}, {php::ArrayDimFetch, tmp_var_13}});
    }();

    if (tmp_var_10) {
        php::throwException(php::Object(tmp_var_10));
    }
    return php::null;
}


ZEND_METHOD(NativePlaywright_BrowserContext, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(4, 5, false);
        php::Object arg_browser = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{28}, get_str(1137)));
        php::Object arg_t = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{4}, get_str(115)));
        php::Var raw_arg_id = php::getCallArg(2);
        if (UNEXPECTED(!(raw_arg_id.isString()))) {
            php::throwArgumentTypeError(raw_arg_id, get_str(1636), 3, get_str(118), get_str(98));
        }
        php::Str arg_id = php::toString(raw_arg_id);
        php::Array arg_options = php::toArray(php::getCallArg(3));
        php::Var raw_arg_isDefault = php::getCallArg(4, php_nativeplaywright__browsercontext____construct_arg_4_default_value());
        if (UNEXPECTED(!(raw_arg_isDefault.isBool()))) {
            php::throwArgumentTypeError(raw_arg_isDefault, get_str(1636), 5, get_str(858), get_str(106));
        }
        php::Bool arg_isDefault = php::toBool(raw_arg_isDefault);
        php_nativeplaywright__browsercontext____construct(this_, php::takeValue(arg_browser),php::takeValue(arg_t),php::takeValue(arg_id),php::takeValue(arg_options),arg_isDefault);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, initialize) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__browsercontext__initialize(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, transport) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__transport(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, defaultTimeout) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__defaulttimeout(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, id) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__id(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, options) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__options(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, browser) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__browser(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, baseURL) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__baseurl(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, defaultTimeoutMs) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__defaulttimeoutms(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, defaultNavigationTimeoutMs) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__defaultnavigationtimeoutms(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, setDefaultTimeout) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_ms = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_ms.isFloat() || raw_arg_ms.isInt())))) {
            php::throwArgumentTypeError(raw_arg_ms, get_str(1637), 1, get_str(735), get_str(103));
        }
        php::Float arg_ms = php::toFloat(raw_arg_ms);
        php_nativeplaywright__browsercontext__setdefaulttimeout(this_, arg_ms);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, setDefaultNavigationTimeout) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_ms = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_ms.isFloat() || raw_arg_ms.isInt())))) {
            php::throwArgumentTypeError(raw_arg_ms, get_str(1638), 1, get_str(735), get_str(103));
        }
        php::Float arg_ms = php::toFloat(raw_arg_ms);
        php_nativeplaywright__browsercontext__setdefaultnavigationtimeout(this_, arg_ms);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, hasListeners) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1639), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        auto retval = php_nativeplaywright__browsercontext__haslisteners(this_, php::takeValue(arg_event));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, emitFromPage) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1640), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Var arg_arg = php::getCallArg(1);
        php_nativeplaywright__browsercontext__emitfrompage(this_, php::takeValue(arg_event),php::takeValue(arg_arg));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, newPage) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__newpage(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, pages) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__pages(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, didCreatePage) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(475)));
        php_nativeplaywright__browsercontext__didcreatepage(this_, php::takeValue(arg_page));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, pageClosed) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(475)));
        php_nativeplaywright__browsercontext__pageclosed(this_, php::takeValue(arg_page));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, setOwner) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(475)));
        php_nativeplaywright__browsercontext__setowner(this_, php::takeValue(arg_page));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, ownedBy) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(475)));
        auto retval = php_nativeplaywright__browsercontext__ownedby(this_, php::takeValue(arg_page));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, expectPage) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Object arg_action = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__browsercontext__expectpage_arg_1_default_value()));
        auto retval = php_nativeplaywright__browsercontext__expectpage(this_, php::takeValue(arg_action),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, cookieOut) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_c = php::toArray(php::getCallArg(0));
        auto retval = php_nativeplaywright__browsercontext__cookieout(this_, php::takeValue(arg_c));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, ctxParam) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__ctxparam(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, cookies) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Var arg_urls = php::getCallArg(0, php_nativeplaywright__browsercontext__cookies_arg_0_default_value());
        auto retval = php_nativeplaywright__browsercontext__cookies(this_, php::takeValue(arg_urls));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, cookieMatchesAny) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Array arg_c = php::toArray(php::getCallArg(0));
        php::Array arg_urls = php::toArray(php::getCallArg(1));
        auto retval = php_nativeplaywright__browsercontext__cookiematchesany(this_, php::takeValue(arg_c),php::takeValue(arg_urls));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, addCookies) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_cookies = php::toArray(php::getCallArg(0));
        php_nativeplaywright__browsercontext__addcookies(this_, php::takeValue(arg_cookies));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, clearCookies) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__browsercontext__clearcookies_arg_0_default_value()));
        php_nativeplaywright__browsercontext__clearcookies(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, storageState) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__browsercontext__storagestate_arg_0_default_value()));
        auto retval = php_nativeplaywright__browsercontext__storagestate(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, permissionParams) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Array arg_permissions = php::toArray(php::getCallArg(0));
        php::Var raw_arg_origin = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_origin.isString()))) {
            php::throwArgumentTypeError(raw_arg_origin, get_str(1641), 2, get_str(1551), get_str(98));
        }
        php::Str arg_origin = php::toString(raw_arg_origin);
        auto retval = php_nativeplaywright__browsercontext__permissionparams(this_, php::takeValue(arg_permissions),php::takeValue(arg_origin));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, grantPermissions) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Array arg_permissions = php::toArray(php::getCallArg(0));
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__browsercontext__grantpermissions_arg_1_default_value()));
        php_nativeplaywright__browsercontext__grantpermissions(this_, php::takeValue(arg_permissions),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, clearPermissions) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__browsercontext__clearpermissions(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, geolocation) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__geolocation(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, setGeolocation) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var arg_geo = php::getCallArg(0);
        php_nativeplaywright__browsercontext__setgeolocation(this_, php::takeValue(arg_geo));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, extraHTTPHeaders) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__extrahttpheaders(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, setExtraHTTPHeaders) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_headers = php::toArray(php::getCallArg(0));
        php_nativeplaywright__browsercontext__setextrahttpheaders(this_, php::takeValue(arg_headers));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, isOffline) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__isoffline(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, setOffline) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_offline = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_offline.isBool()))) {
            php::throwArgumentTypeError(raw_arg_offline, get_str(1642), 1, get_str(803), get_str(106));
        }
        php::Bool arg_offline = php::toBool(raw_arg_offline);
        php_nativeplaywright__browsercontext__setoffline(this_, arg_offline);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, httpCredentials) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__httpcredentials(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, scriptSource) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_script = php::getCallArg(0);
        php::Var arg_arg = php::getCallArg(1, php_nativeplaywright__browsercontext__scriptsource_arg_1_default_value());
        auto retval = php_nativeplaywright__browsercontext__scriptsource(this_, php::takeValue(arg_script),php::takeValue(arg_arg));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, initScripts) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__initscripts(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, addInitScript) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_script = php::getCallArg(0);
        php::Var arg_arg = php::getCallArg(1, php_nativeplaywright__browsercontext__addinitscript_arg_1_default_value());
        php_nativeplaywright__browsercontext__addinitscript(this_, php::takeValue(arg_script),php::takeValue(arg_arg));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, bindingNames) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__bindingnames(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, binding) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(1622), 1, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        auto retval = php_nativeplaywright__browsercontext__binding(this_, php::takeValue(arg_name));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, exposeBinding) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(1643), 1, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        php::Object arg_fn = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php_nativeplaywright__browsercontext__exposebinding(this_, php::takeValue(arg_name),php::takeValue(arg_fn));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, exposeFunction) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(1644), 1, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        php::Object arg_fn = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php_nativeplaywright__browsercontext__exposefunction(this_, php::takeValue(arg_name),php::takeValue(arg_fn));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, hasRoutes) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__hasroutes(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, routeHandlers) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__routehandlers(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, route) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var arg_url = php::getCallArg(0);
        php::Object arg_handler = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__browsercontext__route_arg_2_default_value()));
        php_nativeplaywright__browsercontext__route(this_, php::takeValue(arg_url),php::takeValue(arg_handler),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, unroute) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_url = php::getCallArg(0);
        php::Object arg_handler = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(php::getCallArg(1, php_nativeplaywright__browsercontext__unroute_arg_1_default_value()));
        php_nativeplaywright__browsercontext__unroute(this_, php::takeValue(arg_url),php::takeValue(arg_handler));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, unrouteAll) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__browsercontext__unrouteall(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, newCDPSession) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(475)));
        auto retval = php_nativeplaywright__browsercontext__newcdpsession(this_, php::takeValue(arg_page));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, downloadDir) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__downloaddir(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, isClosed) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsercontext__isclosed(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, close) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__browsercontext__close(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, on) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1645), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_handler = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php_nativeplaywright__browsercontext__on(this_, php::takeValue(arg_event),php::takeValue(arg_handler));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, once) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1646), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_handler = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php_nativeplaywright__browsercontext__once(this_, php::takeValue(arg_event),php::takeValue(arg_handler));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, off) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1647), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_handler = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(php::getCallArg(1, php_nativeplaywright__browsercontext__off_arg_1_default_value()));
        php_nativeplaywright__browsercontext__off(this_, php::takeValue(arg_event),php::takeValue(arg_handler));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, removeAllListeners) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Var raw_arg_event = php::getCallArg(0, php_nativeplaywright__browsercontext__removealllisteners_arg_0_default_value());
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1648), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php_nativeplaywright__browsercontext__removealllisteners(this_, php::takeValue(arg_event));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, listenerCount) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1633), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        auto retval = php_nativeplaywright__browsercontext__listenercount(this_, php::takeValue(arg_event));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, onListenerAdded) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1649), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php_nativeplaywright__browsercontext__onlisteneradded(this_, php::takeValue(arg_event));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, emit) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1650), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Var arg_arg = php::getCallArg(1);
        php_nativeplaywright__browsercontext__emit(this_, php::takeValue(arg_event),php::takeValue(arg_arg));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, waitForEvent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 3, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1634), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_predicate = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(php::getCallArg(1, php_nativeplaywright__browsercontext__waitforevent_arg_1_default_value()));
        php::Var arg_timeout = php::getCallArg(2, php_nativeplaywright__browsercontext__waitforevent_arg_2_default_value());
        auto retval = php_nativeplaywright__browsercontext__waitforevent(this_, php::takeValue(arg_event),php::takeValue(arg_predicate),php::takeValue(arg_timeout));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserContext, expectEvent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 4, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1635), 1, get_str(1150), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_action = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(php::getCallArg(1, php_nativeplaywright__browsercontext__expectevent_arg_1_default_value()));
        php::Object arg_predicate = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(148))); })(php::getCallArg(2, php_nativeplaywright__browsercontext__expectevent_arg_2_default_value()));
        php::Var arg_timeout = php::getCallArg(3, php_nativeplaywright__browsercontext__expectevent_arg_3_default_value());
        auto retval = php_nativeplaywright__browsercontext__expectevent(this_, php::takeValue(arg_event),php::takeValue(arg_action),php::takeValue(arg_predicate),php::takeValue(arg_timeout));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

