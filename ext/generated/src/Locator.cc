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
#include <php_native_playwright_src_NativePlaywright_Locator_206b2f41f4_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>
#include <php_native_playwright_src_NativePlaywright_TimeoutError_7a8c4a04a5_decl.h>
#include <php_native_playwright_src_NativePlaywright_Util_9ee38d9e44_decl.h>

void php_nativeplaywright__locator____construct(php::Object &this_, php::Object frame, php::Str selector) {
typephp_write_property_scoped(this_, "frame", frame, get_persistent_class(PersistentClassId{11}, get_str(311)));
typephp_write_property_scoped(this_, "selector", selector, get_persistent_class(PersistentClassId{11}, get_str(311)));

}

php::Str php_nativeplaywright__locator__selector(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{137}, get_str(312), get_str(311)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Object php_nativeplaywright__locator__page(php::Object &this_) {
    php::Var tmp_var_0;
    php::Object tmp_var_2;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{138}, get_str(309), get_str(311)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    tmp_var_2 = (php_nativeplaywright__frame__page(tmp_var_1));
    tmp_var_0.unset();
    return tmp_var_2;
}

php::Str php_nativeplaywright__locator____tostring(php::Object &this_) {
    php::Var tmp_var_0;
    php::Str tmp_var_1;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{137}, get_str(312), get_str(311)), php::AttrMode::Get);
    tmp_var_1 = (php::concat({get_str(1344), tmp_var_0}));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Str php_nativeplaywright__locator__escapetext(php::Object &this_, php::Str text, php::Bool exact) {
    php::Object tmp_var_0;
    php::Str tmp_var_1;
    zend_function * tmp_var_2;
    php::Str tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Str tmp_var_9;
    Z_PTR_P(tmp_var_0.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));

    if (php::toBool(php_nativeplaywright__util__isregex(tmp_var_0, text))) {
        tmp_var_1 = (php_nativeplaywright__locator__jsregex(this_, text));
        return tmp_var_1;
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{169}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{169}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
    tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{169}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
    tmp_var_3 = text;
    tmp_var_4 = php::constant(get_str(1), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_5 = php::constant(get_str(0), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_6 = ((php::Var(tmp_var_4)) | (php::Var(tmp_var_5)));
    tmp_var_4.unset();
    tmp_var_5.unset();
    tmp_var_7 = php::call(tmp_var_2, php::VarList{tmp_var_3, tmp_var_6});
    tmp_var_3.unset();
    tmp_var_6.unset();
    tmp_var_8 = (php::toBool(exact)) ? (get_str(193)) : (get_str(1345));
    tmp_var_9 = (php::concat({php::toString(tmp_var_7), tmp_var_8}));
    tmp_var_7.unset();
    tmp_var_8.unset();
    return tmp_var_9;
}

php::Str php_nativeplaywright__locator__jsregex(php::Object &this_, php::Str re) {
    php::Var d;
    php::Int end = 0;
    zend_function * tmp_var_0;
    php::Var body;
    zend_function * tmp_var_1;
    php::Var flags;
    zend_function * tmp_var_2;
    zend_function * tmp_var_3;
    php::Var tmp_var_4;
    zend_function * tmp_var_5;
    php::Str tmp_var_6;

    d = re.offsetGet(0L);
    if (get_function_resolution_cache(FunctionResolutionCacheId{170}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{170}) = php::fn::function_exists(get_str(214)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{170}) == 1 ? get_func(RequestFuncId{14}, get_str(214)) : get_persistent_func(PersistentFuncId{17}, get_str(215));
    end = php::toInt(php::call(tmp_var_0, php::VarList{re, d}));
    if (get_function_resolution_cache(FunctionResolutionCacheId{171}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{171}) = php::fn::function_exists(get_str(216)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{171}) == 1 ? get_func(RequestFuncId{15}, get_str(216)) : get_persistent_func(PersistentFuncId{18}, get_str(217));
    body = php::call(tmp_var_1, php::VarList{re, 1L, ((end) - (1L))});
    if (get_function_resolution_cache(FunctionResolutionCacheId{172}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{172}) = php::fn::function_exists(get_str(864)) ? 1 : 2; }
    tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{172}) == 1 ? get_func(RequestFuncId{47}, get_str(864)) : get_persistent_func(PersistentFuncId{51}, get_str(865));
    if (get_function_resolution_cache(FunctionResolutionCacheId{173}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{173}) = php::fn::function_exists(get_str(216)) ? 1 : 2; }
    tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{173}) == 1 ? get_func(RequestFuncId{15}, get_str(216)) : get_persistent_func(PersistentFuncId{18}, get_str(217));
    tmp_var_4 = php::call(tmp_var_3, php::VarList{re, ((end) + (1L))});
    flags = php::call(tmp_var_2, php::VarList{get_str(1346), php::empty_string, tmp_var_4});
    tmp_var_4.unset();
    if (php::toBool(!(php::same(d, get_str(211))))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{174}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{174}) = php::fn::function_exists(get_str(1347)) ? 1 : 2; }
        tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{174}) == 1 ? get_func(RequestFuncId{56}, get_str(1347)) : get_persistent_func(PersistentFuncId{60}, get_str(1348));
        body = php::call(tmp_var_5, php::VarList{get_str(211), get_str(1349), body});
    }
    tmp_var_6 = (php::concat({get_str(211), php::toString(body), get_str(211), php::toString(flags)}));
    return tmp_var_6;
}

php::Str php_nativeplaywright__locator__bytext(php::Object &this_, php::Str text, php::Bool exact) {
    php::Var tmp_var_0;
    php::Str tmp_var_1;

    tmp_var_0 = php_nativeplaywright__locator__escapetext(this_, text, php::toBool(exact));
    tmp_var_1 = (php::concat({get_str(1350), tmp_var_0}));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Str php_nativeplaywright__locator__bylabel(php::Object &this_, php::Str text, php::Bool exact) {
    php::Var tmp_var_0;
    php::Str tmp_var_1;

    tmp_var_0 = php_nativeplaywright__locator__escapetext(this_, text, php::toBool(exact));
    tmp_var_1 = (php::concat({get_str(1351), tmp_var_0}));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Str php_nativeplaywright__locator__byattr(php::Object &this_, php::Str attr, php::Str text, php::Bool exact) {
    php::Str tmp_var_0;
    php::Var tmp_var_1;
    php::Str tmp_var_2;

    tmp_var_0 = attr;
    tmp_var_1 = php_nativeplaywright__locator__escapetext(this_, text, php::toBool(exact));
    tmp_var_2 = (php::concat({get_str(1352), tmp_var_0, get_str(376), tmp_var_1, get_str(393)}));
    tmp_var_0.unset();
    tmp_var_1.unset();
    return tmp_var_2;
}

php::Str php_nativeplaywright__locator__bytestid(php::Object &this_, php::Str id) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Str tmp_var_3;
    php::Var tmp_var_4;
    zend_function * tmp_var_5;
    php::Str tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Str tmp_var_11;
    Z_PTR_P(tmp_var_0.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));
    zval *_typephp_static_property_slot_0 = nullptr;
    const auto _typephp_static_property_0 = [&]() { return typephp_get_static_property_cached(_typephp_static_property_slot_0, [&]() { return typephp_get_static_property_slot(get_persistent_class(PersistentClassId{11}, get_str(311)), get_persistent_prop(PersistentPropertyId{139}, get_str(1354), get_str(311))); }); };

    if (php::toBool(php_nativeplaywright__util__isregex(tmp_var_0, id))) {
        tmp_var_1 = _typephp_static_property_0();
        tmp_var_2 = php_nativeplaywright__locator__jsregex(this_, id);
        tmp_var_3 = (php::concat({get_str(1353), tmp_var_1, get_str(376), tmp_var_2, get_str(393)}));
        tmp_var_1.unset();
        tmp_var_2.unset();
        return tmp_var_3;
    }
    tmp_var_4 = _typephp_static_property_0();
    if (get_function_resolution_cache(FunctionResolutionCacheId{175}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{175}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
    tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{175}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
    tmp_var_6 = id;
    tmp_var_7 = php::constant(get_str(1), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_8 = php::constant(get_str(0), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_9 = ((php::Var(tmp_var_7)) | (php::Var(tmp_var_8)));
    tmp_var_7.unset();
    tmp_var_8.unset();
    tmp_var_10 = php::call(tmp_var_5, php::VarList{tmp_var_6, tmp_var_9});
    tmp_var_6.unset();
    tmp_var_9.unset();
    tmp_var_11 = (php::concat({get_str(1353), tmp_var_4, get_str(376), php::toString(tmp_var_10), get_str(1355)}));
    tmp_var_4.unset();
    tmp_var_10.unset();
    return tmp_var_11;
}

php::Str php_nativeplaywright__locator__byrole(php::Object &this_, php::Str role, php::Array options) {
    php::Str s;
    php::Var tmp_var_0;
    php::Var k;
    zend_function * tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Bool tmp_var_6 = 0;
    php::Bool tmp_var_7 = 0;
    php::Var v;
    php::Var tmp_var_8;
    zend_function * tmp_var_9;
    php::Var tmp_var_10;
    php::Int tmp_var_11 = 0;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Bool tmp_var_15 = 0;
    php::Var tmp_var_16;
    zend_class_entry *tmp_var_2 = get_persistent_class(PersistentClassId{11}, get_str(311));

    s = php::concat(get_str(1356), role);

    tmp_var_0 = php::Array{
        php::Var(get_str(1182)), 
        php::Var(get_str(1357)), 
        php::Var(get_str(1358)), 
        php::Var(get_str(1359)), 
        php::Var(get_str(421))
    };
    {
        php::ForeachIterator tmp_var_1{tmp_var_0, false, tmp_var_2};
        while (tmp_var_1.next()) {
            k = tmp_var_1.value();
            if (get_function_resolution_cache(FunctionResolutionCacheId{176}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{176}) = php::fn::function_exists(get_str(641)) ? 1 : 2; }
            tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{176}) == 1 ? get_func(RequestFuncId{38}, get_str(641)) : get_persistent_func(PersistentFuncId{42}, get_str(642));
            tmp_var_4 = php::call(tmp_var_3, php::VarList{k, options});
            tmp_var_7 = php::toBool([&]() -> bool {
                if (php::toBool(tmp_var_4)) {
                    tmp_var_5 = options.item(k, false);
                    tmp_var_6 = php::toBool(!(php::same(tmp_var_5, php::null)));
                    tmp_var_5.unset();
                    return php::toBool(tmp_var_6);
                }
                return false;
            }());
            tmp_var_4.unset();
            if (php::toBool(tmp_var_7)) {
                v = options.item(k, false);
                tmp_var_8 = k;
                tmp_var_10 = [&]() -> php::Var {
                    if (get_function_resolution_cache(FunctionResolutionCacheId{177}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{177}) = php::fn::function_exists(get_str(71)) ? 1 : 2; }
                    tmp_var_9 = get_function_resolution_cache(FunctionResolutionCacheId{177}) == 1 ? get_func(RequestFuncId{0}, get_str(71)) : get_persistent_func(PersistentFuncId{0}, get_str(72));
                    if (php::toBool(php::call(tmp_var_9, php::VarList{v}))) {
                        return php::Var(v);
                    } else {
                        return php::Var((php::toBool(v)) ? (get_str(901)) : (get_str(902)));
                    }
                }();
                (s.append(php::concat({get_str(390), php::toString(tmp_var_8), get_str(376), php::toString(tmp_var_10), get_str(393)})), s);
                tmp_var_8.unset();
                tmp_var_10.unset();
            }
        }
    }
    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1360))}}))) {
        tmp_var_11 = php::toInt(options.get(get_str(1360)));
        (s.append(php::concat({get_str(1361), tmp_var_11, get_str(393)})), s);
    }
    if (php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1362))}}))))) {
        (s.append(get_str(1363)), s);
    }
    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(255))}}))) {
        tmp_var_12 = php::toString(options.get(get_str(255)));
        if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_14)) {
            tmp_var_13 = tmp_var_14;
        } else {
            tmp_var_13 = false;
        }
        tmp_var_15 = php::toBool(tmp_var_13);
        tmp_var_16 = php_nativeplaywright__locator__escapetext(this_, tmp_var_12, php::toBool(tmp_var_15));
        tmp_var_12.unset();
        (s.append(php::concat({get_str(1364), tmp_var_16, get_str(393)})), s);
        tmp_var_16.unset();
    }
    return s;
}

php::Object php_nativeplaywright__locator__chain(php::Object &this_, php::Str sel) {
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Object tmp_var_4;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{138}, get_str(309), get_str(311)), php::AttrMode::Get);
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{137}, get_str(312), get_str(311)), php::AttrMode::Get);
    tmp_var_3 = php::concat({tmp_var_2, get_str(1365), sel});
    tmp_var_2.unset();
    tmp_var_4 = (php::newObject(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), tmp_var_3}));
    tmp_var_1.unset();
    tmp_var_3.unset();
    return tmp_var_4;
}

php::Object php_nativeplaywright__locator__locator(php::Object &this_, php::Var selector, php::Array options) {
    php::Var sel;
    php::Object tmp_var_0;
    php::Object tmp_var_1;
    if (UNEXPECTED(!(selector.isString() || (selector.isObject() && php::instanceOf(selector, get_persistent_class(PersistentClassId{11}, get_str(311))))))) {
        php::throwArgumentTypeError(selector, get_str(1368), 1, get_str(312), get_str(318));
    }

    sel = (php::toBool(php::instanceOf(selector, get_persistent_class(PersistentClassId{11}, get_str(311))))) ? (typephp_read_property_cached(selector, get_str(312), php::AttrMode::Get, get_property_cache(PropertyCacheId{112}))) : (selector);
    tmp_var_0 = php_nativeplaywright__locator__chain(this_, php::toStringArgExact(sel, get_str(1367), 1, get_str(315)));
    tmp_var_1 = (php_nativeplaywright__locator__filter(tmp_var_0, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__locator__filter(php::Object &this_, php::Array options) {
    php::Str s;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Bool tmp_var_4 = 0;
    zend_function * tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Bool tmp_var_11 = 0;
    zend_function * tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Var tmp_var_20;
    php::Object tmp_var_21;
    zend_class_entry *tmp_var_19 = get_persistent_class(PersistentClassId{11}, get_str(311));

    s = this_.attr(get_persistent_prop(PersistentPropertyId{137}, get_str(312), get_str(311)), php::AttrMode::Get);
    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1369))}}))) {
        tmp_var_0 = php::toString(options.get(get_str(1369)));
        tmp_var_1 = php_nativeplaywright__locator__escapetext(this_, tmp_var_0, php::toBool(false));
        tmp_var_0.unset();
        (s.append(php::concat({get_str(1370), tmp_var_1})), s);
        tmp_var_1.unset();
    }
    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1371))}}))) {
        tmp_var_2 = php::toString(options.get(get_str(1371)));
        tmp_var_3 = php_nativeplaywright__locator__escapetext(this_, tmp_var_2, php::toBool(false));
        tmp_var_2.unset();
        (s.append(php::concat({get_str(1372), tmp_var_3})), s);
        tmp_var_3.unset();
    }
    tmp_var_4 = php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1373))}}));
    if (php::toBool((php::toBool(tmp_var_4) && php::toBool(php::instanceOf(options.get(get_str(1373)), get_persistent_class(PersistentClassId{11}, get_str(311))))))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{178}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{178}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
        tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{178}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
        tmp_var_6 = typephp_read_property_cached(options.get(get_str(1373)), get_str(312), php::AttrMode::Get, get_property_cache(PropertyCacheId{116}));
        tmp_var_7 = php::constant(get_str(1), php::ConstantLookup::UnqualifiedInNamespace);
        tmp_var_8 = php::constant(get_str(0), php::ConstantLookup::UnqualifiedInNamespace);
        tmp_var_9 = ((php::Var(tmp_var_7)) | (php::Var(tmp_var_8)));
        tmp_var_7.unset();
        tmp_var_8.unset();
        tmp_var_10 = php::call(tmp_var_5, php::VarList{php::deindirect(tmp_var_6), tmp_var_9});
        tmp_var_6.unset();
        tmp_var_9.unset();
        (s.append(php::concat({get_str(1374), php::toString(tmp_var_10)})), s);
        tmp_var_10.unset();
    }
    tmp_var_11 = php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1375))}}));
    if (php::toBool((php::toBool(tmp_var_11) && php::toBool(php::instanceOf(options.get(get_str(1375)), get_persistent_class(PersistentClassId{11}, get_str(311))))))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{179}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{179}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
        tmp_var_12 = get_function_resolution_cache(FunctionResolutionCacheId{179}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
        tmp_var_13 = typephp_read_property_cached(options.get(get_str(1375)), get_str(312), php::AttrMode::Get, get_property_cache(PropertyCacheId{117}));
        tmp_var_14 = php::constant(get_str(1), php::ConstantLookup::UnqualifiedInNamespace);
        tmp_var_15 = php::constant(get_str(0), php::ConstantLookup::UnqualifiedInNamespace);
        tmp_var_16 = ((php::Var(tmp_var_14)) | (php::Var(tmp_var_15)));
        tmp_var_14.unset();
        tmp_var_15.unset();
        tmp_var_17 = php::call(tmp_var_12, php::VarList{php::deindirect(tmp_var_13), tmp_var_16});
        tmp_var_13.unset();
        tmp_var_16.unset();
        (s.append(php::concat({get_str(1376), php::toString(tmp_var_17)})), s);
        tmp_var_17.unset();
    }
    if (php::toBool(php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1293))}}))) {
        tmp_var_18 = (php::toBool(options.get(get_str(1293)))) ? (get_str(901)) : (get_str(902));
        (s.append(php::concat({get_str(1377), tmp_var_18})), s);
        tmp_var_18.unset();
    }
    tmp_var_20 = this_.attr(get_persistent_prop(PersistentPropertyId{138}, get_str(309), get_str(311)), php::AttrMode::Get);
    tmp_var_21 = (php::newObject(tmp_var_19, php::VarList{php::deindirect(tmp_var_20), s}));
    tmp_var_20.unset();
    return tmp_var_21;
}

