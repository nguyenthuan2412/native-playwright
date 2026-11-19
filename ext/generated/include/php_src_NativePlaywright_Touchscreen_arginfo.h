/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 07ba62dd1884dff7f30646bf36adf4fae835fa55 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Touchscreen___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 0)
	ZEND_ARG_OBJ_INFO(0, keyboard, NativePlaywright\\Keyboard, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Touchscreen_tap, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Touchscreen, __construct);
ZEND_METHOD(NativePlaywright_Touchscreen, tap);

static const zend_function_entry class_NativePlaywright_Touchscreen_methods[] = {
	ZEND_ME(NativePlaywright_Touchscreen, __construct, arginfo_class_NativePlaywright_Touchscreen___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Touchscreen, tap, arginfo_class_NativePlaywright_Touchscreen_tap, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Touchscreen(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Touchscreen", class_NativePlaywright_Touchscreen_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_page_default_value;
	ZVAL_NULL(&property_page_default_value);
	zend_string *property_page_name = zend_string_init("page", sizeof("page") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_page_name);
	zend_string *property_page_class_NativePlaywright_Page = zend_string_init("NativePlaywright\\Page", sizeof("NativePlaywright\\Page")-1, 1);
	zend_declare_typed_property(class_entry, property_page_name, &property_page_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_page_class_NativePlaywright_Page, 0, 0));
	zend_string_release_ex(property_page_name, true);

	zval property_keyboard_default_value;
	ZVAL_NULL(&property_keyboard_default_value);
	zend_string *property_keyboard_name = zend_string_init("keyboard", sizeof("keyboard") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_keyboard_name);
	zend_string *property_keyboard_class_NativePlaywright_Keyboard = zend_string_init("NativePlaywright\\Keyboard", sizeof("NativePlaywright\\Keyboard")-1, 1);
	zend_declare_typed_property(class_entry, property_keyboard_name, &property_keyboard_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_keyboard_class_NativePlaywright_Keyboard, 0, 0));
	zend_string_release_ex(property_keyboard_name, true);

	return class_entry;
}
