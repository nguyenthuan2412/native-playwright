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
#include <php_native_playwright_src_NativePlaywright_Waiter_65d6396c74_decl.h>

void php_nativeplaywright__waiter__resolve(php::Object &this_, php::Var value) {
    php::Var tmp_var_1;
    php::Bool tmp_var_2 = 0;
    php::Var tmp_var_3;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{2}, get_str(108));

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{3}, get_str(107), get_str(108)), php::AttrMode::Get))) {
        return;
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{3}, get_str(107), get_str(108)), php::AttrMode::Update) = true;
    typephp_write_property_scoped(this_, get_str(109), value, tmp_var_0);
    tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{5}, get_str(110), get_str(108)), php::AttrMode::Get);
    tmp_var_2 = php::toBool(!(php::same(tmp_var_1, php::null)));
    tmp_var_1.unset();
    if (php::toBool(tmp_var_2)) {
        tmp_var_3 = this_.attr(get_persistent_prop(PersistentPropertyId{5}, get_str(110), get_str(108)), php::AttrMode::Get);
        typephp_call_method_cached(tmp_var_3, get_str(111), get_method_call_cache(MethodCallCacheId{0}), php::VarList{true});
        tmp_var_3.unset();
    }
}

void php_nativeplaywright__waiter__reject(php::Object &this_, php::Object e) {
    php::Var tmp_var_0;
    php::Bool tmp_var_1 = 0;
    php::Var tmp_var_2;

    if (php::toBool(this_.attr(get_persistent_prop(PersistentPropertyId{3}, get_str(107), get_str(108)), php::AttrMode::Get))) {
        return;
    }
    this_.attr(get_persistent_prop(PersistentPropertyId{3}, get_str(107), get_str(108)), php::AttrMode::Update) = true;
    this_.attr(get_persistent_prop(PersistentPropertyId{6}, get_str(112), get_str(108)), php::AttrMode::Update) = e;
    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{5}, get_str(110), get_str(108)), php::AttrMode::Get);
    tmp_var_1 = php::toBool(!(php::same(tmp_var_0, php::null)));
    tmp_var_0.unset();
    if (php::toBool(tmp_var_1)) {
        tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{5}, get_str(110), get_str(108)), php::AttrMode::Get);
        typephp_call_method_cached(tmp_var_2, get_str(111), get_method_call_cache(MethodCallCacheId{1}), php::VarList{true});
        tmp_var_2.unset();
    }
}


ZEND_METHOD(NativePlaywright_Waiter, resolve) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var arg_value = php::getCallArg(0);
        php_nativeplaywright__waiter__resolve(this_, php::takeValue(arg_value));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Waiter, reject) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Object arg_e = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{3}, get_str(113)));
        php_nativeplaywright__waiter__reject(this_, php::takeValue(arg_e));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

