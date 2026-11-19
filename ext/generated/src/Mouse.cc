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
#include <php_native_playwright_src_NativePlaywright_Keyboard_4f4f2515ca_decl.h>
#include <php_native_playwright_src_NativePlaywright_Mouse_1796713ced_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>

void php_nativeplaywright__mouse____construct(php::Object &this_, php::Object page, php::Object keyboard) {
typephp_write_property_scoped(this_, "page", page, get_persistent_class(PersistentClassId{15}, get_str(478)));
typephp_write_property_scoped(this_, "keyboard", keyboard, get_persistent_class(PersistentClassId{15}, get_str(478)));

}

php::Int php_nativeplaywright__mouse__bit(php::Object &this_, php::Str b) {
    php::Int tmp_var_3 = 0;

    tmp_var_3 = (php::toInt([&]() -> php::Int {
        bool tmp_var_0 = false;
        if (!tmp_var_0) {
            tmp_var_0 = php::same(b, get_str(479));
        }
        if (tmp_var_0) {
            return 1L;
        }
        bool tmp_var_1 = false;
        if (!tmp_var_1) {
            tmp_var_1 = php::same(b, get_str(480));
        }
        if (tmp_var_1) {
            return 2L;
        }
        bool tmp_var_2 = false;
        if (!tmp_var_2) {
            tmp_var_2 = php::same(b, get_str(481));
        }
        if (tmp_var_2) {
            return 4L;
        }
        {
            return 0L;
        }
    }()));
    return tmp_var_3;
}

void php_nativeplaywright__mouse__move(php::Object &this_, php::Float x, php::Float y, php::Array options) {
    php::Var steps;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Int tmp_var_3 = 0;
    php::Float fx = 0;
    php::Float fy = 0;
    php::Int i = 0;
    php::Var tmp_var_4;
    php::Float tmp_var_6 = 0;
    php::Float tmp_var_7 = 0;
    php::Var tmp_var_8;
    php::Int tmp_var_9 = 0;
    php::Var tmp_var_10;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Float &_object_prop_this___x = this_.attrFloat(get_persistent_prop(PersistentPropertyId{24}, get_str(485), get_str(478)));
    php::Float &_object_prop_this___y = this_.attrFloat(get_persistent_prop(PersistentPropertyId{25}, get_str(486), get_str(478)));
    php::Int &_object_prop_this___buttons = this_.attrInt(get_persistent_prop(PersistentPropertyId{28}, get_str(490), get_str(478)));

    if (get_function_resolution_cache(FunctionResolutionCacheId{65}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{65}) = php::fn::function_exists(get_str(482)) ? 1 : 2; }
    tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{65}) == 1 ? get_func(RequestFuncId{34}, get_str(482)) : get_persistent_func(PersistentFuncId{36}, get_str(483));
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(484))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = 1L;
    }
    tmp_var_3 = php::toInt(tmp_var_1);
    steps = php::call(tmp_var_0, php::VarList{1L, tmp_var_3});
    fx = php::toFloat(_object_prop_this___x);
    fy = php::toFloat(_object_prop_this___y);
    i = php::toInt(1L);
    
    for (;php::toBool(((php::Var(i)) <= (php::Var(steps)))); ++i) {
        _object_prop_this___x = php::toFloatExact(((php::Var(fx)) + (php::Var(((php::Var(((x) - (fx)))) * (php::Var(((php::Var(i)) / (php::Var(steps))))))))), "NativePlaywright\\Mouse::$x");
        _object_prop_this___y = php::toFloatExact(((php::Var(fy)) + (php::Var(((php::Var(((y) - (fy)))) * (php::Var(((php::Var(i)) / (php::Var(steps))))))))), "NativePlaywright\\Mouse::$y");
        tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{26}, get_str(432), get_str(478)), php::AttrMode::Get);
        php::Object tmp_var_5 = tmp_var_4;
        tmp_var_6 = php::toFloat(_object_prop_this___x);
        tmp_var_7 = php::toFloat(_object_prop_this___y);
        tmp_var_8 = this_.attr(get_persistent_prop(PersistentPropertyId{27}, get_str(489), get_str(478)), php::AttrMode::Get);
        tmp_var_9 = php::toInt(_object_prop_this___buttons);
        tmp_var_10 = this_.attr(get_persistent_prop(PersistentPropertyId{29}, get_str(491), get_str(478)), php::AttrMode::Get);
        php::Object tmp_var_11 = tmp_var_10;
        tmp_var_12 = php_nativeplaywright__keyboard__modifiers(tmp_var_11);
        tmp_var_10.unset();
        tmp_var_14 = php::Array{
            { get_str(424).str(), php::Var(get_str(488)) }, 
            { get_str(485).str(), php::Var(tmp_var_6) }, 
            { get_str(486).str(), php::Var(tmp_var_7) }, 
            { get_str(489).str(), php::Var(tmp_var_8) }, 
            { get_str(490).str(), php::Var(tmp_var_9) }, 
            { get_str(341).str(), php::Var((tmp_var_13 = tmp_var_12)) }
        };
        tmp_var_8.unset();
        tmp_var_12.unset();
        php_nativeplaywright__page__send(tmp_var_5, get_str(487), tmp_var_14);
        tmp_var_4.unset();
        tmp_var_14.unset();
    }
}

