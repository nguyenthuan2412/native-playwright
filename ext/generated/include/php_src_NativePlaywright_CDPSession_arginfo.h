/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 26e9285e84226e8b325047d908ffe0d629dc508c */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_CDPSession___construct, 0, 0, 3)
	ZEND_ARG_OBJ_INFO(0, t, NativePlaywright\\Transport, 0)
	ZEND_ARG_TYPE_INFO(0, sessionId, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_CDPSession_send, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, params, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_CDPSession_on, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, handler, Closure, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_CDPSession_detach, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_CDPSession, __construct);
ZEND_METHOD(NativePlaywright_CDPSession, send);
ZEND_METHOD(NativePlaywright_CDPSession, on);
ZEND_METHOD(NativePlaywright_CDPSession, detach);

static const zend_function_entry class_NativePlaywright_CDPSession_methods[] = {
	ZEND_ME(NativePlaywright_CDPSession, __construct, arginfo_class_NativePlaywright_CDPSession___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_CDPSession, send, arginfo_class_NativePlaywright_CDPSession_send, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_CDPSession, on, arginfo_class_NativePlaywright_CDPSession_on, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_CDPSession, detach, arginfo_class_NativePlaywright_CDPSession_detach, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_CDPSession(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "CDPSession", class_NativePlaywright_CDPSession_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_subs_default_value;
	ZVAL_EMPTY_ARRAY(&property_subs_default_value);
	zend_string *property_subs_name = zend_string_init("subs", sizeof("subs") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_subs_name);
	zend_declare_typed_property(class_entry, property_subs_name, &property_subs_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_subs_name, true);

	zval property_t_default_value;
	ZVAL_NULL(&property_t_default_value);
	zend_string *property_t_name = zend_string_init("t", sizeof("t") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_t_name);
	zend_string *property_t_class_NativePlaywright_Transport = zend_string_init("NativePlaywright\\Transport", sizeof("NativePlaywright\\Transport")-1, 1);
	zend_declare_typed_property(class_entry, property_t_name, &property_t_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_t_class_NativePlaywright_Transport, 0, 0));
	zend_string_release_ex(property_t_name, true);

	zval property_sessionId_default_value;
	ZVAL_EMPTY_STRING(&property_sessionId_default_value);
	zend_string *property_sessionId_name = zend_string_init("sessionId", sizeof("sessionId") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_sessionId_name);
	zend_declare_typed_property(class_entry, property_sessionId_name, &property_sessionId_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_sessionId_name, true);

	zval property_timeout_default_value;
	ZVAL_DOUBLE(&property_timeout_default_value, 0.0);
	zend_string *property_timeout_name = zend_string_init("timeout", sizeof("timeout") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_timeout_name);
	zend_declare_typed_property(class_entry, property_timeout_name, &property_timeout_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release_ex(property_timeout_name, true);

	return class_entry;
}
