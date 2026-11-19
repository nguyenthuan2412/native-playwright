/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: c9fdf9bbe46ca9c066d326f28eaa0e3c8e2810e2 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_FrameLocator___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, frame, NativePlaywright\\Frame, 0)
	ZEND_ARG_TYPE_INFO(0, frameSelector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_FrameLocator_inside, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, sel, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_FrameLocator_locator, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, selector, NativePlaywright\\Locator, MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_FrameLocator_getByText, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_FrameLocator_getByRole, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_FrameLocator_getByLabel arginfo_class_NativePlaywright_FrameLocator_getByText

#define arginfo_class_NativePlaywright_FrameLocator_getByPlaceholder arginfo_class_NativePlaywright_FrameLocator_getByText

#define arginfo_class_NativePlaywright_FrameLocator_getByAltText arginfo_class_NativePlaywright_FrameLocator_getByText

#define arginfo_class_NativePlaywright_FrameLocator_getByTitle arginfo_class_NativePlaywright_FrameLocator_getByText

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_FrameLocator_getByTestId, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, testId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_FrameLocator_frameLocator, 0, 1, NativePlaywright\\FrameLocator, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_FrameLocator_first, 0, 0, NativePlaywright\\FrameLocator, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_FrameLocator_last arginfo_class_NativePlaywright_FrameLocator_first

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_FrameLocator_nth, 0, 1, NativePlaywright\\FrameLocator, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_FrameLocator_owner, 0, 0, NativePlaywright\\Locator, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_FrameLocator, __construct);
ZEND_METHOD(NativePlaywright_FrameLocator, inside);
ZEND_METHOD(NativePlaywright_FrameLocator, locator);
ZEND_METHOD(NativePlaywright_FrameLocator, getByText);
ZEND_METHOD(NativePlaywright_FrameLocator, getByRole);
ZEND_METHOD(NativePlaywright_FrameLocator, getByLabel);
ZEND_METHOD(NativePlaywright_FrameLocator, getByPlaceholder);
ZEND_METHOD(NativePlaywright_FrameLocator, getByAltText);
ZEND_METHOD(NativePlaywright_FrameLocator, getByTitle);
ZEND_METHOD(NativePlaywright_FrameLocator, getByTestId);
ZEND_METHOD(NativePlaywright_FrameLocator, frameLocator);
ZEND_METHOD(NativePlaywright_FrameLocator, first);
ZEND_METHOD(NativePlaywright_FrameLocator, last);
ZEND_METHOD(NativePlaywright_FrameLocator, nth);
ZEND_METHOD(NativePlaywright_FrameLocator, owner);

static const zend_function_entry class_NativePlaywright_FrameLocator_methods[] = {
	ZEND_ME(NativePlaywright_FrameLocator, __construct, arginfo_class_NativePlaywright_FrameLocator___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, inside, arginfo_class_NativePlaywright_FrameLocator_inside, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_FrameLocator, locator, arginfo_class_NativePlaywright_FrameLocator_locator, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, getByText, arginfo_class_NativePlaywright_FrameLocator_getByText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, getByRole, arginfo_class_NativePlaywright_FrameLocator_getByRole, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, getByLabel, arginfo_class_NativePlaywright_FrameLocator_getByLabel, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, getByPlaceholder, arginfo_class_NativePlaywright_FrameLocator_getByPlaceholder, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, getByAltText, arginfo_class_NativePlaywright_FrameLocator_getByAltText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, getByTitle, arginfo_class_NativePlaywright_FrameLocator_getByTitle, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, getByTestId, arginfo_class_NativePlaywright_FrameLocator_getByTestId, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, frameLocator, arginfo_class_NativePlaywright_FrameLocator_frameLocator, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, first, arginfo_class_NativePlaywright_FrameLocator_first, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, last, arginfo_class_NativePlaywright_FrameLocator_last, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, nth, arginfo_class_NativePlaywright_FrameLocator_nth, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FrameLocator, owner, arginfo_class_NativePlaywright_FrameLocator_owner, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_FrameLocator(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "FrameLocator", class_NativePlaywright_FrameLocator_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_frame_default_value;
	ZVAL_NULL(&property_frame_default_value);
	zend_string *property_frame_name = zend_string_init("frame", sizeof("frame") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_frame_name);
	zend_string *property_frame_class_NativePlaywright_Frame = zend_string_init("NativePlaywright\\Frame", sizeof("NativePlaywright\\Frame")-1, 1);
	zend_declare_typed_property(class_entry, property_frame_name, &property_frame_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_frame_class_NativePlaywright_Frame, 0, 0));
	zend_string_release_ex(property_frame_name, true);

	zval property_frameSelector_default_value;
	ZVAL_EMPTY_STRING(&property_frameSelector_default_value);
	zend_string *property_frameSelector_name = zend_string_init("frameSelector", sizeof("frameSelector") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_frameSelector_name);
	zend_declare_typed_property(class_entry, property_frameSelector_name, &property_frameSelector_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_frameSelector_name, true);

	return class_entry;
}