void php_nativeplaywright__mouse__down(php::Object &this_, php::Array options) {
    php::Str b;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Float tmp_var_4 = 0;
    php::Float tmp_var_5 = 0;
    php::Int tmp_var_6 = 0;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Int tmp_var_9 = 0;
    php::Var tmp_var_10;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Int &_object_prop_this___buttons = this_.attrInt(get_persistent_prop(PersistentPropertyId{28}, get_str(490), get_str(478)));
    php::Float &_object_prop_this___x = this_.attrFloat(get_persistent_prop(PersistentPropertyId{24}, get_str(485), get_str(478)));
    php::Float &_object_prop_this___y = this_.attrFloat(get_persistent_prop(PersistentPropertyId{25}, get_str(486), get_str(478)));

    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(489))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = get_str(479);
    }
    b = php::toString(tmp_var_0);
    this_.attr(get_persistent_prop(PersistentPropertyId{27}, get_str(489), get_str(478)), php::AttrMode::Update) = b;
    _object_prop_this___buttons |= (php_nativeplaywright__mouse__bit(this_, b));
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{26}, get_str(432), get_str(478)), php::AttrMode::Get);
    php::Object tmp_var_3 = tmp_var_2;
    tmp_var_4 = php::toFloat(_object_prop_this___x);
    tmp_var_5 = php::toFloat(_object_prop_this___y);
    tmp_var_6 = php::toInt(_object_prop_this___buttons);
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(493))}}, tmp_var_8)) {
            tmp_var_7 = tmp_var_8;
        } else {
            tmp_var_7 = 1L;
        }
    tmp_var_9 = php::toInt(tmp_var_7);
    tmp_var_10 = this_.attr(get_persistent_prop(PersistentPropertyId{29}, get_str(491), get_str(478)), php::AttrMode::Get);
    php::Object tmp_var_11 = tmp_var_10;
    tmp_var_12 = php_nativeplaywright__keyboard__modifiers(tmp_var_11);
    tmp_var_10.unset();
    tmp_var_14 = php::Array{
        { get_str(424).str(), php::Var(get_str(492)) }, 
        { get_str(485).str(), php::Var(tmp_var_4) }, 
        { get_str(486).str(), php::Var(tmp_var_5) }, 
        { get_str(489).str(), php::Var(b) }, 
        { get_str(490).str(), php::Var(tmp_var_6) }, 
        { get_str(493).str(), php::Var(tmp_var_9) }, 
        { get_str(341).str(), php::Var((tmp_var_13 = tmp_var_12)) }
    };
    tmp_var_12.unset();
    php_nativeplaywright__page__send(tmp_var_3, get_str(487), tmp_var_14);
    tmp_var_2.unset();
    tmp_var_14.unset();
}

