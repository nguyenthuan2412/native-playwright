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
#include <php_native_playwright_src_NativePlaywright_BlockingTransport_ce405677f2_decl.h>
#include <php_native_playwright_src_NativePlaywright_BrowserContext_cd971a2234_decl.h>
#include <php_native_playwright_src_NativePlaywright_BrowserType_4c5677b1e9_decl.h>
#include <php_native_playwright_src_NativePlaywright_Browser_5c08077592_decl.h>
#include <php_native_playwright_src_NativePlaywright_Connection_0606cc101d_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_SwooleTransport_b44c3f18aa_decl.h>

php::Str php_nativeplaywright__browsertype__name(php::Object &this_) {
    return get_str(1649);
}

php::Str php_nativeplaywright__browsertype__executablepath(php::Object &this_) {
    php::Var env;
    zend_function * tmp_var_0;
    zend_function * tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Var tmp_var_4;
    php::Array candidates;
    php::Var p;
    zend_function * tmp_var_7;
    php::Var tmp_var_8;
    zend_function * tmp_var_9;
    php::Bool tmp_var_10 = 0;
    php::Var tmp_var_11;
    zend_class_entry *tmp_var_6 = get_persistent_class(PersistentClassId{29}, get_str(1668));
    zend_class_entry *tmp_var_12 = get_persistent_class(PersistentClassId{0}, get_str(75));

    if (get_function_resolution_cache(FunctionResolutionCacheId{250}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{250}) = php::fn::function_exists(get_str(1650)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{250}) == 1 ? get_func(RequestFuncId{68}, get_str(1650)) : get_persistent_func(PersistentFuncId{71}, get_str(1651));
    env = php::call(tmp_var_0, php::VarList{get_str(1652)});
    if (get_function_resolution_cache(FunctionResolutionCacheId{251}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{251}) = php::fn::function_exists(get_str(71)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{251}) == 1 ? get_func(RequestFuncId{0}, get_str(71)) : get_persistent_func(PersistentFuncId{0}, get_str(72));
    tmp_var_2 = php::call(tmp_var_1, php::VarList{env});
    tmp_var_3 = php::toBool((php::toBool(tmp_var_2) && php::toBool(!(php::same(env, php::empty_string)))));
    tmp_var_2.unset();
    if (php::toBool(tmp_var_3)) {
        tmp_var_4 = (env);
        if (UNEXPECTED(!(tmp_var_4.isString()))) {
            php::throwReturnTypeError(tmp_var_4, get_str(1653), get_str(98), true);
        }
        return tmp_var_4;
    }
    candidates = php::Array{
        php::Var(get_str(1654)), 
        php::Var(get_str(1655)), 
        php::Var(get_str(1656)), 
        php::Var(get_str(1657)), 
        php::Var(get_str(1658)), 
        php::Var(get_str(1659)), 
        php::Var(get_str(1660)), 
        php::Var(get_str(1661)), 
        php::Var(get_str(1662)), 
        php::Var(get_str(1663)), 
        php::Var(get_str(1664))
    };
    {
        php::ForeachIterator tmp_var_5{candidates, false, tmp_var_6};
        while (tmp_var_5.nextValue(p)) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{252}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{252}) = php::fn::function_exists(get_str(696)) ? 1 : 2; }
            tmp_var_7 = get_function_resolution_cache(FunctionResolutionCacheId{252}) == 1 ? get_func(RequestFuncId{45}, get_str(696)) : get_persistent_func(PersistentFuncId{47}, get_str(697));
            tmp_var_8 = php::call(tmp_var_7, php::VarList{p});
            tmp_var_10 = php::toBool([&]() -> bool {
                if (php::toBool(tmp_var_8)) {
                    if (get_function_resolution_cache(FunctionResolutionCacheId{253}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{253}) = php::fn::function_exists(get_str(1665)) ? 1 : 2; }
                    tmp_var_9 = get_function_resolution_cache(FunctionResolutionCacheId{253}) == 1 ? get_func(RequestFuncId{69}, get_str(1665)) : get_persistent_func(PersistentFuncId{72}, get_str(1666));
                    return php::toBool(php::call(tmp_var_9, php::VarList{p}));
                }
                return false;
            }());
            tmp_var_8.unset();
            if (php::toBool(tmp_var_10)) {
                tmp_var_11 = (p);
                if (UNEXPECTED(!(tmp_var_11.isString()))) {
                    php::throwReturnTypeError(tmp_var_11, get_str(1653), get_str(98), true);
                }
                return tmp_var_11;
            }
        }
    }
    php::throwException(php::newObject(tmp_var_12, php::VarList{get_str(1667)}));
    return php::null;
}

