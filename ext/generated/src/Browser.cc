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
#include <php_native_playwright_src_NativePlaywright_BrowserType_4c5677b1e9_decl.h>
#include <php_native_playwright_src_NativePlaywright_Browser_5c08077592_decl.h>
#include <php_native_playwright_src_NativePlaywright_CDPSession_9157bcb704_decl.h>
#include <php_native_playwright_src_NativePlaywright_Connection_0606cc101d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Download_e51727d17f_decl.h>
#include <php_native_playwright_src_NativePlaywright_EventEmitter_2f3b042d92_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_Transport_e741c70096_decl.h>

void php_nativeplaywright__browser____construct(php::Object &this_, php::Object t, php::Object conn, php::Array launchOptions) {
    php::Object self;
typephp_write_property_scoped(this_, "t", t, get_persistent_class(PersistentClassId{28}, get_str(1135)));
typephp_write_property_scoped(this_, "conn", conn, get_persistent_class(PersistentClassId{28}, get_str(1135)));
typephp_write_property_scoped(this_, "launchOptions", launchOptions, get_persistent_class(PersistentClassId{28}, get_str(1135)));

    self = this_;
    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(2, 2, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!(tmp_var_0.isString()))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(457), 1, get_str(100), get_str(98));
            return php::null;
        }
        php::Str method = php::toString(tmp_var_0);
        tmp_var_0.unset();
        auto tmp_var_1 = php::getCallArg(1);
        if (UNEXPECTED(!(tmp_var_1.isArray()))) {
            php::throwArgumentTypeError(tmp_var_1, get_str(457), 2, get_str(136), get_str(664));
            return php::null;
        }
        php::Array params = php::toArray(tmp_var_1);
        tmp_var_1.unset();
        php::Object self = php::Object(vars_.get(0));
        php_nativeplaywright__browser__onprotocolevent(self, method, params);
    return php::null;
    };
    typephp_call_method_cached(t, get_str(662), get_method_call_cache(MethodCallCacheId{80}), php::VarList{php::empty_string, php::newClosureWithParameters(tmp_var_0, { self }, this_, get_persistent_class(PersistentClassId{28}, get_str(1135)), { php::ClosureParameter{"method", false, false, true}, php::ClosureParameter{"params", false, false, true} }, php::ClosureStrictTypes::Enabled)});
    php::ClosureFn tmp_var_1 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object self = php::Object(vars_.get(0));
        php_nativeplaywright__browser__diddisconnect(self);
    return php::null;
    };
    typephp_call_method_cached(t, get_str(1699), get_method_call_cache(MethodCallCacheId{81}), php::VarList{php::newClosureWithParameters(tmp_var_1, { self }, this_, get_persistent_class(PersistentClassId{28}, get_str(1135)), {  }, php::ClosureStrictTypes::Enabled)});
}

php::Object php_nativeplaywright__browser__launch(php::Object &this_, php::Array options) {
    php::Object tmp_var_1;
    php::Object tmp_var_2;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{29}, get_str(1668));

    tmp_var_1 = php::newObject(tmp_var_0);
    tmp_var_2 = (php_nativeplaywright__browsertype__launch(tmp_var_1, options));
    tmp_var_1.unset();
    return tmp_var_2;
}

void php_nativeplaywright__browser__initialize(php::Object &this_, php::Float timeout) {
    php::Var r;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    zend_function * tmp_var_5;
    php::Var tmp_var_6;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
    tmp_var_1 = php::Array{
            php::Var(get_str(1702))
        };
    tmp_var_2 = php::Array{
                { get_str(1704).str(), php::Var(true) }, 
                { get_str(1705).str(), php::Var(true) }, 
                { get_str(1706).str(), php::Var(true) }
            };
    tmp_var_3 = php::Array{
            php::Var(get_str(1703)), 
            php::Var(tmp_var_2)
        };
    tmp_var_2.unset();
    tmp_var_4 = php::Array{
        php::Var(tmp_var_1), 
        php::Var(tmp_var_3)
    };
    tmp_var_1.unset();
    tmp_var_3.unset();
    r = typephp_call_method_cached(tmp_var_0, get_str(709), get_method_call_cache(MethodCallCacheId{82}), php::VarList{tmp_var_4});
    tmp_var_0.unset();
    tmp_var_4.unset();
    this_.attr(get_persistent_prop(PersistentPropertyId{161}, get_str(1707), get_str(1135)), php::AttrMode::Update) = php::toString(r.item(0L, false).item(get_str(1708), false));
    if (get_function_resolution_cache(FunctionResolutionCacheId{263}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{263}) = php::fn::function_exists(get_str(1345)) ? 1 : 2; }
    tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{263}) == 1 ? get_func(RequestFuncId{56}, get_str(1345)) : get_persistent_func(PersistentFuncId{58}, get_str(1346));
    tmp_var_6 = php::toString(r.item(0L, false).item(get_str(771), false));
    this_.attr(get_persistent_prop(PersistentPropertyId{162}, get_str(771), get_str(1135)), php::AttrMode::Update) = php::toStringExact(php::call(tmp_var_5, php::VarList{get_str(1709), get_str(1710), tmp_var_6}), "NativePlaywright\\Browser::$userAgent");
    tmp_var_6.unset();
}

php::Object php_nativeplaywright__browser__transport(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Float php_nativeplaywright__browser__defaulttimeout(php::Object &this_) {
    return php::toFloat(30.0);
}

php::Var php_nativeplaywright__browser__launchoption(php::Object &this_, php::Str name) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;

    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{163}, get_str(1711), get_str(1135)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(name)}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::null;
    }
    tmp_var_2 = (tmp_var_0);
    return tmp_var_2;
}

php::Float php_nativeplaywright__browser__slowmo(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Float tmp_var_2 = 0;

    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{163}, get_str(1711), get_str(1135)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(get_str(732))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = 0L;
    }
    tmp_var_2 = (php::toFloat(tmp_var_0));
    return tmp_var_2;
}

