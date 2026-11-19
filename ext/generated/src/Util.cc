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
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

php::Bool php_nativeplaywright__util__urlmatches(php::Object &this_, php::Var pattern, php::Str url, php::Str baseURL) {
    php::Bool tmp_var_0 = 0;
    php::Bool tmp_var_1 = 0;
    zend_function * tmp_var_2;
    php::Var tmp_var_3;
    php::Bool tmp_var_4 = 0;
    zend_function * tmp_var_5;
    php::Bool tmp_var_6 = 0;
    zend_function * tmp_var_7;
    zend_function * tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Bool tmp_var_11 = 0;
    if (UNEXPECTED(!(pattern.isString() || (pattern.isObject() && php::instanceOf(pattern, get_persistent_class(PersistentClassId{5}, get_str(147))))))) {
        php::throwArgumentTypeError(pattern, get_str(205), 1, get_str(206), get_str(207));
    }

    if (php::toBool(php::instanceOf(pattern, get_persistent_class(PersistentClassId{5}, get_str(147))))) {
        tmp_var_0 = (php::toBool(typephp_call_cached(pattern, get_function_call_cache(FunctionCallCacheId{8}), php::VarList{url})));
        return tmp_var_0;
    }
    if (php::toBool((php::toBool((php::toBool(php::same(pattern, php::empty_string)) || php::toBool(php::same(pattern, get_str(189))))) || php::toBool(php::same(pattern, get_str(190)))))) {
        tmp_var_1 = (php::toBool(true));
        return tmp_var_1;
    }
    if (php::toBool(php_nativeplaywright__util__isregex(this_, php::toStringArgExact(pattern, get_str(191), 1, get_str(192))))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{19}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{19}) = php::fn::function_exists(get_str(193)) ? 1 : 2; }
        tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{19}) == 1 ? get_func(RequestFuncId{10}, get_str(193)) : get_persistent_func(PersistentFuncId{11}, get_str(194));
        tmp_var_3 = php::call(tmp_var_2, php::VarList{pattern, url});
        tmp_var_4 = (php::toBool(php::same(tmp_var_3, 1L)));
        tmp_var_3.unset();
        return tmp_var_4;
    }
    tmp_var_6 = php::toBool([&]() -> bool {
        if (php::toBool(!(php::same(baseURL, php::empty_string)))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{20}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{20}) = php::fn::function_exists(get_str(195)) ? 1 : 2; }
            tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{20}) == 1 ? get_func(RequestFuncId{11}, get_str(195)) : get_persistent_func(PersistentFuncId{12}, get_str(196));
            return php::toBool(!(php::toBool(php::call(tmp_var_5, php::VarList{pattern, get_str(197)}))));
        }
        return false;
    }());
    if (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_6)) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{21}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{21}) = php::fn::function_exists(get_str(198)) ? 1 : 2; }
            tmp_var_7 = get_function_resolution_cache(FunctionResolutionCacheId{21}) == 1 ? get_func(RequestFuncId{12}, get_str(198)) : get_persistent_func(PersistentFuncId{13}, get_str(199));
            return php::toBool(!(php::toBool(php::call(tmp_var_7, php::VarList{pattern, get_str(200)}))));
        }
        return false;
    }())) {
        pattern = php_nativeplaywright__util__resolveurl(this_, baseURL, php::toStringArgExact(pattern, get_str(201), 2, get_str(202)));
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{22}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{22}) = php::fn::function_exists(get_str(193)) ? 1 : 2; }
    tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{22}) == 1 ? get_func(RequestFuncId{10}, get_str(193)) : get_persistent_func(PersistentFuncId{11}, get_str(194));
    tmp_var_9 = php_nativeplaywright__util__globtoregex(this_, php::toStringArgExact(pattern, get_str(203), 1, get_str(204)));
    tmp_var_10 = php::call(tmp_var_8, php::VarList{tmp_var_9, url});
    tmp_var_9.unset();
    tmp_var_11 = (php::toBool(php::same(tmp_var_10, 1L)));
    tmp_var_10.unset();
    return tmp_var_11;
}