php::Array php_nativeplaywright__browsertype__buildargs(php::Object &this_, php::Array options) {
    php::Var ignore;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Array args;
    php::Var skip;
    zend_function * tmp_var_2;
    php::Var tmp_var_3;
    php::Var a;
    zend_function * tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Bool tmp_var_10 = 0;
    zend_function * tmp_var_11;
    zend_function * tmp_var_12;
    php::Var tmp_var_14;
    php::Var features;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    zend_function * tmp_var_23;
    php::Var tmp_var_24;
    php::Var tmp_var_25;
    php::Var tmp_var_26;
    php::Bool tmp_var_27 = 0;
    php::Var tmp_var_28;
    php::Var tmp_var_29;
    php::Var tmp_var_30;
    php::Var tmp_var_31;
    php::Var tmp_var_32;
    php::Var tmp_var_33;
    php::Var tmp_var_34;
    php::Var tmp_var_35;
    php::Var tmp_var_36;
    zend_class_entry *tmp_var_5 = get_persistent_class(PersistentClassId{29}, get_str(1668));

    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1669))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = false;
    }
    ignore = tmp_var_0;
    args = php::Array{};
    if (php::toBool(!(php::same(ignore, php::true_)))) {
        skip = [&]() -> php::Var {
            if (get_function_resolution_cache(FunctionResolutionCacheId{254}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{254}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
            tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{254}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
            if (php::toBool(php::call(tmp_var_2, php::VarList{ignore}))) {
                return php::Var(ignore);
            } else {
                return php::Var(php::Array{});
            }
        }();

        tmp_var_3 = class_const__nativeplaywright__browsertype__DEFAULT_ARGS;
        {
            php::ForeachIterator tmp_var_4{tmp_var_3, false, tmp_var_5};
            while (tmp_var_4.next()) {
                a = tmp_var_4.value();
                if (get_function_resolution_cache(FunctionResolutionCacheId{255}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{255}) = php::fn::function_exists(get_str(1670)) ? 1 : 2; }
                tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{255}) == 1 ? get_func(RequestFuncId{70}, get_str(1670)) : get_persistent_func(PersistentFuncId{73}, get_str(1671));
                if (php::toBool(!(php::toBool(php::call(tmp_var_6, php::VarList{a, skip, true}))))) {
                    args.appendValue(a);
                }
            }
        }
        if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1672))}}, tmp_var_8)) {
            tmp_var_7 = tmp_var_8;
        } else {
            tmp_var_7 = true;
        }
        tmp_var_9 = tmp_var_7;
        tmp_var_10 = php::toBool(php::same(tmp_var_9, php::false_));
        tmp_var_9.unset();
        if (php::toBool(tmp_var_10)) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{256}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{256}) = php::fn::function_exists(get_str(453)) ? 1 : 2; }
            tmp_var_11 = get_function_resolution_cache(FunctionResolutionCacheId{256}) == 1 ? get_func(RequestFuncId{31}, get_str(453)) : get_persistent_func(PersistentFuncId{33}, get_str(454));
            if (get_function_resolution_cache(FunctionResolutionCacheId{257}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{257}) = php::fn::function_exists(get_str(455)) ? 1 : 2; }
            tmp_var_12 = get_function_resolution_cache(FunctionResolutionCacheId{257}) == 1 ? get_func(RequestFuncId{32}, get_str(455)) : get_persistent_func(PersistentFuncId{34}, get_str(456));
            php::ClosureFn tmp_var_13 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
            php::checkCallArgCount(1, 1, false);
                auto tmp_var_0 = php::getCallArg(0);
                if (UNEXPECTED(!(tmp_var_0.isString()))) {
                    php::throwArgumentTypeError(tmp_var_0, get_str(457), 1, get_str(401), get_str(98));
                    return php::null;
                }
                php::Str a = php::toString(tmp_var_0);
                tmp_var_0.unset();
                php::Var tmp_var_1;

            tmp_var_1 = !(php::same(a, get_str(23)));
                if (UNEXPECTED(!(tmp_var_1.isBool()))) {
                    php::throwReturnTypeError(tmp_var_1, get_str(457), get_str(106), false);
                    return php::null;
                }
                return tmp_var_1;};
            tmp_var_14 = php::call(tmp_var_12, php::VarList{args, php::newClosureWithParameters(tmp_var_13, {  }, this_, get_persistent_class(PersistentClassId{29}, get_str(1668)), { php::ClosureParameter{"a", false, false, true} }, php::ClosureStrictTypes::Enabled)});
            args = php::call(tmp_var_11, php::VarList{tmp_var_14});
            tmp_var_14.unset();
        }
        features = class_const__nativeplaywright__browsertype__DISABLED_FEATURES;
        if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1673))}}, tmp_var_16)) {
            tmp_var_15 = tmp_var_16;
        } else {
            tmp_var_15 = false;
        }
        if (php::toBool(!(php::toBool(tmp_var_15)))) {
            args.appendValue(get_str(1674));
            [&]() -> php::Var {
            auto&& tmp_var_17 = features;
            php::Var tmp_var_18 = php::null;
            php::Var tmp_var_19 = get_str(1675);
            (tmp_var_17.isArray() ? tmp_var_17.append(tmp_var_19) : tmp_var_17.offsetSet(php::null, tmp_var_19));
            return tmp_var_19;
            }();
            [&]() -> php::Var {
            auto&& tmp_var_20 = features;
            php::Var tmp_var_21 = php::null;
            php::Var tmp_var_22 = get_str(1676);
            (tmp_var_20.isArray() ? tmp_var_20.append(tmp_var_22) : tmp_var_20.offsetSet(php::null, tmp_var_22));
            return tmp_var_22;
            }();
        }
        if (get_function_resolution_cache(FunctionResolutionCacheId{258}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{258}) = php::fn::function_exists(get_str(913)) ? 1 : 2; }
        tmp_var_23 = get_function_resolution_cache(FunctionResolutionCacheId{258}) == 1 ? get_func(RequestFuncId{51}, get_str(913)) : get_persistent_func(PersistentFuncId{53}, get_str(914));
        tmp_var_24 = php::call(tmp_var_23, php::VarList{get_str(230), features});
        ((tmp_var_25 = php::concat({get_str(1677), php::toString(tmp_var_24)}), args.append(tmp_var_25)), tmp_var_25);
        tmp_var_24.unset();
        tmp_var_26 = php::constant(get_str(411), php::ConstantLookup::UnqualifiedInNamespace);
        tmp_var_27 = php::toBool(php::same(tmp_var_26, get_str(1678)));
        tmp_var_26.unset();
        if (php::toBool(tmp_var_27)) {
            args.appendValue(get_str(1679));
        }
    }
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1680))}}, tmp_var_29)) {
        tmp_var_28 = tmp_var_29;
    } else {
        tmp_var_28 = false;
    }
    if (php::toBool(!(php::toBool(tmp_var_28)))) {
        args.appendValue(get_str(1681));
    }
    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1683))}, {php::ArrayDimFetch, php::Var(get_str(1682))}}))) {
        tmp_var_30 = options.get(get_str(1683)).item(get_str(1682), false);
        ((tmp_var_31 = php::concat({get_str(1684), php::toString(tmp_var_30)}), args.append(tmp_var_31)), tmp_var_31);
        tmp_var_30.unset();
        if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1683))}, {php::ArrayDimFetch, php::Var(get_str(1685))}}))) {
            tmp_var_32 = options.get(get_str(1683)).item(get_str(1685), false);
            ((tmp_var_33 = php::concat({get_str(1686), php::toString(tmp_var_32)}), args.append(tmp_var_33)), tmp_var_33);
            tmp_var_32.unset();
        }
    }
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(525))}}, tmp_var_35)) {
        tmp_var_34 = tmp_var_35;
    } else {
        tmp_var_34 = php::Array{};
    }

    tmp_var_36 = php::toArray(tmp_var_34);
    {
        php::ForeachIterator tmp_var_37{tmp_var_36, false, tmp_var_5};
        while (tmp_var_37.next()) {
            a = tmp_var_37.value();
            args.appendValue(php::toString(a));
        }
    }
    return args;
}