php::Str php_nativeplaywright__browser__defaultuseragent(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{162}, get_str(771), get_str(1135)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Array php_nativeplaywright__browser__send(php::Object &this_, php::Str method, php::Array params) {
    php::Var tmp_var_0;
    php::Array tmp_var_1;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
    tmp_var_1 = (typephp_call_method_cached(tmp_var_0, get_str(660), get_method_call_cache(MethodCallCacheId{83}), php::VarList{method, params, php::empty_string, 30.0}));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__browser__connection(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{164}, get_str(115), get_str(1135)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Int php_nativeplaywright__browser__pid(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_2;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{164}, get_str(115), get_str(1135)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    tmp_var_2 = (php_nativeplaywright__connection__pid(tmp_var_1));
    if (UNEXPECTED(!(tmp_var_2.isInt()))) {
        php::throwReturnTypeError(tmp_var_2, get_str(1713), get_str(89), true);
    }
    return php::toInt(tmp_var_2);
    tmp_var_0.unset();
}

php::Str php_nativeplaywright__browser__version(php::Object &this_) {
    php::Var p;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    zend_function * tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;

    if (get_function_resolution_cache(FunctionResolutionCacheId{264}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{264}) = php::fn::function_exists(get_str(1714)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{264}) == 1 ? get_func(RequestFuncId{72}, get_str(1714)) : get_persistent_func(PersistentFuncId{75}, get_str(1715));
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{161}, get_str(1707), get_str(1135)), php::AttrMode::Get);
    p = php::call(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), get_str(210)});
    tmp_var_1.unset();
    tmp_var_5 = ([&]() -> php::Var {
        if (php::toBool(php::same(p, php::false_))) {
            return php::Var(this_.attr(get_persistent_prop(PersistentPropertyId{161}, get_str(1707), get_str(1135)), php::AttrMode::Get));
        } else {
            if (get_function_resolution_cache(FunctionResolutionCacheId{265}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{265}) = php::fn::function_exists(get_str(215)) ? 1 : 2; }
            tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{265}) == 1 ? get_func(RequestFuncId{15}, get_str(215)) : get_persistent_func(PersistentFuncId{16}, get_str(216));
            tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{161}, get_str(1707), get_str(1135)), php::AttrMode::Get);
            tmp_var_4 = php::call(tmp_var_2, php::VarList{php::deindirect(tmp_var_3), ((php::Var(p)) + (php::Var(1L)))});
            tmp_var_3.unset();
            return tmp_var_4;
        }
    }());
    if (UNEXPECTED(!(tmp_var_5.isString()))) {
        php::throwReturnTypeError(tmp_var_5, get_str(1716), get_str(98), true);
    }
    return tmp_var_5;
}

php::Object php_nativeplaywright__browser__browsertype(php::Object &this_) {
    php::Object tmp_var_1;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{29}, get_str(1668));

    tmp_var_1 = (php::newObject(tmp_var_0));
    return tmp_var_1;
}

php::Bool php_nativeplaywright__browser__isconnected(php::Object &this_) {
    php::Bool tmp_var_0 = 0;
    php::Var tmp_var_1;
    php::Bool tmp_var_2 = 0;
    php::Bool tmp_var_3 = 0;

    tmp_var_0 = php::toBool(!(php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{165}, get_str(76), get_str(1135)), php::AttrMode::Get))));
    tmp_var_3 = (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_0)) {
            tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
            tmp_var_2 = php::toBool(!(php::toBool(typephp_call_method_cached(tmp_var_1, get_str(976), get_method_call_cache(MethodCallCacheId{84})))));
            tmp_var_1.unset();
            return php::toBool(tmp_var_2);
        }
        return false;
    }()));
    return tmp_var_3;
}

php::Array php_nativeplaywright__browser__contexts(php::Object &this_) {
    php::Var out;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    zend_function * tmp_var_4;
    php::Ref tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;

    if (get_function_resolution_cache(FunctionResolutionCacheId{266}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{266}) = php::fn::function_exists(get_str(453)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{266}) == 1 ? get_func(RequestFuncId{31}, get_str(453)) : get_persistent_func(PersistentFuncId{33}, get_str(454));
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{166}, get_str(1717), get_str(1135)), php::AttrMode::Get);
    out = php::call(tmp_var_0, php::VarList{php::deindirect(tmp_var_1)});
    tmp_var_1.unset();
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{167}, get_str(1718), get_str(1135)), php::AttrMode::Get);
    tmp_var_3 = php::toBool(!(php::same(tmp_var_2, php::null)));
    tmp_var_2.unset();
    if (php::toBool(tmp_var_3)) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{267}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{267}) = php::fn::function_exists(get_str(1719)) ? 1 : 2; }
        tmp_var_4 = get_function_resolution_cache(FunctionResolutionCacheId{267}) == 1 ? get_func(RequestFuncId{73}, get_str(1719)) : get_persistent_func(PersistentFuncId{76}, get_str(1720));
        [&]() -> php::Var {
        if (get_function_resolution_cache(FunctionResolutionCacheId{267}) == 1) {
        tmp_var_7 = out;
        tmp_var_8 = this_.attr(get_persistent_prop(PersistentPropertyId{167}, get_str(1718), get_str(1135)), php::AttrMode::Get);
        php::Var tmp_var_9 = php::call(tmp_var_4, php::VarList{tmp_var_7, php::deindirect(tmp_var_8)});
        tmp_var_7.unset();
        tmp_var_8.unset();
        return tmp_var_9;
        }
        tmp_var_5 = out.toReference();
        tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{167}, get_str(1718), get_str(1135)), php::AttrMode::Get);
        php::Var tmp_var_10 = php::call(tmp_var_4, php::VarList{&tmp_var_5, php::deindirect(tmp_var_6)});
        tmp_var_6.unset();
        return tmp_var_10;
        }();
    }
    return out;
}

php::Object php_nativeplaywright__browser__newcontext(php::Object &this_, php::Array options) {
    php::Array p;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Array r;
    php::Object ctx;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{27}, get_str(700));

    p = php::Array{
        { get_str(1721).str(), php::Var(true) }
    };
    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1683))}, {php::ArrayDimFetch, php::Var(get_str(1682))}}))) {
        ((tmp_var_0 = php::toString(options.get(get_str(1683)).item(get_str(1682), false)), p.item(get_str(1722), true) = tmp_var_0), tmp_var_0);
        if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1683))}, {php::ArrayDimFetch, php::Var(get_str(1685))}}))) {
            ((tmp_var_1 = php::toString(options.get(get_str(1683)).item(get_str(1685), false)), p.item(get_str(1723), true) = tmp_var_1), tmp_var_1);
        }
    }
    r = php_nativeplaywright__browser__send(this_, get_str(1724), p);
    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
    tmp_var_4 = php::toString(r.get(get_str(695)));
    ctx = php::newObject(tmp_var_2, php::VarList{this_, php::deindirect(tmp_var_3), tmp_var_4, options});
    tmp_var_3.unset();
    tmp_var_4.unset();
    [&]() -> php::Var {
    auto&& tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{166}, get_str(1717), get_str(1135)), php::AttrMode::Update);
    php::Var tmp_var_6 = php_nativeplaywright__browsercontext__id(ctx);
    php::Var tmp_var_7 = ctx;
    static_cast<void>(tmp_var_5.item(tmp_var_6, true) = tmp_var_7);
    return tmp_var_7;
    }();
    php_nativeplaywright__browsercontext__initialize(ctx);
    return ctx;
}