php::Bool php_nativeplaywright__util__isregex(php::Object &this_, php::Str s) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Bool tmp_var_2 = 0;
    php::Bool tmp_var_3 = 0;
    php::Var d;
    php::Bool tmp_var_4 = 0;
    php::Var end;
    zend_function * tmp_var_5;
    php::Bool tmp_var_6 = 0;
    php::Var flags;
    zend_function * tmp_var_7;
    zend_function * tmp_var_8;
    php::Var tmp_var_9;
    php::Bool tmp_var_10 = 0;
    zend_function * tmp_var_12;
    php::Var tmp_var_13;
    php::Bool tmp_var_14 = 0;
    php::Bool tmp_var_15 = 0;

    if (get_function_resolution_cache(FunctionResolutionCacheId{23}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{23}) = php::fn::function_exists(get_str(208)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{23}) == 1 ? get_func(RequestFuncId{13}, get_str(208)) : get_persistent_func(PersistentFuncId{14}, get_str(209));
    tmp_var_1 = php::call(tmp_var_0, php::VarList{s});
    tmp_var_2 = php::toBool(((php::Var(tmp_var_1)) < (php::Var(3L))));
    tmp_var_1.unset();
    if (php::toBool(tmp_var_2)) {
        tmp_var_3 = (php::toBool(false));
        return tmp_var_3;
    }
    d = s.offsetGet(0L);
    if (php::toBool((php::toBool((php::toBool(!(php::same(d, get_str(210)))) && php::toBool(!(php::same(d, get_str(211)))))) && php::toBool(!(php::same(d, get_str(212))))))) {
        tmp_var_4 = (php::toBool(false));
        return tmp_var_4;
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{24}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{24}) = php::fn::function_exists(get_str(213)) ? 1 : 2; }
    tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{24}) == 1 ? get_func(RequestFuncId{14}, get_str(213)) : get_persistent_func(PersistentFuncId{15}, get_str(214));
    end = php::call(tmp_var_5, php::VarList{s, d});
    if (php::toBool((php::toBool(php::same(end, php::false_)) || php::toBool(php::same(end, 0L))))) {
        tmp_var_6 = (php::toBool(false));
        return tmp_var_6;
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{25}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{25}) = php::fn::function_exists(get_str(215)) ? 1 : 2; }
    tmp_var_7 = get_function_resolution_cache(FunctionResolutionCacheId{25}) == 1 ? get_func(RequestFuncId{15}, get_str(215)) : get_persistent_func(PersistentFuncId{16}, get_str(216));
    flags = php::call(tmp_var_7, php::VarList{s, ((php::Var(end)) + (php::Var(1L)))});
    if (get_function_resolution_cache(FunctionResolutionCacheId{26}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{26}) = php::fn::function_exists(get_str(193)) ? 1 : 2; }
    tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{26}) == 1 ? get_func(RequestFuncId{10}, get_str(193)) : get_persistent_func(PersistentFuncId{11}, get_str(194));
    tmp_var_9 = php::call(tmp_var_8, php::VarList{get_str(217), flags});
    tmp_var_10 = php::toBool(php::same(tmp_var_9, 1L));
    tmp_var_9.unset();
    tmp_var_15 = (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_10)) {
            auto tmp_var_11 = EG(error_reporting);
            php::call(get_persistent_func(PersistentFuncId{17}, get_str(218)), {E_FATAL_ERRORS});
            if (get_function_resolution_cache(FunctionResolutionCacheId{27}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{27}) = php::fn::function_exists(get_str(193)) ? 1 : 2; }
            tmp_var_12 = get_function_resolution_cache(FunctionResolutionCacheId{27}) == 1 ? get_func(RequestFuncId{10}, get_str(193)) : get_persistent_func(PersistentFuncId{11}, get_str(194));
            tmp_var_13 = php::call(tmp_var_12, php::VarList{s, php::empty_string});
            php::call(get_persistent_func(PersistentFuncId{17}, get_str(218)), {tmp_var_11});
            tmp_var_14 = php::toBool(!(php::same(tmp_var_13, php::false_)));
            tmp_var_13.unset();
            return php::toBool(tmp_var_14);
        }
        return false;
    }()));
    return tmp_var_15;
}