php::Object php_nativeplaywright__browsertype__launch(php::Object &this_, php::Array options) {
    php::Object tmp_var_0;

    tmp_var_0 = (php_nativeplaywright__browsertype__start(this_, options, php::empty_string));
    return tmp_var_0;
}

php::Object php_nativeplaywright__browsertype__start(php::Object &this_, php::Array options, php::Str userDataDir) {
    php::Str exe;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Object conn;
    php::Str tmp_var_3;
    php::Var tmp_var_4;
    php::Var swoole;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    zend_function * tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Bool tmp_var_10 = 0;
    php::Var t;
    php::Object browser;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    php::Float tmp_var_16 = 0;
    php::Float tmp_var_17 = 0;
    php::Var tmp_var_18;
    php::Object e;
    php::Var tmp_var_21;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{1}, get_str(74));
    zend_class_entry *tmp_var_11 = get_persistent_class(PersistentClassId{7}, get_str(176));
    zend_class_entry *tmp_var_12 = get_persistent_class(PersistentClassId{30}, get_str(160));
    zend_class_entry *tmp_var_13 = get_persistent_class(PersistentClassId{28}, get_str(1135));
    zend_class_entry *tmp_var_20 = get_persistent_class(PersistentClassId{0}, get_str(75));

    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1688))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php_nativeplaywright__browsertype__executablepath(this_);
    }
    exe = php::toString(tmp_var_0);
    tmp_var_3 = exe;
    tmp_var_4 = php_nativeplaywright__browsertype__buildargs(this_, options);
    conn = php::newObject(tmp_var_2, php::VarList{tmp_var_3, tmp_var_4, userDataDir});
    tmp_var_3.unset();
    tmp_var_4.unset();
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1690))}}, tmp_var_6)) {
        tmp_var_5 = tmp_var_6;
    } else {
        if (get_function_resolution_cache(FunctionResolutionCacheId{259}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{259}) = php::fn::function_exists(get_str(1691)) ? 1 : 2; }
        tmp_var_7 = get_function_resolution_cache(FunctionResolutionCacheId{259}) == 1 ? get_func(RequestFuncId{71}, get_str(1691)) : get_persistent_func(PersistentFuncId{74}, get_str(1692));
        tmp_var_8 = php::call(tmp_var_7, php::VarList{get_str(1690)});
        tmp_var_5 = [&]() -> bool {
        if (php::toBool(tmp_var_8)) {
            tmp_var_9 = typephp_call_cached(get_str(1693), get_function_call_cache(FunctionCallCacheId{26}));
            tmp_var_10 = php::toBool(((php::Var(tmp_var_9)) > (php::Var(0L))));
            tmp_var_9.unset();
            return php::toBool(tmp_var_10);
        }
        return false;
    }();
        tmp_var_8.unset();
    }
    swoole = tmp_var_5;
    t = (php::toBool(swoole)) ? (php::newObject(tmp_var_11, php::VarList{conn})) : (php::newObject(tmp_var_12, php::VarList{conn}));
    browser = php::newObject(tmp_var_13, php::VarList{t, conn, options});
    try {
        if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(102))}}, tmp_var_15)) {
            tmp_var_14 = tmp_var_15;
        } else {
            tmp_var_14 = 30000L;
        }
        tmp_var_16 = php::toFloat(tmp_var_14);
        tmp_var_17 = php::toFloat(((tmp_var_16) / (php::toFloat(1000L))));
        php_nativeplaywright__browser__initialize(browser, php::toFloat(tmp_var_17));
    } catch (zend_object *_ex) {
        tmp_var_18 = php::catchException();
        bool tmp_var_19 = false;
        if (!tmp_var_19 && tmp_var_18 && (php::instanceOf(tmp_var_18, get_persistent_class(PersistentClassId{3}, get_str(113))))) {
            tmp_var_19 = true;
            e = tmp_var_18;
            tmp_var_18 = php::null;
            typephp_call_method_cached(t, get_str(170), get_method_call_cache(MethodCallCacheId{78}));
            tmp_var_21 = typephp_call_method_cached(e, get_str(140), get_method_call_cache(MethodCallCacheId{79}));
            tmp_var_22 = php::concat({get_str(1695), php::toString(tmp_var_21)});
            tmp_var_21.unset();
            tmp_var_23 = php::newObject(tmp_var_20, php::VarList{tmp_var_22, 0L, e});
            tmp_var_22.unset();
            php::throwValue(php::takeValue(tmp_var_23));
        }
    }
    if (tmp_var_18) {
        php::throwException(php::Object(tmp_var_18));
    }
    return browser;
}

