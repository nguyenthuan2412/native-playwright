/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 8b8d77851260cd28cd19b107e26dbc0315bab960 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Dialog___construct, 0, 0, 4)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Dialog_type, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Dialog_message arginfo_class_NativePlaywright_Dialog_type

#define arginfo_class_NativePlaywright_Dialog_defaultValue arginfo_class_NativePlaywright_Dialog_type

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Dialog_page, 0, 0, NativePlaywright\\Page, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Dialog_isHandled, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Dialog_accept, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, promptText, IS_STRING, 0, "''")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Dialog_dismiss, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Dialog_handle, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, accept, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Dialog, __construct);
ZEND_METHOD(NativePlaywright_Dialog, type);
ZEND_METHOD(NativePlaywright_Dialog, message);
ZEND_METHOD(NativePlaywright_Dialog, defaultValue);
ZEND_METHOD(NativePlaywright_Dialog, page);
ZEND_METHOD(NativePlaywright_Dialog, isHandled);
ZEND_METHOD(NativePlaywright_Dialog, accept);
ZEND_METHOD(NativePlaywright_Dialog, dismiss);
ZEND_METHOD(NativePlaywright_Dialog, handle);

static const zend_function_entry class_NativePlaywright_Dialog_methods[] = {
	ZEND_ME(NativePlaywright_Dialog, __construct, arginfo_class_NativePlaywright_Dialog___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Dialog, type, arginfo_class_NativePlaywright_Dialog_type, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Dialog, message, arginfo_class_NativePlaywright_Dialog_message, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Dialog, defaultValue, arginfo_class_NativePlaywright_Dialog_defaultValue, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Dialog, page, arginfo_class_NativePlaywright_Dialog_page, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Dialog, isHandled, arginfo_class_NativePlaywright_Dialog_isHandled, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Dialog, accept, arginfo_class_NativePlaywright_Dialog_accept, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Dialog, dismiss, arginfo_class_NativePlaywright_Dialog_dismiss, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Dialog, handle, arginfo_class_NativePlaywright_Dialog_handle, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Dialog(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Dialog", class_NativePlaywright_Dialog_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_handled_default_value;
	ZVAL_FALSE(&property_handled_default_value);
	zend_string *property_handled_name = zend_string_init("handled", sizeof("handled") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_handled_name);
	zend_declare_typed_property(class_entry, property_handled_name, &property_handled_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_handled_name, true);

	zval property_page_default_value;
	ZVAL_NULL(&property_page_default_value);
	zend_string *property_page_name = zend_string_init("page", sizeof("page") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_page_name);
	zend_string *property_page_class_NativePlaywright_Page = zend_string_init("NativePlaywright\\Page", sizeof("NativePlaywright\\Page")-1, 1);
	zend_declare_typed_property(class_entry, property_page_name, &property_page_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_page_class_NativePlaywright_Page, 0, 0));
	zend_string_release_ex(property_page_name, true);

	zval property_type_default_value;
	ZVAL_EMPTY_STRING(&property_type_default_value);
	typephp_prepare_property_redeclaration(class_entry, ZSTR_KNOWN(ZEND_STR_TYPE));
	zend_declare_typed_property(class_entry, ZSTR_KNOWN(ZEND_STR_TYPE), &property_type_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));

	zval property_message_default_value;
	ZVAL_EMPTY_STRING(&property_message_default_value);
	typephp_prepare_property_redeclaration(class_entry, ZSTR_KNOWN(ZEND_STR_MESSAGE));
	zend_declare_typed_property(class_entry, ZSTR_KNOWN(ZEND_STR_MESSAGE), &property_message_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));

	zval property_defaultValue_default_value;
	ZVAL_EMPTY_STRING(&property_defaultValue_default_value);
	zend_string *property_defaultValue_name = zend_string_init("defaultValue", sizeof("defaultValue") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_defaultValue_name);
	zend_declare_typed_property(class_entry, property_defaultValue_name, &property_defaultValue_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_defaultValue_name, true);

	return class_entry;
}