php::Object php_nativeplaywright__locator__and(php::Object &this_, php::Object other) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Object tmp_var_7;

    if (get_function_resolution_cache(FunctionResolutionCacheId{180}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{180}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{180}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
    tmp_var_1 = other.attr(get_persistent_prop(PersistentPropertyId{137}, get_str(312), get_str(311)), php::AttrMode::Get);
    tmp_var_2 = php::constant(get_str(1), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_3 = php::constant(get_str(0), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_4 = ((php::Var(tmp_var_2)) | (php::Var(tmp_var_3)));
    tmp_var_2.unset();
    tmp_var_3.unset();
    tmp_var_5 = php::call(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), tmp_var_4});
    tmp_var_1.unset();
    tmp_var_4.unset();
    tmp_var_6 = php::concat({get_str(1378), php::toString(tmp_var_5)});
    tmp_var_5.unset();
    tmp_var_7 = (php_nativeplaywright__locator__chain(this_, tmp_var_6));
    tmp_var_6.unset();
    return tmp_var_7;
}

php::Object php_nativeplaywright__locator__or(php::Object &this_, php::Object other) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Object tmp_var_7;

    if (get_function_resolution_cache(FunctionResolutionCacheId{181}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{181}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{181}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
    tmp_var_1 = other.attr(get_persistent_prop(PersistentPropertyId{137}, get_str(312), get_str(311)), php::AttrMode::Get);
    tmp_var_2 = php::constant(get_str(1), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_3 = php::constant(get_str(0), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_4 = ((php::Var(tmp_var_2)) | (php::Var(tmp_var_3)));
    tmp_var_2.unset();
    tmp_var_3.unset();
    tmp_var_5 = php::call(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), tmp_var_4});
    tmp_var_1.unset();
    tmp_var_4.unset();
    tmp_var_6 = php::concat({get_str(1379), php::toString(tmp_var_5)});
    tmp_var_5.unset();
    tmp_var_7 = (php_nativeplaywright__locator__chain(this_, tmp_var_6));
    tmp_var_6.unset();
    return tmp_var_7;
}

php::Object php_nativeplaywright__locator__nth(php::Object &this_, php::Int index) {
    php::Object tmp_var_0;

    tmp_var_0 = (php_nativeplaywright__locator__chain(this_, php::concat(get_str(1380), index)));
    return tmp_var_0;
}

php::Object php_nativeplaywright__locator__first(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (php_nativeplaywright__locator__nth(this_, php::toInt(0L)));
    return tmp_var_0;
}

php::Object php_nativeplaywright__locator__last(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (php_nativeplaywright__locator__nth(this_, php::toInt(-1L)));
    return tmp_var_0;
}

php::Object php_nativeplaywright__locator__getbytext(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Var tmp_var_4;
    php::Object tmp_var_5;

    tmp_var_0 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = false;
    }
    tmp_var_3 = php::toBool(tmp_var_1);
    tmp_var_4 = php_nativeplaywright__locator__bytext(this_, tmp_var_0, php::toBool(tmp_var_3));
    tmp_var_0.unset();
    tmp_var_5 = (php_nativeplaywright__locator__chain(this_, tmp_var_4));
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Object php_nativeplaywright__locator__getbyrole(php::Object &this_, php::Str role, php::Array options) {
    php::Var tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__locator__byrole(this_, role, options);
    tmp_var_1 = (php_nativeplaywright__locator__chain(this_, tmp_var_0));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__locator__getbylabel(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Var tmp_var_4;
    php::Object tmp_var_5;

    tmp_var_0 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = false;
    }
    tmp_var_3 = php::toBool(tmp_var_1);
    tmp_var_4 = php_nativeplaywright__locator__bylabel(this_, tmp_var_0, php::toBool(tmp_var_3));
    tmp_var_0.unset();
    tmp_var_5 = (php_nativeplaywright__locator__chain(this_, tmp_var_4));
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Object php_nativeplaywright__locator__getbyplaceholder(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Var tmp_var_4;
    php::Object tmp_var_5;

    tmp_var_0 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = false;
    }
    tmp_var_3 = php::toBool(tmp_var_1);
    tmp_var_4 = php_nativeplaywright__locator__byattr(this_, get_str(320), tmp_var_0, php::toBool(tmp_var_3));
    tmp_var_0.unset();
    tmp_var_5 = (php_nativeplaywright__locator__chain(this_, tmp_var_4));
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Object php_nativeplaywright__locator__getbyalttext(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Var tmp_var_4;
    php::Object tmp_var_5;

    tmp_var_0 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = false;
    }
    tmp_var_3 = php::toBool(tmp_var_1);
    tmp_var_4 = php_nativeplaywright__locator__byattr(this_, get_str(321), tmp_var_0, php::toBool(tmp_var_3));
    tmp_var_0.unset();
    tmp_var_5 = (php_nativeplaywright__locator__chain(this_, tmp_var_4));
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Object php_nativeplaywright__locator__getbytitle(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Var tmp_var_4;
    php::Object tmp_var_5;

    tmp_var_0 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = false;
    }
    tmp_var_3 = php::toBool(tmp_var_1);
    tmp_var_4 = php_nativeplaywright__locator__byattr(this_, get_str(322), tmp_var_0, php::toBool(tmp_var_3));
    tmp_var_0.unset();
    tmp_var_5 = (php_nativeplaywright__locator__chain(this_, tmp_var_4));
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Object php_nativeplaywright__locator__getbytestid(php::Object &this_, php::Str testId) {
    php::Var tmp_var_0;
    php::Object tmp_var_1;

    tmp_var_0 = php_nativeplaywright__locator__bytestid(this_, testId);
    tmp_var_1 = (php_nativeplaywright__locator__chain(this_, tmp_var_0));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__locator__framelocator(php::Object &this_, php::Str selector) {
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Object tmp_var_4;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{10}, get_str(308));

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{138}, get_str(309), get_str(311)), php::AttrMode::Get);
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{137}, get_str(312), get_str(311)), php::AttrMode::Get);
    tmp_var_3 = php::concat({tmp_var_2, get_str(1365), selector});
    tmp_var_2.unset();
    tmp_var_4 = (php::newObject(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), tmp_var_3}));
    tmp_var_1.unset();
    tmp_var_3.unset();
    return tmp_var_4;
}

php::Object php_nativeplaywright__locator__contentframe(php::Object &this_) {
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Object tmp_var_3;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{10}, get_str(308));

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{138}, get_str(309), get_str(311)), php::AttrMode::Get);
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{137}, get_str(312), get_str(311)), php::AttrMode::Get);
    tmp_var_3 = (php::newObject(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), php::deindirect(tmp_var_2)}));
    tmp_var_1.unset();
    tmp_var_2.unset();
    return tmp_var_3;
}

php::Object php_nativeplaywright__locator__describe(php::Object &this_, php::Str description) {
    return this_;
}

php::Array php_nativeplaywright__locator__all(php::Object &this_) {
    php::Int i = 0;
    php::Int n = 0;
    php::Array out;
    php::Var tmp_var_0;

    out = php::Array{};
    n = php::toInt(php_nativeplaywright__locator__count(this_));
    i = php::toInt(0L);
    
    for (;php::toBool(((i) < (n))); ++i) {
        ((tmp_var_0 = php_nativeplaywright__locator__nth(this_, php::toInt(i)), out.append(tmp_var_0)), tmp_var_0);
    }
    return out;
}

php::Var php_nativeplaywright__locator__resolve(php::Object &this_) {
    php::Var parts;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Str last;
    zend_function * tmp_var_3;
    php::Ref tmp_var_4;
    php::Object frame;
    php::Var tmp_var_5;
    php::Var p;
    php::Array obj;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Object page;
    php::Array node;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Str fid;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Object child;
    php::Var tmp_var_20;
    php::Var tmp_var_21;
    zend_class_entry *tmp_var_7 = get_persistent_class(PersistentClassId{11}, get_str(311));
    zend_class_entry *tmp_var_19 = get_persistent_class(PersistentClassId{0}, get_str(75));

    if (get_function_resolution_cache(FunctionResolutionCacheId{182}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{182}) = php::fn::function_exists(get_str(447)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{182}) == 1 ? get_func(RequestFuncId{28}, get_str(447)) : get_persistent_func(PersistentFuncId{32}, get_str(448));
    tmp_var_1 = get_str(21);
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{137}, get_str(312), get_str(311)), php::AttrMode::Get);
    parts = php::call(tmp_var_0, php::VarList{tmp_var_1, php::deindirect(tmp_var_2)});
    tmp_var_1.unset();
    tmp_var_2.unset();
    if (get_function_resolution_cache(FunctionResolutionCacheId{183}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{183}) = php::fn::function_exists(get_str(1382)) ? 1 : 2; }
    tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{183}) == 1 ? get_func(RequestFuncId{57}, get_str(1382)) : get_persistent_func(PersistentFuncId{61}, get_str(1383));
    last = php::toString([&]() -> php::Var {
    if (get_function_resolution_cache(FunctionResolutionCacheId{183}) == 1) {
    return php::call(tmp_var_3, php::VarList{parts});
    }
    tmp_var_4 = parts.toReference();
    return php::call(tmp_var_3, php::VarList{&tmp_var_4});
    }());
    frame = this_.attr(get_persistent_prop(PersistentPropertyId{138}, get_str(309), get_str(311)), php::AttrMode::Get);

    tmp_var_5 = parts;
    {
        php::ForeachIterator tmp_var_6{tmp_var_5, false, tmp_var_7};
        while (tmp_var_6.next()) {
            p = tmp_var_6.value();
            tmp_var_8 = php_nativeplaywright__locator__js(this_, p);
            tmp_var_9 = php::concat({get_str(1384), tmp_var_8, get_str(1385)});
            tmp_var_8.unset();
            obj = php_nativeplaywright__frame__utilcall(frame, tmp_var_9, php::toBool(false));
            tmp_var_9.unset();
            if (php::toBool(!(php::toBool(php::exists(obj, {{php::ArrayDimFetch, php::Var(get_str(712))}}))))) {
                tmp_var_10 = php::null;
                if (UNEXPECTED(!(tmp_var_10.isNull() || tmp_var_10.isArray()))) {
                    php::throwReturnTypeError(tmp_var_10, get_str(1386), get_str(91), false);
                }
                return tmp_var_10;
            }
            page = php_nativeplaywright__frame__page(frame);
            tmp_var_13 = obj.get(get_str(712));
            tmp_var_14 = php::Array{
                { get_str(712).str(), php::Var(tmp_var_13) }
            };
            tmp_var_13.unset();
            tmp_var_12=php_nativeplaywright__page__send(page, get_str(1224), tmp_var_14);
            if (php::exists(tmp_var_12, {{php::ArrayDimFetch, php::Var(get_str(1223))}}, tmp_var_15)) {
                tmp_var_11 = tmp_var_15;
            } else {
                tmp_var_11 = php::Array{};
            }
            node = php::toArray(tmp_var_11);
            tmp_var_14.unset();
            tmp_var_16 = php::toString(obj.get(get_str(712)));
            php_nativeplaywright__page__releaseobject(page, tmp_var_16);
            tmp_var_16.unset();
            if (php::exists(node, {{php::ArrayDimFetch, php::Var(get_str(588))}}, tmp_var_18)) {
                tmp_var_17 = tmp_var_18;
            } else {
                tmp_var_17 = php::empty_string;
            }
            fid = php::toString(tmp_var_17);
            if (php::toBool(php::same(fid, php::empty_string))) {
                php::throwException(php::newObject(tmp_var_19, php::VarList{php::concat({get_str(1387), p, get_str(1388)})}));
            }
            child = php_nativeplaywright__page__framebyid(page, fid);
            if (php::toBool(php::same(child, php::null))) {
                tmp_var_20 = php::null;
                if (UNEXPECTED(!(tmp_var_20.isNull() || tmp_var_20.isArray()))) {
                    php::throwReturnTypeError(tmp_var_20, get_str(1386), get_str(91), false);
                }
                return tmp_var_20;
            }
            frame = child;
        }
    }
    tmp_var_21 = php::Array{
        php::Var(frame), 
        php::Var(last)
    };
    if (UNEXPECTED(!(tmp_var_21.isNull() || tmp_var_21.isArray()))) {
        php::throwReturnTypeError(tmp_var_21, get_str(1386), get_str(91), false);
    }
    return tmp_var_21;
}

