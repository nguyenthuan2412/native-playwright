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
#include <php_native_playwright_src_NativePlaywright_Keyboard_4f4f2515ca_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>

void php_nativeplaywright__keyboard____construct(php::Object &this_, php::Object page) {
typephp_write_property_scoped(this_, "page", page, get_persistent_class(PersistentClassId{13}, get_str(341)));

}

php::Int php_nativeplaywright__keyboard__modifiers(php::Object &this_) {
    php::Int tmp_var_0 = 0;
    php::Int &_object_prop_this___modifiers = this_.attrInt(get_persistent_prop(PersistentPropertyId{20}, get_str(342), get_str(341)));

    tmp_var_0 = (php::toInt(_object_prop_this___modifiers));
    return tmp_var_0;
}

php::Array php_nativeplaywright__keyboard__layout(php::Object &this_) {
    php::Int i = 0;
    php::Int d = 0;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Bool tmp_var_2 = 0;
    php::Array tmp_var_3;
    php::Array l;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_20;
    php::Var tmp_var_21;
    php::Var tmp_var_22;
    php::Var tmp_var_23;
    php::Var tmp_var_24;
    php::Var tmp_var_25;
    php::Var tmp_var_26;
    php::Var tmp_var_27;
    php::Var tmp_var_28;
    php::Var tmp_var_29;
    php::Var tmp_var_30;
    php::Var tmp_var_31;
    php::Var tmp_var_32;
    php::Var tmp_var_33;
    php::Var tmp_var_34;
    php::Var tmp_var_35;
    php::Var tmp_var_36;
    php::Var tmp_var_37;
    php::Var tmp_var_38;
    php::Var tmp_var_39;
    php::Str shiftDigits = get_str(398);
    php::Var tmp_var_40;
    php::Var tmp_var_41;
    php::Var c;
    zend_function * tmp_var_42;
    zend_function * tmp_var_43;
    php::Var tmp_var_44;
    php::Var tmp_var_46;
    php::Var ch;
    zend_function * tmp_var_47;
    zend_function * tmp_var_48;
    php::Var tmp_var_49;
    php::Var tmp_var_50;
    zend_function * tmp_var_51;
    php::Var tmp_var_52;
    php::Var tmp_var_53;
    php::Var def;
    php::Var key;
    php::Var tmp_var_56;
    php::Bool tmp_var_57 = 0;
    php::Var tmp_var_58;
    php::Var tmp_var_59;
    php::Var tmp_var_60;
    php::Var tmp_var_61;
    php::Bool tmp_var_63 = 0;
    zend_function * tmp_var_64;
    php::Var tmp_var_65;
    php::Bool tmp_var_66 = 0;
    php::Var tmp_var_67;
    php::Var tmp_var_68;
    php::Var m;
    php::Var right;
    zend_class_entry *tmp_var_55 = get_persistent_class(PersistentClassId{13}, get_str(341));
    zval *_typephp_static_property_slot_0 = nullptr;
    const auto _typephp_static_property_0 = [&]() { return typephp_get_static_property_cached(_typephp_static_property_slot_0, [&]() { return typephp_get_static_property_slot(get_persistent_class(PersistentClassId{13}, get_str(341)), get_persistent_prop(PersistentPropertyId{21}, get_str(343), get_str(341))); }); };

    tmp_var_0 = _typephp_static_property_0();
    tmp_var_1 = php::Array{};
    tmp_var_2 = php::toBool(!(php::same(tmp_var_0, tmp_var_1)));
    tmp_var_0.unset();
    tmp_var_1.unset();
    if (php::toBool(tmp_var_2)) {
        tmp_var_3 = (_typephp_static_property_0());
        return tmp_var_3;
    }
    tmp_var_4 = php::Array{
            php::Var(8L), 
            php::Var(get_str(344)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_5 = php::Array{
            php::Var(9L), 
            php::Var(get_str(345)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_6 = php::Array{
            php::Var(13L), 
            php::Var(get_str(346)), 
            php::Var(get_str(347)), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_7 = php::Array{
            php::Var(16L), 
            php::Var(get_str(348)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(1L)
        };
    tmp_var_8 = php::Array{
            php::Var(17L), 
            php::Var(get_str(350)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(1L)
        };
    tmp_var_9 = php::Array{
            php::Var(18L), 
            php::Var(get_str(352)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(1L)
        };
    tmp_var_10 = php::Array{
            php::Var(19L), 
            php::Var(get_str(354)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_11 = php::Array{
            php::Var(20L), 
            php::Var(get_str(355)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_12 = php::Array{
            php::Var(27L), 
            php::Var(get_str(356)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_13 = php::Array{
            php::Var(32L), 
            php::Var(get_str(357)), 
            php::Var(get_str(128)), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_14 = php::Array{
            php::Var(33L), 
            php::Var(get_str(358)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_15 = php::Array{
            php::Var(34L), 
            php::Var(get_str(359)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_16 = php::Array{
            php::Var(35L), 
            php::Var(get_str(360)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_17 = php::Array{
            php::Var(36L), 
            php::Var(get_str(361)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_18 = php::Array{
            php::Var(37L), 
            php::Var(get_str(362)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_19 = php::Array{
            php::Var(38L), 
            php::Var(get_str(363)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_20 = php::Array{
            php::Var(39L), 
            php::Var(get_str(364)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_21 = php::Array{
            php::Var(40L), 
            php::Var(get_str(365)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_22 = php::Array{
            php::Var(45L), 
            php::Var(get_str(366)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_23 = php::Array{
            php::Var(46L), 
            php::Var(get_str(367)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_24 = php::Array{
            php::Var(91L), 
            php::Var(get_str(368)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(1L)
        };
    tmp_var_25 = php::Array{
            php::Var(93L), 
            php::Var(get_str(370)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_26 = php::Array{
            php::Var(144L), 
            php::Var(get_str(371)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_27 = php::Array{
            php::Var(145L), 
            php::Var(get_str(372)), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        };
    tmp_var_28 = php::Array{
            php::Var(186L), 
            php::Var(get_str(373)), 
            php::Var(get_str(374)), 
            php::Var(get_str(241)), 
            php::Var(0L)
        };
    tmp_var_29 = php::Array{
            php::Var(187L), 
            php::Var(get_str(375)), 
            php::Var(get_str(376)), 
            php::Var(get_str(377)), 
            php::Var(0L)
        };
    tmp_var_30 = php::Array{
            php::Var(188L), 
            php::Var(get_str(378)), 
            php::Var(get_str(231)), 
            php::Var(get_str(379)), 
            php::Var(0L)
        };
    tmp_var_31 = php::Array{
            php::Var(189L), 
            php::Var(get_str(380)), 
            php::Var(get_str(381)), 
            php::Var(get_str(382)), 
            php::Var(0L)
        };
    tmp_var_32 = php::Array{
            php::Var(190L), 
            php::Var(get_str(383)), 
            php::Var(get_str(384)), 
            php::Var(get_str(385)), 
            php::Var(0L)
        };
    tmp_var_33 = php::Array{
            php::Var(191L), 
            php::Var(get_str(386)), 
            php::Var(get_str(211)), 
            php::Var(get_str(226)), 
            php::Var(0L)
        };
    tmp_var_34 = php::Array{
            php::Var(192L), 
            php::Var(get_str(387)), 
            php::Var(get_str(388)), 
            php::Var(get_str(213)), 
            php::Var(0L)
        };
    tmp_var_35 = php::Array{
            php::Var(219L), 
            php::Var(get_str(389)), 
            php::Var(get_str(390)), 
            php::Var(get_str(228)), 
            php::Var(0L)
        };
    tmp_var_36 = php::Array{
            php::Var(220L), 
            php::Var(get_str(391)), 
            php::Var(get_str(220)), 
            php::Var(get_str(232)), 
            php::Var(0L)
        };
    tmp_var_37 = php::Array{
            php::Var(221L), 
            php::Var(get_str(392)), 
            php::Var(get_str(393)), 
            php::Var(get_str(87)), 
            php::Var(0L)
        };
    tmp_var_38 = php::Array{
            php::Var(222L), 
            php::Var(get_str(394)), 
            php::Var(get_str(395)), 
            php::Var(get_str(396)), 
            php::Var(0L)
        };
    l = php::Array{
        { get_str(344).str(), php::Var(tmp_var_4) }, 
        { get_str(345).str(), php::Var(tmp_var_5) }, 
        { get_str(346).str(), php::Var(tmp_var_6) }, 
        { get_str(349).str(), php::Var(tmp_var_7) }, 
        { get_str(351).str(), php::Var(tmp_var_8) }, 
        { get_str(353).str(), php::Var(tmp_var_9) }, 
        { get_str(354).str(), php::Var(tmp_var_10) }, 
        { get_str(355).str(), php::Var(tmp_var_11) }, 
        { get_str(356).str(), php::Var(tmp_var_12) }, 
        { get_str(128).str(), php::Var(tmp_var_13) }, 
        { get_str(358).str(), php::Var(tmp_var_14) }, 
        { get_str(359).str(), php::Var(tmp_var_15) }, 
        { get_str(360).str(), php::Var(tmp_var_16) }, 
        { get_str(361).str(), php::Var(tmp_var_17) }, 
        { get_str(362).str(), php::Var(tmp_var_18) }, 
        { get_str(363).str(), php::Var(tmp_var_19) }, 
        { get_str(364).str(), php::Var(tmp_var_20) }, 
        { get_str(365).str(), php::Var(tmp_var_21) }, 
        { get_str(366).str(), php::Var(tmp_var_22) }, 
        { get_str(367).str(), php::Var(tmp_var_23) }, 
        { get_str(369).str(), php::Var(tmp_var_24) }, 
        { get_str(370).str(), php::Var(tmp_var_25) }, 
        { get_str(371).str(), php::Var(tmp_var_26) }, 
        { get_str(372).str(), php::Var(tmp_var_27) }, 
        { get_str(374).str(), php::Var(tmp_var_28) }, 
        { get_str(376).str(), php::Var(tmp_var_29) }, 
        { get_str(231).str(), php::Var(tmp_var_30) }, 
        { get_str(381).str(), php::Var(tmp_var_31) }, 
        { get_str(384).str(), php::Var(tmp_var_32) }, 
        { get_str(211).str(), php::Var(tmp_var_33) }, 
        { get_str(388).str(), php::Var(tmp_var_34) }, 
        { get_str(390).str(), php::Var(tmp_var_35) }, 
        { get_str(220).str(), php::Var(tmp_var_36) }, 
        { get_str(393).str(), php::Var(tmp_var_37) }, 
        { get_str(395).str(), php::Var(tmp_var_38) }
    };
    tmp_var_4.unset();
    tmp_var_5.unset();
    tmp_var_6.unset();
    tmp_var_7.unset();
    tmp_var_8.unset();
    tmp_var_9.unset();
    tmp_var_10.unset();
    tmp_var_11.unset();
    tmp_var_12.unset();
    tmp_var_13.unset();
    tmp_var_14.unset();
    tmp_var_15.unset();
    tmp_var_16.unset();
    tmp_var_17.unset();
    tmp_var_18.unset();
    tmp_var_19.unset();
    tmp_var_20.unset();
    tmp_var_21.unset();
    tmp_var_22.unset();
    tmp_var_23.unset();
    tmp_var_24.unset();
    tmp_var_25.unset();
    tmp_var_26.unset();
    tmp_var_27.unset();
    tmp_var_28.unset();
    tmp_var_29.unset();
    tmp_var_30.unset();
    tmp_var_31.unset();
    tmp_var_32.unset();
    tmp_var_33.unset();
    tmp_var_34.unset();
    tmp_var_35.unset();
    tmp_var_36.unset();
    tmp_var_37.unset();
    tmp_var_38.unset();
    i = php::toInt(1L);
    
    for (;php::toBool(((i) <= (12L))); ++i) {
        ((tmp_var_39 = php::Array{
            php::Var(((111L) + (i))), 
            php::Var(php::concat({get_str(397), i})), 
            php::Var(php::empty_string), 
            php::Var(php::empty_string), 
            php::Var(0L)
        }, l.item(php::concat({get_str(397), i}), true) = tmp_var_39), tmp_var_39);
    }
    d = php::toInt(0L);
    
    for (;php::toBool(((d) <= (9L))); ++d) {
        tmp_var_40 = shiftDigits.offsetGet(d);
        ((tmp_var_41 = php::Array{
            php::Var(((48L) + (d))), 
            php::Var(php::concat({get_str(399), d})), 
            php::Var(php::toString(d)), 
            php::Var(tmp_var_40), 
            php::Var(0L)
        }, l.item(php::toString(d), true) = tmp_var_41), tmp_var_41);
        tmp_var_40.unset();
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{48}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{48}) = php::fn::function_exists(get_str(400)) ? 1 : 2; }
    tmp_var_42 = get_function_resolution_cache(FunctionResolutionCacheId{48}) == 1 ? get_func(RequestFuncId{24}, get_str(400)) : get_persistent_func(PersistentFuncId{28}, get_str(401));
    c = php::call(tmp_var_42, php::VarList{get_str(402)});
    
    for (;[&]() -> bool {    bool tmp_var_45 = true;
    if (get_function_resolution_cache(FunctionResolutionCacheId{49}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{49}) = php::fn::function_exists(get_str(400)) ? 1 : 2; }
    tmp_var_43 = get_function_resolution_cache(FunctionResolutionCacheId{49}) == 1 ? get_func(RequestFuncId{24}, get_str(400)) : get_persistent_func(PersistentFuncId{28}, get_str(401));
    tmp_var_44 = php::call(tmp_var_43, php::VarList{get_str(403)});
    tmp_var_46 = php::toBool(((php::Var(c)) <= (php::Var(tmp_var_44))));
    tmp_var_44.unset();
    tmp_var_45 = php::toBool(tmp_var_46);
    return tmp_var_45;    }(); ++c) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{50}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{50}) = php::fn::function_exists(get_str(404)) ? 1 : 2; }
        tmp_var_47 = get_function_resolution_cache(FunctionResolutionCacheId{50}) == 1 ? get_func(RequestFuncId{25}, get_str(404)) : get_persistent_func(PersistentFuncId{29}, get_str(405));
        ch = php::call(tmp_var_47, php::VarList{c});
        if (get_function_resolution_cache(FunctionResolutionCacheId{51}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{51}) = php::fn::function_exists(get_str(407)) ? 1 : 2; }
        tmp_var_48 = get_function_resolution_cache(FunctionResolutionCacheId{51}) == 1 ? get_func(RequestFuncId{26}, get_str(407)) : get_persistent_func(PersistentFuncId{30}, get_str(408));
        tmp_var_49 = php::call(tmp_var_48, php::VarList{ch});
        tmp_var_50 = php::concat({get_str(406), php::toString(tmp_var_49)});
        tmp_var_49.unset();
        if (get_function_resolution_cache(FunctionResolutionCacheId{52}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{52}) = php::fn::function_exists(get_str(407)) ? 1 : 2; }
        tmp_var_51 = get_function_resolution_cache(FunctionResolutionCacheId{52}) == 1 ? get_func(RequestFuncId{26}, get_str(407)) : get_persistent_func(PersistentFuncId{30}, get_str(408));
        tmp_var_52 = php::call(tmp_var_51, php::VarList{ch});
        ((tmp_var_53 = php::Array{
            php::Var(((php::Var(c)) - (php::Var(32L)))), 
            php::Var(tmp_var_50), 
            php::Var(ch), 
            php::Var(tmp_var_52), 
            php::Var(0L)
        }, l.item(ch, true) = tmp_var_53), tmp_var_53);
        tmp_var_50.unset();
        tmp_var_52.unset();
    }
    {
        php::ForeachIterator tmp_var_54{l, false, tmp_var_55};
        while (tmp_var_54.nextKeyValue(key, def)) {
            tmp_var_56 = def.item(3L, false);
            tmp_var_57 = php::toBool(!(php::same(tmp_var_56, php::empty_string)));
            tmp_var_56.unset();
            if (php::toBool((php::toBool(tmp_var_57) && php::toBool(!(php::toBool(php::exists(l, {{php::ArrayDimFetch, php::Var(def.item(3L, false))}}))))))) {
                tmp_var_58 = def.item(0L, false);
                tmp_var_59 = def.item(1L, false);
                tmp_var_60 = def.item(3L, false);
                ((tmp_var_61 = php::Array{
                    php::Var(tmp_var_58), 
                    php::Var(tmp_var_59), 
                    php::Var(tmp_var_60), 
                    php::Var(php::empty_string), 
                    php::Var(0L), 
                    php::Var(true)
                }, l.item(def.item(3L, false), true) = tmp_var_61), tmp_var_61);
                tmp_var_58.unset();
                tmp_var_59.unset();
                tmp_var_60.unset();
            }
        }
    }
    {
        php::ForeachIterator tmp_var_62{l, false, tmp_var_55};
        while (tmp_var_62.nextKeyValue(key, def)) {
            tmp_var_63 = php::toBool(!(php::toBool(php::exists(l, {{php::ArrayDimFetch, php::Var(def.item(1L, false))}}))));
            if (php::toBool([&]() -> bool {
                if (php::toBool(tmp_var_63)) {
                    if (get_function_resolution_cache(FunctionResolutionCacheId{53}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{53}) = php::fn::function_exists(get_str(209)) ? 1 : 2; }
                    tmp_var_64 = get_function_resolution_cache(FunctionResolutionCacheId{53}) == 1 ? get_func(RequestFuncId{13}, get_str(209)) : get_persistent_func(PersistentFuncId{16}, get_str(210));
                    tmp_var_65 = php::call(tmp_var_64, php::VarList{php::toString(key)});
                    tmp_var_66 = php::toBool(php::same(tmp_var_65, 1L));
                    tmp_var_65.unset();
                    return php::toBool(tmp_var_66);
                }
                return false;
            }())) {
                ((tmp_var_67 = def, l.item(def.item(1L, false), true) = tmp_var_67), tmp_var_67);
            }
        }
    }
    l.item(get_str(357), true) = l.get(get_str(128));

    tmp_var_68 = php::Array{
        php::Var(get_str(349)), 
        php::Var(get_str(351)), 
        php::Var(get_str(353)), 
        php::Var(get_str(369))
    };
    {
        php::ForeachIterator tmp_var_69{tmp_var_68, false, tmp_var_55};
        while (tmp_var_69.next()) {
            m = tmp_var_69.value();
            l.item(php::concat({php::toString(m), get_str(409)}), true) = l.item(m, false);
            right = l.item(m, false);
            [&]() -> php::Var {
            auto&& tmp_var_70 = right;
            php::Var tmp_var_71 = 1L;
            php::Var tmp_var_72 = php::concat({php::toString(m), get_str(410)});
            (tmp_var_70.isArray() ? static_cast<void>(tmp_var_70.item(tmp_var_71, true) = tmp_var_72) : tmp_var_70.offsetSet(tmp_var_71, tmp_var_72));
            return tmp_var_72;
            }();
            [&]() -> php::Var {
            auto&& tmp_var_73 = right;
            php::Var tmp_var_74 = 4L;
            php::Var tmp_var_75 = 2L;
            (tmp_var_73.isArray() ? static_cast<void>(tmp_var_73.item(tmp_var_74, true) = tmp_var_75) : tmp_var_73.offsetSet(tmp_var_74, tmp_var_75));
            return tmp_var_75;
            }();
            l.item(php::concat({php::toString(m), get_str(410)}), true) = right;
        }
    }
    _typephp_static_property_0() = l;
    return l;
}

php::Int php_nativeplaywright__keyboard__bit(php::Object &this_, php::Str key) {
    php::Int tmp_var_4 = 0;

    tmp_var_4 = (php::toInt([&]() -> php::Int {
        bool tmp_var_0 = false;
        if (!tmp_var_0) {
            tmp_var_0 = php::same(key, get_str(353));
        }
        if (tmp_var_0) {
            return 1L;
        }
        bool tmp_var_1 = false;
        if (!tmp_var_1) {
            tmp_var_1 = php::same(key, get_str(351));
        }
        if (tmp_var_1) {
            return 2L;
        }
        bool tmp_var_2 = false;
        if (!tmp_var_2) {
            tmp_var_2 = php::same(key, get_str(369));
        }
        if (tmp_var_2) {
            return 4L;
        }
        bool tmp_var_3 = false;
        if (!tmp_var_3) {
            tmp_var_3 = php::same(key, get_str(349));
        }
        if (tmp_var_3) {
            return 8L;
        }
        {
            return 0L;
        }
    }()));
    return tmp_var_4;
}

php::Str php_nativeplaywright__keyboard__resolvekey(php::Object &this_, php::Str key) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Str tmp_var_2;

    if (php::toBool(php::same(key, get_str(411)))) {
        tmp_var_2 = ([&]() -> php::Str {
            tmp_var_0 = php::constant(get_str(412), php::ConstantLookup::UnqualifiedInNamespace);
            tmp_var_1 = php::same(tmp_var_0, get_str(413));
            tmp_var_0.unset();
            if (php::toBool(tmp_var_1)) {
                return get_str(369);
            } else {
                return get_str(351);
            }
        }());
        return tmp_var_2;
    }
    return key;
}

php::Array php_nativeplaywright__keyboard__description(php::Object &this_, php::Str key) {
    php::Array l;
    php::Var def;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    zend_function * tmp_var_2;
    php::Var tmp_var_3;
    php::Bool tmp_var_4 = 0;
    php::Array tmp_var_5;
    php::Str text;
    php::Str name;
    zend_function * tmp_var_7;
    php::Var tmp_var_8;
    php::Bool tmp_var_9 = 0;
    php::Bool tmp_var_10 = 0;
    php::Int tmp_var_11 = 0;
    php::Int tmp_var_12 = 0;
    php::Bool tmp_var_13 = 0;
    php::Var tmp_var_14;
    php::Bool tmp_var_15 = 0;
    php::Int tmp_var_16 = 0;
    php::Int tmp_var_17 = 0;
    php::Var tmp_var_18;
    php::Int tmp_var_19 = 0;
    php::Int tmp_var_20 = 0;
    php::Array tmp_var_21;
    zend_class_entry *tmp_var_6 = get_persistent_class(PersistentClassId{0}, get_str(75));
    php::Int &_object_prop_this___modifiers = this_.attrInt(get_persistent_prop(PersistentPropertyId{20}, get_str(342), get_str(341)));

    l = php_nativeplaywright__keyboard__layout(this_);
    if (php::exists(l, {{php::ArrayDimFetch, php::Var(key)}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = php::null;
    }
    def = tmp_var_0;
    if (php::toBool(php::same(def, php::null))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{54}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{54}) = php::fn::function_exists(get_str(414)) ? 1 : 2; }
        tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{54}) == 1 ? get_func(RequestFuncId{27}, get_str(414)) : get_persistent_func(PersistentFuncId{31}, get_str(415));
        tmp_var_3 = php::call(tmp_var_2, php::VarList{key});
        tmp_var_4 = php::toBool(php::same(tmp_var_3, 1L));
        tmp_var_3.unset();
        if (php::toBool(tmp_var_4)) {
            tmp_var_5 = (php::Array{
                { get_str(416).str(), php::Var(key) }, 
                { get_str(130).str(), php::Var(php::empty_string) }, 
                { get_str(417).str(), php::Var(0L) }, 
                { get_str(329).str(), php::Var(key) }, 
                { get_str(418).str(), php::Var(0L) }
            });
            return tmp_var_5;
        }
        php::throwException(php::newObject(tmp_var_6, php::VarList{php::concat({get_str(419), key, get_str(396)})}));
    }
    text = php::toString(def.item(2L, false));
    name = key;
    if (get_function_resolution_cache(FunctionResolutionCacheId{55}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{55}) = php::fn::function_exists(get_str(209)) ? 1 : 2; }
    tmp_var_7 = get_function_resolution_cache(FunctionResolutionCacheId{55}) == 1 ? get_func(RequestFuncId{13}, get_str(209)) : get_persistent_func(PersistentFuncId{16}, get_str(210));
    tmp_var_8 = php::call(tmp_var_7, php::VarList{key});
    tmp_var_9 = php::toBool(((php::Var(tmp_var_8)) > (php::Var(1L))));
    tmp_var_8.unset();
    tmp_var_10 = php::toBool((php::toBool(tmp_var_9) && php::toBool(!(php::same(text, php::empty_string)))));
    if (php::toBool((php::toBool(tmp_var_10) && php::toBool(!(php::same(key, get_str(346))))))) {
        name = text;
    }
    tmp_var_11 = php::toInt(_object_prop_this___modifiers);
    tmp_var_12 = php::toInt(((tmp_var_11) & (8L)));
    tmp_var_13 = php::toBool(!(tmp_var_12 == 0L));
    if (php::toBool([&]() -> bool {
        if (php::toBool(tmp_var_13)) {
            tmp_var_14 = def.item(3L, false);
            tmp_var_15 = php::toBool(!(php::same(tmp_var_14, php::empty_string)));
            tmp_var_14.unset();
            return php::toBool(tmp_var_15);
        }
        return false;
    }())) {
        text = php::toString(def.item(3L, false));
        name = text;
    }
    tmp_var_16 = php::toInt(_object_prop_this___modifiers);
    tmp_var_17 = php::toInt(((tmp_var_16) & (7L)));
    if (php::toBool(!(tmp_var_17 == 0L))) {
        text = php::empty_string;
    }
    tmp_var_18 = php::toString(def.item(1L, false));
    tmp_var_19 = php::toInt(def.item(0L, false));
    tmp_var_20 = php::toInt(def.item(4L, false));
    tmp_var_21 = (php::Array{
        { get_str(416).str(), php::Var(name) }, 
        { get_str(130).str(), php::Var(tmp_var_18) }, 
        { get_str(417).str(), php::Var(tmp_var_19) }, 
        { get_str(329).str(), php::Var(text) }, 
        { get_str(418).str(), php::Var(tmp_var_20) }
    });
    tmp_var_18.unset();
    return tmp_var_21;
}

void php_nativeplaywright__keyboard__down(php::Object &this_, php::Str key) {
    php::Array d;
    php::Bool _php__var__auto = 0;
    php::Var tmp_var_3;
    php::Array p;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Bool tmp_var_15 = 0;
    php::Str cmd;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var tmp_var_18;

    key = php_nativeplaywright__keyboard__resolvekey(this_, key);
    d = php_nativeplaywright__keyboard__description(this_, key);
    _php__var__auto = php::toBool(php::exists((this_.isObject() ? this_.attr(get_persistent_prop(PersistentPropertyId{22}, get_str(421), get_str(341)), php::AttrMode::Isset) : php::Var{}), {{php::ArrayDimFetch, php::Var(d.get(get_str(130)))}}));
    [&]() -> php::Var {
    auto&& tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{22}, get_str(421), get_str(341)), php::AttrMode::Update);
    php::Var tmp_var_1 = d.get(get_str(130));
    php::Var tmp_var_2 = true;
    static_cast<void>(tmp_var_0.item(tmp_var_1, true) = tmp_var_2);
    return tmp_var_2;
    }();
    tmp_var_3 = d.get(get_str(416));
    typephp_static_int_ref(this_.attr(get_persistent_prop(PersistentPropertyId{20}, get_str(342), get_str(341)), php::AttrMode::Update).unwrap_ptr()) |= (php_nativeplaywright__keyboard__bit(this_, php::toStringArgExact(php::deindirect(tmp_var_3), get_str(422), 1, get_str(416))));
    tmp_var_3.unset();
    tmp_var_6 = [&]() -> php::Str {
            tmp_var_4 = d.get(get_str(329));
            tmp_var_5 = !(php::same(tmp_var_4, php::empty_string));
            tmp_var_4.unset();
            if (php::toBool(tmp_var_5)) {
                return get_str(423);
            } else {
                return get_str(424);
            }
        }();
    tmp_var_7 = this_.attr(get_persistent_prop(PersistentPropertyId{20}, get_str(342), get_str(341)), php::AttrMode::Get);
    tmp_var_8 = d.get(get_str(417));
    tmp_var_9 = d.get(get_str(130));
    tmp_var_10 = d.get(get_str(416));
    tmp_var_11 = d.get(get_str(329));
    tmp_var_12 = d.get(get_str(329));
    tmp_var_13 = d.get(get_str(418));
    tmp_var_14 = d.get(get_str(418));
    tmp_var_15 = php::toBool(php::same(tmp_var_14, 3L));
    tmp_var_14.unset();
    p = php::Array{
        { get_str(425).str(), php::Var(tmp_var_6) }, 
        { get_str(342).str(), php::Var(tmp_var_7) }, 
        { get_str(426).str(), php::Var(tmp_var_8) }, 
        { get_str(130).str(), php::Var(tmp_var_9) }, 
        { get_str(416).str(), php::Var(tmp_var_10) }, 
        { get_str(329).str(), php::Var(tmp_var_11) }, 
        { get_str(427).str(), php::Var(tmp_var_12) }, 
        { get_str(428).str(), php::Var(_php__var__auto) }, 
        { get_str(418).str(), php::Var(tmp_var_13) }, 
        { get_str(429).str(), php::Var(tmp_var_15) }
    };
    tmp_var_6.unset();
    tmp_var_7.unset();
    tmp_var_8.unset();
    tmp_var_9.unset();
    tmp_var_10.unset();
    tmp_var_11.unset();
    tmp_var_12.unset();
    tmp_var_13.unset();
    tmp_var_16 = d.get(get_str(130));
    cmd = php_nativeplaywright__keyboard__editingcommand(this_, php::toStringArgExact(php::deindirect(tmp_var_16), get_str(431), 1, get_str(130)));
    tmp_var_16.unset();
    if (php::toBool(!(php::same(cmd, php::empty_string)))) {
        ((tmp_var_17 = php::Array{
            php::Var(cmd)
        }, p.item(get_str(432), true) = tmp_var_17), tmp_var_17);
    }
    tmp_var_18 = this_.attr(get_persistent_prop(PersistentPropertyId{23}, get_str(433), get_str(341)), php::AttrMode::Get);
    php::Object tmp_var_19 = tmp_var_18;
    php_nativeplaywright__page__send(tmp_var_19, get_str(434), p);
    tmp_var_18.unset();
}

php::Str php_nativeplaywright__keyboard__editingcommand(php::Object &this_, php::Str code) {
    php::Int meta = 0;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Int tmp_var_2 = 0;
    php::Int tmp_var_3 = 0;
    php::Int tmp_var_9 = 0;
    php::Str tmp_var_10;
    php::Int &_object_prop_this___modifiers = this_.attrInt(get_persistent_prop(PersistentPropertyId{20}, get_str(342), get_str(341)));

    meta = php::toInt([&]() -> php::Int {
        tmp_var_0 = php::constant(get_str(412), php::ConstantLookup::UnqualifiedInNamespace);
        tmp_var_1 = php::same(tmp_var_0, get_str(413));
        tmp_var_0.unset();
        if (php::toBool(tmp_var_1)) {
            return 4L;
        } else {
            return 2L;
        }
    }());
    tmp_var_2 = php::toInt(_object_prop_this___modifiers);
    tmp_var_3 = php::toInt(((tmp_var_2) & (meta)));
    if (php::toBool(tmp_var_3 == 0L)) {
        return php::empty_string;
    }
    tmp_var_10 = ([&]() -> php::Str {
        bool tmp_var_4 = false;
        if (!tmp_var_4) {
            tmp_var_4 = php::same(code, get_str(435));
        }
        if (tmp_var_4) {
            return get_str(436);
        }
        bool tmp_var_5 = false;
        if (!tmp_var_5) {
            tmp_var_5 = php::same(code, get_str(437));
        }
        if (tmp_var_5) {
            return get_str(438);
        }
        bool tmp_var_6 = false;
        if (!tmp_var_6) {
            tmp_var_6 = php::same(code, get_str(439));
        }
        if (tmp_var_6) {
            return get_str(440);
        }
        bool tmp_var_7 = false;
        if (!tmp_var_7) {
            tmp_var_7 = php::same(code, get_str(441));
        }
        if (tmp_var_7) {
            return get_str(442);
        }
        bool tmp_var_8 = false;
        if (!tmp_var_8) {
            tmp_var_8 = php::same(code, get_str(443));
        }
        if (tmp_var_8) {
            return [&]() -> php::Str {
                tmp_var_9 = php::toInt(_object_prop_this___modifiers);
                if (php::toBool(((tmp_var_9) & (8L)))) {
                    return get_str(444);
                } else {
                    return get_str(445);
                }
            }();
        }
        {
            return php::empty_string;
        }
    }());
    return tmp_var_10;
}

void php_nativeplaywright__keyboard__up(php::Object &this_, php::Str key) {
    php::Array d;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;

    key = php_nativeplaywright__keyboard__resolvekey(this_, key);
    d = php_nativeplaywright__keyboard__description(this_, key);
    tmp_var_0 = d.get(get_str(416));
    typephp_static_int_ref(this_.attr(get_persistent_prop(PersistentPropertyId{20}, get_str(342), get_str(341)), php::AttrMode::Update).unwrap_ptr()) &= (~php::toInt(php_nativeplaywright__keyboard__bit(this_, php::toStringArgExact(php::deindirect(tmp_var_0), get_str(422), 1, get_str(416)))));
    tmp_var_0.unset();
    this_.attr(get_persistent_prop(PersistentPropertyId{22}, get_str(421), get_str(341)), php::AttrMode::Get).offsetUnset(d.get(get_str(130)));
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{23}, get_str(433), get_str(341)), php::AttrMode::Get);
    php::Object tmp_var_2 = tmp_var_1;
    tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{20}, get_str(342), get_str(341)), php::AttrMode::Get);
    tmp_var_4 = d.get(get_str(416));
    tmp_var_5 = d.get(get_str(417));
    tmp_var_6 = d.get(get_str(130));
    tmp_var_7 = d.get(get_str(418));
    tmp_var_8 = php::Array{
        { get_str(425).str(), php::Var(get_str(446)) }, 
        { get_str(342).str(), php::Var(tmp_var_3) }, 
        { get_str(416).str(), php::Var(tmp_var_4) }, 
        { get_str(426).str(), php::Var(tmp_var_5) }, 
        { get_str(130).str(), php::Var(tmp_var_6) }, 
        { get_str(418).str(), php::Var(tmp_var_7) }
    };
    tmp_var_3.unset();
    tmp_var_4.unset();
    tmp_var_5.unset();
    tmp_var_6.unset();
    tmp_var_7.unset();
    php_nativeplaywright__page__send(tmp_var_2, get_str(434), tmp_var_8);
    tmp_var_1.unset();
    tmp_var_8.unset();
}

void php_nativeplaywright__keyboard__press(php::Object &this_, php::Str keys, php::Array options) {
    php::Var parts;
    zend_function * tmp_var_0;
    zend_function * tmp_var_1;
    zend_function * tmp_var_2;
    zend_function * tmp_var_3;
    zend_function * tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    zend_function * tmp_var_8;
    zend_function * tmp_var_9;
    php::Var tmp_var_11;
    php::Var tmp_var_12;
    php::Var k;
    php::Float delay = 0;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Var tmp_var_17;
    php::Var i;
    zend_function * tmp_var_19;
    php::Var tmp_var_20;
    php::Var tmp_var_21;
    zend_class_entry *tmp_var_14 = get_persistent_class(PersistentClassId{13}, get_str(341));

    parts = [&]() -> php::Var {
        if (php::toBool(php::same(keys, get_str(377)))) {
            return php::Var(php::Array{
        php::Var(get_str(377))
    });
        } else {
            if (get_function_resolution_cache(FunctionResolutionCacheId{56}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{56}) = php::fn::function_exists(get_str(447)) ? 1 : 2; }
            tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{56}) == 1 ? get_func(RequestFuncId{28}, get_str(447)) : get_persistent_func(PersistentFuncId{32}, get_str(448));
            return php::Var(php::call(tmp_var_0, php::VarList{get_str(377), keys}));
        }
    }();
    if (get_function_resolution_cache(FunctionResolutionCacheId{57}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{57}) = php::fn::function_exists(get_str(449)) ? 1 : 2; }
    tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{57}) == 1 ? get_func(RequestFuncId{29}, get_str(449)) : get_persistent_func(PersistentFuncId{33}, get_str(450));
    if (php::toBool(php::call(tmp_var_1, php::VarList{keys, get_str(451)}))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{58}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{58}) = php::fn::function_exists(get_str(452)) ? 1 : 2; }
        tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{58}) == 1 ? get_func(RequestFuncId{30}, get_str(452)) : get_persistent_func(PersistentFuncId{34}, get_str(453));
        if (get_function_resolution_cache(FunctionResolutionCacheId{59}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{59}) = php::fn::function_exists(get_str(447)) ? 1 : 2; }
        tmp_var_3 = get_function_resolution_cache(FunctionResolutionCacheId{59}) == 1 ? get_func(RequestFuncId{28}, get_str(447)) : get_persistent_func(PersistentFuncId{32}, get_str(448));
        if (get_function_resolution_cache(FunctionResolutionCacheId{60}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{60}) = php::fn::function_exists(get_str(216)) ? 1 : 2; }
        tmp_var_4 = get_function_resolution_cache(FunctionResolutionCacheId{60}) == 1 ? get_func(RequestFuncId{15}, get_str(216)) : get_persistent_func(PersistentFuncId{18}, get_str(217));
        tmp_var_5 = php::call(tmp_var_4, php::VarList{keys, 0L, -2L});
        tmp_var_6 = php::call(tmp_var_3, php::VarList{get_str(377), tmp_var_5});
        tmp_var_5.unset();
        tmp_var_7 = php::Array{
            php::Var(get_str(377))
        };
        parts = php::call(tmp_var_2, php::VarList{tmp_var_6, tmp_var_7});
        tmp_var_6.unset();
        tmp_var_7.unset();
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{61}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{61}) = php::fn::function_exists(get_str(454)) ? 1 : 2; }
    tmp_var_8 = get_function_resolution_cache(FunctionResolutionCacheId{61}) == 1 ? get_func(RequestFuncId{31}, get_str(454)) : get_persistent_func(PersistentFuncId{35}, get_str(455));
    if (get_function_resolution_cache(FunctionResolutionCacheId{62}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{62}) = php::fn::function_exists(get_str(456)) ? 1 : 2; }
    tmp_var_9 = get_function_resolution_cache(FunctionResolutionCacheId{62}) == 1 ? get_func(RequestFuncId{32}, get_str(456)) : get_persistent_func(PersistentFuncId{36}, get_str(457));
    php::ClosureFn tmp_var_10 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(1, 1, false);
        auto tmp_var_0 = php::getCallArg(0);
        if (UNEXPECTED(!(tmp_var_0.isString()))) {
            php::throwArgumentTypeError(tmp_var_0, get_str(458), 1, get_str(459), get_str(98));
            return php::null;
        }
        php::Str p = php::toString(tmp_var_0);
        tmp_var_0.unset();
        php::Var tmp_var_1;

    tmp_var_1 = !(php::same(p, php::empty_string));
        if (UNEXPECTED(!(tmp_var_1.isBool()))) {
            php::throwReturnTypeError(tmp_var_1, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_1;};
    tmp_var_11 = php::call(tmp_var_9, php::VarList{parts, php::newClosureWithParameters(tmp_var_10, {  }, this_, get_persistent_class(PersistentClassId{13}, get_str(341)), { php::ClosureParameter{"p", false, false, true} }, php::ClosureStrictTypes::Enabled)});
    parts = php::call(tmp_var_8, php::VarList{tmp_var_11});
    tmp_var_11.unset();

    tmp_var_12 = parts;
    {
        php::ForeachIterator tmp_var_13{tmp_var_12, false, tmp_var_14};
        while (tmp_var_13.next()) {
            k = tmp_var_13.value();
            php_nativeplaywright__keyboard__down(this_, php::toStringArgExact(k, get_str(461), 1, get_str(416)));
        }
    }
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(462))}}, tmp_var_16)) {
        tmp_var_15 = tmp_var_16;
    } else {
        tmp_var_15 = 0L;
    }
    delay = php::toFloat(tmp_var_15);
    if (php::toBool(((delay) > (php::toFloat(0L))))) {
        tmp_var_17 = this_.attr(get_persistent_prop(PersistentPropertyId{23}, get_str(433), get_str(341)), php::AttrMode::Get);
        php::Object tmp_var_18 = tmp_var_17;
        php_nativeplaywright__page__waitfortimeout(tmp_var_18, php::toFloat(delay));
        tmp_var_17.unset();
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{63}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{63}) = php::fn::function_exists(get_str(162)) ? 1 : 2; }
    tmp_var_19 = get_function_resolution_cache(FunctionResolutionCacheId{63}) == 1 ? get_func(RequestFuncId{8}, get_str(162)) : get_persistent_func(PersistentFuncId{8}, get_str(163));
    tmp_var_20 = php::call(tmp_var_19, php::VarList{parts});
    i = ((php::Var(tmp_var_20)) - (php::Var(1L)));
    tmp_var_20.unset();;
    
    for (;php::toBool(((php::Var(i)) >= (php::Var(0L)))); --i) {
        tmp_var_21 = parts.item(i, false);
        php_nativeplaywright__keyboard__up(this_, php::toStringArgExact(php::deindirect(tmp_var_21), get_str(465), 1, get_str(416)));
        tmp_var_21.unset();
    }
}

void php_nativeplaywright__keyboard__type(php::Object &this_, php::Str text, php::Array options) {
    php::Float delay = 0;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Array l;
    zend_function * tmp_var_2;
    php::Var tmp_var_3;
    php::Var ch;
    php::Var tmp_var_6;
    zend_class_entry *tmp_var_5 = get_persistent_class(PersistentClassId{13}, get_str(341));

    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(462))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = 0L;
    }
    delay = php::toFloat(tmp_var_0);
    l = php_nativeplaywright__keyboard__layout(this_);
    if (get_function_resolution_cache(FunctionResolutionCacheId{64}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{64}) = php::fn::function_exists(get_str(466)) ? 1 : 2; }
    tmp_var_2 = get_function_resolution_cache(FunctionResolutionCacheId{64}) == 1 ? get_func(RequestFuncId{33}, get_str(466)) : get_persistent_func(PersistentFuncId{37}, get_str(467));

    tmp_var_3 = php::call(tmp_var_2, php::VarList{text});
    {
        php::ForeachIterator tmp_var_4{tmp_var_3, false, tmp_var_5};
        while (tmp_var_4.next()) {
            ch = tmp_var_4.value();
            if (php::toBool(php::exists(l, {{php::ArrayDimFetch, php::Var(ch)}}))) {
                php_nativeplaywright__keyboard__press(this_, php::toStringArgExact(ch, get_str(469), 1, get_str(470)));
            } else {
                if (php::toBool(php::same(ch, get_str(471)))) {
                    php_nativeplaywright__keyboard__press(this_, get_str(346));
                } else {
                    php_nativeplaywright__keyboard__inserttext(this_, php::toStringArgExact(ch, get_str(473), 1, get_str(329)));
                }
            }
            if (php::toBool(((delay) > (php::toFloat(0L))))) {
                tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{23}, get_str(433), get_str(341)), php::AttrMode::Get);
                php::Object tmp_var_7 = tmp_var_6;
                php_nativeplaywright__page__waitfortimeout(tmp_var_7, php::toFloat(delay));
                tmp_var_6.unset();
            }
        }
    }
}

void php_nativeplaywright__keyboard__inserttext(php::Object &this_, php::Str text) {
    php::Var tmp_var_0;
    php::Var tmp_var_2;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{23}, get_str(433), get_str(341)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    tmp_var_2 = php::Array{
        { get_str(329).str(), php::Var(text) }
    };
    php_nativeplaywright__page__send(tmp_var_1, get_str(474), tmp_var_2);
    tmp_var_0.unset();
    tmp_var_2.unset();
}


ZEND_METHOD(NativePlaywright_Keyboard, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(475)));
        php_nativeplaywright__keyboard____construct(this_, php::takeValue(arg_page));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Keyboard, modifiers) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__keyboard__modifiers(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Keyboard, layout) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__keyboard__layout(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Keyboard, bit) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_key = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_key.isString()))) {
            php::throwArgumentTypeError(raw_arg_key, get_str(422), 1, get_str(416), get_str(98));
        }
        php::Str arg_key = php::toString(raw_arg_key);
        auto retval = php_nativeplaywright__keyboard__bit(this_, php::takeValue(arg_key));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Keyboard, resolveKey) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_key = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_key.isString()))) {
            php::throwArgumentTypeError(raw_arg_key, get_str(476), 1, get_str(416), get_str(98));
        }
        php::Str arg_key = php::toString(raw_arg_key);
        auto retval = php_nativeplaywright__keyboard__resolvekey(this_, php::takeValue(arg_key));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Keyboard, description) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_key = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_key.isString()))) {
            php::throwArgumentTypeError(raw_arg_key, get_str(477), 1, get_str(416), get_str(98));
        }
        php::Str arg_key = php::toString(raw_arg_key);
        auto retval = php_nativeplaywright__keyboard__description(this_, php::takeValue(arg_key));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Keyboard, down) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_key = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_key.isString()))) {
            php::throwArgumentTypeError(raw_arg_key, get_str(461), 1, get_str(416), get_str(98));
        }
        php::Str arg_key = php::toString(raw_arg_key);
        php_nativeplaywright__keyboard__down(this_, php::takeValue(arg_key));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Keyboard, editingCommand) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_code = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_code.isString()))) {
            php::throwArgumentTypeError(raw_arg_code, get_str(431), 1, get_str(130), get_str(98));
        }
        php::Str arg_code = php::toString(raw_arg_code);
        auto retval = php_nativeplaywright__keyboard__editingcommand(this_, php::takeValue(arg_code));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Keyboard, up) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_key = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_key.isString()))) {
            php::throwArgumentTypeError(raw_arg_key, get_str(465), 1, get_str(416), get_str(98));
        }
        php::Str arg_key = php::toString(raw_arg_key);
        php_nativeplaywright__keyboard__up(this_, php::takeValue(arg_key));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Keyboard, press) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_keys = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_keys.isString()))) {
            php::throwArgumentTypeError(raw_arg_keys, get_str(469), 1, get_str(470), get_str(98));
        }
        php::Str arg_keys = php::toString(raw_arg_keys);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__keyboard__press_arg_1_default_value()));
        php_nativeplaywright__keyboard__press(this_, php::takeValue(arg_keys),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Keyboard, type) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(478), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__keyboard__type_arg_1_default_value()));
        php_nativeplaywright__keyboard__type(this_, php::takeValue(arg_text),php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Keyboard, insertText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(473), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php_nativeplaywright__keyboard__inserttext(this_, php::takeValue(arg_text));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