void php_nativeplaywright__mouse__up(php::Object &this_, php::Array options) {
    php::Str b;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Float tmp_var_4 = 0;
    php::Float tmp_var_5 = 0;
    php::Int tmp_var_6 = 0;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Int tmp_var_9 = 0;
    php::Var tmp_var_10;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Int &_object_prop_this___buttons = this_.attrInt(get_persistent_prop(PersistentPropertyId{28}, get_str(490), get_str(478)));
    php::Float &_object_prop_this___x = this_.attrFloat(get_persistent_prop(PersistentPropertyId{24}, get_str(485), get_str(478)));
    php::Float &_object_prop_this___y = this_.attrFloat(get_persistent_prop(PersistentPropertyId{25}, get_str(486), get_str(478)));

    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(489))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = get_str(479);
    }
    b = php::toString(tmp_var_0);
    this_.attr(get_persistent_prop(PersistentPropertyId{27}, get_str(489), get_str(478)), php::AttrMode::Update) = get_str(17);
    _object_prop_this___buttons &= (~php::toInt(php_nativeplaywright__mouse__bit(this_, b)));
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{26}, get_str(432), get_str(478)), php::AttrMode::Get);
    php::Object tmp_var_3 = tmp_var_2;
    tmp_var_4 = php::toFloat(_object_prop_this___x);
    tmp_var_5 = php::toFloat(_object_prop_this___y);
    tmp_var_6 = php::toInt(_object_prop_this___buttons);
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(493))}}, tmp_var_8)) {
            tmp_var_7 = tmp_var_8;
        } else {
            tmp_var_7 = 1L;
        }
    tmp_var_9 = php::toInt(tmp_var_7);
    tmp_var_10 = this_.attr(get_persistent_prop(PersistentPropertyId{29}, get_str(491), get_str(478)), php::AttrMode::Get);
    php::Object tmp_var_11 = tmp_var_10;
    tmp_var_12 = php_nativeplaywright__keyboard__modifiers(tmp_var_11);
    tmp_var_10.unset();
    tmp_var_14 = php::Array{
        { get_str(424).str(), php::Var(get_str(494)) }, 
        { get_str(485).str(), php::Var(tmp_var_4) }, 
        { get_str(486).str(), php::Var(tmp_var_5) }, 
        { get_str(489).str(), php::Var(b) }, 
        { get_str(490).str(), php::Var(tmp_var_6) }, 
        { get_str(493).str(), php::Var(tmp_var_9) }, 
        { get_str(341).str(), php::Var((tmp_var_13 = tmp_var_12)) }
    };
    tmp_var_12.unset();
    php_nativeplaywright__page__send(tmp_var_3, get_str(487), tmp_var_14);
    tmp_var_2.unset();
    tmp_var_14.unset();
}

void php_nativeplaywright__mouse__click(php::Object &this_, php::Float x, php::Float y, php::Array options) {
    php::Int count = 0;
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Float delay = 0;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Str b;
    php::Var tmp_var_4;
    php::Var tmp_var_5;
    php::Array calls;
    php::Int i = 0;
    php::Var tmp_var_6;
    php::Var type;
    php::Int tmp_var_9 = 0;
    php::Var tmp_var_10;
    php::Var tmp_var_12;
    php::Var tmp_var_13;
    php::Var tmp_var_14;
    php::Var tmp_var_15;
    php::Var tmp_var_16;
    php::Var tmp_var_18;
    php::Var tmp_var_19;
    php::Var tmp_var_21;
    zend_class_entry *tmp_var_8 = get_persistent_class(PersistentClassId{15}, get_str(478));

    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(493))}}, tmp_var_1)) {
        tmp_var_0 = tmp_var_1;
    } else {
        tmp_var_0 = 1L;
    }
    count = php::toInt(tmp_var_0);
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(461))}}, tmp_var_3)) {
        tmp_var_2 = tmp_var_3;
    } else {
        tmp_var_2 = 0L;
    }
    delay = php::toFloat(tmp_var_2);
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(489))}}, tmp_var_5)) {
        tmp_var_4 = tmp_var_5;
    } else {
        tmp_var_4 = get_str(479);
    }
    b = php::toString(tmp_var_4);
    php_nativeplaywright__mouse__move(this_, php::toFloat(x), php::toFloat(y));
    if (php::toBool(((delay) <= (php::toFloat(0L))))) {
        calls = php::Array{};
        i = php::toInt(1L);
        
        for (;php::toBool(((i) <= (count))); ++i) {

            tmp_var_6 = php::Array{
                php::Var(get_str(492)), 
                php::Var(get_str(494))
            };
            {
                php::ForeachIterator tmp_var_7{tmp_var_6, false, tmp_var_8};
                while (tmp_var_7.next()) {
                    type = tmp_var_7.value();
                    tmp_var_9 = php::toInt((php::toBool(php::same(type, get_str(492)))) ? (php_nativeplaywright__mouse__bit(this_, b)) : (0L));
                    tmp_var_10 = this_.attr(get_persistent_prop(PersistentPropertyId{29}, get_str(491), get_str(478)), php::AttrMode::Get);
                    php::Object tmp_var_11 = tmp_var_10;
                    tmp_var_12 = php_nativeplaywright__keyboard__modifiers(tmp_var_11);
                    tmp_var_10.unset();
                    tmp_var_14 = php::Array{
                            { get_str(424).str(), php::Var(type) }, 
                            { get_str(485).str(), php::Var(x) }, 
                            { get_str(486).str(), php::Var(y) }, 
                            { get_str(489).str(), php::Var(b) }, 
                            { get_str(490).str(), php::Var(tmp_var_9) }, 
                            { get_str(493).str(), php::Var(i) }, 
                            { get_str(341).str(), php::Var((tmp_var_13 = tmp_var_12)) }
                        };
                    tmp_var_12.unset();
                    ((tmp_var_15 = php::Array{
                        php::Var(get_str(487)), 
                        php::Var(tmp_var_14)
                    }, calls.append(tmp_var_15)), tmp_var_15);
                    tmp_var_14.unset();
                }
            }
        }
        tmp_var_16 = this_.attr(get_persistent_prop(PersistentPropertyId{26}, get_str(432), get_str(478)), php::AttrMode::Get);
        php::Object tmp_var_17 = tmp_var_16;
        php_nativeplaywright__page__sendmany(tmp_var_17, calls);
        tmp_var_16.unset();
        return;
    }
    i = php::toInt(1L);
    
    for (;php::toBool(((i) <= (count))); ++i) {
        tmp_var_18 = php::Array{
            { get_str(489).str(), php::Var(b) }, 
            { get_str(493).str(), php::Var(i) }
        };
        php_nativeplaywright__mouse__down(this_, tmp_var_18);
        tmp_var_18.unset();
        tmp_var_19 = this_.attr(get_persistent_prop(PersistentPropertyId{26}, get_str(432), get_str(478)), php::AttrMode::Get);
        php::Object tmp_var_20 = tmp_var_19;
        php_nativeplaywright__page__waitfortimeout(tmp_var_20, php::toFloat(delay));
        tmp_var_19.unset();
        tmp_var_21 = php::Array{
            { get_str(489).str(), php::Var(b) }, 
            { get_str(493).str(), php::Var(i) }
        };
        php_nativeplaywright__mouse__up(this_, tmp_var_21);
        tmp_var_21.unset();
    }
}

