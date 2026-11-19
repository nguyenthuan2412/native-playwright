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
#include <php_native_playwright_src_NativePlaywright_FrameLocator_98aef2ee5b_decl.h>
#include <php_native_playwright_src_NativePlaywright_Frame_07e74a6952_decl.h>
#include <php_native_playwright_src_NativePlaywright_Locator_206b2f41f4_decl.h>

void php_nativeplaywright__framelocator____construct(php::Object &this_, php::Object frame, php::Str frameSelector) {
typephp_write_property_scoped(this_, "frame", frame, get_persistent_class(PersistentClassId{10}, get_str(308)));
typephp_write_property_scoped(this_, "frameSelector", frameSelector, get_persistent_class(PersistentClassId{10}, get_str(308)));

}

php::Object php_nativeplaywright__framelocator__inside(php::Object &this_, php::Str sel) {
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Object tmp_var_5;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{18}, get_str(309), get_str(308)), php::AttrMode::Get);
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{19}, get_str(310), get_str(308)), php::AttrMode::Get);
    tmp_var_3 = get_str(21);
    tmp_var_4 = php::concat({tmp_var_2, tmp_var_3, sel});
    tmp_var_2.unset();
    tmp_var_3.unset();
    tmp_var_5 = (php::newObject(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), tmp_var_4}));
    tmp_var_1.unset();
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Object php_nativeplaywright__framelocator__locator(php::Object &this_, php::Var selector, php::Array options) {
    php::Var sel;
    php::Object tmp_var_0;
    php::Object tmp_var_1;
    if (UNEXPECTED(!(selector.isString() || (selector.isObject() && php::instanceOf(selector, get_persistent_class(PersistentClassId{11}, get_str(311))))))) {
        php::throwArgumentTypeError(selector, get_str(317), 1, get_str(312), get_str(318));
    }

    sel = (php::toBool(php::instanceOf(selector, get_persistent_class(PersistentClassId{11}, get_str(311))))) ? (typephp_call_method_cached(selector, get_str(312), get_method_call_cache(MethodCallCacheId{9}))) : (selector);
    tmp_var_0 = php_nativeplaywright__framelocator__inside(this_, php::toStringArgExact(sel, get_str(314), 1, get_str(315)));
    tmp_var_1 = (php_nativeplaywright__locator__filter(tmp_var_0, options));
    tmp_var_0.unset();
    return tmp_var_1;
}

php::Object php_nativeplaywright__framelocator__getbytext(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Object tmp_var_4;
    php::Var tmp_var_5;
    php::Object tmp_var_6;
    Z_PTR_P(tmp_var_4.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_0 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = false;
    }
    tmp_var_3 = php::toBool(tmp_var_1);
    tmp_var_5 = php_nativeplaywright__locator__bytext(tmp_var_4, tmp_var_0, php::toBool(tmp_var_3));
    tmp_var_0.unset();
    tmp_var_6 = (php_nativeplaywright__framelocator__inside(this_, tmp_var_5));
    tmp_var_5.unset();
    return tmp_var_6;
}

php::Object php_nativeplaywright__framelocator__getbyrole(php::Object &this_, php::Str role, php::Array options) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;
    php::Object tmp_var_2;
    Z_PTR_P(tmp_var_0.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_1 = php_nativeplaywright__locator__byrole(tmp_var_0, role, options);
    tmp_var_2 = (php_nativeplaywright__framelocator__inside(this_, tmp_var_1));
    tmp_var_1.unset();
    return tmp_var_2;
}

php::Object php_nativeplaywright__framelocator__getbylabel(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Object tmp_var_4;
    php::Var tmp_var_5;
    php::Object tmp_var_6;
    Z_PTR_P(tmp_var_4.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_0 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = false;
    }
    tmp_var_3 = php::toBool(tmp_var_1);
    tmp_var_5 = php_nativeplaywright__locator__bylabel(tmp_var_4, tmp_var_0, php::toBool(tmp_var_3));
    tmp_var_0.unset();
    tmp_var_6 = (php_nativeplaywright__framelocator__inside(this_, tmp_var_5));
    tmp_var_5.unset();
    return tmp_var_6;
}

php::Object php_nativeplaywright__framelocator__getbyplaceholder(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Object tmp_var_4;
    php::Var tmp_var_5;
    php::Object tmp_var_6;
    Z_PTR_P(tmp_var_4.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_0 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = false;
    }
    tmp_var_3 = php::toBool(tmp_var_1);
    tmp_var_5 = php_nativeplaywright__locator__byattr(tmp_var_4, get_str(320), tmp_var_0, php::toBool(tmp_var_3));
    tmp_var_0.unset();
    tmp_var_6 = (php_nativeplaywright__framelocator__inside(this_, tmp_var_5));
    tmp_var_5.unset();
    return tmp_var_6;
}