php::Object php_nativeplaywright__browsertype__launchpersistentcontext(php::Object &this_, php::Str userDataDir, php::Array options) {
    zend_function * tmp_var_0;
    zend_function * tmp_var_1;
    php::Object browser;
    php::Array tmp_var_2;
    zend_function * tmp_var_3;
    php::Var tmp_var_4;
    php::Object tmp_var_5;

    if (get_function_resolution_cache(FunctionResolutionCacheId{260}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{260}) = php::fn::function_exists(get_str(683)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{260}) == 1 ? get_func(RequestFuncId{41}, get_str(683)) : get_persistent_func(PersistentFuncId{43}, get_str(684));
    if (php::toBool(!(php::toBool(php::call(tmp_var_0, php::VarList{userDataDir}))))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{261}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{261}) = php::fn::function_exists(get_str(685)) ? 1 : 2; }
        tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{261}) == 1 ? get_func(RequestFuncId{42}, get_str(685)) : get_persistent_func(PersistentFuncId{44}, get_str(686));
        php::call(tmp_var_1, php::VarList{userDataDir, 511L, true});
    }
    tmp_var_2 = options;
    if (get_function_resolution_cache(FunctionResolutionCacheId{262}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{262}) = php::fn::function_exists(get_str(1446)) ? 1 : 2; }
    tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{262}) == 1 ? get_func(RequestFuncId{63}, get_str(1446)) : get_persistent_func(PersistentFuncId{65}, get_str(1447));
    tmp_var_4 = php::toString(php::call(tmp_var_3, php::VarList{userDataDir}));
    browser = php_nativeplaywright__browsertype__start(this_, tmp_var_2, tmp_var_4);
    tmp_var_2.unset();
    tmp_var_4.unset();
    tmp_var_5 = (php_nativeplaywright__browser__usedefaultcontext(browser, options));
    return tmp_var_5;
}