php::Str php_nativeplaywright__locator__js(php::Object &this_, php::Var v) {
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Str tmp_var_7;

    if (get_function_resolution_cache(FunctionResolutionCacheId{184}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{184}) = php::fn::function_exists(get_str(81)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{184}) == 1 ? get_func(RequestFuncId{1}, get_str(81)) : get_persistent_func(PersistentFuncId{1}, get_str(82));
    tmp_var_1 = v;
    tmp_var_2 = php::constant(get_str(1), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_3 = php::constant(get_str(0), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_4 = ((php::Var(tmp_var_2)) | (php::Var(tmp_var_3)));
    tmp_var_2.unset();
    tmp_var_3.unset();
    tmp_var_5 = php::constant(get_str(2), php::ConstantLookup::UnqualifiedInNamespace);
    tmp_var_6 = ((php::Var(tmp_var_4)) | (php::Var(tmp_var_5)));
    tmp_var_4.unset();
    tmp_var_5.unset();
    tmp_var_7 = (php::toString(php::call(tmp_var_0, php::VarList{tmp_var_1, tmp_var_6})));
    tmp_var_1.unset();
    tmp_var_6.unset();
    return tmp_var_7;
}

php::Float php_nativeplaywright__locator__timeout(php::Object &this_, php::Array options) {
    php::Var tmp_var_0;
    php::Object tmp_var_2;
    php::Float tmp_var_3 = 0;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{138}, get_str(309), get_str(311)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    tmp_var_2 = php_nativeplaywright__frame__page(tmp_var_1);
    tmp_var_0.unset();
    tmp_var_3 = (php::toFloat(php_nativeplaywright__page__timeoutseconds(tmp_var_2, options)));
    tmp_var_2.unset();
    return tmp_var_3;
}

php::Var php_nativeplaywright__locator__retrying(php::Object &this_, php::Str api, php::Array options, php::Object attempt) {
    php::Float timeout = 0;
    php::Var deadline;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Object page;
    php::Var tmp_var_3;
    php::Str last;
    php::Var tmp_var_5;
    php::Int i = php::toInt(0L);
    php::Var r;
    php::Var res;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    zend_function * tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Object e;
    php::Var msg;
    php::Object tmp_var_12;
    zend_function * tmp_var_14;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var delay;
    zend_function * tmp_var_18;
    php::Var tmp_var_19;
    php::Var left;
    zend_function * tmp_var_20;
    php::Var tmp_var_21;
    zend_function * tmp_var_23;
    php::Str tmp_var_24;
    zend_function * tmp_var_25;
    php::Int tmp_var_26 = 0;
    php::Var tmp_var_27;
    php::Var tmp_var_28;
    zend_function * tmp_var_29;
    zend_class_entry *tmp_var_13 = get_persistent_class(PersistentClassId{0}, get_str(75));
    zend_class_entry *tmp_var_22 = get_persistent_class(PersistentClassId{6}, get_str(159));
    Z_PTR_P(tmp_var_12.ptr()) = get_persistent_class(PersistentClassId{12}, get_str(326));

    timeout = php::toFloat(php_nativeplaywright__locator__timeout(this_, options));
    deadline = [&]() -> php::Var {
        if (php::toBool(((timeout) > (php::toFloat(0L))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{185}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{185}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{185}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            tmp_var_1 = php::call(tmp_var_0, php::VarList{true});
            tmp_var_2 = ((php::Var(tmp_var_1)) + (php::Var(timeout)));
            tmp_var_1.unset();
            return tmp_var_2;
        } else {
            return php::Var(0.0);
        }
    }();
    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{138}, get_str(309), get_str(311)), php::AttrMode::Get);
    php::Object tmp_var_4 = tmp_var_3;
    page = php_nativeplaywright__frame__page(tmp_var_4);
    tmp_var_3.unset();
    tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{137}, get_str(312), get_str(311)), php::AttrMode::Get);
    last = php::concat({get_str(1389), tmp_var_5});
    tmp_var_5.unset();

    while (php::toBool(true)) {
        try {
            r = php_nativeplaywright__locator__resolve(this_);
            if (php::toBool(php::same(r, php::null))) {
                last = get_str(1390);
            } else {
                tmp_var_6 = r.item(0L, false);
                tmp_var_7 = r.item(1L, false);
                res = typephp_call_cached(attempt, get_function_call_cache(FunctionCallCacheId{20}), php::VarList{php::deindirect(tmp_var_6), php::deindirect(tmp_var_7)});
                tmp_var_6.unset();
                tmp_var_7.unset();
                if (get_function_resolution_cache(FunctionResolutionCacheId{186}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{186}) = php::fn::function_exists(get_str(641)) ? 1 : 2; }
                tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{186}) == 1 ? get_func(RequestFuncId{38}, get_str(641)) : get_persistent_func(PersistentFuncId{42}, get_str(642));
                if (php::toBool(php::call(tmp_var_8, php::VarList{get_str(1276), res}))) {
                    tmp_var_9 = (res.item(get_str(1276), false));
                    return tmp_var_9;
                }
                last = php::toString(res.item(get_str(1391), false));
            }
        } catch (zend_object *_ex) {
            tmp_var_10 = php::catchException();
            bool tmp_var_11 = false;
            if (!tmp_var_11 && tmp_var_10 && (php::instanceOf(tmp_var_10, get_persistent_class(PersistentClassId{6}, get_str(159))))) {
                tmp_var_11 = true;
                e = tmp_var_10;
                tmp_var_10 = php::null;
                php::throwException(e);
            }
            if (!tmp_var_11 && tmp_var_10 && (php::instanceOf(tmp_var_10, get_persistent_class(PersistentClassId{0}, get_str(75))))) {
                tmp_var_11 = true;
                e = tmp_var_10;
                tmp_var_10 = php::null;
                msg = typephp_call_method_cached(e, get_str(141), get_method_call_cache(MethodCallCacheId{46}));
                if (php::toBool(!(php::toBool(php_nativeplaywright__frame__iscontextlost(tmp_var_12, php::toStringArgExact(msg, get_str(1217), 1, get_str(1218))))))) {
                    if (get_function_resolution_cache(FunctionResolutionCacheId{187}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{187}) = php::fn::function_exists(get_str(864)) ? 1 : 2; }
                    tmp_var_14 = get_function_resolution_cache(FunctionResolutionCacheId{187}) == 1 ? get_func(RequestFuncId{47}, get_str(864)) : get_persistent_func(PersistentFuncId{51}, get_str(865));
                    tmp_var_15 = php::call(tmp_var_14, php::VarList{get_str(1392), php::empty_string, msg});
                    tmp_var_16 = php::concat({php::concat({api, get_str(129)}), php::toString(tmp_var_15)});
                    tmp_var_15.unset();
                    tmp_var_17 = php::newObject(tmp_var_13, php::VarList{tmp_var_16, 0L, e});
                    tmp_var_16.unset();
                    php::throwValue(php::takeValue(tmp_var_17));
                }
                last = get_str(1393);
            }
        }
        if (tmp_var_10) {
            php::throwException(php::Object(tmp_var_10));
        }
        if (php::toBool(php_nativeplaywright__page__isclosed(page))) {
            php::throwException(php::newObject(tmp_var_13, php::VarList{php::concat({api, get_str(77)})}));
        }
        if (get_function_resolution_cache(FunctionResolutionCacheId{188}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{188}) = php::fn::function_exists(get_str(1269)) ? 1 : 2; }
        tmp_var_18 = get_function_resolution_cache(FunctionResolutionCacheId{188}) == 1 ? get_func(RequestFuncId{55}, get_str(1269)) : get_persistent_func(PersistentFuncId{59}, get_str(1270));
        tmp_var_19 = class_const__nativeplaywright__locator__DELAYS.item(php::call(tmp_var_18, php::VarList{i, 5L}), false);
        delay = ((php::Var(tmp_var_19)) / (php::Var(1000L)));
        tmp_var_19.unset();
        i++;
        if (php::toBool(((php::Var(deadline)) > (php::Var(0L))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{189}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{189}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_20 = get_function_resolution_cache(FunctionResolutionCacheId{189}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            tmp_var_21 = php::call(tmp_var_20, php::VarList{true});
            left = ((php::Var(deadline)) - (php::Var(tmp_var_21)));
            tmp_var_21.unset();
            if (php::toBool(((php::Var(left)) <= (php::Var(0L))))) {
                if (get_function_resolution_cache(FunctionResolutionCacheId{190}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{190}) = php::fn::function_exists(get_str(153)) ? 1 : 2; }
                tmp_var_23 = get_function_resolution_cache(FunctionResolutionCacheId{190}) == 1 ? get_func(RequestFuncId{6}, get_str(153)) : get_persistent_func(PersistentFuncId{6}, get_str(154));
                tmp_var_24 = api;
                if (get_function_resolution_cache(FunctionResolutionCacheId{191}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{191}) = php::fn::function_exists(get_str(156)) ? 1 : 2; }
                tmp_var_25 = get_function_resolution_cache(FunctionResolutionCacheId{191}) == 1 ? get_func(RequestFuncId{7}, get_str(156)) : get_persistent_func(PersistentFuncId{7}, get_str(157));
                tmp_var_26 = php::toInt(php::call(tmp_var_25, php::VarList{((timeout) * (php::toFloat(1000L)))}));
                tmp_var_27 = php::call(tmp_var_23, php::VarList{get_str(1394), tmp_var_24, tmp_var_26, last});
                tmp_var_24.unset();
                tmp_var_28 = php::newObject(tmp_var_22, php::VarList{tmp_var_27});
                tmp_var_27.unset();
                php::throwValue(php::takeValue(tmp_var_28));
            }
            if (get_function_resolution_cache(FunctionResolutionCacheId{192}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{192}) = php::fn::function_exists(get_str(1269)) ? 1 : 2; }
            tmp_var_29 = get_function_resolution_cache(FunctionResolutionCacheId{192}) == 1 ? get_func(RequestFuncId{55}, get_str(1269)) : get_persistent_func(PersistentFuncId{59}, get_str(1270));
            delay = php::call(tmp_var_29, php::VarList{delay, left});
        }
        if (php::toBool(((php::Var(delay)) > (php::Var(0L))))) {
            php_nativeplaywright__page__waitfortimeout(page, php::toFloatArgExact(((php::Var(delay)) * (php::Var(1000L))), get_str(734), 1, get_str(735)));
        }
    }
    return php::null;
}

php::Array php_nativeplaywright__locator__prepare(php::Object &this_, php::Str api, php::Str action, php::Array options) {
    php::Array opts;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Bool tmp_var_2 = 0;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Array tmp_var_7;

    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1395))}}, tmp_var_1)) {
            tmp_var_0 = tmp_var_1;
        } else {
            tmp_var_0 = false;
        }
    tmp_var_2 = php::toBool(tmp_var_0);
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1396))}}, tmp_var_4)) {
            tmp_var_3 = tmp_var_4;
        } else {
            tmp_var_3 = php::null;
        }
    tmp_var_5 = tmp_var_3;
    opts = php::Array{
        { get_str(1395).str(), php::Var(tmp_var_2) }, 
        { get_str(1396).str(), php::Var(tmp_var_5) }
    };
    tmp_var_5.unset();
    php::ClosureFn tmp_var_6 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(2, 2, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!((tmp_var_0.isObject() && php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{12}, get_str(326))))))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(1398), get_str(1399));
            return php::null;
        }
        php::Object f = php::Object(tmp_var_0);
        tmp_var_0.unset();
        auto tmp_var_1 = php::getCallArg(1);
        if (UNEXPECTED(!(tmp_var_1.isString()))) {
            php::throwArgumentTypeError(tmp_var_1, get_str(458), 2, get_str(315), get_str(98));
            return php::null;
        }
        php::Str sel = php::toString(tmp_var_1);
        tmp_var_1.unset();
        php::Str action = php::toString(vars_.get(0));
        php::Array opts = php::toArray(vars_.get(1));
        php::Var r;
        php::Var tmp_var_2;
        php::Var tmp_var_3;
        php::Var tmp_var_4;
        php::Var tmp_var_5;
        zend_function * tmp_var_6;
        php::Bool tmp_var_7 = 0;
        php::Var tmp_var_8;
        php::Var tmp_var_9;
        php::Var tmp_var_10;
        php::Bool tmp_var_11 = 0;
        zend_function * tmp_var_12;
        php::Var tmp_var_13;
        php::Var tmp_var_14;
        php::Var tmp_var_15;
        php::Var tmp_var_16;
        php::Var tmp_var_17;
        php::Var ox;
        php::Var oy;
        php::Float tmp_var_18 = 0;
        php::Float tmp_var_22 = 0;
        php::Float tmp_var_28 = 0;
        php::Float tmp_var_34 = 0;
        php::Var tmp_var_38;
        tmp_var_2 = php_nativeplaywright__locator__js(this_, sel);
        tmp_var_3 = php_nativeplaywright__locator__js(this_, action);
        tmp_var_4 = php_nativeplaywright__locator__js(this_, opts);
        tmp_var_5 = php::concat({get_str(1400), tmp_var_2, get_str(1401), tmp_var_3, get_str(966), tmp_var_4, get_str(230)});
        tmp_var_2.unset();
        tmp_var_3.unset();
        tmp_var_4.unset();
        r = php_nativeplaywright__frame__utilvalue(f, tmp_var_5);
        tmp_var_5.unset();
        if (get_function_resolution_cache(FunctionResolutionCacheId{193}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{193}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
        tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{193}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
        tmp_var_7 = php::toBool(!(php::toBool(php::call(tmp_var_6, php::VarList{r}))));
        if (php::toBool([&]() -> bool {
            if (!(php::toBool(tmp_var_7))) {
                if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(541))}}, tmp_var_9)) {
            tmp_var_8 = tmp_var_9;
        } else {
            tmp_var_8 = php::empty_string;
        }
                tmp_var_10 = tmp_var_8;
                tmp_var_11 = php::toBool(!(php::same(tmp_var_10, get_str(1276))));
                tmp_var_10.unset();
                return php::toBool(tmp_var_11);
            }
            return true;
        }())) {
            tmp_var_15 = php::toString([&]() -> php::Var {
                    if (get_function_resolution_cache(FunctionResolutionCacheId{194}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{194}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
                    tmp_var_12 = get_function_resolution_cache(FunctionResolutionCacheId{194}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
                    if (php::toBool(php::call(tmp_var_12, php::VarList{r}))) {
                        if (php::exists(r, {{php::ArrayDimFetch, php::Var(get_str(850))}}, tmp_var_14)) {
                    tmp_var_13 = tmp_var_14;
                } else {
                    tmp_var_13 = get_str(1397);
                }
                        return php::Var(tmp_var_13);
                    } else {
                        return php::Var(get_str(1397));
                    }
                }());
            tmp_var_16 = php::Array{
                { get_str(1391).str(), php::Var(tmp_var_15) }
            };
            if (UNEXPECTED(!(tmp_var_16.isArray()))) {
                php::throwReturnTypeError(tmp_var_16, get_str(458), get_str(665), false);
                return php::null;
            }
            tmp_var_15.unset();
            return tmp_var_16;
        }
        {
            tmp_var_17 = php_nativeplaywright__frame__offset(f);
            ox = tmp_var_17.item(0L, false);
            oy = tmp_var_17.item(1L, false);
        };
        [&]() -> php::Var {
        auto&& tmp_var_19 = r;
        php::Var tmp_var_20 = get_str(486);
        tmp_var_18 = php::toFloat(r.item(get_str(486), false));
        php::Var tmp_var_21 = ((php::Var(tmp_var_18)) + (php::Var(ox)));
        (tmp_var_19.isArray() ? static_cast<void>(tmp_var_19.item(tmp_var_20, true) = tmp_var_21) : tmp_var_19.offsetSet(tmp_var_20, tmp_var_21));
        return tmp_var_21;
        }();
        [&]() -> php::Var {
        auto&& tmp_var_23 = r;
        php::Var tmp_var_24 = get_str(487);
        tmp_var_22 = php::toFloat(r.item(get_str(487), false));
        php::Var tmp_var_25 = ((php::Var(tmp_var_22)) + (php::Var(oy)));
        (tmp_var_23.isArray() ? static_cast<void>(tmp_var_23.item(tmp_var_24, true) = tmp_var_25) : tmp_var_23.offsetSet(tmp_var_24, tmp_var_25));
        return tmp_var_25;
        }();
        [&]() -> php::Var {
        auto&& tmp_var_26 = r;
        php::Var tmp_var_27 = get_str(1403);
        auto&& tmp_var_29 = tmp_var_26.item(tmp_var_27, true);
        php::Var tmp_var_30 = get_str(486);
        tmp_var_28 = php::toFloat(r.item(get_str(1403), false).item(get_str(486), false));
        php::Var tmp_var_31 = ((php::Var(tmp_var_28)) + (php::Var(ox)));
        (tmp_var_29.isArray() ? static_cast<void>(tmp_var_29.item(tmp_var_30, true) = tmp_var_31) : tmp_var_29.offsetSet(tmp_var_30, tmp_var_31));
        return tmp_var_31;
        }();
        [&]() -> php::Var {
        auto&& tmp_var_32 = r;
        php::Var tmp_var_33 = get_str(1403);
        auto&& tmp_var_35 = tmp_var_32.item(tmp_var_33, true);
        php::Var tmp_var_36 = get_str(487);
        tmp_var_34 = php::toFloat(r.item(get_str(1403), false).item(get_str(487), false));
        php::Var tmp_var_37 = ((php::Var(tmp_var_34)) + (php::Var(oy)));
        (tmp_var_35.isArray() ? static_cast<void>(tmp_var_35.item(tmp_var_36, true) = tmp_var_37) : tmp_var_35.offsetSet(tmp_var_36, tmp_var_37));
        return tmp_var_37;
        }();
        tmp_var_38 = php::Array{
            { get_str(1276).str(), php::Var(r) }
        };
        if (UNEXPECTED(!(tmp_var_38.isArray()))) {
            php::throwReturnTypeError(tmp_var_38, get_str(458), get_str(665), false);
            return php::null;
        }
        return tmp_var_38;
    };
    tmp_var_7 = (php::toArray(php_nativeplaywright__locator__retrying(this_, api, options, php::toObject(php::newClosureWithParameters(tmp_var_6, { action, opts }, this_, get_persistent_class(PersistentClassId{11}, get_str(311)), { php::ClosureParameter{"f", false, false, true}, php::ClosureParameter{"sel", false, false, true} }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))))));
    return tmp_var_7;
}