php::Object php_nativeplaywright__browser__newpage(php::Object &this_, php::Array options) {
    php::Object ctx;
    php::Object page;

    ctx = php_nativeplaywright__browser__newcontext(this_, options);
    page = php_nativeplaywright__browsercontext__newpage(ctx);
    php_nativeplaywright__browsercontext__setowner(ctx, page);
    return page;
}

php::Object php_nativeplaywright__browser__usedefaultcontext(php::Object &this_, php::Array options) {
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Object tmp_var_3;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{27}, get_str(700));

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
    this_.attr(get_persistent_prop(PersistentPropertyId{167}, get_str(1718), get_str(1135)), php::AttrMode::Update) = php::newObject(tmp_var_0, php::VarList{this_, php::deindirect(tmp_var_1), php::empty_string, options, true});
    tmp_var_1.unset();
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{167}, get_str(1718), get_str(1135)), php::AttrMode::Get);
    typephp_call_method_cached(tmp_var_2, get_str(1694), get_method_call_cache(MethodCallCacheId{85}));
    tmp_var_2.unset();
    tmp_var_3 = (php::toObject(this_.attr(get_persistent_prop(PersistentPropertyId{167}, get_str(1718), get_str(1135)), php::AttrMode::Get), get_persistent_class(PersistentClassId{27}, get_str(700))));
    return tmp_var_3;
}

php::Object php_nativeplaywright__browser__createpage(php::Object &this_, php::Object ctx) {
    php::Array p;
    php::Var tmp_var_0;
    php::Bool tmp_var_1 = 0;
    php::Var tmp_var_2;
    php::Array r;
    php::Str tid;
    php::Object tmp_var_3;
    php::Var w;
    php::Var tmp_var_4;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Float tmp_var_11 = 0;
    php::Float tmp_var_12 = 0;
    php::Var tmp_var_13;

    p = php::Array{
        { get_str(202).str(), php::Var(get_str(1728)) }
    };
    tmp_var_0 = php_nativeplaywright__browsercontext__id(ctx);
    tmp_var_1 = php::toBool(!(php::same(tmp_var_0, php::empty_string)));
    tmp_var_0.unset();
    if (php::toBool(tmp_var_1)) {
        ((tmp_var_2 = php_nativeplaywright__browsercontext__id(ctx), p.item(get_str(695), true) = tmp_var_2), tmp_var_2);
    }
    r = php_nativeplaywright__browser__send(this_, get_str(1729), p);
    tid = php::toString(r.get(get_str(975)));
    if (php::toBool(php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{168}, get_str(1556), get_str(1135)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(tid)}}))) {
        tmp_var_3 = (php::toObject(this_.attr(get_persistent_prop(PersistentPropertyId{168}, get_str(1556), get_str(1135)), php::AttrMode::Get).item(tid, false), get_persistent_class(PersistentClassId{14}, get_str(474))));
        return tmp_var_3;
    }
    tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
    w = typephp_call_method_cached(tmp_var_4, get_str(116), get_method_call_cache(MethodCallCacheId{86}));
    tmp_var_4.unset();
    [&]() -> php::Var {
    auto&& tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{169}, get_str(1730), get_str(1135)), php::AttrMode::Update);
    php::Var tmp_var_6 = tid;
    php::Var tmp_var_7 = w;
    static_cast<void>(tmp_var_5.item(tmp_var_6, true) = tmp_var_7);
    return tmp_var_7;
    }();
    try {
        tmp_var_9 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
        tmp_var_10 = w;
        tmp_var_11 = php::toFloat(php_nativeplaywright__browsercontext__defaulttimeoutms(ctx));
        tmp_var_12 = php::toFloat(((tmp_var_11) / (php::toFloat(1000L))));
        tmp_var_8 = typephp_call_method_cached(tmp_var_9, get_str(121), get_method_call_cache(MethodCallCacheId{87}), php::VarList{tmp_var_10, tmp_var_12, get_str(1731)});
        tmp_var_9.unset();
        tmp_var_10.unset();
        this_.attr(get_persistent_prop(PersistentPropertyId{169}, get_str(1730), get_str(1135)), php::AttrMode::Get).offsetUnset(tid);
        return php::toObject(tmp_var_8, get_persistent_class(PersistentClassId{14}, get_str(474)));
    } catch (zend_object *_ex) {
        tmp_var_13 = php::catchException();
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{169}, get_str(1730), get_str(1135)), php::AttrMode::Get).offsetUnset(tid);

    if (tmp_var_13) {
        php::throwException(php::Object(tmp_var_13));
    }
    return php::null;
}

void php_nativeplaywright__browser__contextclosed(php::Object &this_, php::Object ctx) {
    this_.attr(get_persistent_prop(PersistentPropertyId{166}, get_str(1717), get_str(1135)), php::AttrMode::Get).offsetUnset(php_nativeplaywright__browsercontext__id(ctx));
}

