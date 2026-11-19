/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 9326cd3b6d0fc748571a7aea568b4e081e96d71f */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Keyboard___construct, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Keyboard_modifiers, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Keyboard_layout, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Keyboard_bit, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Keyboard_resolveKey, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Keyboard_description, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Keyboard_down, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Keyboard_editingCommand, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, code, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Keyboard_up arginfo_class_NativePlaywright_Keyboard_down

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Keyboard_press, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, keys, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Keyboard_type, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Keyboard_insertText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Keyboard, __construct);
ZEND_METHOD(NativePlaywright_Keyboard, modifiers);
ZEND_METHOD(NativePlaywright_Keyboard, layout);
ZEND_METHOD(NativePlaywright_Keyboard, bit);
ZEND_METHOD(NativePlaywright_Keyboard, resolveKey);
ZEND_METHOD(NativePlaywright_Keyboard, description);
ZEND_METHOD(NativePlaywright_Keyboard, down);
ZEND_METHOD(NativePlaywright_Keyboard, editingCommand);
ZEND_METHOD(NativePlaywright_Keyboard, up);
ZEND_METHOD(NativePlaywright_Keyboard, press);
ZEND_METHOD(NativePlaywright_Keyboard, type);
ZEND_METHOD(NativePlaywright_Keyboard, insertText);

static const zend_function_entry class_NativePlaywright_Keyboard_methods[] = {
	ZEND_ME(NativePlaywright_Keyboard, __construct, arginfo_class_NativePlaywright_Keyboard___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Keyboard, modifiers, arginfo_class_NativePlaywright_Keyboard_modifiers, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Keyboard, layout, arginfo_class_NativePlaywright_Keyboard_layout, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Keyboard, bit, arginfo_class_NativePlaywright_Keyboard_bit, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Keyboard, resolveKey, arginfo_class_NativePlaywright_Keyboard_resolveKey, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Keyboard, description, arginfo_class_NativePlaywright_Keyboard_description, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Keyboard, down, arginfo_class_NativePlaywright_Keyboard_down, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Keyboard, editingCommand, arginfo_class_NativePlaywright_Keyboard_editingCommand, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Keyboard, up, arginfo_class_NativePlaywright_Keyboard_up, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Keyboard, press, arginfo_class_NativePlaywright_Keyboard_press, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Keyboard, type, arginfo_class_NativePlaywright_Keyboard_type, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Keyboard, insertText, arginfo_class_NativePlaywright_Keyboard_insertText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Keyboard(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Keyboard", class_NativePlaywright_Keyboard_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_modifiers_default_value;
	ZVAL_LONG(&property_modifiers_default_value, 0);
	zend_string *property_modifiers_name = zend_string_init("modifiers", sizeof("modifiers") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_modifiers_name);
	zend_declare_typed_property(class_entry, property_modifiers_name, &property_modifiers_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_modifiers_name, true);

	zval property_pressed_default_value;
	ZVAL_EMPTY_ARRAY(&property_pressed_default_value);
	zend_string *property_pressed_name = zend_string_init("pressed", sizeof("pressed") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_pressed_name);
	zend_declare_typed_property(class_entry, property_pressed_name, &property_pressed_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_pressed_name, true);

	zval property_layout_default_value;
	ZVAL_EMPTY_ARRAY(&property_layout_default_value);
	zend_string *property_layout_name = zend_string_init("layout", sizeof("layout") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_layout_name);
	zend_declare_typed_property(class_entry, property_layout_name, &property_layout_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_layout_name, true);

	zval property_page_default_value;
	ZVAL_NULL(&property_page_default_value);
	zend_string *property_page_name = zend_string_init("page", sizeof("page") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_page_name);
	zend_string *property_page_class_NativePlaywright_Page = zend_string_init("NativePlaywright\\Page", sizeof("NativePlaywright\\Page")-1, 1);
	zend_declare_typed_property(class_entry, property_page_name, &property_page_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_page_class_NativePlaywright_Page, 0, 0));
	zend_string_release_ex(property_page_name, true);

	return class_entry;
}
