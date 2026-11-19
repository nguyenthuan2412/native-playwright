/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 788c39b67e4ebe43823005ccb991c8d3da71c1cf */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Waiter_resolve, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Waiter_reject, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, e, Throwable, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Waiter, resolve);
ZEND_METHOD(NativePlaywright_Waiter, reject);

static const zend_function_entry class_NativePlaywright_Waiter_methods[] = {
	ZEND_ME(NativePlaywright_Waiter, resolve, arginfo_class_NativePlaywright_Waiter_resolve, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Waiter, reject, arginfo_class_NativePlaywright_Waiter_reject, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Waiter(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Waiter", class_NativePlaywright_Waiter_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_done_default_value;
	ZVAL_FALSE(&property_done_default_value);
	zend_string *property_done_name = zend_string_init("done", sizeof("done") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_done_name);
	zend_declare_typed_property(class_entry, property_done_name, &property_done_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_done_name, true);

	zval property_value_default_value;
	ZVAL_NULL(&property_value_default_value);
	typephp_prepare_property_redeclaration(class_entry, ZSTR_KNOWN(ZEND_STR_VALUE));
	zend_declare_typed_property(class_entry, ZSTR_KNOWN(ZEND_STR_VALUE), &property_value_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));

	zval property_error_default_value;
	ZVAL_NULL(&property_error_default_value);
	zend_string *property_error_name = zend_string_init("error", sizeof("error") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_error_name);
	zend_string *property_error_class_Throwable = zend_string_init("Throwable", sizeof("Throwable")-1, 1);
	zend_declare_typed_property(class_entry, property_error_name, &property_error_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_error_class_Throwable, 0, MAY_BE_NULL));
	zend_string_release_ex(property_error_name, true);

	zval property_channel_default_value;
	ZVAL_NULL(&property_channel_default_value);
	zend_string *property_channel_name = zend_string_init("channel", sizeof("channel") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_channel_name);
	zend_declare_typed_property(class_entry, property_channel_name, &property_channel_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release_ex(property_channel_name, true);

	zval property_id_default_value;
	ZVAL_LONG(&property_id_default_value, 0);
	zend_string *property_id_name = zend_string_init("id", sizeof("id") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_id_name);
	zend_declare_typed_property(class_entry, property_id_name, &property_id_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_id_name, true);

	return class_entry;
}