void php_nativeplaywright__browser__onprotocolevent(php::Object &this_, php::Str method, php::Array p) {
    php::Array info;
    php::Str sid;
    php::Object self;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Bool tmp_var_10 = 0;
    php::Var tmp_var_11;
    php::Object t;
    php::Var tmp_var_13;
    php::Var page;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Object d;
    php::Var tmp_var_20;
    php::Var tmp_var_21;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    php::Var tmp_var_25;
    php::Var tmp_var_26;
    php::Var tmp_var_27;
    php::Var tmp_var_31;
    php::Var tmp_var_32;
    php::Var tmp_var_33;
    php::Var tmp_var_34;
    php::Var tmp_var_35;
    php::Var tmp_var_36;
    php::Var tmp_var_37;
    php::Bool tmp_var_38 = 0;
    php::Object tmp_var_39;
    zend_class_entry *tmp_var_19 = get_persistent_class(PersistentClassId{26}, get_str(670));

    php::Str tmp_var_0 = method;
    do {
        int tmp_var_1 = -1;
        bool tmp_var_2 = false;
        bool tmp_var_3 = false;
        if (!tmp_var_2 && !tmp_var_3) {
        tmp_var_3 = php::equals(tmp_var_0, get_str(1732));
        }
        if (tmp_var_3) {
        tmp_var_2 = true;
        tmp_var_1 = 0;
        }
        bool tmp_var_4 = false;
        if (!tmp_var_2 && !tmp_var_4) {
        tmp_var_4 = php::equals(tmp_var_0, get_str(1733));
        }
        if (tmp_var_4) {
        tmp_var_2 = true;
        tmp_var_1 = 1;
        }
        bool tmp_var_5 = false;
        if (!tmp_var_2 && !tmp_var_5) {
        tmp_var_5 = php::equals(tmp_var_0, get_str(1734));
        }
        if (tmp_var_5) {
        tmp_var_2 = true;
        tmp_var_1 = 2;
        }
        bool tmp_var_6 = false;
        if (!tmp_var_2 && !tmp_var_6) {
        tmp_var_6 = php::equals(tmp_var_0, get_str(1735));
        }
        if (tmp_var_6) {
        tmp_var_2 = true;
        tmp_var_1 = 3;
        }
        if (tmp_var_1 == 0) {
            info = php::toArray(p.get(get_str(1736)));
            sid = php::toString(p.get(get_str(101)));
            self = this_;
            if (php::exists(info, {{php::ArrayDimFetch, php::Var(get_str(424))}}, tmp_var_8)) {
                tmp_var_7 = tmp_var_8;
            } else {
                tmp_var_7 = php::empty_string;
            }
            tmp_var_9 = tmp_var_7;
            tmp_var_10 = php::toBool(php::same(tmp_var_9, get_str(432)));
            tmp_var_9.unset();
            if (php::toBool(tmp_var_10)) {
                tmp_var_11 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
                php::ClosureFn tmp_var_12 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
                php::checkCallArgCount(0, 0, false);
                    php::Object self = php::Object(vars_.get(0));
                    php::Str sid = php::toString(vars_.get(1));
                    php::Array info = php::toArray(vars_.get(2));
                    php_nativeplaywright__browser__attachpage(self, sid, info);
                return php::null;
                };
                typephp_call_method_cached(tmp_var_11, get_str(665), get_method_call_cache(MethodCallCacheId{88}), php::VarList{php::newClosureWithParameters(tmp_var_12, { self, sid, info }, this_, get_persistent_class(PersistentClassId{28}, get_str(1135)), {  }, php::ClosureStrictTypes::Enabled)});
                tmp_var_11.unset();
            } else {
                t = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
                tmp_var_13 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
                php::ClosureFn tmp_var_14 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
                php::checkCallArgCount(0, 0, false);
                    php::Object t = php::Object(vars_.get(0));
                    php::Str sid = php::toString(vars_.get(1));
                    php::Var tmp_var_0;
                    php::Var tmp_var_1;
                    php::Object e;
                    try {
                        tmp_var_0 = php::Array{};
                        typephp_call_method_cached(t, get_str(660), get_method_call_cache(MethodCallCacheId{89}), php::VarList{get_str(758), tmp_var_0, sid, 10.0});
                        tmp_var_0.unset();
                    } catch (zend_object *_ex) {
                        tmp_var_1 = php::catchException();
                        bool tmp_var_2 = false;
                        if (!tmp_var_2 && tmp_var_1 && (php::instanceOf(tmp_var_1, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
                            tmp_var_2 = true;
                            e = tmp_var_1;
                            tmp_var_1 = php::null;
                        }
                    }
                    if (tmp_var_1) {
                        php::throwException(php::Object(tmp_var_1));
                    }
                return php::null;
                };
                typephp_call_method_cached(tmp_var_13, get_str(665), get_method_call_cache(MethodCallCacheId{90}), php::VarList{php::newClosureWithParameters(tmp_var_14, { t, sid }, this_, get_persistent_class(PersistentClassId{28}, get_str(1135)), {  }, php::ClosureStrictTypes::Enabled)});
                tmp_var_13.unset();
            }
            break;
        }
        if (tmp_var_1 == 1) {
            sid = php::toString(p.get(get_str(101)));
            if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{170}, get_str(1738), get_str(1135)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(sid)}}, tmp_var_16)) {
                tmp_var_15 = tmp_var_16;
            } else {
                tmp_var_15 = php::null;
            }
            page = tmp_var_15;
            if (php::toBool(!(php::same(page, php::null)))) {
                this_.attr(get_persistent_prop(PersistentPropertyId{170}, get_str(1738), get_str(1135)), php::AttrMode::Get).offsetUnset(sid);
                this_.attr(get_persistent_prop(PersistentPropertyId{168}, get_str(1556), get_str(1135)), php::AttrMode::Get).offsetUnset(typephp_read_property_cached(page, get_str(975), php::AttrMode::Get, get_property_cache(PropertyCacheId{122})));
                typephp_call_method_cached(page, get_str(978), get_method_call_cache(MethodCallCacheId{91}));
            }
            tmp_var_17 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
            typephp_call_method_cached(tmp_var_17, get_str(1739), get_method_call_cache(MethodCallCacheId{92}), php::VarList{sid});
            tmp_var_17.unset();
            break;
        }
        if (tmp_var_1 == 2) {
            tmp_var_18 = php::toString(p.get(get_str(587)));
            page = php_nativeplaywright__browser__pageforframe(this_, tmp_var_18);
            tmp_var_18.unset();
            if (php::toBool(!(php::same(page, php::null)))) {
                tmp_var_20 = page;
                tmp_var_21 = typephp_call_method_cached(page, get_str(692), get_method_call_cache(MethodCallCacheId{93}));
                tmp_var_23 = php::toString(p.get(get_str(671)));
                tmp_var_24 = php::toString(p.get(get_str(202)));
                tmp_var_25 = php::toString(p.get(get_str(672)));
                tmp_var_26 = typephp_call_method_cached((typephp_call_method_cached(page, get_str(692), get_method_call_cache(MethodCallCacheId{94}))), get_str(1533), get_method_call_cache(MethodCallCacheId{95}));
                d = php::newObject(tmp_var_19, php::VarList{tmp_var_20, (tmp_var_22 = tmp_var_21), tmp_var_23, tmp_var_24, tmp_var_25, (tmp_var_27 = tmp_var_26)});
                tmp_var_20.unset();
                tmp_var_21.unset();
                tmp_var_23.unset();
                tmp_var_24.unset();
                tmp_var_25.unset();
                tmp_var_26.unset();
                [&]() -> php::Var {
                auto&& tmp_var_28 = this_.attr(get_persistent_prop(PersistentPropertyId{171}, get_str(1741), get_str(1135)), php::AttrMode::Update);
                php::Var tmp_var_29 = php::toString(p.get(get_str(671)));
                php::Var tmp_var_30 = d;
                static_cast<void>(tmp_var_28.item(tmp_var_29, true) = tmp_var_30);
                return tmp_var_30;
                }();
                typephp_call_method_cached(page, get_str(1742), get_method_call_cache(MethodCallCacheId{96}), php::VarList{d});
            }
            break;
        }
        if (tmp_var_1 == 3) {
            if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{171}, get_str(1741), get_str(1135)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(php::toString(p.get(get_str(671))))}}, tmp_var_32)) {
                tmp_var_31 = tmp_var_32;
            } else {
                tmp_var_31 = php::null;
            }
            d = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{26}, get_str(670))); })(tmp_var_31);
            if (php::toBool(!(php::same(d, php::null)))) {
                d.attr(get_persistent_prop(PersistentPropertyId{93}, get_str(673), get_str(670)), php::AttrMode::Update) = php::toString(p.get(get_str(673)));
                if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(1743))}}, tmp_var_34)) {
                    tmp_var_33 = tmp_var_34;
                } else {
                    tmp_var_33 = 0L;
                }
                d.attr(get_persistent_prop(PersistentPropertyId{172}, get_str(1743), get_str(670)), php::AttrMode::Update) = php::toInt(tmp_var_33);
                if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(1744))}}, tmp_var_36)) {
                    tmp_var_35 = tmp_var_36;
                } else {
                    tmp_var_35 = 0L;
                }
                d.attr(get_persistent_prop(PersistentPropertyId{173}, get_str(1744), get_str(670)), php::AttrMode::Update) = php::toInt(tmp_var_35);
                tmp_var_37 = d.attr(get_persistent_prop(PersistentPropertyId{93}, get_str(673), get_str(670)), php::AttrMode::Get);
                tmp_var_38 = php::toBool(!(php::same(tmp_var_37, get_str(19))));
                tmp_var_37.unset();
                if (php::toBool(tmp_var_38)) {
                    this_.attr(get_persistent_prop(PersistentPropertyId{171}, get_str(1741), get_str(1135)), php::AttrMode::Get).offsetUnset(php::toString(p.get(get_str(671))));
                    tmp_var_39 = php_nativeplaywright__download__page(d);
                    php_nativeplaywright__page__poke(tmp_var_39);
                    tmp_var_39.unset();
                }
            }
            break;
        }
    } while (0);
}