void php_nativeplaywright__mouse__dblclick(php::Object &this_, php::Float x, php::Float y, php::Array options) {
    options.item(get_str(493), true) = 2L;
    php_nativeplaywright__mouse__click(this_, php::toFloat(x), php::toFloat(y), options);
}

void php_nativeplaywright__mouse__wheel(php::Object &this_, php::Float deltaX, php::Float deltaY) {
    php::Var tmp_var_0;
    php::Float tmp_var_2 = 0;
    php::Float tmp_var_3 = 0;
    php::Var tmp_var_4;
    php::Var tmp_var_6;
    php::Var tmp_var_7;
    php::Var tmp_var_8;
    php::Float &_object_prop_this___x = this_.attrFloat(get_persistent_prop(PersistentPropertyId{24}, get_str(485), get_str(478)));
    php::Float &_object_prop_this___y = this_.attrFloat(get_persistent_prop(PersistentPropertyId{25}, get_str(486), get_str(478)));

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{26}, get_str(432), get_str(478)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    tmp_var_2 = php::toFloat(_object_prop_this___x);
    tmp_var_3 = php::toFloat(_object_prop_this___y);
    tmp_var_4 = this_.attr(get_persistent_prop(PersistentPropertyId{29}, get_str(491), get_str(478)), php::AttrMode::Get);
    php::Object tmp_var_5 = tmp_var_4;
    tmp_var_6 = php_nativeplaywright__keyboard__modifiers(tmp_var_5);
    tmp_var_4.unset();
    tmp_var_8 = php::Array{
        { get_str(424).str(), php::Var(get_str(498)) }, 
        { get_str(485).str(), php::Var(tmp_var_2) }, 
        { get_str(486).str(), php::Var(tmp_var_3) }, 
        { get_str(499).str(), php::Var(deltaX) }, 
        { get_str(500).str(), php::Var(deltaY) }, 
        { get_str(341).str(), php::Var((tmp_var_7 = tmp_var_6)) }
    };
    tmp_var_6.unset();
    php_nativeplaywright__page__send(tmp_var_1, get_str(487), tmp_var_8);
    tmp_var_0.unset();
    tmp_var_8.unset();
}


