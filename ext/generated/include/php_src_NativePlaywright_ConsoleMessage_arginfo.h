/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: bbae60a8307028940402bcd1bbe8eb7deb1d9b9e */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_ConsoleMessage___construct, 0, 0, 5)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 1)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, args, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_ConsoleMessage_type, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_ConsoleMessage_text arginfo_class_NativePlaywright_ConsoleMessage_type

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_ConsoleMessage_args, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_ConsoleMessage_location arginfo_class_NativePlaywright_ConsoleMessage_args

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_ConsoleMessage_page, 0, 0, NativePlaywright\\Page, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_ConsoleMessage___toString arginfo_class_NativePlaywright_ConsoleMessage_type

ZEND_METHOD(NativePlaywright_ConsoleMessage, __construct);
ZEND_METHOD(NativePlaywright_ConsoleMessage, type);
ZEND_METHOD(NativePlaywright_ConsoleMessage, text);
ZEND_METHOD(NativePlaywright_ConsoleMessage, args);
ZEND_METHOD(NativePlaywright_ConsoleMessage, location);
ZEND_METHOD(NativePlaywright_ConsoleMessage, page);
ZEND_METHOD(NativePlaywright_ConsoleMessage, __toString);

static const zend_function_entry class_NativePlaywright_ConsoleMessage_methods[] = {
	ZEND_ME(NativePlaywright_ConsoleMessage, __construct, arginfo_class_NativePlaywright_ConsoleMessage___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_ConsoleMessage, type, arginfo_class_NativePlaywright_ConsoleMessage_type, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_ConsoleMessage, text, arginfo_class_NativePlaywright_ConsoleMessage_text, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_ConsoleMessage, args, arginfo_class_NativePlaywright_ConsoleMessage_args, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_ConsoleMessage, location, arginfo_class_NativePlaywright_ConsoleMessage_location, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_ConsoleMessage, page, arginfo_class_NativePlaywright_ConsoleMessage_page, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_ConsoleMessage, __toString, arginfo_class_NativePlaywright_ConsoleMessage___toString, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_ConsoleMessage(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "ConsoleMessage", class_NativePlaywright_ConsoleMessage_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_page_default_value;
	ZVAL_NULL(&property_page_default_value);
	zend_string *property_page_name = zend_string_init("page", sizeof("page") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_page_name);
	zend_string *property_page_class_NativePlaywright_Page = zend_string_init("NativePlaywright\\Page", sizeof("NativePlaywright\\Page")-1, 1);
	zend_declare_typed_property(class_entry, property_page_name, &property_page_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_page_class_NativePlaywright_Page, 0, MAY_BE_NULL));
	zend_string_release_ex(property_page_name, true);

	zval property_type_default_value;
	ZVAL_EMPTY_STRING(&property_type_default_value);
	typephp_prepare_property_redeclaration(class_entry, ZSTR_KNOWN(ZEND_STR_TYPE));
	zend_declare_typed_property(class_entry, ZSTR_KNOWN(ZEND_STR_TYPE), &property_type_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));

	zval property_text_default_value;
	ZVAL_EMPTY_STRING(&property_text_default_value);
	zend_string *property_text_name = zend_string_init("text", sizeof("text") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_text_name);
	zend_declare_typed_property(class_entry, property_text_name, &property_text_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_text_name, true);

	zval property_args_default_value;
	ZVAL_EMPTY_ARRAY(&property_args_default_value);
	typephp_prepare_property_redeclaration(class_entry, ZSTR_KNOWN(ZEND_STR_ARGS));
	zend_declare_typed_property(class_entry, ZSTR_KNOWN(ZEND_STR_ARGS), &property_args_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));

	zval property_location_default_value;
	ZVAL_EMPTY_ARRAY(&property_location_default_value);
	zend_string *property_location_name = zend_string_init("location", sizeof("location") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_location_name);
	zend_declare_typed_property(class_entry, property_location_name, &property_location_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_location_name, true);

	return class_entry;
}
