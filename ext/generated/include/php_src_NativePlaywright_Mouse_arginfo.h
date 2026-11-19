/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 081d443f6cb4547716dee3e953a32ad458202aeb */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Mouse___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 0)
	ZEND_ARG_OBJ_INFO(0, keyboard, NativePlaywright\\Keyboard, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Mouse_bit, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Mouse_move, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Mouse_down, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Mouse_up arginfo_class_NativePlaywright_Mouse_down

#define arginfo_class_NativePlaywright_Mouse_click arginfo_class_NativePlaywright_Mouse_move

#define arginfo_class_NativePlaywright_Mouse_dblclick arginfo_class_NativePlaywright_Mouse_move

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Mouse_wheel, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, deltaX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, deltaY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Mouse, __construct);
ZEND_METHOD(NativePlaywright_Mouse, bit);
ZEND_METHOD(NativePlaywright_Mouse, move);
ZEND_METHOD(NativePlaywright_Mouse, down);
ZEND_METHOD(NativePlaywright_Mouse, up);
ZEND_METHOD(NativePlaywright_Mouse, click);
ZEND_METHOD(NativePlaywright_Mouse, dblclick);
ZEND_METHOD(NativePlaywright_Mouse, wheel);

static const zend_function_entry class_NativePlaywright_Mouse_methods[] = {
	ZEND_ME(NativePlaywright_Mouse, __construct, arginfo_class_NativePlaywright_Mouse___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Mouse, bit, arginfo_class_NativePlaywright_Mouse_bit, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Mouse, move, arginfo_class_NativePlaywright_Mouse_move, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Mouse, down, arginfo_class_NativePlaywright_Mouse_down, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Mouse, up, arginfo_class_NativePlaywright_Mouse_up, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Mouse, click, arginfo_class_NativePlaywright_Mouse_click, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Mouse, dblclick, arginfo_class_NativePlaywright_Mouse_dblclick, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Mouse, wheel, arginfo_class_NativePlaywright_Mouse_wheel, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Mouse(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Mouse", class_NativePlaywright_Mouse_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_x_default_value;
	ZVAL_DOUBLE(&property_x_default_value, 0.0);
	zend_string *property_x_name = zend_string_init("x", sizeof("x") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_x_name);
	zend_declare_typed_property(class_entry, property_x_name, &property_x_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release_ex(property_x_name, true);

	zval property_y_default_value;
	ZVAL_DOUBLE(&property_y_default_value, 0.0);
	zend_string *property_y_name = zend_string_init("y", sizeof("y") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_y_name);
	zend_declare_typed_property(class_entry, property_y_name, &property_y_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release_ex(property_y_name, true);

	zval property_button_default_value;
	zend_string *property_button_default_value_str = zend_string_init_interned("none", sizeof("none") - 1, 1);
	ZVAL_INTERNED_STR(&property_button_default_value, property_button_default_value_str);
	zend_string *property_button_name = zend_string_init("button", sizeof("button") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_button_name);
	zend_declare_typed_property(class_entry, property_button_name, &property_button_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_button_name, true);

	zval property_buttons_default_value;
	ZVAL_LONG(&property_buttons_default_value, 0);
	zend_string *property_buttons_name = zend_string_init("buttons", sizeof("buttons") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_buttons_name);
	zend_declare_typed_property(class_entry, property_buttons_name, &property_buttons_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_buttons_name, true);

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