php::Object php_nativeplaywright__browser__pageforframe(php::Object &this_, php::Str frameId) {
    php::Var tmp_var_0;
    php::Var page;
    php::Var tmp_var_3;
    php::Bool tmp_var_4 = 0;
    php::Var tmp_var_5;
    php::Object tmp_var_6;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{28}, get_str(1135));


    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{168}, get_str(1556), get_str(1135)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_1{tmp_var_0, false, tmp_var_2};
        while (tmp_var_1.next()) {
            page = tmp_var_1.value();
            tmp_var_3 = typephp_call_method_cached(page, get_str(588), get_method_call_cache(MethodCallCacheId{97}), php::VarList{frameId});
            tmp_var_4 = php::toBool(!(php::same(tmp_var_3, php::null)));
            tmp_var_3.unset();
            if (php::toBool(tmp_var_4)) {
                tmp_var_5 = page;
                if (UNEXPECTED(!(tmp_var_5.isNull() || (tmp_var_5.isObject() && php::instanceOf(tmp_var_5, get_persistent_class(PersistentClassId{14}, get_str(474))))))) {
                    php::throwReturnTypeError(tmp_var_5, get_str(1745), get_str(1746), false);
                }
                return tmp_var_5;
            }
        }
    }
    tmp_var_6 = (php::Object{});
    return tmp_var_6;
}

void php_nativeplaywright__browser__attachpage(php::Object &this_, php::Str sid, php::Array info) {
    php::Str cid;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var ctx;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Str tid;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Object e;
    php::Object page;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_14;
    php::Var w;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var opener;
    php::Var tmp_var_21;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    php::Var tmp_var_25;
    php::Var tmp_var_26;
    zend_class_entry *tmp_var_8 = get_persistent_class(PersistentClassId{14}, get_str(474));

    if (php::exists(info, {{php::ArrayDimFetch, php::Var(get_str(695))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::empty_string;
    }
    cid = php::toString(tmp_var_0);
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{166}, get_str(1717), get_str(1135)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(cid)}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{167}, get_str(1718), get_str(1135)), php::AttrMode::Get);
    }
    ctx = tmp_var_2;
    tid = php::toString(info.get(get_str(975)));
    if (php::toBool(php::same(ctx, php::null))) {
        try {
            tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
            tmp_var_5 = php::Array{};
            typephp_call_method_cached(tmp_var_4, get_str(660), get_method_call_cache(MethodCallCacheId{98}), php::VarList{get_str(758), tmp_var_5, sid, 10.0});
            tmp_var_4.unset();
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
        return;
    }
    tmp_var_9 = ctx;
    tmp_var_10 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
    page = php::newObject(tmp_var_8, php::VarList{this_, tmp_var_9, php::deindirect(tmp_var_10), sid, tid});
    tmp_var_9.unset();
    tmp_var_10.unset();
    [&]() -> php::Var {
    auto&& tmp_var_11 = this_.attr(get_persistent_prop(PersistentPropertyId{170}, get_str(1738), get_str(1135)), php::AttrMode::Update);
    php::Var tmp_var_12 = sid;
    php::Var tmp_var_13 = page;
    static_cast<void>(tmp_var_11.item(tmp_var_12, true) = tmp_var_13);
    return tmp_var_13;
    }();
    try {
        php_nativeplaywright__page__initialize(page);
    } catch (zend_object *_ex) {
        tmp_var_14 = php::catchException();
        bool tmp_var_15 = false;
        if (!tmp_var_15 && tmp_var_14 && (php::instanceOf(tmp_var_14, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
            tmp_var_15 = true;
            e = tmp_var_14;
            tmp_var_14 = php::null;
            this_.attr(get_persistent_prop(PersistentPropertyId{170}, get_str(1738), get_str(1135)), php::AttrMode::Get).offsetUnset(sid);
            if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{169}, get_str(1730), get_str(1135)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(tid)}}, tmp_var_17)) {
                tmp_var_16 = tmp_var_17;
            } else {
                tmp_var_16 = php::null;
            }
            w = tmp_var_16;
            if (php::toBool(!(php::same(w, php::null)))) {
                typephp_call_method_cached(w, get_str(143), get_method_call_cache(MethodCallCacheId{99}), php::VarList{e});
            }
            return;
        }
    }
    if (tmp_var_14) {
        php::throwException(php::Object(tmp_var_14));
    }
    [&]() -> php::Var {
    auto&& tmp_var_18 = this_.attr(get_persistent_prop(PersistentPropertyId{168}, get_str(1556), get_str(1135)), php::AttrMode::Update);
    php::Var tmp_var_19 = tid;
    php::Var tmp_var_20 = page;
    static_cast<void>(tmp_var_18.item(tmp_var_19, true) = tmp_var_20);
    return tmp_var_20;
    }();
    if (php::exists(info, {{php::ArrayDimFetch, php::Var(get_str(1747))}}, tmp_var_23)) {
        tmp_var_22 = tmp_var_23;
    } else {
        tmp_var_22 = php::empty_string;
    }
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{168}, get_str(1556), get_str(1135)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(php::toString(tmp_var_22))}}, tmp_var_24)) {
        tmp_var_21 = tmp_var_24;
    } else {
        tmp_var_21 = php::null;
    }
    opener = tmp_var_21;
    php_nativeplaywright__page__setopener(page, ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{14}, get_str(474))); })(opener));
    typephp_call_method_cached(ctx, get_str(1749), get_method_call_cache(MethodCallCacheId{100}), php::VarList{page});
    if (php::toBool(!(php::same(opener, php::null)))) {
        typephp_call_method_cached(opener, get_str(1750), get_method_call_cache(MethodCallCacheId{101}), php::VarList{page});
    }
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{169}, get_str(1730), get_str(1135)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(tid)}}, tmp_var_26)) {
        tmp_var_25 = tmp_var_26;
    } else {
        tmp_var_25 = php::null;
    }
    w = tmp_var_25;
    if (php::toBool(!(php::same(w, php::null)))) {
        typephp_call_method_cached(w, get_str(135), get_method_call_cache(MethodCallCacheId{102}), php::VarList{page});
    }
}

