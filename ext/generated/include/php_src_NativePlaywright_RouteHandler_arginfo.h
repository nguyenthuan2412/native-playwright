/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 0f10106eb344412d89d513b70ef7d643f47b5736 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_RouteHandler___construct, 0, 0, 2)
	ZEND_ARG_OBJ_TYPE_MASK(0, url, Closure, MAY_BE_STRING, NULL)
	ZEND_ARG_OBJ_INFO(0, handler, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, times, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_RouteHandler_matches, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, baseURL, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_RouteHandler_expired, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_RouteHandler, __construct);
ZEND_METHOD(NativePlaywright_RouteHandler, matches);
ZEND_METHOD(NativePlaywright_RouteHandler, expired);

static const zend_function_entry class_NativePlaywright_RouteHandler_methods[] = {
	ZEND_ME(NativePlaywright_RouteHandler, __construct, arginfo_class_NativePlaywright_RouteHandler___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_RouteHandler, matches, arginfo_class_NativePlaywright_RouteHandler_matches, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_RouteHandler, expired, arginfo_class_NativePlaywright_RouteHandler_expired, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_RouteHandler(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "RouteHandler", class_NativePlaywright_RouteHandler_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_count_default_value;
	ZVAL_LONG(&property_count_default_value, 0);
	typephp_prepare_property_redeclaration(class_entry, ZSTR_KNOWN(ZEND_STR_COUNT));
	zend_declare_typed_property(class_entry, ZSTR_KNOWN(ZEND_STR_COUNT), &property_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));

	zval property_url_default_value;
	ZVAL_UNDEF(&property_url_default_value);
	zend_string *property_url_name = zend_string_init("url", sizeof("url") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_url_name);
	zend_string *property_url_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_url_name, &property_url_default_value, ZEND_ACC_PUBLIC|ZEND_ACC_READONLY|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_url_class_Closure, 0, MAY_BE_STRING));
	zend_string_release_ex(property_url_name, true);

	zval property_handler_default_value;
	ZVAL_UNDEF(&property_handler_default_value);
	zend_string *property_handler_name = zend_string_init("handler", sizeof("handler") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_handler_name);
	zend_string *property_handler_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_handler_name, &property_handler_default_value, ZEND_ACC_PUBLIC|ZEND_ACC_READONLY|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_handler_class_Closure, 0, 0));
	zend_string_release_ex(property_handler_name, true);

	zval property_times_default_value;
	ZVAL_UNDEF(&property_times_default_value);
	zend_string *property_times_name = zend_string_init("times", sizeof("times") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_times_name);
	zend_declare_typed_property(class_entry, property_times_name, &property_times_default_value, ZEND_ACC_PUBLIC|ZEND_ACC_READONLY|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_times_name, true);

	return class_entry;
}