php::Str php_nativeplaywright__util__globtoregex(php::Object &this_, php::Str glob) {
    php::Str re = php::empty_string;
    php::Bool inGroup = php::toBool(false);
    php::Var n;
    zend_function * tmp_var_0;
    php::Int i = 0;
    php::Var c;
    zend_function * tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Bool tmp_var_4 = 0;
    php::Var tmp_var_5;
    php::Bool tmp_var_6 = 0;
    zend_function * tmp_var_7;
    php::Str tmp_var_8;

    if (get_function_resolution_cache(FunctionResolutionCacheId{28}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{28}) = php::fn::function_exists(get_str(208)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{28}) == 1 ? get_func(RequestFuncId{13}, get_str(208)) : get_persistent_func(PersistentFuncId{14}, get_str(209));
    n = php::call(tmp_var_0, php::VarList{glob});
    i = php::toInt(0L);
    
    for (;php::toBool(((php::Var(i)) < (php::Var(n)))); ++i) {
        c = glob.offsetGet(i);
        if (php::toBool((php::toBool(php::same(c, get_str(219))) && php::toBool(((php::Var(((i) + (1L)))) < (php::Var(n))))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{29}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{29}) = php::fn::function_exists(get_str(220)) ? 1 : 2; }
            tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{29}) == 1 ? get_func(RequestFuncId{16}, get_str(220)) : get_persistent_func(PersistentFuncId{18}, get_str(221));
            tmp_var_2 = glob.offsetGet(php::toInt(++i));
            (re.append(php::call(tmp_var_1, php::VarList{php::deindirect(tmp_var_2), get_str(211)})), re);
            tmp_var_2.unset();
        } else {
            if (php::toBool(php::same(c, get_str(200)))) {
                if (php::toBool([&]() -> bool {
                    if (php::toBool(((php::Var(((i) + (1L)))) < (php::Var(n))))) {
                        tmp_var_3 = glob.offsetGet(((i) + (1L)));
                        tmp_var_4 = php::toBool(php::same(tmp_var_3, get_str(200)));
                        tmp_var_3.unset();
                        return php::toBool(tmp_var_4);
                    }
                    return false;
                }())) {
                    i++;
                    if (php::toBool([&]() -> bool {
                        if (php::toBool(((php::Var(((i) + (1L)))) < (php::Var(n))))) {
                            tmp_var_5 = glob.offsetGet(((i) + (1L)));
                            tmp_var_6 = php::toBool(php::same(tmp_var_5, get_str(210)));
                            tmp_var_5.unset();
                            return php::toBool(tmp_var_6);
                        }
                        return false;
                    }())) {
                        i++;
                        (re.append(get_str(222)), re);
                    } else {
                        (re.append(get_str(223)), re);
                    }
                } else {
                    (re.append(get_str(224)), re);
                }
            } else {
                if (php::toBool(php::same(c, get_str(225)))) {
                    (re.append(get_str(226)), re);
                } else {
                    if (php::toBool(php::same(c, get_str(227)))) {
                        inGroup = php::toBool(true);
                        (re.append(get_str(228)), re);
                    } else {
                        if (php::toBool((php::toBool(php::same(c, get_str(87))) && php::toBool(inGroup)))) {
                            inGroup = php::toBool(false);
                            (re.append(get_str(229)), re);
                        } else {
                            if (php::toBool((php::toBool(php::same(c, get_str(230))) && php::toBool(inGroup)))) {
                                (re.append(get_str(231)), re);
                            } else {
                                if (get_function_resolution_cache(FunctionResolutionCacheId{30}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{30}) = php::fn::function_exists(get_str(220)) ? 1 : 2; }
                                tmp_var_7 = get_function_resolution_cache(FunctionResolutionCacheId{30}) == 1 ? get_func(RequestFuncId{16}, get_str(220)) : get_persistent_func(PersistentFuncId{18}, get_str(221));
                                (re.append(php::call(tmp_var_7, php::VarList{c, get_str(211)})), re);
                            }
                        }
                    }
                }
            }
        }
    }
    tmp_var_8 = (php::concat({get_str(232), re, get_str(233)}));
    return tmp_var_8;
}

