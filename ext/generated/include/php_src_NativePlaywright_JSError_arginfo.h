/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 146de9244a22dc887531f7e1f6e5e68b38c28f9a */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_JSError___construct, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, stack, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_JSError_name, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_JSError_message arginfo_class_NativePlaywright_JSError_name

#define arginfo_class_NativePlaywright_JSError_stack arginfo_class_NativePlaywright_JSError_name

#define arginfo_class_NativePlaywright_JSError___toString arginfo_class_NativePlaywright_JSError_name

ZEND_METHOD(NativePlaywright_JSError, __construct);
ZEND_METHOD(NativePlaywright_JSError, name);
ZEND_METHOD(NativePlaywright_JSError, message);
ZEND_METHOD(NativePlaywright_JSError, stack);
ZEND_METHOD(NativePlaywright_JSError, __toString);

static const zend_function_entry class_NativePlaywright_JSError_methods[] = {
	ZEND_ME(NativePlaywright_JSError, __construct, arginfo_class_NativePlaywright_JSError___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_JSError, name, arginfo_class_NativePlaywright_JSError_name, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_JSError, message, arginfo_class_NativePlaywright_JSError_message, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_JSError, stack, arginfo_class_NativePlaywright_JSError_stack, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_JSError, __toString, arginfo_class_NativePlaywright_JSError___toString, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_JSError(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "JSError", class_NativePlaywright_JSError_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_name_default_value;
	ZVAL_EMPTY_STRING(&property_name_default_value);
	typephp_prepare_property_redeclaration(class_entry, ZSTR_KNOWN(ZEND_STR_NAME));
	zend_declare_typed_property(class_entry, ZSTR_KNOWN(ZEND_STR_NAME), &property_name_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));

	zval property_message_default_value;
	ZVAL_EMPTY_STRING(&property_message_default_value);
	typephp_prepare_property_redeclaration(class_entry, ZSTR_KNOWN(ZEND_STR_MESSAGE));
	zend_declare_typed_property(class_entry, ZSTR_KNOWN(ZEND_STR_MESSAGE), &property_message_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));

	zval property_stack_default_value;
	ZVAL_EMPTY_STRING(&property_stack_default_value);
	zend_string *property_stack_name = zend_string_init("stack", sizeof("stack") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_stack_name);
	zend_declare_typed_property(class_entry, property_stack_name, &property_stack_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_stack_name, true);

	return class_entry;
}