void php_nativeplaywright__browser__diddisconnect(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var p;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{28}, get_str(1135));

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{165}, get_str(76), get_str(1135)), php::AttrMode::Get))) {
        return;
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{165}, get_str(76), get_str(1135)), php::AttrMode::Update) = true;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{168}, get_str(1556), get_str(1135)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_1{tmp_var_0, false, tmp_var_2};
        while (tmp_var_1.next()) {
            p = tmp_var_1.value();
            typephp_call_method_cached(p, get_str(978), get_method_call_cache(MethodCallCacheId{103}));
        }
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{168}, get_str(1556), get_str(1135)), php::AttrMode::Update) = php::Array{};
    this_.attr(get_persistent_prop(PersistentPropertyId{170}, get_str(1738), get_str(1135)), php::AttrMode::Update) = php::Array{};
    php_nativeplaywright__browser__emit(this_, get_str(1751), this_);
}

void php_nativeplaywright__browser__close(php::Object &this_) {
    php::Bool tmp_var_0 = 0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var ctx;
    php::Var tmp_var_6;
    php::Object e;
    php::Var tmp_var_8;
    zend_class_entry *tmp_var_5 = get_persistent_class(PersistentClassId{28}, get_str(1135));

    tmp_var_0 = php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{165}, get_str(76), get_str(1135)), php::AttrMode::Get));
    if (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_0)) {
            tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
            tmp_var_2 = typephp_call_method_cached(tmp_var_1, get_str(976), get_method_call_cache(MethodCallCacheId{104}));
            tmp_var_1.unset();
            return php::toBool(tmp_var_2);
        }
        return false;
    }())) {
        return;
    }

    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{166}, get_str(1717), get_str(1135)), php::AttrMode::Get);
    {
        php::ForeachIterator tmp_var_4{tmp_var_3, false, tmp_var_5};
        while (tmp_var_4.next()) {
            ctx = tmp_var_4.value();
            if (php::toBool(!(php::toBool(typephp_call_method_cached(ctx, get_str(976), get_method_call_cache(MethodCallCacheId{105})))))) {
                try {
                    typephp_call_method_cached(ctx, get_str(170), get_method_call_cache(MethodCallCacheId{106}));
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
        }
    }
    tmp_var_8 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
    typephp_call_method_cached(tmp_var_8, get_str(170), get_method_call_cache(MethodCallCacheId{107}));
    tmp_var_8.unset();
    php_nativeplaywright__browser__diddisconnect(this_);
}

php::Object php_nativeplaywright__browser__newbrowsercdpsession(php::Object &this_) {
    php::Var tmp_var_1;
    php::Object tmp_var_2;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{25}, get_str(658));

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{160}, get_str(659), get_str(1135)), php::AttrMode::Get);
    tmp_var_2 = (php::newObject(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), php::empty_string, 30.0}));
    tmp_var_1.unset();
    return tmp_var_2;
}

void php_nativeplaywright__browser__on(php::Object &this_, php::Str event, php::Object handler) {
    php::Int &_object_prop_this___handlerSeq = this_.attrInt(get_persistent_prop(PersistentPropertyId{175}, get_str(1128), get_str(1135)));

    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Update);
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
    php_nativeplaywright__browser__onlisteneradded(this_, event);
}

void php_nativeplaywright__browser__once(php::Object &this_, php::Str event, php::Object handler) {
    php::Int &_object_prop_this___handlerSeq = this_.attrInt(get_persistent_prop(PersistentPropertyId{175}, get_str(1128), get_str(1135)));

    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Update);
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
    php_nativeplaywright__browser__onlisteneradded(this_, event);
}

void php_nativeplaywright__browser__off(php::Object &this_, php::Str event, php::Object handler) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var k;
    php::Var h;
    php::Var tmp_var_5;
    php::Bool tmp_var_6 = 0;
    zend_class_entry *tmp_var_4 = get_persistent_class(PersistentClassId{28}, get_str(1135));

    if (php::toBool(php::same(handler, php::null))) {
        this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Get).offsetUnset(event);
        return;
    }
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(event)}}, tmp_var_1)) {
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
                auto &&tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Get);
                php::Var tmp_var_8 = event;
                php::Var tmp_var_9 = k;
                php::unset(tmp_var_7, {{php::ArrayDimFetch, tmp_var_8}, {php::ArrayDimFetch, tmp_var_9}});
                }();
            }
        }
    }
}

void php_nativeplaywright__browser__removealllisteners(php::Object &this_, php::Str event) {
    if (php::toBool(php::same(event, php::empty_string))) {
        this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Update) = php::Array{};
    } else {
        this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Get).offsetUnset(event);
    }
}