php::Var php_nativeplaywright__locator__read(php::Object &this_, php::Str api, php::Str op, php::Var arg, php::Array options, php::Bool wait) {
    php::Var tmp_var_1;

    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(2, 2, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!((tmp_var_0.isObject() && php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{12}, get_str(326))))))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(1398), get_str(1399));
            return php::null;
        }
        php::Object f = php::Object(tmp_var_0);
        tmp_var_0.unset();
        auto tmp_var_1 = php::getCallArg(1);
        if (UNEXPECTED(!(tmp_var_1.isString()))) {
            php::throwArgumentTypeError(tmp_var_1, get_str(458), 2, get_str(315), get_str(98));
            return php::null;
        }
        php::Str sel = php::toString(tmp_var_1);
        tmp_var_1.unset();
        php::Str op = php::toString(vars_.get(0));
        php::Var arg = vars_.get(1);
        php::Bool wait = php::toBool(vars_.get(2));
        php::Var v;
        php::Var tmp_var_2;
        php::Var tmp_var_3;
        php::Var tmp_var_4;
        php::Var tmp_var_5;
        zend_function * tmp_var_6;
        php::Var tmp_var_7;
        php::Bool tmp_var_8 = 0;
        php::Var tmp_var_9;
        php::Var tmp_var_10;
        php::Var tmp_var_11;
        tmp_var_2 = php_nativeplaywright__locator__js(this_, sel);
        tmp_var_3 = php_nativeplaywright__locator__js(this_, op);
        tmp_var_4 = php_nativeplaywright__locator__js(this_, arg);
        tmp_var_5 = php::concat({get_str(1404), tmp_var_2, get_str(1401), tmp_var_3, get_str(966), tmp_var_4, get_str(230)});
        tmp_var_2.unset();
        tmp_var_3.unset();
        tmp_var_4.unset();
        v = php_nativeplaywright__frame__utilvalue(f, tmp_var_5);
        tmp_var_5.unset();
        if (get_function_resolution_cache(FunctionResolutionCacheId{195}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{195}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
        tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{195}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
        tmp_var_7 = php::call(tmp_var_6, php::VarList{v});
        tmp_var_8 = php::toBool((php::toBool(tmp_var_7) && php::toBool(php::exists(v, {{php::ArrayDimFetch, php::Var(get_str(1405))}}))));
        tmp_var_7.unset();
        if (php::toBool(tmp_var_8)) {
            if (php::toBool(!(php::toBool(wait)))) {
                tmp_var_9 = php::Array{
                    { get_str(1276).str(), php::Var(php::null) }
                };
                if (UNEXPECTED(!(tmp_var_9.isArray()))) {
                    php::throwReturnTypeError(tmp_var_9, get_str(458), get_str(665), false);
                    return php::null;
                }
                return tmp_var_9;
            }
            tmp_var_10 = php::Array{
                { get_str(1391).str(), php::Var(php::concat(get_str(1389), sel)) }
            };
            if (UNEXPECTED(!(tmp_var_10.isArray()))) {
                php::throwReturnTypeError(tmp_var_10, get_str(458), get_str(665), false);
                return php::null;
            }
            return tmp_var_10;
        }
        tmp_var_11 = php::Array{
            { get_str(1276).str(), php::Var(v) }
        };
        if (UNEXPECTED(!(tmp_var_11.isArray()))) {
            php::throwReturnTypeError(tmp_var_11, get_str(458), get_str(665), false);
            return php::null;
        }
        return tmp_var_11;
    };
    tmp_var_1 = (php_nativeplaywright__locator__retrying(this_, api, options, php::toObject(php::newClosureWithParameters(tmp_var_0, { op, arg, wait }, this_, get_persistent_class(PersistentClassId{11}, get_str(311)), { php::ClosureParameter{"f", false, false, true}, php::ClosureParameter{"sel", false, false, true} }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148)))));
    return tmp_var_1;
}

void php_nativeplaywright__locator__withmodifiers(php::Object &this_, php::Array options, php::Object fn) {
    php::Object kb;
    php::Array mods;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var m;
    php::Var tmp_var_4;
    php::Var i;
    zend_function * tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    zend_class_entry *tmp_var_3 = get_persistent_class(PersistentClassId{11}, get_str(311));

    kb = typephp_read_property_cached(php_nativeplaywright__locator__page(this_), get_str(492), php::AttrMode::Get, get_property_cache(PropertyCacheId{118}));
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(342))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::Array{};
    }
    mods = php::toArray(tmp_var_0);
    {
        php::ForeachIterator tmp_var_2{mods, false, tmp_var_3};
        while (tmp_var_2.nextValue(m)) {
            php_nativeplaywright__keyboard__down(kb, php::toString(m));
        }
    }
    try {
        typephp_call_cached(fn, get_function_call_cache(FunctionCallCacheId{21}));
    } catch (zend_object *_ex) {
        tmp_var_4 = php::catchException();
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{196}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{196}) = php::fn::function_exists(get_str(162)) ? 1 : 2; }
    tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{196}) == 1 ? get_func(RequestFuncId{8}, get_str(162)) : get_persistent_func(PersistentFuncId{8}, get_str(163));
    tmp_var_6 = php::call(tmp_var_5, php::VarList{mods});
    i = ((php::Var(tmp_var_6)) - (php::Var(1L)));
    tmp_var_6.unset();;
    
    for (;php::toBool(((php::Var(i)) >= (php::Var(0L)))); --i) {
        tmp_var_7 = php::toString(mods.item(i, false));
        php_nativeplaywright__keyboard__up(kb, tmp_var_7);
        tmp_var_7.unset();
    }

    if (tmp_var_4) {
        php::throwException(php::Object(tmp_var_4));
    }
}

void php_nativeplaywright__locator__click(php::Object &this_, php::Array options) {
    php::Array p;
    php::Object page;

    p = php_nativeplaywright__locator__prepare(this_, get_str(1407), get_str(498), options);
    if (php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1408))}}))))) {
        return;
    }
    page = php_nativeplaywright__locator__page(this_);
    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object page = php::Object(vars_.get(0));
        php::Array p = php::toArray(vars_.get(1));
        php::Array options = php::toArray(vars_.get(2));
        php::Var tmp_var_0;
        php::Float tmp_var_2 = 0;
        php::Float tmp_var_3 = 0;
        tmp_var_0 = page.attr(get_persistent_prop(PersistentPropertyId{97}, get_str(704), get_str(475)), php::AttrMode::Get);
        php::Object tmp_var_1 = tmp_var_0;
        tmp_var_2 = php::toFloat(p.get(get_str(486)));
        tmp_var_3 = php::toFloat(p.get(get_str(487)));
        php_nativeplaywright__mouse__click(tmp_var_1, php::toFloat(tmp_var_2), php::toFloat(tmp_var_3), options);
        tmp_var_0.unset();
    return php::null;
    };
    php_nativeplaywright__locator__withmodifiers(this_, options, php::toObject(php::newClosureWithParameters(tmp_var_0, { page, p, options }, this_, get_persistent_class(PersistentClassId{11}, get_str(311)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))));
    php_nativeplaywright__page__afteraction(page);
}

void php_nativeplaywright__locator__dblclick(php::Object &this_, php::Array options) {
    php::Array p;
    php::Object page;

    options.item(get_str(494), true) = 2L;
    p = php_nativeplaywright__locator__prepare(this_, get_str(1411), get_str(1037), options);
    if (php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1408))}}))))) {
        return;
    }
    page = php_nativeplaywright__locator__page(this_);
    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object page = php::Object(vars_.get(0));
        php::Array p = php::toArray(vars_.get(1));
        php::Array options = php::toArray(vars_.get(2));
        php::Var tmp_var_0;
        php::Float tmp_var_2 = 0;
        php::Float tmp_var_3 = 0;
        tmp_var_0 = page.attr(get_persistent_prop(PersistentPropertyId{97}, get_str(704), get_str(475)), php::AttrMode::Get);
        php::Object tmp_var_1 = tmp_var_0;
        tmp_var_2 = php::toFloat(p.get(get_str(486)));
        tmp_var_3 = php::toFloat(p.get(get_str(487)));
        php_nativeplaywright__mouse__click(tmp_var_1, php::toFloat(tmp_var_2), php::toFloat(tmp_var_3), options);
        tmp_var_0.unset();
    return php::null;
    };
    php_nativeplaywright__locator__withmodifiers(this_, options, php::toObject(php::newClosureWithParameters(tmp_var_0, { page, p, options }, this_, get_persistent_class(PersistentClassId{11}, get_str(311)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))));
    php_nativeplaywright__page__afteraction(page);
}

void php_nativeplaywright__locator__tap(php::Object &this_, php::Array options) {
    php::Array p;
    php::Object page;

    p = php_nativeplaywright__locator__prepare(this_, get_str(1412), get_str(1038), options);
    if (php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1408))}}))))) {
        return;
    }
    page = php_nativeplaywright__locator__page(this_);
    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object page = php::Object(vars_.get(0));
        php::Array p = php::toArray(vars_.get(1));
        php::Var tmp_var_0;
        php::Float tmp_var_2 = 0;
        php::Float tmp_var_3 = 0;
        tmp_var_0 = page.attr(get_persistent_prop(PersistentPropertyId{98}, get_str(705), get_str(475)), php::AttrMode::Get);
        php::Object tmp_var_1 = tmp_var_0;
        tmp_var_2 = php::toFloat(p.get(get_str(486)));
        tmp_var_3 = php::toFloat(p.get(get_str(487)));
        php_nativeplaywright__touchscreen__tap(tmp_var_1, php::toFloat(tmp_var_2), php::toFloat(tmp_var_3));
        tmp_var_0.unset();
    return php::null;
    };
    php_nativeplaywright__locator__withmodifiers(this_, options, php::toObject(php::newClosureWithParameters(tmp_var_0, { page, p }, this_, get_persistent_class(PersistentClassId{11}, get_str(311)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))));
    php_nativeplaywright__page__afteraction(page);
}

void php_nativeplaywright__locator__hover(php::Object &this_, php::Array options) {
    php::Array p;
    php::Object page;

    p = php_nativeplaywright__locator__prepare(this_, get_str(1413), get_str(1040), options);
    if (php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1408))}}))))) {
        return;
    }
    page = php_nativeplaywright__locator__page(this_);
    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object page = php::Object(vars_.get(0));
        php::Array p = php::toArray(vars_.get(1));
        php::Var tmp_var_0;
        php::Float tmp_var_2 = 0;
        php::Float tmp_var_3 = 0;
        tmp_var_0 = page.attr(get_persistent_prop(PersistentPropertyId{97}, get_str(704), get_str(475)), php::AttrMode::Get);
        php::Object tmp_var_1 = tmp_var_0;
        tmp_var_2 = php::toFloat(p.get(get_str(486)));
        tmp_var_3 = php::toFloat(p.get(get_str(487)));
        php_nativeplaywright__mouse__move(tmp_var_1, php::toFloat(tmp_var_2), php::toFloat(tmp_var_3));
        tmp_var_0.unset();
    return php::null;
    };
    php_nativeplaywright__locator__withmodifiers(this_, options, php::toObject(php::newClosureWithParameters(tmp_var_0, { page, p }, this_, get_persistent_class(PersistentClassId{11}, get_str(311)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))));
}

void php_nativeplaywright__locator__fill(php::Object &this_, php::Str value, php::Array options) {
    php::Bool force = 0;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Str mode;
    php::Object page;
    php::Var tmp_var_3;
    php::Var tmp_var_5;

    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1395))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = false;
    }
    force = php::toBool(tmp_var_0);
    php::ClosureFn tmp_var_2 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(2, 2, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!((tmp_var_0.isObject() && php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{12}, get_str(326))))))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(1398), get_str(1399));
            return php::null;
        }
        php::Object f = php::Object(tmp_var_0);
        tmp_var_0.unset();
        auto tmp_var_1 = php::getCallArg(1);
        if (UNEXPECTED(!(tmp_var_1.isString()))) {
            php::throwArgumentTypeError(tmp_var_1, get_str(458), 2, get_str(315), get_str(98));
            return php::null;
        }
        php::Str sel = php::toString(tmp_var_1);
        tmp_var_1.unset();
        php::Str value = php::toString(vars_.get(0));
        php::Bool force = php::toBool(vars_.get(1));
        php::Var r;
        php::Var tmp_var_2;
        php::Var tmp_var_3;
        php::Var tmp_var_4;
        php::Var tmp_var_5;
        php::Var tmp_var_6;
        tmp_var_2 = php_nativeplaywright__locator__js(this_, sel);
        tmp_var_3 = php_nativeplaywright__locator__js(this_, value);
        tmp_var_4 = php_nativeplaywright__locator__js(this_, php::toBool(force));
        tmp_var_5 = php::concat({get_str(1415), tmp_var_2, get_str(1401), tmp_var_3, get_str(966), tmp_var_4, get_str(230)});
        tmp_var_2.unset();
        tmp_var_3.unset();
        tmp_var_4.unset();
        r = php_nativeplaywright__frame__utilvalue(f, tmp_var_5);
        tmp_var_5.unset();
        tmp_var_6 = (php::toBool(php::same(r, get_str(1391)))) ? (php::Array{
            { get_str(1391).str(), php::Var(get_str(1416)) }
        }) : (php::Array{
            { get_str(1276).str(), php::Var(php::toString(r)) }
        });
        if (UNEXPECTED(!(tmp_var_6.isArray()))) {
            php::throwReturnTypeError(tmp_var_6, get_str(458), get_str(665), false);
            return php::null;
        }
        return tmp_var_6;
    };
    mode = php::toString(php_nativeplaywright__locator__retrying(this_, get_str(1414), options, php::toObject(php::newClosureWithParameters(tmp_var_2, { value, force }, this_, get_persistent_class(PersistentClassId{11}, get_str(311)), { php::ClosureParameter{"f", false, false, true}, php::ClosureParameter{"sel", false, false, true} }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148)))));
    page = php_nativeplaywright__locator__page(this_);
    if (php::toBool(php::same(mode, get_str(425)))) {
        if (php::toBool(php::same(value, php::empty_string))) {
            tmp_var_3 = page.attr(get_persistent_prop(PersistentPropertyId{96}, get_str(492), get_str(475)), php::AttrMode::Get);
            php::Object tmp_var_4 = tmp_var_3;
            php_nativeplaywright__keyboard__press(tmp_var_4, get_str(367));
            tmp_var_3.unset();
        } else {
            tmp_var_5 = page.attr(get_persistent_prop(PersistentPropertyId{96}, get_str(492), get_str(475)), php::AttrMode::Get);
            php::Object tmp_var_6 = tmp_var_5;
            php_nativeplaywright__keyboard__inserttext(tmp_var_6, value);
            tmp_var_5.unset();
        }
    }
    php_nativeplaywright__page__afteraction(page);
}

void php_nativeplaywright__locator__clear(php::Object &this_, php::Array options) {
    php_nativeplaywright__locator__fill(this_, php::empty_string, options);
}

void php_nativeplaywright__locator__presssequentially(php::Object &this_, php::Str text, php::Array options) {
    php::Var tmp_var_0;

    php_nativeplaywright__locator__focus(this_, options);
    tmp_var_0 = typephp_read_property_cached(php_nativeplaywright__locator__page(this_), get_str(492), php::AttrMode::Get, get_property_cache(PropertyCacheId{119}));
    typephp_call_method_cached(tmp_var_0, get_str(425), get_method_call_cache(MethodCallCacheId{47}), php::VarList{text, options});
    tmp_var_0.unset();
}

void php_nativeplaywright__locator__type(php::Object &this_, php::Str text, php::Array options) {
    php_nativeplaywright__locator__presssequentially(this_, text, options);
}

void php_nativeplaywright__locator__press(php::Object &this_, php::Str key, php::Array options) {
    php::Var tmp_var_0;
    php::Object tmp_var_1;

    php_nativeplaywright__locator__focus(this_, options);
    tmp_var_0 = typephp_read_property_cached(php_nativeplaywright__locator__page(this_), get_str(492), php::AttrMode::Get, get_property_cache(PropertyCacheId{120}));
    typephp_call_method_cached(tmp_var_0, get_str(468), get_method_call_cache(MethodCallCacheId{48}), php::VarList{key, options});
    tmp_var_0.unset();
    tmp_var_1 = php_nativeplaywright__locator__page(this_);
    php_nativeplaywright__page__afteraction(tmp_var_1);
    tmp_var_1.unset();
}