ZEND_METHOD(NativePlaywright_Mouse, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(474)));
        php::Object arg_keyboard = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{13}, get_str(340)));
        php_nativeplaywright__mouse____construct(this_, php::takeValue(arg_page),php::takeValue(arg_keyboard));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Mouse, bit) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_b = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_b.isString()))) {
            php::throwArgumentTypeError(raw_arg_b, get_str(501), 1, get_str(502), get_str(98));
        }
        php::Str arg_b = php::toString(raw_arg_b);
        auto retval = php_nativeplaywright__mouse__bit(this_, php::takeValue(arg_b));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Mouse, move) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_x = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_x.isFloat() || raw_arg_x.isInt())))) {
            php::throwArgumentTypeError(raw_arg_x, get_str(503), 1, get_str(485), get_str(103));
        }
        php::Float arg_x = php::toFloat(raw_arg_x);
        php::Var raw_arg_y = php::getCallArg(1);
        if (UNEXPECTED(!((raw_arg_y.isFloat() || raw_arg_y.isInt())))) {
            php::throwArgumentTypeError(raw_arg_y, get_str(503), 2, get_str(486), get_str(103));
        }
        php::Float arg_y = php::toFloat(raw_arg_y);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__mouse__move_arg_2_default_value()));
        php_nativeplaywright__mouse__move(this_, arg_x,arg_y,php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Mouse, down) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__mouse__down_arg_0_default_value()));
        php_nativeplaywright__mouse__down(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Mouse, up) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 1, false);
        php::Array arg_options = php::toArray(php::getCallArg(0, php_nativeplaywright__mouse__up_arg_0_default_value()));
        php_nativeplaywright__mouse__up(this_, php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Mouse, click) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_x = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_x.isFloat() || raw_arg_x.isInt())))) {
            php::throwArgumentTypeError(raw_arg_x, get_str(504), 1, get_str(485), get_str(103));
        }
        php::Float arg_x = php::toFloat(raw_arg_x);
        php::Var raw_arg_y = php::getCallArg(1);
        if (UNEXPECTED(!((raw_arg_y.isFloat() || raw_arg_y.isInt())))) {
            php::throwArgumentTypeError(raw_arg_y, get_str(504), 2, get_str(486), get_str(103));
        }
        php::Float arg_y = php::toFloat(raw_arg_y);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__mouse__click_arg_2_default_value()));
        php_nativeplaywright__mouse__click(this_, arg_x,arg_y,php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Mouse, dblclick) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 3, false);
        php::Var raw_arg_x = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_x.isFloat() || raw_arg_x.isInt())))) {
            php::throwArgumentTypeError(raw_arg_x, get_str(505), 1, get_str(485), get_str(103));
        }
        php::Float arg_x = php::toFloat(raw_arg_x);
        php::Var raw_arg_y = php::getCallArg(1);
        if (UNEXPECTED(!((raw_arg_y.isFloat() || raw_arg_y.isInt())))) {
            php::throwArgumentTypeError(raw_arg_y, get_str(505), 2, get_str(486), get_str(103));
        }
        php::Float arg_y = php::toFloat(raw_arg_y);
        php::Array arg_options = php::toArray(php::getCallArg(2, php_nativeplaywright__mouse__dblclick_arg_2_default_value()));
        php_nativeplaywright__mouse__dblclick(this_, arg_x,arg_y,php::takeValue(arg_options));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Mouse, wheel) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Var raw_arg_deltaX = php::getCallArg(0);
        if (UNEXPECTED(!((raw_arg_deltaX.isFloat() || raw_arg_deltaX.isInt())))) {
            php::throwArgumentTypeError(raw_arg_deltaX, get_str(506), 1, get_str(499), get_str(103));
        }
        php::Float arg_deltaX = php::toFloat(raw_arg_deltaX);
        php::Var raw_arg_deltaY = php::getCallArg(1);
        if (UNEXPECTED(!((raw_arg_deltaY.isFloat() || raw_arg_deltaY.isInt())))) {
            php::throwArgumentTypeError(raw_arg_deltaY, get_str(506), 2, get_str(500), get_str(103));
        }
        php::Float arg_deltaY = php::toFloat(raw_arg_deltaY);
        php_nativeplaywright__mouse__wheel(this_, arg_deltaX,arg_deltaY);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