php::Int php_nativeplaywright__browser__listenercount(php::Object &this_, php::Str event) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;

    if (get_function_resolution_cache(FunctionResolutionCacheId{268}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{268}) = php::fn::function_exists(get_str(161)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{268}) == 1 ? get_func(RequestFuncId{8}, get_str(161)) : get_persistent_func(PersistentFuncId{8}, get_str(162));
    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(event)}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = php::Array{};
    }
    tmp_var_3 = tmp_var_1;
    tmp_var_4 = (php::call(tmp_var_0, php::VarList{tmp_var_3}));
    if (UNEXPECTED(!(tmp_var_4.isInt()))) {
        php::throwReturnTypeError(tmp_var_4, get_str(1752), get_str(89), true);
    }
    return php::toInt(tmp_var_4);
    tmp_var_3.unset();
}

void php_nativeplaywright__browser__onlisteneradded(php::Object &this_, php::Str event) {
}

void php_nativeplaywright__browser__emit(php::Object &this_, php::Str event, php::Var arg) {
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
    zend_class_entry *tmp_var_6 = get_persistent_class(PersistentClassId{28}, get_str(1135));

    if (php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(event)}}, tmp_var_1)) {
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
    t = php_nativeplaywright__browser__transport(this_);

    tmp_var_4 = hs;
    {
        php::ForeachIterator tmp_var_5{tmp_var_4, false, tmp_var_6};
        while (tmp_var_5.next()) {
            k = tmp_var_5.key();
            h = tmp_var_5.value();
            if (php::toBool(h.item(1L, false))) {
                [&]() {
                auto &&tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Get);
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
                typephp_call_cached(fn, get_function_call_cache(FunctionCallCacheId{27}), php::VarList{arg});
            return php::null;
            };
            typephp_call_method_cached(t, get_str(665), get_method_call_cache(MethodCallCacheId{108}), php::VarList{php::newClosureWithParameters(tmp_var_10, { fn, arg }, this_, get_persistent_class(PersistentClassId{28}, get_str(1135)), {  }, php::ClosureStrictTypes::Enabled)});
        }
    }
}

php::Var php_nativeplaywright__browser__waitforevent(php::Object &this_, php::Str event, php::Object predicate, php::Var timeout) {
    php::Var tmp_var_0;
    if (timeout.isInt()) {
        timeout = php::toFloat(timeout);
    }
    if (UNEXPECTED(!(timeout.isNull() || timeout.isFloat()))) {
        php::throwArgumentTypeError(timeout, get_str(1753), 3, get_str(102), get_str(708));
    }

    tmp_var_0 = (php_nativeplaywright__browser__expectevent(this_, event, php::Object{}, predicate, timeout));
    return tmp_var_0;
}

php::Var php_nativeplaywright__browser__expectevent(php::Object &this_, php::Str event, php::Object action, php::Object predicate, php::Var timeout) {
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
        php::throwArgumentTypeError(timeout, get_str(1754), 4, get_str(102), get_str(708));
    }

    t = php_nativeplaywright__browser__transport(this_);
    w = typephp_call_method_cached(t, get_str(116), get_method_call_cache(MethodCallCacheId{109}));
    id = ++this_.attr(get_persistent_prop(PersistentPropertyId{175}, get_str(1128), get_str(1135)), php::AttrMode::Update);
    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Update);
    php::Var tmp_var_1 = event;
    auto&& tmp_var_3 = tmp_var_0.item(tmp_var_1, true);
    php::Var tmp_var_4 = id;
    php::ClosureFn tmp_var_2 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(1, 1, false);
            auto arg = php::getCallArg(0);
            php::Var w = vars_.get(0);
            php::Object predicate = php::Object(vars_.get(1));
            if (php::toBool((php::toBool(php::same(predicate, php::null)) || php::toBool(typephp_call_cached(predicate, get_function_call_cache(FunctionCallCacheId{28}), php::VarList{arg}))))) {
                typephp_call_method_cached(w, get_str(135), get_method_call_cache(MethodCallCacheId{110}), php::VarList{arg});
            }
    return php::null;
    };
    php::Var tmp_var_5 = php::Array{
        php::Var(php::newClosureWithParameters(tmp_var_2, { w, predicate }, this_, get_persistent_class(PersistentClassId{28}, get_str(1135)), { php::ClosureParameter{"arg", false, false, true} }, php::ClosureStrictTypes::Enabled)), 
        php::Var(false)
    };
    (tmp_var_3.isArray() ? static_cast<void>(tmp_var_3.item(tmp_var_4, true) = tmp_var_5) : tmp_var_3.offsetSet(tmp_var_4, tmp_var_5));
    return tmp_var_5;
    }();
    php_nativeplaywright__browser__onlisteneradded(this_, event);
    try {
        if (php::toBool(!(php::same(action, php::null)))) {
            typephp_call_cached(action, get_function_call_cache(FunctionCallCacheId{29}));
        }
        secs = (php::toBool(php::same(timeout, php::null))) ? (php::Var(php_nativeplaywright__browser__defaulttimeout(this_))) : (php::Var(((php::Var(timeout)) / (php::Var(1000L)))));
        tmp_var_6 = typephp_call_method_cached(t, get_str(121), get_method_call_cache(MethodCallCacheId{111}), php::VarList{w, secs, php::concat({get_str(1133), event, get_str(395)})});
        [&]() {
        auto &&tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Get);
        php::Var tmp_var_8 = event;
        php::Var tmp_var_9 = id;
        php::unset(tmp_var_7, {{php::ArrayDimFetch, tmp_var_8}, {php::ArrayDimFetch, tmp_var_9}});
        }();
        return tmp_var_6;
    } catch (zend_object *_ex) {
        tmp_var_10 = php::catchException();
    }
    [&]() {
    auto &&tmp_var_11 = this_.attr(get_persistent_prop(PersistentPropertyId{174}, get_str(1127), get_str(1135)), php::AttrMode::Get);
    php::Var tmp_var_12 = event;
    php::Var tmp_var_13 = id;
    php::unset(tmp_var_11, {{php::ArrayDimFetch, tmp_var_12}, {php::ArrayDimFetch, tmp_var_13}});
    }();

    if (tmp_var_10) {
        php::throwException(php::Object(tmp_var_10));
    }
    return php::null;
}