void php_nativeplaywright__locator__focus(php::Object &this_, php::Array options) {
    php_nativeplaywright__locator__read(this_, get_str(1417), get_str(1041), php::null, options);
}

void php_nativeplaywright__locator__blur(php::Object &this_, php::Array options) {
    php_nativeplaywright__locator__read(this_, get_str(1418), get_str(1419), php::null, options);
}

void php_nativeplaywright__locator__check(php::Object &this_, php::Array options) {
    php_nativeplaywright__locator__setchecked(this_, php::toBool(true), options);
}

void php_nativeplaywright__locator__uncheck(php::Object &this_, php::Array options) {
    php_nativeplaywright__locator__setchecked(this_, php::toBool(false), options);
}

void php_nativeplaywright__locator__setchecked(php::Object &this_, php::Bool checked, php::Array options) {
    php::Str api;
    php::Var state;
    php::Var now;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{0}, get_str(75));

    api = (php::toBool(checked)) ? (get_str(1420)) : (get_str(1421));
    state = php_nativeplaywright__locator__read(this_, api, get_str(1064), php::null, options);
    if (php::toBool(php::toBool(state) == checked)) {
        return;
    }
    php_nativeplaywright__locator__click(this_, options);
    if (php::toBool(!(php::toBool(php::empty(options, {{php::ArrayDimFetch, php::Var(get_str(1408))}}))))) {
        return;
    }
    now = php_nativeplaywright__locator__read(this_, api, get_str(1064), php::null, options);
    if (php::toBool(!(php::toBool(now) == checked))) {
        php::throwException(php::newObject(tmp_var_0, php::VarList{php::concat({api, get_str(1422)})}));
    }
}

php::Array php_nativeplaywright__locator__selectoption(php::Object &this_, php::Var values, php::Array options) {
    php::Var list;
    zend_function * tmp_var_0;
    zend_function * tmp_var_1;
    php::Array opts;
    php::Var tmp_var_2;
    php::Var v;
    zend_function * tmp_var_5;
    php::Var tmp_var_6;
    php::Bool force = 0;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Array r;
    php::Object tmp_var_10;
    zend_class_entry *tmp_var_4 = get_persistent_class(PersistentClassId{11}, get_str(311));
    if (UNEXPECTED(!(values.isString() || values.isArray()))) {
        php::throwArgumentTypeError(values, get_str(1429), 1, get_str(1047), get_str(523));
    }

    list = [&]() -> php::Var {
        if (get_function_resolution_cache(FunctionResolutionCacheId{197}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{197}) = php::fn::function_exists(get_str(71)) ? 1 : 2; }
        tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{197}) == 1 ? get_func(RequestFuncId{0}, get_str(71)) : get_persistent_func(PersistentFuncId{0}, get_str(72));
        if (php::toBool(php::call(tmp_var_0, php::VarList{values}))) {
            return php::Var(php::Array{
        php::Var(values)
    });
        } else {
            return php::Var([&]() -> php::Var {
        if (get_function_resolution_cache(FunctionResolutionCacheId{198}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{198}) = php::fn::function_exists(get_str(1423)) ? 1 : 2; }
        tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{198}) == 1 ? get_func(RequestFuncId{58}, get_str(1423)) : get_persistent_func(PersistentFuncId{62}, get_str(1424));
        if (php::toBool(php::call(tmp_var_1, php::VarList{values}))) {
            return php::Var(values);
        } else {
            return php::Var(php::Array{
        php::Var(values)
    });
        }
    }());
        }
    }();
    opts = php::Array{};

    tmp_var_2 = list;
    {
        php::ForeachIterator tmp_var_3{tmp_var_2, false, tmp_var_4};
        while (tmp_var_3.next()) {
            v = tmp_var_3.value();
            ((tmp_var_6 = [&]() -> php::Var {
                if (get_function_resolution_cache(FunctionResolutionCacheId{199}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{199}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
                tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{199}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
                if (php::toBool(php::call(tmp_var_5, php::VarList{v}))) {
                    return php::Var(v);
                } else {
                    return php::Var(php::Array{
                { get_str(1425).str(), php::Var(php::toString(v)) }
            });
                }
            }(), opts.append(tmp_var_6)), tmp_var_6);
        }
    }
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1395))}}, tmp_var_8)) {
        tmp_var_7 = tmp_var_8;
    } else {
        tmp_var_7 = false;
    }
    force = php::toBool(tmp_var_7);
    php::ClosureFn tmp_var_9 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(2, 2, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!((tmp_var_0.isObject() && php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{12}, get_str(326))))))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(1398), get_str(1399));
            return php::null;
        }
        php::Object f = php::Object(tmp_var_0);
        tmp_var_0.unset();
        auto tmp_var_1 = php::getCallArg(1);
        if (UNEXPECTED(!(tmp_var_1.isString()))) {
            php::throwArgumentTypeError(tmp_var_1, get_str(458), 2, get_str(315), get_str(98));
            return php::null;
        }
        php::Str sel = php::toString(tmp_var_1);
        tmp_var_1.unset();
        php::Array opts = php::toArray(vars_.get(0));
        php::Bool force = php::toBool(vars_.get(1));
        php::Var v;
        php::Var tmp_var_2;
        php::Var tmp_var_3;
        php::Var tmp_var_4;
        php::Var tmp_var_5;
        php::Var tmp_var_6;
        tmp_var_2 = php_nativeplaywright__locator__js(this_, sel);
        tmp_var_3 = php_nativeplaywright__locator__js(this_, opts);
        tmp_var_4 = php_nativeplaywright__locator__js(this_, php::toBool(force));
        tmp_var_5 = php::concat({get_str(1427), tmp_var_2, get_str(1401), tmp_var_3, get_str(966), tmp_var_4, get_str(230)});
        tmp_var_2.unset();
        tmp_var_3.unset();
        tmp_var_4.unset();
        v = php_nativeplaywright__frame__utilvalue(f, tmp_var_5);
        tmp_var_5.unset();
        tmp_var_6 = (php::toBool(php::same(v, php::null))) ? (php::Array{
            { get_str(1391).str(), php::Var(get_str(1428)) }
        }) : (php::Array{
            { get_str(1276).str(), php::Var(v) }
        });
        if (UNEXPECTED(!(tmp_var_6.isArray()))) {
            php::throwReturnTypeError(tmp_var_6, get_str(458), get_str(665), false);
            return php::null;
        }
        return tmp_var_6;
    };
    r = php::toArray(php_nativeplaywright__locator__retrying(this_, get_str(1426), options, php::toObject(php::newClosureWithParameters(tmp_var_9, { opts, force }, this_, get_persistent_class(PersistentClassId{11}, get_str(311)), { php::ClosureParameter{"f", false, false, true}, php::ClosureParameter{"sel", false, false, true} }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148)))));
    tmp_var_10 = php_nativeplaywright__locator__page(this_);
    php_nativeplaywright__page__afteraction(tmp_var_10);
    tmp_var_10.unset();
    return r;
}

void php_nativeplaywright__locator__selecttext(php::Object &this_, php::Array options) {
    php_nativeplaywright__locator__read(this_, get_str(1430), get_str(1431), php::null, options);
}

void php_nativeplaywright__locator__setinputfiles(php::Object &this_, php::Var files, php::Array options) {
    php::Array paths;
    if (UNEXPECTED(!(files.isString() || files.isArray()))) {
        php::throwArgumentTypeError(files, get_str(1436), 1, get_str(520), get_str(523));
    }

    paths = php_nativeplaywright__locator__materializefiles(this_, files);
    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(2, 2, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!((tmp_var_0.isObject() && php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{12}, get_str(326))))))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(1398), get_str(1399));
            return php::null;
        }
        php::Object f = php::Object(tmp_var_0);
        tmp_var_0.unset();
        auto tmp_var_1 = php::getCallArg(1);
        if (UNEXPECTED(!(tmp_var_1.isString()))) {
            php::throwArgumentTypeError(tmp_var_1, get_str(458), 2, get_str(315), get_str(98));
            return php::null;
        }
        php::Str sel = php::toString(tmp_var_1);
        tmp_var_1.unset();
        php::Array paths = php::toArray(vars_.get(0));
        php::Array obj;
        php::Var tmp_var_2;
        php::Var tmp_var_3;
        php::Var tmp_var_4;
        php::Object page;
        php::Var ok;
        php::Object tmp_var_5;
        php::Var tmp_var_6;
        php::Var tmp_var_7;
        php::Var tmp_var_9;
        php::Var tmp_var_10;
        php::Var tmp_var_11;
        php::Var tmp_var_12;
        zend_class_entry *tmp_var_8 = get_persistent_class(PersistentClassId{0}, get_str(75));
        tmp_var_2 = php_nativeplaywright__locator__js(this_, sel);
        tmp_var_3 = php::concat({get_str(1384), tmp_var_2, get_str(1385)});
        tmp_var_2.unset();
        obj = php_nativeplaywright__frame__utilcall(f, tmp_var_3, php::toBool(false));
        tmp_var_3.unset();
        if (php::toBool(!(php::toBool(php::exists(obj, {{php::ArrayDimFetch, php::Var(get_str(712))}}))))) {
            tmp_var_4 = php::Array{
                { get_str(1391).str(), php::Var(php::concat(get_str(1389), sel)) }
            };
            if (UNEXPECTED(!(tmp_var_4.isArray()))) {
                php::throwReturnTypeError(tmp_var_4, get_str(458), get_str(665), false);
                return php::null;
            }
            return tmp_var_4;
        }
        page = php_nativeplaywright__frame__page(f);
        tmp_var_5 = php_nativeplaywright__frame__page(f);
        tmp_var_6 = php::toString(obj.get(get_str(712)));
        ok = php_nativeplaywright__page__callon(tmp_var_5, tmp_var_6, get_str(1434));
        tmp_var_5.unset();
        tmp_var_6.unset();
        if (php::toBool(!(php::same(ok, php::true_)))) {
            tmp_var_7 = php::toString(obj.get(get_str(712)));
            php_nativeplaywright__page__releaseobject(page, tmp_var_7);
            tmp_var_7.unset();
            php::throwException(php::newObject(tmp_var_8, php::VarList{get_str(1435)}));
        }
        tmp_var_9 = obj.get(get_str(712));
        tmp_var_10 = php::Array{
            { get_str(520).str(), php::Var(paths) }, 
            { get_str(712).str(), php::Var(tmp_var_9) }
        };
        tmp_var_9.unset();
        php_nativeplaywright__page__send(page, get_str(519), tmp_var_10);
        tmp_var_10.unset();
        tmp_var_11 = php::toString(obj.get(get_str(712)));
        php_nativeplaywright__page__releaseobject(page, tmp_var_11);
        tmp_var_11.unset();
        tmp_var_12 = php::Array{
            { get_str(1276).str(), php::Var(php::null) }
        };
        if (UNEXPECTED(!(tmp_var_12.isArray()))) {
            php::throwReturnTypeError(tmp_var_12, get_str(458), get_str(665), false);
            return php::null;
        }
        return tmp_var_12;
    };
    php_nativeplaywright__locator__retrying(this_, get_str(1432), options, php::toObject(php::newClosureWithParameters(tmp_var_0, { paths }, this_, get_persistent_class(PersistentClassId{11}, get_str(311)), { php::ClosureParameter{"f", false, false, true}, php::ClosureParameter{"sel", false, false, true} }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))));
}

php::Array php_nativeplaywright__locator__materializefiles(php::Object &this_, php::Var files) {
    php::Var list;
    zend_function * tmp_var_0;
    php::Bool tmp_var_1 = 0;
    php::Array out;
    php::Var tmp_var_2;
    php::Var f;
    zend_function * tmp_var_5;
    php::Str dir;
    zend_function * tmp_var_6;
    php::Var tmp_var_7;
    zend_function * tmp_var_8;
    zend_function * tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    zend_function * tmp_var_12;
    php::Str path;
    php::Str tmp_var_13;
    zend_function * tmp_var_14;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    zend_function * tmp_var_19;
    php::Str tmp_var_20;
    php::Var tmp_var_21;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Var real;
    zend_function * tmp_var_24;
    zend_class_entry *tmp_var_4 = get_persistent_class(PersistentClassId{11}, get_str(311));
    zend_class_entry *tmp_var_25 = get_persistent_class(PersistentClassId{0}, get_str(75));
    if (UNEXPECTED(!(files.isString() || files.isArray()))) {
        php::throwArgumentTypeError(files, get_str(1451), 1, get_str(520), get_str(523));
    }

    list = [&]() -> php::Var {
        if (get_function_resolution_cache(FunctionResolutionCacheId{200}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{200}) = php::fn::function_exists(get_str(71)) ? 1 : 2; }
        tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{200}) == 1 ? get_func(RequestFuncId{0}, get_str(71)) : get_persistent_func(PersistentFuncId{0}, get_str(72));
        if (php::toBool(php::call(tmp_var_0, php::VarList{files}))) {
            return php::Var(php::Array{
        php::Var(files)
    });
        } else {
            return php::Var([&]() -> php::Var {
        tmp_var_1 = php::toBool(php::exists(files, {{php::ArrayDimFetch, php::Var(get_str(255))}}));
        if (php::toBool((php::toBool(tmp_var_1) || php::toBool(php::exists(files, {{php::ArrayDimFetch, php::Var(get_str(1437))}}))))) {
            return php::Var(php::Array{
        php::Var(files)
    });
        } else {
            return php::Var(files);
        }
    }());
        }
    }();
    out = php::Array{};

    tmp_var_2 = list;
    {
        php::ForeachIterator tmp_var_3{tmp_var_2, false, tmp_var_4};
        while (tmp_var_3.next()) {
            f = tmp_var_3.value();
            if (get_function_resolution_cache(FunctionResolutionCacheId{201}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{201}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
            tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{201}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
            if (php::toBool(php::call(tmp_var_5, php::VarList{f}))) {
                if (get_function_resolution_cache(FunctionResolutionCacheId{202}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{202}) = php::fn::function_exists(get_str(1438)) ? 1 : 2; }
                tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{202}) == 1 ? get_func(RequestFuncId{59}, get_str(1438)) : get_persistent_func(PersistentFuncId{63}, get_str(1439));
                tmp_var_7 = php::call(tmp_var_6, php::VarList{});
                if (get_function_resolution_cache(FunctionResolutionCacheId{203}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{203}) = php::fn::function_exists(get_str(1441)) ? 1 : 2; }
                tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{203}) == 1 ? get_func(RequestFuncId{60}, get_str(1441)) : get_persistent_func(PersistentFuncId{64}, get_str(1442));
                if (get_function_resolution_cache(FunctionResolutionCacheId{204}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{204}) = php::fn::function_exists(get_str(1443)) ? 1 : 2; }
                tmp_var_9 = get_function_resolution_cache(FunctionResolutionCacheId{204}) == 1 ? get_func(RequestFuncId{61}, get_str(1443)) : get_persistent_func(PersistentFuncId{65}, get_str(1444));
                tmp_var_10 = php::call(tmp_var_9, php::VarList{6L});
                tmp_var_11 = php::call(tmp_var_8, php::VarList{tmp_var_10});
                tmp_var_10.unset();
                dir = php::concat({php::toString(tmp_var_7), get_str(1440), php::toString(tmp_var_11)});
                tmp_var_7.unset();
                tmp_var_11.unset();
                if (get_function_resolution_cache(FunctionResolutionCacheId{205}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{205}) = php::fn::function_exists(get_str(686)) ? 1 : 2; }
                tmp_var_12 = get_function_resolution_cache(FunctionResolutionCacheId{205}) == 1 ? get_func(RequestFuncId{42}, get_str(686)) : get_persistent_func(PersistentFuncId{46}, get_str(687));
                php::call(tmp_var_12, php::VarList{dir, 448L, true});
                tmp_var_13 = dir;
                if (get_function_resolution_cache(FunctionResolutionCacheId{206}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{206}) = php::fn::function_exists(get_str(1445)) ? 1 : 2; }
                tmp_var_14 = get_function_resolution_cache(FunctionResolutionCacheId{206}) == 1 ? get_func(RequestFuncId{62}, get_str(1445)) : get_persistent_func(PersistentFuncId{66}, get_str(1446));
                if (php::exists(f, {{php::ArrayDimFetch, php::Var(get_str(255))}}, tmp_var_16)) {
                    tmp_var_15 = tmp_var_16;
                } else {
                    tmp_var_15 = get_str(1447);
                }
                tmp_var_17 = php::toString(tmp_var_15);
                tmp_var_18 = php::call(tmp_var_14, php::VarList{tmp_var_17});
                tmp_var_17.unset();
                path = php::concat({tmp_var_13, get_str(211), php::toString(tmp_var_18)});
                tmp_var_13.unset();
                tmp_var_18.unset();
                if (get_function_resolution_cache(FunctionResolutionCacheId{207}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{207}) = php::fn::function_exists(get_str(1094)) ? 1 : 2; }
                tmp_var_19 = get_function_resolution_cache(FunctionResolutionCacheId{207}) == 1 ? get_func(RequestFuncId{54}, get_str(1094)) : get_persistent_func(PersistentFuncId{58}, get_str(1095));
                tmp_var_20 = path;
                if (php::exists(f, {{php::ArrayDimFetch, php::Var(get_str(1437))}}, tmp_var_22)) {
                    tmp_var_21 = tmp_var_22;
                } else {
                    tmp_var_21 = php::empty_string;
                }
                tmp_var_23 = php::toString(tmp_var_21);
                php::call(tmp_var_19, php::VarList{tmp_var_20, tmp_var_23});
                tmp_var_20.unset();
                tmp_var_23.unset();
                out.appendValue(path);
            } else {
                if (get_function_resolution_cache(FunctionResolutionCacheId{208}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{208}) = php::fn::function_exists(get_str(1448)) ? 1 : 2; }
                tmp_var_24 = get_function_resolution_cache(FunctionResolutionCacheId{208}) == 1 ? get_func(RequestFuncId{63}, get_str(1448)) : get_persistent_func(PersistentFuncId{67}, get_str(1449));
                real = php::call(tmp_var_24, php::VarList{php::toString(f)});
                if (php::toBool(php::same(real, php::false_))) {
                    php::throwException(php::newObject(tmp_var_25, php::VarList{php::concat({get_str(1450), f})}));
                }
                out.appendValue(real);
            }
        }
    }
    return out;
}