php::Object php_nativeplaywright__framelocator__getbyalttext(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Object tmp_var_4;
    php::Var tmp_var_5;
    php::Object tmp_var_6;
    Z_PTR_P(tmp_var_4.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_0 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = false;
    }
    tmp_var_3 = php::toBool(tmp_var_1);
    tmp_var_5 = php_nativeplaywright__locator__byattr(tmp_var_4, get_str(321), tmp_var_0, php::toBool(tmp_var_3));
    tmp_var_0.unset();
    tmp_var_6 = (php_nativeplaywright__framelocator__inside(this_, tmp_var_5));
    tmp_var_5.unset();
    return tmp_var_6;
}

php::Object php_nativeplaywright__framelocator__getbytitle(php::Object &this_, php::Str text, php::Array options) {
    php::Str tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Bool tmp_var_3 = 0;
    php::Object tmp_var_4;
    php::Var tmp_var_5;
    php::Object tmp_var_6;
    Z_PTR_P(tmp_var_4.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_0 = text;
    if (php::exists(options, {{php::ArrayDimFetch, php::Var(get_str(319))}}, tmp_var_2)) {
        tmp_var_1 = tmp_var_2;
    } else {
        tmp_var_1 = false;
    }
    tmp_var_3 = php::toBool(tmp_var_1);
    tmp_var_5 = php_nativeplaywright__locator__byattr(tmp_var_4, get_str(322), tmp_var_0, php::toBool(tmp_var_3));
    tmp_var_0.unset();
    tmp_var_6 = (php_nativeplaywright__framelocator__inside(this_, tmp_var_5));
    tmp_var_5.unset();
    return tmp_var_6;
}

php::Object php_nativeplaywright__framelocator__getbytestid(php::Object &this_, php::Str testId) {
    php::Object tmp_var_0;
    php::Var tmp_var_1;
    php::Object tmp_var_2;
    Z_PTR_P(tmp_var_0.ptr()) = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_1 = php_nativeplaywright__locator__bytestid(tmp_var_0, testId);
    tmp_var_2 = (php_nativeplaywright__framelocator__inside(this_, tmp_var_1));
    tmp_var_1.unset();
    return tmp_var_2;
}

php::Object php_nativeplaywright__framelocator__framelocator(php::Object &this_, php::Str selector) {
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Object tmp_var_5;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{10}, get_str(308));

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{18}, get_str(309), get_str(308)), php::AttrMode::Get);
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{19}, get_str(310), get_str(308)), php::AttrMode::Get);
    tmp_var_3 = get_str(21);
    tmp_var_4 = php::concat({tmp_var_2, tmp_var_3, selector});
    tmp_var_2.unset();
    tmp_var_3.unset();
    tmp_var_5 = (php::newObject(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), tmp_var_4}));
    tmp_var_1.unset();
    tmp_var_4.unset();
    return tmp_var_5;
}

php::Object php_nativeplaywright__framelocator__first(php::Object &this_) {
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Object tmp_var_4;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{10}, get_str(308));

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{18}, get_str(309), get_str(308)), php::AttrMode::Get);
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{19}, get_str(310), get_str(308)), php::AttrMode::Get);
    tmp_var_3 = php::concat({tmp_var_2, get_str(323)});
    tmp_var_2.unset();
    tmp_var_4 = (php::newObject(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), tmp_var_3}));
    tmp_var_1.unset();
    tmp_var_3.unset();
    return tmp_var_4;
}

php::Object php_nativeplaywright__framelocator__last(php::Object &this_) {
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Object tmp_var_4;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{10}, get_str(308));

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{18}, get_str(309), get_str(308)), php::AttrMode::Get);
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{19}, get_str(310), get_str(308)), php::AttrMode::Get);
    tmp_var_3 = php::concat({tmp_var_2, get_str(324)});
    tmp_var_2.unset();
    tmp_var_4 = (php::newObject(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), tmp_var_3}));
    tmp_var_1.unset();
    tmp_var_3.unset();
    return tmp_var_4;
}

php::Object php_nativeplaywright__framelocator__nth(php::Object &this_, php::Int index) {
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Object tmp_var_4;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{10}, get_str(308));

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{18}, get_str(309), get_str(308)), php::AttrMode::Get);
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{19}, get_str(310), get_str(308)), php::AttrMode::Get);
    tmp_var_3 = php::concat({tmp_var_2, get_str(325), index});
    tmp_var_2.unset();
    tmp_var_4 = (php::newObject(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), tmp_var_3}));
    tmp_var_1.unset();
    tmp_var_3.unset();
    return tmp_var_4;
}