ZEND_METHOD(NativePlaywright_Browser, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(3, 3, false);
        php::Object arg_t = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{4}, get_str(114)));
        php::Object arg_conn = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{1}, get_str(74)));
        php::Array arg_launchOptions = php::toArray(php::getCallArg(2));
        php_nativeplaywright__browser____construct(this_, php::takeValue(arg_t),php::takeValue(arg_conn),php::takeValue(arg_launchOptions));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, launch) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__browser__launch_arg_0_default_value()));
        auto retval = php_nativeplaywright__browser__launch(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, initialize) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_timeout = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_timeout.isFloat() || raw_arg_timeout.isInt())))) {
            php::throwArgumentTypeError(raw_arg_timeout, get_str(1755), 1, get_str(102), get_str(103));
        }
        php::Float arg_timeout = php::toFloat(raw_arg_timeout);
        php_nativeplaywright__browser__initialize(this_, arg_timeout);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, transport) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browser__transport(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, defaultTimeout) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browser__defaulttimeout(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, launchOption) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(1756), 1, get_str(254), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        auto retval = php_nativeplaywright__browser__launchoption(this_, php::takeValue(arg_name));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, slowMo) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browser__slowmo(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, defaultUserAgent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browser__defaultuseragent(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, send) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_method = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_method.isString()))) {
            php::throwArgumentTypeError(raw_arg_method, get_str(1757), 1, get_str(100), get_str(98));
        }
        php::Str arg_method = php::toString(raw_arg_method);
        php::Array arg_params = php::toArray(php::getCallArg(1, php_nativeplaywright__browser__send_arg_1_default_value()));
        auto retval = php_nativeplaywright__browser__send(this_, php::takeValue(arg_method),php::takeValue(arg_params));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, connection) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browser__connection(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, pid) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browser__pid(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, version) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browser__version(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, browserType) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browser__browsertype(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, isConnected) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browser__isconnected(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, contexts) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browser__contexts(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, newContext) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__browser__newcontext_arg_0_default_value()));
        auto retval = php_nativeplaywright__browser__newcontext(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, newPage) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__browser__newpage_arg_0_default_value()));
        auto retval = php_nativeplaywright__browser__newpage(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, useDefaultContext) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0));
        auto retval = php_nativeplaywright__browser__usedefaultcontext(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, createPage) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_ctx = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{27}, get_str(700)));
        auto retval = php_nativeplaywright__browser__createpage(this_, php::takeValue(arg_ctx));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, contextClosed) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_ctx = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{27}, get_str(700)));
        php_nativeplaywright__browser__contextclosed(this_, php::takeValue(arg_ctx));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, onProtocolEvent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_method = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_method.isString()))) {
            php::throwArgumentTypeError(raw_arg_method, get_str(1758), 1, get_str(100), get_str(98));
        }
        php::Str arg_method = php::toString(raw_arg_method);
        php::Array arg_p = php::toArray(php::getCallArg(1));
        php_nativeplaywright__browser__onprotocolevent(this_, php::takeValue(arg_method),php::takeValue(arg_p));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, pageForFrame) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_frameId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_frameId.isString()))) {
            php::throwArgumentTypeError(raw_arg_frameId, get_str(1745), 1, get_str(587), get_str(98));
        }
        php::Str arg_frameId = php::toString(raw_arg_frameId);
        auto retval = php_nativeplaywright__browser__pageforframe(this_, php::takeValue(arg_frameId));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, attachPage) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_sid = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_sid.isString()))) {
            php::throwArgumentTypeError(raw_arg_sid, get_str(1759), 1, get_str(1760), get_str(98));
        }
        php::Str arg_sid = php::toString(raw_arg_sid);
        php::Array arg_info = php::toArray(php::getCallArg(1));
        php_nativeplaywright__browser__attachpage(this_, php::takeValue(arg_sid),php::takeValue(arg_info));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, didDisconnect) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__browser__diddisconnect(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, close) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__browser__close(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, newBrowserCDPSession) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browser__newbrowsercdpsession(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, on) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1761), 1, get_str(1148), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_handler = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(147)));
        php_nativeplaywright__browser__on(this_, php::takeValue(arg_event),php::takeValue(arg_handler));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, once) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1762), 1, get_str(1148), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_handler = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(147)));
        php_nativeplaywright__browser__once(this_, php::takeValue(arg_event),php::takeValue(arg_handler));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, off) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1763), 1, get_str(1148), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_handler = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(147))); })(php::getCallArg(1, php_nativeplaywright__browser__off_arg_1_default_value()));
        php_nativeplaywright__browser__off(this_, php::takeValue(arg_event),php::takeValue(arg_handler));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, removeAllListeners) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Var raw_arg_event = php::getCallArg(0, php_nativeplaywright__browser__removealllisteners_arg_0_default_value());
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1764), 1, get_str(1148), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php_nativeplaywright__browser__removealllisteners(this_, php::takeValue(arg_event));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, listenerCount) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1752), 1, get_str(1148), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        auto retval = php_nativeplaywright__browser__listenercount(this_, php::takeValue(arg_event));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, onListenerAdded) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1765), 1, get_str(1148), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php_nativeplaywright__browser__onlisteneradded(this_, php::takeValue(arg_event));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, emit) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1766), 1, get_str(1148), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Var arg_arg = php::getCallArg(1);
        php_nativeplaywright__browser__emit(this_, php::takeValue(arg_event),php::takeValue(arg_arg));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, waitForEvent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 3, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1753), 1, get_str(1148), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_predicate = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(147))); })(php::getCallArg(1, php_nativeplaywright__browser__waitforevent_arg_1_default_value()));
        php::Var arg_timeout = php::getCallArg(2, php_nativeplaywright__browser__waitforevent_arg_2_default_value());
        auto retval = php_nativeplaywright__browser__waitforevent(this_, php::takeValue(arg_event),php::takeValue(arg_predicate),php::takeValue(arg_timeout));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Browser, expectEvent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 4, false);
        php::Var raw_arg_event = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_event.isString()))) {
            php::throwArgumentTypeError(raw_arg_event, get_str(1754), 1, get_str(1148), get_str(98));
        }
        php::Str arg_event = php::toString(raw_arg_event);
        php::Object arg_action = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(147))); })(php::getCallArg(1, php_nativeplaywright__browser__expectevent_arg_1_default_value()));
        php::Object arg_predicate = ([&](php::Var typephp_nullable_object_value) -> php::Object { if (typephp_nullable_object_value.isNull()) { return php::Object{typephp_nullable_object_value}; } return php::toObject(typephp_nullable_object_value, get_persistent_class(PersistentClassId{5}, get_str(147))); })(php::getCallArg(2, php_nativeplaywright__browser__expectevent_arg_2_default_value()));
        php::Var arg_timeout = php::getCallArg(3, php_nativeplaywright__browser__expectevent_arg_3_default_value());
        auto retval = php_nativeplaywright__browser__expectevent(this_, php::takeValue(arg_event),php::takeValue(arg_action),php::takeValue(arg_predicate),php::takeValue(arg_timeout));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