php::Str php_nativeplaywright__util__resolveurl(php::Object &this_, php::Str base, php::Str url) {
    zend_function * tmp_var_0;
    php::Var p;
    zend_function * tmp_var_1;
    zend_function * tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Str origin;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Str tmp_var_7;
    php::Var tmp_var_8;
    zend_function * tmp_var_9;
    php::Var tmp_var_10;
    php::Str tmp_var_11;
    zend_function * tmp_var_12;
    php::Str tmp_var_13;
    php::Str path;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    php::Var dir;
    zend_function * tmp_var_16;
    php::Str tmp_var_17;
    zend_function * tmp_var_18;
    php::Int tmp_var_19 = 0;
    php::Int tmp_var_20 = 0;
    php::Str tmp_var_21;

    if (php::toBool([&]() -> bool {
        if (!(php::toBool(php::same(base, php::empty_string)))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{31}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{31}) = php::fn::function_exists(get_str(193)) ? 1 : 2; }
            tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{31}) == 1 ? get_func(RequestFuncId{10}, get_str(193)) : get_persistent_func(PersistentFuncId{11}, get_str(194));
            return php::toBool(php::call(tmp_var_0, php::VarList{get_str(234), url}));
        }
        return true;
    }())) {
        return url;
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{32}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{32}) = php::fn::function_exists(get_str(235)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{32}) == 1 ? get_func(RequestFuncId{17}, get_str(235)) : get_persistent_func(PersistentFuncId{19}, get_str(236));
    p = php::call(tmp_var_1, php::VarList{base});
    if (get_function_resolution_cache(FunctionResolutionCacheId{33}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{33}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
    tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{33}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
    tmp_var_3 = php::toBool(!(php::toBool(php::call(tmp_var_2, php::VarList{p}))));
    if (php::toBool((php::toBool(tmp_var_3) || php::toBool(!(php::toBool((php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(237))}}) && php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(238))}})))))))) {
        return url;
    }
    tmp_var_4 = p.item(get_str(237), false);
    tmp_var_5 = p.item(get_str(238), false);
    tmp_var_8 = [&]() -> php::Str {
        if (php::toBool(php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(239))}}))) {
            tmp_var_6 = p.item(get_str(239), false);
            tmp_var_7 = php::concat({get_str(240), php::toString(tmp_var_6)});
            tmp_var_6.unset();
            return tmp_var_7;
        } else {
            return php::empty_string;
        }
    }();
    origin = php::concat({php::toString(tmp_var_4), get_str(197), php::toString(tmp_var_5), tmp_var_8});
    tmp_var_4.unset();
    tmp_var_5.unset();
    tmp_var_8.unset();
    if (get_function_resolution_cache(FunctionResolutionCacheId{34}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{34}) = php::fn::function_exists(get_str(198)) ? 1 : 2; }
    tmp_var_9 = get_function_resolution_cache(FunctionResolutionCacheId{34}) == 1 ? get_func(RequestFuncId{12}, get_str(198)) : get_persistent_func(PersistentFuncId{13}, get_str(199));
    if (php::toBool(php::call(tmp_var_9, php::VarList{url, get_str(241)}))) {
        tmp_var_10 = p.item(get_str(237), false);
        tmp_var_11 = (php::concat({php::toString(tmp_var_10), get_str(240), url}));
        tmp_var_10.unset();
        return tmp_var_11;
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{35}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{35}) = php::fn::function_exists(get_str(198)) ? 1 : 2; }
    tmp_var_12 = get_function_resolution_cache(FunctionResolutionCacheId{35}) == 1 ? get_func(RequestFuncId{12}, get_str(198)) : get_persistent_func(PersistentFuncId{13}, get_str(199));
    if (php::toBool(php::call(tmp_var_12, php::VarList{url, get_str(210)}))) {
        tmp_var_13 = (php::concat(origin, url));
        return tmp_var_13;
    }
    if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(242))}}, tmp_var_15)) {
        tmp_var_14 = tmp_var_15;
    } else {
        tmp_var_14 = get_str(210);
    }
    path = php::toString(tmp_var_14);
    if (get_function_resolution_cache(FunctionResolutionCacheId{36}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{36}) = php::fn::function_exists(get_str(215)) ? 1 : 2; }
    tmp_var_16 = get_function_resolution_cache(FunctionResolutionCacheId{36}) == 1 ? get_func(RequestFuncId{15}, get_str(215)) : get_persistent_func(PersistentFuncId{16}, get_str(216));
    tmp_var_17 = path;
    if (get_function_resolution_cache(FunctionResolutionCacheId{37}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{37}) = php::fn::function_exists(get_str(213)) ? 1 : 2; }
    tmp_var_18 = get_function_resolution_cache(FunctionResolutionCacheId{37}) == 1 ? get_func(RequestFuncId{14}, get_str(213)) : get_persistent_func(PersistentFuncId{15}, get_str(214));
    tmp_var_19 = php::toInt(php::call(tmp_var_18, php::VarList{path, get_str(210)}));
    tmp_var_20 = php::toInt(((tmp_var_19) + (1L)));
    dir = php::call(tmp_var_16, php::VarList{tmp_var_17, 0L, tmp_var_20});
    tmp_var_17.unset();
    tmp_var_21 = (php::concat({origin, php::toString(dir), url}));
    return tmp_var_21;
}