ZEND_METHOD(NativePlaywright_BrowserType, name) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsertype__name(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserType, executablePath) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__browsertype__executablepath(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserType, buildArgs) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0));
        auto retval = php_nativeplaywright__browsertype__buildargs(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserType, launch) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__browsertype__launch_arg_0_default_value()));
        auto retval = php_nativeplaywright__browsertype__launch(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserType, start) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Array arg_options = php::toArray(php::getCallArg(0));
        php::Var raw_arg_userDataDir = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_userDataDir.isString()))) {
            php::throwArgumentTypeError(raw_arg_userDataDir, get_str(1697), 2, get_str(99), get_str(98));
        }
        php::Str arg_userDataDir = php::toString(raw_arg_userDataDir);
        auto retval = php_nativeplaywright__browsertype__start(this_, php::takeValue(arg_options),php::takeValue(arg_userDataDir));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_BrowserType, launchPersistentContext) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_userDataDir = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_userDataDir.isString()))) {
            php::throwArgumentTypeError(raw_arg_userDataDir, get_str(1698), 1, get_str(99), get_str(98));
        }
        php::Str arg_userDataDir = php::toString(raw_arg_userDataDir);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__browsertype__launchpersistentcontext_arg_1_default_value()));
        auto retval = php_nativeplaywright__browsertype__launchpersistentcontext(this_, php::takeValue(arg_userDataDir),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