php::Object php_nativeplaywright__framelocator__owner(php::Object &this_) {
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Object tmp_var_3;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{11}, get_str(311));

    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{18}, get_str(309), get_str(308)), php::AttrMode::Get);
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{19}, get_str(310), get_str(308)), php::AttrMode::Get);
    tmp_var_3 = (php::newObject(tmp_var_0, php::VarList{php::deindirect(tmp_var_1), php::deindirect(tmp_var_2)}));
    tmp_var_1.unset();
    tmp_var_2.unset();
    return tmp_var_3;
}


ZEND_METHOD(NativePlaywright_FrameLocator, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(2, 2, false);
        php::Object arg_frame = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{12}, get_str(326)));
        php::Var raw_arg_frameSelector = php::getCallArg(1);
        if (UNEXPECTED(!(raw_arg_frameSelector.isString()))) {
            php::throwArgumentTypeError(raw_arg_frameSelector, get_str(327), 2, get_str(310), get_str(98));
        }
        php::Str arg_frameSelector = php::toString(raw_arg_frameSelector);
        php_nativeplaywright__framelocator____construct(this_, php::takeValue(arg_frame),php::takeValue(arg_frameSelector));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, inside) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_sel = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_sel.isString()))) {
            php::throwArgumentTypeError(raw_arg_sel, get_str(314), 1, get_str(315), get_str(98));
        }
        php::Str arg_sel = php::toString(raw_arg_sel);
        auto retval = php_nativeplaywright__framelocator__inside(this_, php::takeValue(arg_sel));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, locator) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var arg_selector = php::getCallArg(0);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__framelocator__locator_arg_1_default_value()));
        auto retval = php_nativeplaywright__framelocator__locator(this_, php::takeValue(arg_selector),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, getByText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(328), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__framelocator__getbytext_arg_1_default_value()));
        auto retval = php_nativeplaywright__framelocator__getbytext(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, getByRole) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_role = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_role.isString()))) {
            php::throwArgumentTypeError(raw_arg_role, get_str(330), 1, get_str(331), get_str(98));
        }
        php::Str arg_role = php::toString(raw_arg_role);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__framelocator__getbyrole_arg_1_default_value()));
        auto retval = php_nativeplaywright__framelocator__getbyrole(this_, php::takeValue(arg_role),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, getByLabel) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(332), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__framelocator__getbylabel_arg_1_default_value()));
        auto retval = php_nativeplaywright__framelocator__getbylabel(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, getByPlaceholder) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(333), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__framelocator__getbyplaceholder_arg_1_default_value()));
        auto retval = php_nativeplaywright__framelocator__getbyplaceholder(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, getByAltText) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(334), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__framelocator__getbyalttext_arg_1_default_value()));
        auto retval = php_nativeplaywright__framelocator__getbyalttext(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, getByTitle) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 2, false);
        php::Var raw_arg_text = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_text.isString()))) {
            php::throwArgumentTypeError(raw_arg_text, get_str(335), 1, get_str(329), get_str(98));
        }
        php::Str arg_text = php::toString(raw_arg_text);
        php::Array arg_options = php::toArray(php::getCallArg(1, php_nativeplaywright__framelocator__getbytitle_arg_1_default_value()));
        auto retval = php_nativeplaywright__framelocator__getbytitle(this_, php::takeValue(arg_text),php::takeValue(arg_options));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, getByTestId) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_testId = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_testId.isString()))) {
            php::throwArgumentTypeError(raw_arg_testId, get_str(336), 1, get_str(337), get_str(98));
        }
        php::Str arg_testId = php::toString(raw_arg_testId);
        auto retval = php_nativeplaywright__framelocator__getbytestid(this_, php::takeValue(arg_testId));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, frameLocator) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_selector = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_selector.isString()))) {
            php::throwArgumentTypeError(raw_arg_selector, get_str(338), 1, get_str(312), get_str(98));
        }
        php::Str arg_selector = php::toString(raw_arg_selector);
        auto retval = php_nativeplaywright__framelocator__framelocator(this_, php::takeValue(arg_selector));
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, first) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__framelocator__first(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, last) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__framelocator__last(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, nth) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_index = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_index.isInt()))) {
            php::throwArgumentTypeError(raw_arg_index, get_str(339), 1, get_str(340), get_str(89));
        }
        php::Int arg_index = php::toInt(raw_arg_index);
        auto retval = php_nativeplaywright__framelocator__nth(this_, arg_index);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_FrameLocator, owner) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__framelocator__owner(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