php::Var php_nativeplaywright__util__remotevalue(php::Object &this_, php::Array ro) {
    php::Var tmp_var_0;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;

    if (php::toBool(php::exists(ro, {{php::ArrayDimFetch, php::Var(get_str(243))}}))) {
        tmp_var_0 = php::toString(ro.get(get_str(243)));
        tmp_var_5 = ([&]() -> php::Var {
            bool tmp_var_1 = false;
            if (!tmp_var_1) {
                tmp_var_1 = php::same(tmp_var_0, get_str(244));
            }
            if (tmp_var_1) {
                return php::constant(get_str(245), php::ConstantLookup::UnqualifiedInNamespace);
            }
            bool tmp_var_2 = false;
            if (!tmp_var_2) {
                tmp_var_2 = php::same(tmp_var_0, get_str(246));
            }
            if (tmp_var_2) {
                return php::constant(get_str(247), php::ConstantLookup::UnqualifiedInNamespace);
            }
            bool tmp_var_3 = false;
            if (!tmp_var_3) {
                tmp_var_3 = php::same(tmp_var_0, get_str(248));
            }
            if (tmp_var_3) {
                return -(php::constant(get_str(247), php::ConstantLookup::UnqualifiedInNamespace));
            }
            bool tmp_var_4 = false;
            if (!tmp_var_4) {
                tmp_var_4 = php::same(tmp_var_0, get_str(249));
            }
            if (tmp_var_4) {
                return -0.0;
            }
            {
                return php::toString(ro.get(get_str(243)));
            }
        }());
        return tmp_var_5;
    }
    if (php::exists(ro, {{php::ArrayDimFetch, php::Var(get_str(109))}}, tmp_var_7)) {
        tmp_var_6 = tmp_var_7;
    } else {
        tmp_var_6 = php::null;
    }
    tmp_var_8 = (tmp_var_6);
    return tmp_var_8;
}

php::Bool php_nativeplaywright__util__isfunction(php::Object &this_, php::Str js) {
    php::Var s;
    zend_function * tmp_var_0;
    zend_function * tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Bool tmp_var_4 = 0;
    zend_function * tmp_var_5;
    php::Var tmp_var_6;
    php::Bool tmp_var_7 = 0;
    php::Bool tmp_var_8 = 0;
    php::Bool tmp_var_9 = 0;

    if (get_function_resolution_cache(FunctionResolutionCacheId{38}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{38}) = php::fn::function_exists(get_str(250)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{38}) == 1 ? get_func(RequestFuncId{18}, get_str(250)) : get_persistent_func(PersistentFuncId{20}, get_str(251));
    s = php::call(tmp_var_0, php::VarList{js});
    if (get_function_resolution_cache(FunctionResolutionCacheId{39}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{39}) = php::fn::function_exists(get_str(193)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{39}) == 1 ? get_func(RequestFuncId{10}, get_str(193)) : get_persistent_func(PersistentFuncId{11}, get_str(194));
    tmp_var_2 = php::call(tmp_var_1, php::VarList{get_str(252), s});
    tmp_var_3 = php::toBool(php::same(tmp_var_2, 1L));
    tmp_var_2.unset();
    if (php::toBool(tmp_var_3)) {
        tmp_var_4 = (php::toBool(true));
        return tmp_var_4;
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{40}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{40}) = php::fn::function_exists(get_str(193)) ? 1 : 2; }
    tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{40}) == 1 ? get_func(RequestFuncId{10}, get_str(193)) : get_persistent_func(PersistentFuncId{11}, get_str(194));
    tmp_var_6 = php::call(tmp_var_5, php::VarList{get_str(253), s});
    tmp_var_7 = php::toBool(php::same(tmp_var_6, 1L));
    tmp_var_6.unset();
    if (php::toBool(tmp_var_7)) {
        tmp_var_8 = (php::toBool(true));
        return tmp_var_8;
    }
    tmp_var_9 = (php::toBool(false));
    return tmp_var_9;
}