void php_nativeplaywright__locator__dragto(php::Object &this_, php::Object target, php::Array options) {
    php::CallableScope tmp_var_12 = php::getCallableScope(get_persistent_method(PersistentFuncId{68}, get_str(1289), PersistentClassId{11}, get_str(311)), this_);
    php::Array src;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Object mouse;
    php::Float tmp_var_5 = 0;
    php::Float tmp_var_6 = 0;
    php::Array dst;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Float tmp_var_13 = 0;
    php::Float tmp_var_14 = 0;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Int tmp_var_17 = 0;
    php::Var tmp_var_18;
    php::Object tmp_var_19;

    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1453))}}, tmp_var_1)) {
            tmp_var_0 = tmp_var_1;
        } else {
            tmp_var_0 = php::null;
        }
    tmp_var_2 = tmp_var_0;
    tmp_var_3 = php::Array{
        { get_str(1396).str(), php::Var(tmp_var_2) }
    };
    tmp_var_2.unset();
    tmp_var_4 = ((tmp_var_3) + (options));
    tmp_var_3.unset();
    src = php_nativeplaywright__locator__prepare(this_, get_str(1452), get_str(1040), tmp_var_4);
    tmp_var_4.unset();
    mouse = typephp_read_property_cached(php_nativeplaywright__locator__page(this_), get_str(704), php::AttrMode::Get, get_property_cache(PropertyCacheId{121}));
    tmp_var_5 = php::toFloat(src.get(get_str(486)));
    tmp_var_6 = php::toFloat(src.get(get_str(487)));
    php_nativeplaywright__mouse__move(mouse, php::toFloat(tmp_var_5), php::toFloat(tmp_var_6));
    php_nativeplaywright__mouse__down(mouse);
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(1454))}}, tmp_var_8)) {
            tmp_var_7 = tmp_var_8;
        } else {
            tmp_var_7 = php::null;
        }
    tmp_var_9 = tmp_var_7;
    tmp_var_10 = php::Array{
        { get_str(1396).str(), php::Var(tmp_var_9) }, 
        { get_str(1395).str(), php::Var(true) }
    };
    tmp_var_9.unset();
    tmp_var_11 = ((tmp_var_10) + (options));
    tmp_var_10.unset();
    dst = typephp_call_method_scoped_cached(target, get_str(1406), tmp_var_12, get_method_call_cache(MethodCallCacheId{49}), php::VarList{get_str(1452), get_str(1040), tmp_var_11});
    tmp_var_11.unset();
    tmp_var_13 = php::toFloat(dst.get(get_str(486)));
    tmp_var_14 = php::toFloat(dst.get(get_str(487)));
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(485))}}, tmp_var_16)) {
            tmp_var_15 = tmp_var_16;
        } else {
            tmp_var_15 = 5L;
        }
    tmp_var_17 = php::toInt(tmp_var_15);
    tmp_var_18 = php::Array{
        { get_str(485).str(), php::Var(tmp_var_17) }
    };
    php_nativeplaywright__mouse__move(mouse, php::toFloat(tmp_var_13), php::toFloat(tmp_var_14), tmp_var_18);
    tmp_var_18.unset();
    php_nativeplaywright__mouse__up(mouse);
    tmp_var_19 = php_nativeplaywright__locator__page(this_);
    php_nativeplaywright__page__afteraction(tmp_var_19);
    tmp_var_19.unset();
}

void php_nativeplaywright__locator__scrollintoviewifneeded(php::Object &this_, php::Array options) {
    php_nativeplaywright__locator__read(this_, get_str(1455), get_str(1456), php::null, options);
}

void php_nativeplaywright__locator__dispatchevent(php::Object &this_, php::Str type, php::Array eventInit, php::Array options) {
    php::Var tmp_var_0;

    tmp_var_0 = php::Array{
        { get_str(425).str(), php::Var(type) }, 
        { get_str(852).str(), php::Var(php::toObject(eventInit)) }
    };
    php_nativeplaywright__locator__read(this_, get_str(1457), get_str(1051), tmp_var_0, options);
    tmp_var_0.unset();
}

php::Str php_nativeplaywright__locator__screenshot(php::Object &this_, php::Array options) {
    php::Array p;
    php::Object tmp_var_0;
    php::Str tmp_var_1;

    p = php_nativeplaywright__locator__prepare(this_, get_str(1458), get_str(1459), options);
    options.item(get_str(1084), true) = p.get(get_str(1403));
    options.offsetUnset(get_str(1076));
    tmp_var_0 = php_nativeplaywright__locator__page(this_);
    tmp_var_1 = (php_nativeplaywright__page__screenshot(tmp_var_0, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

void php_nativeplaywright__locator__highlight(php::Object &this_) {
}

php::Int php_nativeplaywright__locator__count(php::Object &this_) {
    php::Var tmp_var_0;
    php::Int tmp_var_1 = 0;

    tmp_var_0 = php::Array{
        { get_str(102).str(), php::Var(0L) }
    };
    tmp_var_1 = (php::toInt(php_nativeplaywright__locator__read(this_, get_str(1460), get_str(163), php::null, tmp_var_0, php::toBool(false))));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Var php_nativeplaywright__locator__textcontent(php::Object &this_, php::Array options) {
    php::Var v;
    php::Var tmp_var_0;

    v = php_nativeplaywright__locator__read(this_, get_str(1461), get_str(1052), php::null, options);
    tmp_var_0 = (php::toBool(php::same(v, php::null))) ? (php::Var(php::null)) : (php::Var(php::toString(v)));
    if (UNEXPECTED(!(tmp_var_0.isNull() || tmp_var_0.isString()))) {
        php::throwReturnTypeError(tmp_var_0, get_str(1462), get_str(545), false);
    }
    return tmp_var_0;
}

php::Str php_nativeplaywright__locator__innertext(php::Object &this_, php::Array options) {
    php::Str tmp_var_0;

    tmp_var_0 = (php::toString(php_nativeplaywright__locator__read(this_, get_str(1463), get_str(1054), php::null, options)));
    return tmp_var_0;
}

php::Str php_nativeplaywright__locator__innerhtml(php::Object &this_, php::Array options) {
    php::Str tmp_var_0;

    tmp_var_0 = (php::toString(php_nativeplaywright__locator__read(this_, get_str(1464), get_str(1055), php::null, options)));
    return tmp_var_0;
}

php::Var php_nativeplaywright__locator__getattribute(php::Object &this_, php::Str name, php::Array options) {
    php::Var v;
    php::Var tmp_var_0;

    v = php_nativeplaywright__locator__read(this_, get_str(1465), get_str(1056), name, options);
    tmp_var_0 = (php::toBool(php::same(v, php::null))) ? (php::Var(php::null)) : (php::Var(php::toString(v)));
    if (UNEXPECTED(!(tmp_var_0.isNull() || tmp_var_0.isString()))) {
        php::throwReturnTypeError(tmp_var_0, get_str(1466), get_str(545), false);
    }
    return tmp_var_0;
}

php::Str php_nativeplaywright__locator__inputvalue(php::Object &this_, php::Array options) {
    php::Str tmp_var_0;

    tmp_var_0 = (php::toString(php_nativeplaywright__locator__read(this_, get_str(1467), get_str(1058), php::null, options)));
    return tmp_var_0;
}

php::Array php_nativeplaywright__locator__alltextcontents(php::Object &this_) {
    php::Var tmp_var_0;
    php::Array tmp_var_1;

    tmp_var_0 = php::Array{
        { get_str(102).str(), php::Var(0L) }
    };
    tmp_var_1 = (php::toArray(php_nativeplaywright__locator__read(this_, get_str(1468), get_str(1469), php::null, tmp_var_0, php::toBool(false))));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Array php_nativeplaywright__locator__allinnertexts(php::Object &this_) {
    php::Var tmp_var_0;
    php::Array tmp_var_1;

    tmp_var_0 = php::Array{
        { get_str(102).str(), php::Var(0L) }
    };
    tmp_var_1 = (php::toArray(php_nativeplaywright__locator__read(this_, get_str(1470), get_str(1471), php::null, tmp_var_0, php::toBool(false))));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__locator__isvisible(php::Object &this_) {
    php::Var tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php::Array{
        { get_str(102).str(), php::Var(0L) }
    };
    tmp_var_1 = (php::toBool(php_nativeplaywright__locator__read(this_, get_str(1472), get_str(1059), php::null, tmp_var_0, php::toBool(false))));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__locator__ishidden(php::Object &this_) {
    php::Var tmp_var_0;
    php::Bool tmp_var_1 = 0;

    tmp_var_0 = php::Array{
        { get_str(102).str(), php::Var(0L) }
    };
    tmp_var_1 = (php::toBool(php_nativeplaywright__locator__read(this_, get_str(1473), get_str(1060), php::null, tmp_var_0, php::toBool(false))));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Bool php_nativeplaywright__locator__isenabled(php::Object &this_, php::Array options) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(php_nativeplaywright__locator__read(this_, get_str(1474), get_str(1061), php::null, options)));
    return tmp_var_0;
}

php::Bool php_nativeplaywright__locator__isdisabled(php::Object &this_, php::Array options) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(php_nativeplaywright__locator__read(this_, get_str(1475), get_str(1062), php::null, options)));
    return tmp_var_0;
}

php::Bool php_nativeplaywright__locator__iseditable(php::Object &this_, php::Array options) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(php_nativeplaywright__locator__read(this_, get_str(1476), get_str(1063), php::null, options)));
    return tmp_var_0;
}

php::Bool php_nativeplaywright__locator__ischecked(php::Object &this_, php::Array options) {
    php::Bool tmp_var_0 = 0;

    tmp_var_0 = (php::toBool(php_nativeplaywright__locator__read(this_, get_str(1477), get_str(1064), php::null, options)));
    return tmp_var_0;
}

php::Var php_nativeplaywright__locator__boundingbox(php::Object &this_, php::Array options) {
    php::Var f;
    php::Var box;
    zend_function * tmp_var_1;
    php::Bool tmp_var_2 = 0;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var ox;
    php::Var oy;
    php::Float tmp_var_5 = 0;
    php::Var tmp_var_6;
    php::Float tmp_var_7 = 0;
    php::Var tmp_var_8;
    php::Float tmp_var_9 = 0;
    php::Float tmp_var_10 = 0;
    php::Var tmp_var_11;

    f = php::null;
    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(2, 2, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!((tmp_var_0.isObject() && php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{12}, get_str(326))))))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(309), get_str(1399));
            return php::null;
        }
        php::Object frame = php::Object(tmp_var_0);
        tmp_var_0.unset();
        auto tmp_var_1 = php::getCallArg(1);
        if (UNEXPECTED(!(tmp_var_1.isString()))) {
            php::throwArgumentTypeError(tmp_var_1, get_str(458), 2, get_str(315), get_str(98));
            return php::null;
        }
        php::Str sel = php::toString(tmp_var_1);
        tmp_var_1.unset();
        php::Var f = vars_.get(0);
        php::Var v;
        php::Var tmp_var_2;
        php::Var tmp_var_3;
        zend_function * tmp_var_4;
        php::Var tmp_var_5;
        php::Bool tmp_var_6 = 0;
        php::Var tmp_var_7;
        php::Var tmp_var_8;
        tmp_var_2 = php_nativeplaywright__locator__js(this_, sel);
        tmp_var_3 = php::concat({get_str(1404), tmp_var_2, get_str(1479)});
        tmp_var_2.unset();
        v = php_nativeplaywright__frame__utilvalue(frame, tmp_var_3);
        tmp_var_3.unset();
        if (get_function_resolution_cache(FunctionResolutionCacheId{209}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{209}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
        tmp_var_4 = get_function_resolution_cache(FunctionResolutionCacheId{209}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
        tmp_var_5 = php::call(tmp_var_4, php::VarList{v});
        tmp_var_6 = php::toBool((php::toBool(tmp_var_5) && php::toBool(php::exists(v, {{php::ArrayDimFetch, php::Var(get_str(1405))}}))));
        tmp_var_5.unset();
        if (php::toBool(tmp_var_6)) {
            tmp_var_7 = php::Array{
                { get_str(1391).str(), php::Var(php::concat(get_str(1389), sel)) }
            };
            if (UNEXPECTED(!(tmp_var_7.isArray()))) {
                php::throwReturnTypeError(tmp_var_7, get_str(458), get_str(665), false);
                return php::null;
            }
            return tmp_var_7;
        }
        f = frame;
        tmp_var_8 = php::Array{
            { get_str(1276).str(), php::Var(v) }
        };
        if (UNEXPECTED(!(tmp_var_8.isArray()))) {
            php::throwReturnTypeError(tmp_var_8, get_str(458), get_str(665), false);
            return php::null;
        }
        return tmp_var_8;
    };
    box = php_nativeplaywright__locator__retrying(this_, get_str(1478), options, php::toObject(php::newClosureWithParameters(tmp_var_0, { f.toReference() }, this_, get_persistent_class(PersistentClassId{11}, get_str(311)), { php::ClosureParameter{"frame", false, false, true}, php::ClosureParameter{"sel", false, false, true} }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))));
    if (get_function_resolution_cache(FunctionResolutionCacheId{210}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{210}) = php::fn::function_exists(get_str(94)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{210}) == 1 ? get_func(RequestFuncId{3}, get_str(94)) : get_persistent_func(PersistentFuncId{3}, get_str(95));
    tmp_var_2 = php::toBool(!(php::toBool(php::call(tmp_var_1, php::VarList{box}))));
    if (php::toBool((php::toBool(tmp_var_2) || php::toBool(php::same(f, php::null))))) {
        tmp_var_3 = php::null;
        if (UNEXPECTED(!(tmp_var_3.isNull() || tmp_var_3.isArray()))) {
            php::throwReturnTypeError(tmp_var_3, get_str(1480), get_str(91), false);
        }
        return tmp_var_3;
    }
    {
        tmp_var_4 = typephp_call_method_cached(f, get_str(1402), get_method_call_cache(MethodCallCacheId{50}));
        ox = tmp_var_4.item(0L, false);
        oy = tmp_var_4.item(1L, false);
    };
    tmp_var_5 = php::toFloat(box.item(get_str(486), false));
    tmp_var_6 = ((php::Var(tmp_var_5)) + (php::Var(ox)));
    tmp_var_7 = php::toFloat(box.item(get_str(487), false));
    tmp_var_8 = ((php::Var(tmp_var_7)) + (php::Var(oy)));
    tmp_var_9 = php::toFloat(box.item(get_str(764), false));
    tmp_var_10 = php::toFloat(box.item(get_str(765), false));
    tmp_var_11 = php::Array{
        { get_str(486).str(), php::Var(tmp_var_6) }, 
        { get_str(487).str(), php::Var(tmp_var_8) }, 
        { get_str(764).str(), php::Var(tmp_var_9) }, 
        { get_str(765).str(), php::Var(tmp_var_10) }
    };
    if (UNEXPECTED(!(tmp_var_11.isNull() || tmp_var_11.isArray()))) {
        php::throwReturnTypeError(tmp_var_11, get_str(1480), get_str(91), false);
    }
    tmp_var_6.unset();
    tmp_var_8.unset();
    return tmp_var_11;
}

php::Str php_nativeplaywright__locator__ariasnapshot(php::Object &this_, php::Array options) {
    php::Str tmp_var_0;

    tmp_var_0 = (php::toString(php_nativeplaywright__locator__read(this_, get_str(1481), get_str(1482), php::null, options)));
    return tmp_var_0;
}

void php_nativeplaywright__locator__waitfor(php::Object &this_, php::Array options) {
    php::Str state;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Float timeout = 0;
    php::Var deadline;
    zend_function * tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;

    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(674))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = get_str(1293);
    }
    state = php::toString(tmp_var_0);
    timeout = php::toFloat(php_nativeplaywright__locator__timeout(this_, options));
    deadline = [&]() -> php::Var {
        if (php::toBool(((timeout) > (php::toFloat(0L))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{211}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{211}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{211}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            tmp_var_3 = php::call(tmp_var_2, php::VarList{true});
            tmp_var_4 = ((php::Var(tmp_var_3)) + (php::Var(timeout)));
            tmp_var_3.unset();
            return tmp_var_4;
        } else {
            return php::Var(0.0);
        }
    }();
    php::ClosureFn tmp_var_5 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(2, 2, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!((tmp_var_0.isObject() && php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{12}, get_str(326))))))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(1398), get_str(1399));
            return php::null;
        }
        php::Object f = php::Object(tmp_var_0);
        tmp_var_0.unset();
        auto tmp_var_1 = php::getCallArg(1);
        if (UNEXPECTED(!(tmp_var_1.isString()))) {
            php::throwArgumentTypeError(tmp_var_1, get_str(458), 2, get_str(315), get_str(98));
            return php::null;
        }
        php::Str sel = php::toString(tmp_var_1);
        tmp_var_1.unset();
        php::Str state = php::toString(vars_.get(0));
        php::Var deadline = vars_.get(1);
        php::Int slice = php::toInt(1000L);
        zend_function * tmp_var_2;
        zend_function * tmp_var_3;
        zend_function * tmp_var_4;
        php::Var tmp_var_5;
        php::Var tmp_var_6;
        php::Var tmp_var_7;
        php::Var tmp_var_8;
        php::Var ok;
        php::Var tmp_var_9;
        php::Var tmp_var_10;
        php::Var tmp_var_11;
        php::Var tmp_var_12;
        if (php::toBool(((php::Var(deadline)) > (php::Var(0L))))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{212}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{212}) = php::fn::function_exists(get_str(483)) ? 1 : 2; }
            tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{212}) == 1 ? get_func(RequestFuncId{34}, get_str(483)) : get_persistent_func(PersistentFuncId{38}, get_str(484));
            if (get_function_resolution_cache(FunctionResolutionCacheId{213}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{213}) = php::fn::function_exists(get_str(1269)) ? 1 : 2; }
            tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{213}) == 1 ? get_func(RequestFuncId{55}, get_str(1269)) : get_persistent_func(PersistentFuncId{59}, get_str(1270));
            if (get_function_resolution_cache(FunctionResolutionCacheId{214}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{214}) = php::fn::function_exists(get_str(151)) ? 1 : 2; }
            tmp_var_4 = get_function_resolution_cache(FunctionResolutionCacheId{214}) == 1 ? get_func(RequestFuncId{5}, get_str(151)) : get_persistent_func(PersistentFuncId{5}, get_str(152));
            tmp_var_5 = php::call(tmp_var_4, php::VarList{true});
            tmp_var_6 = ((php::Var(deadline)) - (php::Var(tmp_var_5)));
            tmp_var_5.unset();
            tmp_var_7 = ((php::Var(tmp_var_6)) * (php::Var(1000L)));
            tmp_var_6.unset();
            tmp_var_8 = php::call(tmp_var_3, php::VarList{1000L, tmp_var_7});
            tmp_var_7.unset();
            slice = php::toInt(php::call(tmp_var_2, php::VarList{1L, tmp_var_8}));
            tmp_var_8.unset();
        }
        tmp_var_9 = php_nativeplaywright__locator__js(this_, sel);
        tmp_var_10 = php_nativeplaywright__locator__js(this_, state);
        tmp_var_11 = php::concat({get_str(1484), tmp_var_9, get_str(1401), tmp_var_10, get_str(966), slice, get_str(230)});
        tmp_var_9.unset();
        tmp_var_10.unset();
        ok = php_nativeplaywright__frame__utilvalue(f, tmp_var_11);
        tmp_var_11.unset();
        tmp_var_12 = (php::toBool(php::same(ok, php::true_))) ? (php::Array{
            { get_str(1276).str(), php::Var(php::null) }
        }) : (php::Array{
            { get_str(1391).str(), php::Var(php::concat({get_str(1389), sel, get_str(1485), state})) }
        });
        if (UNEXPECTED(!(tmp_var_12.isArray()))) {
            php::throwReturnTypeError(tmp_var_12, get_str(458), get_str(665), false);
            return php::null;
        }
        return tmp_var_12;
    };
    php_nativeplaywright__locator__retrying(this_, get_str(1483), options, php::toObject(php::newClosureWithParameters(tmp_var_5, { state, deadline }, this_, get_persistent_class(PersistentClassId{11}, get_str(311)), { php::ClosureParameter{"f", false, false, true}, php::ClosureParameter{"sel", false, false, true} }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))));
}

