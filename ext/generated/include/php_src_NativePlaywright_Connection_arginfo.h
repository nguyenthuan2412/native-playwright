/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 2508e1927404134e9d54e93268380afb4342dcd4 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Connection___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, executable, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, args, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, userDataDir, IS_STRING, 0, "''")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Connection_send, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, params, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sessionId, IS_STRING, 0, "''")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Connection_read, 0, 0, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Connection_fd, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Connection_pid arginfo_class_NativePlaywright_Connection_fd

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Connection_isClosed, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Connection_close, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, graceful, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Connection, __construct);
ZEND_METHOD(NativePlaywright_Connection, send);
ZEND_METHOD(NativePlaywright_Connection, read);
ZEND_METHOD(NativePlaywright_Connection, fd);
ZEND_METHOD(NativePlaywright_Connection, pid);
ZEND_METHOD(NativePlaywright_Connection, isClosed);
ZEND_METHOD(NativePlaywright_Connection, close);

static const zend_function_entry class_NativePlaywright_Connection_methods[] = {
	ZEND_ME(NativePlaywright_Connection, __construct, arginfo_class_NativePlaywright_Connection___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Connection, send, arginfo_class_NativePlaywright_Connection_send, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Connection, read, arginfo_class_NativePlaywright_Connection_read, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Connection, fd, arginfo_class_NativePlaywright_Connection_fd, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Connection, pid, arginfo_class_NativePlaywright_Connection_pid, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Connection, isClosed, arginfo_class_NativePlaywright_Connection_isClosed, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Connection, close, arginfo_class_NativePlaywright_Connection_close, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Connection(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Connection", class_NativePlaywright_Connection_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval const_JSON_FLAGS_value;
	ZVAL_LONG(&const_JSON_FLAGS_value, 1344);
	zend_string *const_JSON_FLAGS_name = zend_string_init_interned("JSON_FLAGS", sizeof("JSON_FLAGS") - 1, true);
	zend_hash_del(&class_entry->constants_table, const_JSON_FLAGS_name);
	zend_declare_class_constant_ex(class_entry, const_JSON_FLAGS_name, &const_JSON_FLAGS_value, ZEND_ACC_PRIVATE, NULL);
	zend_string_release_ex(const_JSON_FLAGS_name, true);

	zval property_pipe_default_value;
	ZVAL_NULL(&property_pipe_default_value);
	zend_string *property_pipe_name = zend_string_init("pipe", sizeof("pipe") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_pipe_name);
	zend_declare_typed_property(class_entry, property_pipe_name, &property_pipe_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release_ex(property_pipe_name, true);

	zval property_nextId_default_value;
	ZVAL_LONG(&property_nextId_default_value, 1);
	zend_string *property_nextId_name = zend_string_init("nextId", sizeof("nextId") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_nextId_name);
	zend_declare_typed_property(class_entry, property_nextId_name, &property_nextId_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_nextId_name, true);

	zval property_closed_default_value;
	ZVAL_FALSE(&property_closed_default_value);
	zend_string *property_closed_name = zend_string_init("closed", sizeof("closed") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_closed_name);
	zend_declare_typed_property(class_entry, property_closed_name, &property_closed_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_closed_name, true);

	return class_entry;
}