php::Array php_nativeplaywright__util__headersarray(php::Object &this_, php::Array headers) {
    php::Array out;
    php::Var v;
    php::Var k;
    php::Var tmp_var_2;
    zend_class_entry *tmp_var_1 = get_persistent_class(PersistentClassId{9}, get_str(255));

    out = php::Array{};
    {
        php::ForeachIterator tmp_var_0{headers, false, tmp_var_1};
        while (tmp_var_0.nextKeyValue(k, v)) {
            ((tmp_var_2 = php::Array{
                { get_str(254).str(), php::Var(php::toString(k)) }, 
                { get_str(109).str(), php::Var(php::toString(v)) }
            }, out.append(tmp_var_2)), tmp_var_2);
        }
    }
    return out;
}

php::Array php_nativeplaywright__util__lowerheaders(php::Object &this_, php::Array h) {
    php::Array out;
    php::Var v;
    php::Var k;
    zend_function * tmp_var_2;
    php::Var tmp_var_3;
    zend_class_entry *tmp_var_1 = get_persistent_class(PersistentClassId{9}, get_str(255));

    out = php::Array{};
    {
        php::ForeachIterator tmp_var_0{h, false, tmp_var_1};
        while (tmp_var_0.nextKeyValue(k, v)) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{41}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{41}) = php::fn::function_exists(get_str(256)) ? 1 : 2; }
            tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{41}) == 1 ? get_func(RequestFuncId{19}, get_str(256)) : get_persistent_func(PersistentFuncId{21}, get_str(257));
            ((tmp_var_3 = php::toString(v), out.item(php::call(tmp_var_2, php::VarList{php::toString(k)}), true) = tmp_var_3), tmp_var_3);
        }
    }
    return out;
}

php::Float php_nativeplaywright__util__toinches(php::Object &this_, php::Var v) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    zend_function * tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Float tmp_var_4 = 0;
    php::Var s;
    zend_function * tmp_var_5;
    zend_function * tmp_var_6;
    php::Ref m;
    php::Var tmp_var_7;
    php::Bool tmp_var_8 = 0;
    php::Float n = 0;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Float tmp_var_16 = 0;
    zend_class_entry *tmp_var_9 = get_persistent_class(PersistentClassId{0}, get_str(75));

    if (get_function_resolution_cache(FunctionResolutionCacheId{42}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{42}) = php::fn::function_exists(get_str(258)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{42}) == 1 ? get_func(RequestFuncId{20}, get_str(258)) : get_persistent_func(PersistentFuncId{22}, get_str(259));
    tmp_var_1 = php::call(tmp_var_0, php::VarList{v});
    tmp_var_3 = php::toBool([&]() -> bool {
        if (!(php::toBool(tmp_var_1))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{43}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{43}) = php::fn::function_exists(get_str(260)) ? 1 : 2; }
            tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{43}) == 1 ? get_func(RequestFuncId{21}, get_str(260)) : get_persistent_func(PersistentFuncId{23}, get_str(261));
            return php::toBool(php::call(tmp_var_2, php::VarList{v}));
        }
        return true;
    }());
    tmp_var_1.unset();
    if (php::toBool(tmp_var_3)) {
        tmp_var_4 = (php::toFloat(((php::toFloat(v)) / (php::toFloat(96L)))));
        return tmp_var_4;
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{44}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{44}) = php::fn::function_exists(get_str(262)) ? 1 : 2; }
    tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{44}) == 1 ? get_func(RequestFuncId{22}, get_str(262)) : get_persistent_func(PersistentFuncId{24}, get_str(263));
    s = php::call(tmp_var_5, php::VarList{php::toString(v)});
    if (get_function_resolution_cache(FunctionResolutionCacheId{45}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{45}) = php::fn::function_exists(get_str(193)) ? 1 : 2; }
    tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{45}) == 1 ? get_func(RequestFuncId{10}, get_str(193)) : get_persistent_func(PersistentFuncId{11}, get_str(194));
    tmp_var_7 = [&]() -> php::Var {
    if (get_function_resolution_cache(FunctionResolutionCacheId{45}) == 1) {
    return php::call(tmp_var_6, php::VarList{get_str(264), s, m});
    }
    return php::call(tmp_var_6, php::VarList{get_str(264), s, &m});
    }();
    tmp_var_8 = php::toBool(!(php::same(tmp_var_7, 1L)));
    tmp_var_7.unset();
    if (php::toBool(tmp_var_8)) {
        php::throwException(php::newObject(tmp_var_9, php::VarList{php::concat({get_str(265), s})}));
    }
    n = php::toFloat(m.item(1L, false));
    if (php::exists(m, {{php::ArrayDimFetch, php::Var(2L)}}, tmp_var_11)) {
        tmp_var_10 = tmp_var_11;
    } else {
        tmp_var_10 = get_str(266);
    }
    tmp_var_12 = tmp_var_10;
    tmp_var_16 = (php::toFloat([&]() -> php::Float {
        bool tmp_var_13 = false;
        if (!tmp_var_13) {
            tmp_var_13 = php::same(tmp_var_12, get_str(267));
        }
        if (tmp_var_13) {
            return n;
        }
        bool tmp_var_14 = false;
        if (!tmp_var_14) {
            tmp_var_14 = php::same(tmp_var_12, get_str(268));
        }
        if (tmp_var_14) {
            return ((n) / (2.54));
        }
        bool tmp_var_15 = false;
        if (!tmp_var_15) {
            tmp_var_15 = php::same(tmp_var_12, get_str(269));
        }
        if (tmp_var_15) {
            return ((n) / (25.399999999999999));
        }
        {
            return ((n) / (php::toFloat(96L)));
        }
    }()));
    return tmp_var_16;
}