php::Var php_nativeplaywright__locator__evaluate(php::Object &this_, php::Str js, php::Var arg, php::Array options) {
    php::Var tmp_var_1;

    php::ClosureFn tmp_var_0 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(2, 2, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!((tmp_var_0.isObject() && php::instanceOf(tmp_var_0, get_persistent_class(PersistentClassId{12}, get_str(326))))))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(1398), get_str(1399));
            return php::null;
        }
        php::Object f = php::Object(tmp_var_0);
        tmp_var_0.unset();
        auto tmp_var_1 = php::getCallArg(1);
        if (UNEXPECTED(!(tmp_var_1.isString()))) {
            php::throwArgumentTypeError(tmp_var_1, get_str(458), 2, get_str(315), get_str(98));
            return php::null;
        }
        php::Str sel = php::toString(tmp_var_1);
        tmp_var_1.unset();
        php::Str js = php::toString(vars_.get(0));
        php::Var arg = vars_.get(1);
        php::Array obj;
        php::Var tmp_var_2;
        php::Var tmp_var_3;
        php::Var tmp_var_4;
        php::Str main;
        php::Var tmp_var_5;
        php::Str fn;
        php::Object tmp_var_6;
        php::Var v;
        php::Object tmp_var_7;
        php::Str tmp_var_8;
        php::Var tmp_var_9;
        php::Var tmp_var_10;
        php::Var tmp_var_11;
        php::Object tmp_var_12;
        php::Var tmp_var_13;
        Z_PTR_P(tmp_var_6.ptr()) = get_persistent_class(PersistentClassId{9}, get_str(256));
        tmp_var_2 = php_nativeplaywright__locator__js(this_, sel);
        tmp_var_3 = php::concat({get_str(1384), tmp_var_2, get_str(1385)});
        tmp_var_2.unset();
        obj = php_nativeplaywright__frame__utilcall(f, tmp_var_3, php::toBool(false));
        tmp_var_3.unset();
        if (php::toBool(!(php::toBool(php::exists(obj, {{php::ArrayDimFetch, php::Var(get_str(712))}}))))) {
            tmp_var_4 = php::Array{
                { get_str(1391).str(), php::Var(php::concat(get_str(1389), sel)) }
            };
            if (UNEXPECTED(!(tmp_var_4.isArray()))) {
                php::throwReturnTypeError(tmp_var_4, get_str(458), get_str(665), false);
                return php::null;
            }
            return tmp_var_4;
        }
        tmp_var_5 = php::toString(obj.get(get_str(712)));
        main = php_nativeplaywright__frame__adopttomain(f, tmp_var_5);
        tmp_var_5.unset();
        fn = (php::toBool(php_nativeplaywright__util__isfunction(tmp_var_6, js))) ? (js) : (php::concat({get_str(1488), js, get_str(230)}));
        tmp_var_7 = php_nativeplaywright__frame__page(f);
        tmp_var_8 = fn;
        tmp_var_9 = php::Array{
                { get_str(712).str(), php::Var(main) }
            };
        tmp_var_10 = php::Array{
                { get_str(109).str(), php::Var(arg) }
            };
        tmp_var_11 = php::Array{
            php::Var(tmp_var_9), 
            php::Var(tmp_var_10)
        };
        tmp_var_9.unset();
        tmp_var_10.unset();
        v = php_nativeplaywright__page__callfunction(tmp_var_7, tmp_var_8, tmp_var_11, main);
        tmp_var_7.unset();
        tmp_var_8.unset();
        tmp_var_11.unset();
        tmp_var_12 = php_nativeplaywright__frame__page(f);
        php_nativeplaywright__page__releaseobject(tmp_var_12, main);
        tmp_var_12.unset();
        tmp_var_13 = php::Array{
            { get_str(1276).str(), php::Var(v) }
        };
        if (UNEXPECTED(!(tmp_var_13.isArray()))) {
            php::throwReturnTypeError(tmp_var_13, get_str(458), get_str(665), false);
            return php::null;
        }
        return tmp_var_13;
    };
    tmp_var_1 = (php_nativeplaywright__locator__retrying(this_, get_str(1486), options, php::toObject(php::newClosureWithParameters(tmp_var_0, { js, arg }, this_, get_persistent_class(PersistentClassId{11}, get_str(311)), { php::ClosureParameter{"f", false, false, true}, php::ClosureParameter{"sel", false, false, true} }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148)))));
    return tmp_var_1;
}

php::Var php_nativeplaywright__locator__evaluateall(php::Object &this_, php::Str js, php::Var arg) {
    php::Var r;
    php::Var tmp_var_1;
    php::Var f;
    php::Var sel;
    php::Var page;
    php::Var arr;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Array props;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Array args;
    php::Var tmp_var_9;
    php::Array ids;
    php::Var p;
    zend_function * tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Bool tmp_var_17 = 0;
    php::Var id;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Str fn;
    php::Var v;
    php::Str tmp_var_21;
    php::Array tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{0}, get_str(75));
    zend_class_entry *tmp_var_11 = get_persistent_class(PersistentClassId{11}, get_str(311));

    r = php_nativeplaywright__locator__resolve(this_);
    if (php::toBool(php::same(r, php::null))) {
        php::throwException(php::newObject(tmp_var_0, php::VarList{get_str(1489)}));
    }
    {
        tmp_var_1 = r;
        f = tmp_var_1.item(0L, false);
        sel = tmp_var_1.item(1L, false);
    };
    page = typephp_call_method_cached(f, get_str(433), get_method_call_cache(MethodCallCacheId{51}));
    tmp_var_2 = php_nativeplaywright__locator__js(this_, sel);
    tmp_var_3 = php::concat({get_str(1490), tmp_var_2, get_str(230)});
    tmp_var_2.unset();
    arr = typephp_call_method_cached(f, get_str(1221), get_method_call_cache(MethodCallCacheId{52}), php::VarList{tmp_var_3, false});
    tmp_var_3.unset();
    tmp_var_6 = arr.item(get_str(712), false);
    tmp_var_7 = php::Array{
        { get_str(712).str(), php::Var(tmp_var_6) }, 
        { get_str(1492).str(), php::Var(true) }
    };
    tmp_var_6.unset();
    tmp_var_5=typephp_call_method_cached(page, get_str(119), get_method_call_cache(MethodCallCacheId{53}), php::VarList{get_str(1491), tmp_var_7});
    if (php::exists(tmp_var_5, {{php::ArrayDimFetch, php::Var(get_str(131))}}, tmp_var_8)) {
        tmp_var_4 = tmp_var_8;
    } else {
        tmp_var_4 = php::Array{};
    }
    props = php::toArray(tmp_var_4);
    tmp_var_7.unset();
    tmp_var_9 = php::Array{
            { get_str(109).str(), php::Var(arg) }
        };
    args = php::Array{
        php::Var(tmp_var_9)
    };
    tmp_var_9.unset();
    ids = php::Array{};
    {
        php::ForeachIterator tmp_var_10{props, false, tmp_var_11};
        while (tmp_var_10.nextValue(p)) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{215}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{215}) = php::fn::function_exists(get_str(1493)) ? 1 : 2; }
            tmp_var_12 = get_function_resolution_cache(FunctionResolutionCacheId{215}) == 1 ? get_func(RequestFuncId{64}, get_str(1493)) : get_persistent_func(PersistentFuncId{69}, get_str(1494));
            if (php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(255))}}, tmp_var_14)) {
                tmp_var_13 = tmp_var_14;
            } else {
                tmp_var_13 = php::empty_string;
            }
            tmp_var_15 = tmp_var_13;
            tmp_var_16 = php::call(tmp_var_12, php::VarList{tmp_var_15});
            tmp_var_15.unset();
            tmp_var_17 = php::toBool((php::toBool(tmp_var_16) && php::toBool(php::exists(p, {{php::ArrayDimFetch, php::Var(get_str(109))}, {php::ArrayDimFetch, php::Var(get_str(712))}}))));
            tmp_var_16.unset();
            if (php::toBool(tmp_var_17)) {
                tmp_var_18 = php::toString(p.item(get_str(109), false).item(get_str(712), false));
                id = typephp_call_method_cached(f, get_str(1487), get_method_call_cache(MethodCallCacheId{54}), php::VarList{tmp_var_18});
                tmp_var_18.unset();
                ((tmp_var_19 = php::Array{
                    { get_str(712).str(), php::Var(id) }
                }, args.append(tmp_var_19)), tmp_var_19);
                ids.appendValue(id);
            }
        }
    }
    tmp_var_20 = php::toString(arr.item(get_str(712), false));
    typephp_call_method_cached(page, get_str(1225), get_method_call_cache(MethodCallCacheId{55}), php::VarList{tmp_var_20});
    tmp_var_20.unset();
    fn = php::concat({get_str(1495), js, get_str(1496)});
    tmp_var_21 = fn;
    tmp_var_22 = args;
    tmp_var_23 = typephp_call_method_cached(f, get_str(1227), get_method_call_cache(MethodCallCacheId{56}));
    v = typephp_call_method_cached(page, get_str(713), get_method_call_cache(MethodCallCacheId{57}), php::VarList{tmp_var_21, tmp_var_22, php::empty_string, (tmp_var_24 = tmp_var_23)});
    tmp_var_21.unset();
    tmp_var_22.unset();
    tmp_var_23.unset();
    {
        php::ForeachIterator tmp_var_25{ids, false, tmp_var_11};
        while (tmp_var_25.nextValue(id)) {
            typephp_call_method_cached(page, get_str(1225), get_method_call_cache(MethodCallCacheId{58}), php::VarList{id});
        }
    }
    return v;
}


