/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: f9f808ec7a2b07a7ced838fbdf7b61871773d573 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Route___construct, 0, 0, 3)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 0)
	ZEND_ARG_TYPE_INFO(0, interceptId, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, request, NativePlaywright\\Request, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Route_request, 0, 0, NativePlaywright\\Request, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Route_isHandled, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Route_claim, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, op, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Route_abort, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, errorCode, IS_STRING, 0, "'failed'")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Route_continue, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, overrides, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Route_fallback arginfo_class_NativePlaywright_Route_continue

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Route_fulfill, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Route, __construct);
ZEND_METHOD(NativePlaywright_Route, request);
ZEND_METHOD(NativePlaywright_Route, isHandled);
ZEND_METHOD(NativePlaywright_Route, claim);
ZEND_METHOD(NativePlaywright_Route, abort);
ZEND_METHOD(NativePlaywright_Route, continue);
ZEND_METHOD(NativePlaywright_Route, fallback);
ZEND_METHOD(NativePlaywright_Route, fulfill);

static const zend_function_entry class_NativePlaywright_Route_methods[] = {
	ZEND_ME(NativePlaywright_Route, __construct, arginfo_class_NativePlaywright_Route___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Route, request, arginfo_class_NativePlaywright_Route_request, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Route, isHandled, arginfo_class_NativePlaywright_Route_isHandled, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Route, claim, arginfo_class_NativePlaywright_Route_claim, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Route, abort, arginfo_class_NativePlaywright_Route_abort, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Route, continue, arginfo_class_NativePlaywright_Route_continue, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Route, fallback, arginfo_class_NativePlaywright_Route_fallback, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Route, fulfill, arginfo_class_NativePlaywright_Route_fulfill, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Route(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Route", class_NativePlaywright_Route_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_handled_default_value;
	ZVAL_FALSE(&property_handled_default_value);
	zend_string *property_handled_name = zend_string_init("handled", sizeof("handled") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_handled_name);
	zend_declare_typed_property(class_entry, property_handled_name, &property_handled_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_handled_name, true);

	zval property_fallbackOverrides_default_value;
	ZVAL_EMPTY_ARRAY(&property_fallbackOverrides_default_value);
	zend_string *property_fallbackOverrides_name = zend_string_init("fallbackOverrides", sizeof("fallbackOverrides") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_fallbackOverrides_name);
	zend_declare_typed_property(class_entry, property_fallbackOverrides_name, &property_fallbackOverrides_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_fallbackOverrides_name, true);

	zval property_fellBack_default_value;
	ZVAL_FALSE(&property_fellBack_default_value);
	zend_string *property_fellBack_name = zend_string_init("fellBack", sizeof("fellBack") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_fellBack_name);
	zend_declare_typed_property(class_entry, property_fellBack_name, &property_fellBack_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_fellBack_name, true);

	zval property_page_default_value;
	ZVAL_NULL(&property_page_default_value);
	zend_string *property_page_name = zend_string_init("page", sizeof("page") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_page_name);
	zend_string *property_page_class_NativePlaywright_Page = zend_string_init("NativePlaywright\\Page", sizeof("NativePlaywright\\Page")-1, 1);
	zend_declare_typed_property(class_entry, property_page_name, &property_page_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_page_class_NativePlaywright_Page, 0, 0));
	zend_string_release_ex(property_page_name, true);

	zval property_interceptId_default_value;
	ZVAL_EMPTY_STRING(&property_interceptId_default_value);
	zend_string *property_interceptId_name = zend_string_init("interceptId", sizeof("interceptId") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_interceptId_name);
	zend_declare_typed_property(class_entry, property_interceptId_name, &property_interceptId_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_interceptId_name, true);

	zval property_request_default_value;
	ZVAL_NULL(&property_request_default_value);
	zend_string *property_request_name = zend_string_init("request", sizeof("request") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_request_name);
	zend_string *property_request_class_NativePlaywright_Request = zend_string_init("NativePlaywright\\Request", sizeof("NativePlaywright\\Request")-1, 1);
	zend_declare_typed_property(class_entry, property_request_name, &property_request_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_request_class_NativePlaywright_Request, 0, 0));
	zend_string_release_ex(property_request_name, true);

	return class_entry;
}