php::Str php_nativeplaywright__util__mimetype(php::Object &this_, php::Str path) {
    php::Var ext;
    zend_function * tmp_var_0;
    zend_function * tmp_var_1;
    php::Str tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Str tmp_var_18;

    if (get_function_resolution_cache(FunctionResolutionCacheId{46}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{46}) = php::fn::function_exists(get_str(256)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{46}) == 1 ? get_func(RequestFuncId{19}, get_str(256)) : get_persistent_func(PersistentFuncId{21}, get_str(257));
    if (get_function_resolution_cache(FunctionResolutionCacheId{47}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{47}) = php::fn::function_exists(get_str(270)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{47}) == 1 ? get_func(RequestFuncId{23}, get_str(270)) : get_persistent_func(PersistentFuncId{25}, get_str(271));
    tmp_var_2 = path;
    tmp_var_3 = php::constant(get_str(272), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_4 = php::call(tmp_var_1, php::VarList{tmp_var_2, tmp_var_3});
    tmp_var_2.unset();
    tmp_var_3.unset();
    ext = php::call(tmp_var_0, php::VarList{tmp_var_4});
    tmp_var_4.unset();
    tmp_var_18 = ([&]() -> php::Str {
        bool tmp_var_5 = false;
        if (!tmp_var_5) {
            tmp_var_5 = php::same(ext, get_str(273));
        }
        if (!tmp_var_5) {
            tmp_var_5 = php::same(ext, get_str(274));
        }
        if (tmp_var_5) {
            return get_str(275);
        }
        bool tmp_var_6 = false;
        if (!tmp_var_6) {
            tmp_var_6 = php::same(ext, get_str(276));
        }
        if (!tmp_var_6) {
            tmp_var_6 = php::same(ext, get_str(277));
        }
        if (tmp_var_6) {
            return get_str(278);
        }
        bool tmp_var_7 = false;
        if (!tmp_var_7) {
            tmp_var_7 = php::same(ext, get_str(279));
        }
        if (tmp_var_7) {
            return get_str(280);
        }
        bool tmp_var_8 = false;
        if (!tmp_var_8) {
            tmp_var_8 = php::same(ext, get_str(281));
        }
        if (tmp_var_8) {
            return get_str(282);
        }
        bool tmp_var_9 = false;
        if (!tmp_var_9) {
            tmp_var_9 = php::same(ext, get_str(283));
        }
        if (tmp_var_9) {
            return get_str(284);
        }
        bool tmp_var_10 = false;
        if (!tmp_var_10) {
            tmp_var_10 = php::same(ext, get_str(285));
        }
        if (!tmp_var_10) {
            tmp_var_10 = php::same(ext, get_str(286));
        }
        if (tmp_var_10) {
            return get_str(287);
        }
        bool tmp_var_11 = false;
        if (!tmp_var_11) {
            tmp_var_11 = php::same(ext, get_str(288));
        }
        if (tmp_var_11) {
            return get_str(289);
        }
        bool tmp_var_12 = false;
        if (!tmp_var_12) {
            tmp_var_12 = php::same(ext, get_str(290));
        }
        if (tmp_var_12) {
            return get_str(291);
        }
        bool tmp_var_13 = false;
        if (!tmp_var_13) {
            tmp_var_13 = php::same(ext, get_str(292));
        }
        if (tmp_var_13) {
            return get_str(293);
        }
        bool tmp_var_14 = false;
        if (!tmp_var_14) {
            tmp_var_14 = php::same(ext, get_str(294));
        }
        if (tmp_var_14) {
            return get_str(295);
        }
        bool tmp_var_15 = false;
        if (!tmp_var_15) {
            tmp_var_15 = php::same(ext, get_str(296));
        }
        if (tmp_var_15) {
            return get_str(297);
        }
        bool tmp_var_16 = false;
        if (!tmp_var_16) {
            tmp_var_16 = php::same(ext, get_str(298));
        }
        if (tmp_var_16) {
            return get_str(299);
        }
        bool tmp_var_17 = false;
        if (!tmp_var_17) {
            tmp_var_17 = php::same(ext, get_str(300));
        }
        if (tmp_var_17) {
            return get_str(301);
        }
        {
            return get_str(302);
        }
    }());
    return tmp_var_18;
}


ZEND_METHOD(NativePlaywright_Util, urlMatches) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var arg_pattern = php::getCallArg(0);
        php::Var raw_arg_url = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_url.isString()))) {
            php::throwArgumentTypeError(raw_arg_url, get_str(205), 2, get_str(202), get_str(98));
        }
        php::Str arg_url = php::toString(raw_arg_url);
        php::Var raw_arg_baseURL = php::getCallArg(2, php_nativeplaywright__util__urlmatches_arg_2_default_value());
        if (UNEXPECTED(!(raw_arg_baseURL.isString()))) {
            php::throwArgumentTypeError(raw_arg_baseURL, get_str(205), 3, get_str(303), get_str(98));
        }
        php::Str arg_baseURL = php::toString(raw_arg_baseURL);
        auto retval = php_nativeplaywright__util__urlmatches(this_, php::takeValue(arg_pattern),php::takeValue(arg_url),php::takeValue(arg_baseURL));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Util, isRegex) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_s = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_s.isString()))) {
            php::throwArgumentTypeError(raw_arg_s, get_str(191), 1, get_str(192), get_str(98));
        }
        php::Str arg_s = php::toString(raw_arg_s);
        auto retval = php_nativeplaywright__util__isregex(this_, php::takeValue(arg_s));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Util, globToRegex) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_glob = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_glob.isString()))) {
            php::throwArgumentTypeError(raw_arg_glob, get_str(203), 1, get_str(204), get_str(98));
        }
        php::Str arg_glob = php::toString(raw_arg_glob);
        auto retval = php_nativeplaywright__util__globtoregex(this_, php::takeValue(arg_glob));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Util, resolveUrl) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_base = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_base.isString()))) {
            php::throwArgumentTypeError(raw_arg_base, get_str(201), 1, get_str(304), get_str(98));
        }
        php::Str arg_base = php::toString(raw_arg_base);
        php::Var raw_arg_url = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_url.isString()))) {
            php::throwArgumentTypeError(raw_arg_url, get_str(201), 2, get_str(202), get_str(98));
        }
        php::Str arg_url = php::toString(raw_arg_url);
        auto retval = php_nativeplaywright__util__resolveurl(this_, php::takeValue(arg_base),php::takeValue(arg_url));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Util, remoteValue) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_ro = php::toArray(php::getCallArg(0));
        auto retval = php_nativeplaywright__util__remotevalue(this_, php::takeValue(arg_ro));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Util, isFunction) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_js = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_js.isString()))) {
            php::throwArgumentTypeError(raw_arg_js, get_str(305), 1, get_str(276), get_str(98));
        }
        php::Str arg_js = php::toString(raw_arg_js);
        auto retval = php_nativeplaywright__util__isfunction(this_, php::takeValue(arg_js));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Util, headersArray) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_headers = php::toArray(php::getCallArg(0));
        auto retval = php_nativeplaywright__util__headersarray(this_, php::takeValue(arg_headers));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Util, lowerHeaders) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_h = php::toArray(php::getCallArg(0));
        auto retval = php_nativeplaywright__util__lowerheaders(this_, php::takeValue(arg_h));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Util, toInches) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var arg_v = php::getCallArg(0);
        auto retval = php_nativeplaywright__util__toinches(this_, php::takeValue(arg_v));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Util, mimeType) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_path = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_path.isString()))) {
            php::throwArgumentTypeError(raw_arg_path, get_str(306), 1, get_str(242), get_str(98));
        }
        php::Str arg_path = php::toString(raw_arg_path);
        auto retval = php_nativeplaywright__util__mimetype(this_, php::takeValue(arg_path));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