ZEND_METHOD(NativePlaywright_Locator, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Object arg_frame = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{12}, get_str(326)));
        php::Var raw_arg_selector = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1497), 2, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        php_nativeplaywright__locator____construct(this_, php::takeValue(arg_frame),php::takeValue(arg_selector));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, selector) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator__selector(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, page) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator__page(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, __toString) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator____tostring(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, escapeText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1498), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Var raw_arg_exact = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_exact.isBool()))) {
            php::throwArgumentTypeError(raw_arg_exact, get_str(1498), 2, get_str(319), get_str(106));
        }
        php::Bool arg_exact = php::toBool(raw_arg_exact);
        auto retval = php_nativeplaywright__locator__escapetext(this_, php::takeValue(arg_text),arg_exact);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, jsRegex) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_re = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_re.isString()))) {
            php::throwArgumentTypeError(raw_arg_re, get_str(1499), 1, get_str(1500), get_str(98));
        }
        php::Str arg_re = php::toString(raw_arg_re);
        auto retval = php_nativeplaywright__locator__jsregex(this_, php::takeValue(arg_re));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, byText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1501), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Var raw_arg_exact = php::getCallArg(1, php_nativeplaywright__locator__bytext_arg_1_default_value());
        if (UNEXPECTED(!(raw_arg_exact.isBool()))) {
            php::throwArgumentTypeError(raw_arg_exact, get_str(1501), 2, get_str(319), get_str(106));
        }
        php::Bool arg_exact = php::toBool(raw_arg_exact);
        auto retval = php_nativeplaywright__locator__bytext(this_, php::takeValue(arg_text),arg_exact);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, byLabel) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1502), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Var raw_arg_exact = php::getCallArg(1, php_nativeplaywright__locator__bylabel_arg_1_default_value());
        if (UNEXPECTED(!(raw_arg_exact.isBool()))) {
            php::throwArgumentTypeError(raw_arg_exact, get_str(1502), 2, get_str(319), get_str(106));
        }
        php::Bool arg_exact = php::toBool(raw_arg_exact);
        auto retval = php_nativeplaywright__locator__bylabel(this_, php::takeValue(arg_text),arg_exact);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, byAttr) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_attr = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_attr.isString()))) {
            php::throwArgumentTypeError(raw_arg_attr, get_str(1503), 1, get_str(1504), get_str(98));
        }
        php::Str arg_attr = php::toString(raw_arg_attr);
        php::Var raw_arg_text = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1503), 2, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Var raw_arg_exact = php::getCallArg(2, php_nativeplaywright__locator__byattr_arg_2_default_value());
        if (UNEXPECTED(!(raw_arg_exact.isBool()))) {
            php::throwArgumentTypeError(raw_arg_exact, get_str(1503), 3, get_str(319), get_str(106));
        }
        php::Bool arg_exact = php::toBool(raw_arg_exact);
        auto retval = php_nativeplaywright__locator__byattr(this_, php::takeValue(arg_attr),php::takeValue(arg_text),arg_exact);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, byTestId) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_id = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_id.isString()))) {
            php::throwArgumentTypeError(raw_arg_id, get_str(1505), 1, get_str(118), get_str(98));
        }
        php::Str arg_id = php::toString(raw_arg_id);
        auto retval = php_nativeplaywright__locator__bytestid(this_, php::takeValue(arg_id));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, byRole) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_role = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_role.isString()))) {
            php::throwArgumentTypeError(raw_arg_role, get_str(1506), 1, get_str(331), get_str(98));
        }
        php::Str arg_role = php::toString(raw_arg_role);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__byrole_arg_1_default_value()));
        auto retval = php_nativeplaywright__locator__byrole(this_, php::takeValue(arg_role),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, chain) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_sel = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_sel.isString()))) {
            php::throwArgumentTypeError(raw_arg_sel, get_str(1367), 1, get_str(315), get_str(98));
        }
        php::Str arg_sel = php::toString(raw_arg_sel);
        auto retval = php_nativeplaywright__locator__chain(this_, php::takeValue(arg_sel));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, locator) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_selector = php::getCallArg(0);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__locator_arg_1_default_value()));
        auto retval = php_nativeplaywright__locator__locator(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, filter) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__filter_arg_0_default_value()));
        auto retval = php_nativeplaywright__locator__filter(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, and) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_other = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{11}, get_str(311)));
        auto retval = php_nativeplaywright__locator__and(this_, php::takeValue(arg_other));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, or) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_other = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{11}, get_str(311)));
        auto retval = php_nativeplaywright__locator__or(this_, php::takeValue(arg_other));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, nth) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_index = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_index.isInt()))) {
            php::throwArgumentTypeError(raw_arg_index, get_str(1507), 1, get_str(340), get_str(89));
        }
        php::Int arg_index = php::toInt(raw_arg_index);
        auto retval = php_nativeplaywright__locator__nth(this_, arg_index);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, first) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator__first(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, last) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator__last(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, getByText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1508), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__getbytext_arg_1_default_value()));
        auto retval = php_nativeplaywright__locator__getbytext(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, getByRole) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_role = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_role.isString()))) {
            php::throwArgumentTypeError(raw_arg_role, get_str(1509), 1, get_str(331), get_str(98));
        }
        php::Str arg_role = php::toString(raw_arg_role);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__getbyrole_arg_1_default_value()));
        auto retval = php_nativeplaywright__locator__getbyrole(this_, php::takeValue(arg_role),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, getByLabel) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1510), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__getbylabel_arg_1_default_value()));
        auto retval = php_nativeplaywright__locator__getbylabel(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, getByPlaceholder) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1511), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__getbyplaceholder_arg_1_default_value()));
        auto retval = php_nativeplaywright__locator__getbyplaceholder(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, getByAltText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1512), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__getbyalttext_arg_1_default_value()));
        auto retval = php_nativeplaywright__locator__getbyalttext(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, getByTitle) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1513), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__getbytitle_arg_1_default_value()));
        auto retval = php_nativeplaywright__locator__getbytitle(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, getByTestId) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_testId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_testId.isString()))) {
            php::throwArgumentTypeError(raw_arg_testId, get_str(1514), 1, get_str(337), get_str(98));
        }
        php::Str arg_testId = php::toString(raw_arg_testId);
        auto retval = php_nativeplaywright__locator__getbytestid(this_, php::takeValue(arg_testId));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, frameLocator) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(1515), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        auto retval = php_nativeplaywright__locator__framelocator(this_, php::takeValue(arg_selector));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, contentFrame) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator__contentframe(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, describe) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_description = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_description.isString()))) {
            php::throwArgumentTypeError(raw_arg_description, get_str(1516), 1, get_str(420), get_str(98));
        }
        php::Str arg_description = php::toString(raw_arg_description);
        auto retval = php_nativeplaywright__locator__describe(this_, php::takeValue(arg_description));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, all) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator__all(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, resolve) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator__resolve(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, js) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var arg_v = php::getCallArg(0);
        auto retval = php_nativeplaywright__locator__js(this_, php::takeValue(arg_v));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, timeout) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0));
        auto retval = php_nativeplaywright__locator__timeout(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, retrying) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(3, 3, false);
        php::Var raw_arg_api = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_api.isString()))) {
            php::throwArgumentTypeError(raw_arg_api, get_str(1517), 1, get_str(1306), get_str(98));
        }
        php::Str arg_api = php::toString(raw_arg_api);
        php::Array arg_options = php::toArray(php::getCallArg(1));
        php::Object arg_attempt = php::toObject(php::getCallArg(2), get_persistent_class(PersistentClassId{5}, get_str(148)));
        auto retval = php_nativeplaywright__locator__retrying(this_, php::takeValue(arg_api),php::takeValue(arg_options),php::takeValue(arg_attempt));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, prepare) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(3, 3, false);
        php::Var raw_arg_api = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_api.isString()))) {
            php::throwArgumentTypeError(raw_arg_api, get_str(1518), 1, get_str(1306), get_str(98));
        }
        php::Str arg_api = php::toString(raw_arg_api);
        php::Var raw_arg_action = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_action.isString()))) {
            php::throwArgumentTypeError(raw_arg_action, get_str(1518), 2, get_str(1519), get_str(98));
        }
        php::Str arg_action = php::toString(raw_arg_action);
        php::Array arg_options = php::toArray(php::getCallArg(2));
        auto retval = php_nativeplaywright__locator__prepare(this_, php::takeValue(arg_api),php::takeValue(arg_action),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, read) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(4, 5, false);
        php::Var raw_arg_api = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_api.isString()))) {
            php::throwArgumentTypeError(raw_arg_api, get_str(1520), 1, get_str(1306), get_str(98));
        }
        php::Str arg_api = php::toString(raw_arg_api);
        php::Var raw_arg_op = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_op.isString()))) {
            php::throwArgumentTypeError(raw_arg_op, get_str(1520), 2, get_str(652), get_str(98));
        }
        php::Str arg_op = php::toString(raw_arg_op);
        php::Var arg_arg = php::getCallArg(2);
        php::Array arg_options = php::toArray(php::getCallArg(3));
        php::Var raw_arg_wait = php::getCallArg(4, php_nativeplaywright__locator__read_arg_4_default_value());
        if (UNEXPECTED(!(raw_arg_wait.isBool()))) {
            php::throwArgumentTypeError(raw_arg_wait, get_str(1520), 5, get_str(1521), get_str(106));
        }
        php::Bool arg_wait = php::toBool(raw_arg_wait);
        auto retval = php_nativeplaywright__locator__read(this_, php::takeValue(arg_api),php::takeValue(arg_op),php::takeValue(arg_arg),php::takeValue(arg_options),arg_wait);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, withModifiers) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Array arg_options = php::toArray(php::getCallArg(0));
        php::Object arg_fn = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{5}, get_str(148)));
        php_nativeplaywright__locator__withmodifiers(this_, php::takeValue(arg_options),php::takeValue(arg_fn));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, click) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__click_arg_0_default_value()));
        php_nativeplaywright__locator__click(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, dblclick) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__dblclick_arg_0_default_value()));
        php_nativeplaywright__locator__dblclick(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, tap) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__tap_arg_0_default_value()));
        php_nativeplaywright__locator__tap(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, hover) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__hover_arg_0_default_value()));
        php_nativeplaywright__locator__hover(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, fill) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_value = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_value.isString()))) {
            php::throwArgumentTypeError(raw_arg_value, get_str(1522), 1, get_str(109), get_str(98));
        }
        php::Str arg_value = php::toString(raw_arg_value);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__fill_arg_1_default_value()));
        php_nativeplaywright__locator__fill(this_, php::takeValue(arg_value),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, clear) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__clear_arg_0_default_value()));
        php_nativeplaywright__locator__clear(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, pressSequentially) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1523), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__presssequentially_arg_1_default_value()));
        php_nativeplaywright__locator__presssequentially(this_, php::takeValue(arg_text),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, type) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(1524), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__type_arg_1_default_value()));
        php_nativeplaywright__locator__type(this_, php::takeValue(arg_text),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, press) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_key = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_key.isString()))) {
            php::throwArgumentTypeError(raw_arg_key, get_str(1525), 1, get_str(416), get_str(98));
        }
        php::Str arg_key = php::toString(raw_arg_key);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__press_arg_1_default_value()));
        php_nativeplaywright__locator__press(this_, php::takeValue(arg_key),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, focus) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__focus_arg_0_default_value()));
        php_nativeplaywright__locator__focus(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, blur) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__blur_arg_0_default_value()));
        php_nativeplaywright__locator__blur(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, check) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__check_arg_0_default_value()));
        php_nativeplaywright__locator__check(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, uncheck) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__uncheck_arg_0_default_value()));
        php_nativeplaywright__locator__uncheck(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, setChecked) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_checked = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_checked.isBool()))) {
            php::throwArgumentTypeError(raw_arg_checked, get_str(1526), 1, get_str(1182), get_str(106));
        }
        php::Bool arg_checked = php::toBool(raw_arg_checked);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__setchecked_arg_1_default_value()));
        php_nativeplaywright__locator__setchecked(this_, arg_checked,php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, selectOption) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_values = php::getCallArg(0);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__selectoption_arg_1_default_value()));
        auto retval = php_nativeplaywright__locator__selectoption(this_, php::takeValue(arg_values),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, selectText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__selecttext_arg_0_default_value()));
        php_nativeplaywright__locator__selecttext(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, setInputFiles) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_files = php::getCallArg(0);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__setinputfiles_arg_1_default_value()));
        php_nativeplaywright__locator__setinputfiles(this_, php::takeValue(arg_files),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, materializeFiles) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var arg_files = php::getCallArg(0);
        auto retval = php_nativeplaywright__locator__materializefiles(this_, php::takeValue(arg_files));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, dragTo) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Object arg_target = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{11}, get_str(311)));
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__dragto_arg_1_default_value()));
        php_nativeplaywright__locator__dragto(this_, php::takeValue(arg_target),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, scrollIntoViewIfNeeded) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__scrollintoviewifneeded_arg_0_default_value()));
        php_nativeplaywright__locator__scrollintoviewifneeded(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, dispatchEvent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 3, false);
        php::Var raw_arg_type = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_type.isString()))) {
            php::throwArgumentTypeError(raw_arg_type, get_str(1527), 1, get_str(425), get_str(98));
        }
        php::Str arg_type = php::toString(raw_arg_type);
        php::Array arg_eventInit = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__dispatchevent_arg_1_default_value()));
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__locator__dispatchevent_arg_2_default_value()));
        php_nativeplaywright__locator__dispatchevent(this_, php::takeValue(arg_type),php::takeValue(arg_eventInit),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, screenshot) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__screenshot_arg_0_default_value()));
        auto retval = php_nativeplaywright__locator__screenshot(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, highlight) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__locator__highlight(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, count) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator__count(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, textContent) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__textcontent_arg_0_default_value()));
        auto retval = php_nativeplaywright__locator__textcontent(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, innerText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__innertext_arg_0_default_value()));
        auto retval = php_nativeplaywright__locator__innertext(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, innerHTML) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__innerhtml_arg_0_default_value()));
        auto retval = php_nativeplaywright__locator__innerhtml(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, getAttribute) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_name = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_name.isString()))) {
            php::throwArgumentTypeError(raw_arg_name, get_str(1466), 1, get_str(255), get_str(98));
        }
        php::Str arg_name = php::toString(raw_arg_name);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__locator__getattribute_arg_1_default_value()));
        auto retval = php_nativeplaywright__locator__getattribute(this_, php::takeValue(arg_name),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, inputValue) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__inputvalue_arg_0_default_value()));
        auto retval = php_nativeplaywright__locator__inputvalue(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, allTextContents) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator__alltextcontents(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, allInnerTexts) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator__allinnertexts(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, isVisible) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator__isvisible(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, isHidden) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__locator__ishidden(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, isEnabled) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__isenabled_arg_0_default_value()));
        auto retval = php_nativeplaywright__locator__isenabled(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, isDisabled) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__isdisabled_arg_0_default_value()));
        auto retval = php_nativeplaywright__locator__isdisabled(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, isEditable) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__iseditable_arg_0_default_value()));
        auto retval = php_nativeplaywright__locator__iseditable(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, isChecked) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__ischecked_arg_0_default_value()));
        auto retval = php_nativeplaywright__locator__ischecked(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, boundingBox) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__boundingbox_arg_0_default_value()));
        auto retval = php_nativeplaywright__locator__boundingbox(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, ariaSnapshot) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__ariasnapshot_arg_0_default_value()));
        auto retval = php_nativeplaywright__locator__ariasnapshot(this_, php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, waitFor) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__locator__waitfor_arg_0_default_value()));
        php_nativeplaywright__locator__waitfor(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, evaluate) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 3, false);
        php::Var raw_arg_js = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_js.isString()))) {
            php::throwArgumentTypeError(raw_arg_js, get_str(1528), 1, get_str(277), get_str(98));
        }
        php::Str arg_js = php::toString(raw_arg_js);
        php::Var arg_arg = php::getCallArg(1, php_nativeplaywright__locator__evaluate_arg_1_default_value());
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__locator__evaluate_arg_2_default_value()));
        auto retval = php_nativeplaywright__locator__evaluate(this_, php::takeValue(arg_js),php::takeValue(arg_arg),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Locator, evaluateAll) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_js = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_js.isString()))) {
            php::throwArgumentTypeError(raw_arg_js, get_str(1529), 1, get_str(277), get_str(98));
        }
        php::Str arg_js = php::toString(raw_arg_js);
        php::Var arg_arg = php::getCallArg(1, php_nativeplaywright__locator__evaluateall_arg_1_default_value());
        auto retval = php_nativeplaywright__locator__evaluateall(this_, php::takeValue(arg_js),php::takeValue(arg_arg));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

