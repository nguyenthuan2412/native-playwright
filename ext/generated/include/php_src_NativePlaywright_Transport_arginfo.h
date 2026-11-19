/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 65a3e59f91e98e9af2ea01bfce24f18f6f28122a */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Transport___construct, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, conn, NativePlaywright\\Connection, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Transport_newWaiter, 0, 0, NativePlaywright\\Waiter, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Transport_await, 0, 2, IS_MIXED, 0)
	ZEND_ARG_OBJ_INFO(0, w, NativePlaywright\\Waiter, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, what, IS_STRING, 0, "'operation'")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Transport_sleep, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Transport_async, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, fn, Closure, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Transport_close, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Transport_connection, 0, 0, NativePlaywright\\Connection, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Transport_isClosed, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Transport_sendAsync, 0, 1, NativePlaywright\\Waiter, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, params, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sessionId, IS_STRING, 0, "''")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Transport_call, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, params, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sessionId, IS_STRING, 0, "''")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Transport_callMany, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, calls, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sessionId, IS_STRING, 0, "''")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ignoreErrors, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Transport_unwrap, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Transport_on, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sessionId, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, fn, Closure, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Transport_off, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, sessionId, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Transport_offSession, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, sessionId, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Transport_onClose arginfo_class_NativePlaywright_Transport_async

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Transport_handleMessage, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Transport_handleClosed arginfo_class_NativePlaywright_Transport_close

ZEND_METHOD(NativePlaywright_Transport, __construct);
ZEND_METHOD(NativePlaywright_Transport, connection);
ZEND_METHOD(NativePlaywright_Transport, isClosed);
ZEND_METHOD(NativePlaywright_Transport, sendAsync);
ZEND_METHOD(NativePlaywright_Transport, call);
ZEND_METHOD(NativePlaywright_Transport, callMany);
ZEND_METHOD(NativePlaywright_Transport, unwrap);
ZEND_METHOD(NativePlaywright_Transport, on);
ZEND_METHOD(NativePlaywright_Transport, off);
ZEND_METHOD(NativePlaywright_Transport, offSession);
ZEND_METHOD(NativePlaywright_Transport, onClose);
ZEND_METHOD(NativePlaywright_Transport, handleMessage);
ZEND_METHOD(NativePlaywright_Transport, handleClosed);

static const zend_function_entry class_NativePlaywright_Transport_methods[] = {
	ZEND_ME(NativePlaywright_Transport, __construct, arginfo_class_NativePlaywright_Transport___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_RAW_FENTRY("newWaiter", NULL, arginfo_class_NativePlaywright_Transport_newWaiter, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_RAW_FENTRY("await", NULL, arginfo_class_NativePlaywright_Transport_await, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_RAW_FENTRY("sleep", NULL, arginfo_class_NativePlaywright_Transport_sleep, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_RAW_FENTRY("async", NULL, arginfo_class_NativePlaywright_Transport_async, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_RAW_FENTRY("close", NULL, arginfo_class_NativePlaywright_Transport_close, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_ME(NativePlaywright_Transport, connection, arginfo_class_NativePlaywright_Transport_connection, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Transport, isClosed, arginfo_class_NativePlaywright_Transport_isClosed, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Transport, sendAsync, arginfo_class_NativePlaywright_Transport_sendAsync, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Transport, call, arginfo_class_NativePlaywright_Transport_call, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Transport, callMany, arginfo_class_NativePlaywright_Transport_callMany, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Transport, unwrap, arginfo_class_NativePlaywright_Transport_unwrap, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Transport, on, arginfo_class_NativePlaywright_Transport_on, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Transport, off, arginfo_class_NativePlaywright_Transport_off, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Transport, offSession, arginfo_class_NativePlaywright_Transport_offSession, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Transport, onClose, arginfo_class_NativePlaywright_Transport_onClose, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Transport, handleMessage, arginfo_class_NativePlaywright_Transport_handleMessage, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_Transport, handleClosed, arginfo_class_NativePlaywright_Transport_handleClosed, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Transport(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Transport", class_NativePlaywright_Transport_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_ABSTRACT);

	zval property_waiters_default_value;
	ZVAL_EMPTY_ARRAY(&property_waiters_default_value);
	zend_string *property_waiters_name = zend_string_init("waiters", sizeof("waiters") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_waiters_name);
	zend_declare_typed_property(class_entry, property_waiters_name, &property_waiters_default_value, ZEND_ACC_PROTECTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_waiters_name, true);

	zval property_listeners_default_value;
	ZVAL_EMPTY_ARRAY(&property_listeners_default_value);
	zend_string *property_listeners_name = zend_string_init("listeners", sizeof("listeners") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_listeners_name);
	zend_declare_typed_property(class_entry, property_listeners_name, &property_listeners_default_value, ZEND_ACC_PROTECTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_listeners_name, true);

	zval property_seq_default_value;
	ZVAL_LONG(&property_seq_default_value, 0);
	zend_string *property_seq_name = zend_string_init("seq", sizeof("seq") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_seq_name);
	zend_declare_typed_property(class_entry, property_seq_name, &property_seq_default_value, ZEND_ACC_PROTECTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_seq_name, true);

	zval property_closed_default_value;
	ZVAL_FALSE(&property_closed_default_value);
	zend_string *property_closed_name = zend_string_init("closed", sizeof("closed") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_closed_name);
	zend_declare_typed_property(class_entry, property_closed_name, &property_closed_default_value, ZEND_ACC_PROTECTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_closed_name, true);

	zval property_closeListeners_default_value;
	ZVAL_EMPTY_ARRAY(&property_closeListeners_default_value);
	zend_string *property_closeListeners_name = zend_string_init("closeListeners", sizeof("closeListeners") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_closeListeners_name);
	zend_declare_typed_property(class_entry, property_closeListeners_name, &property_closeListeners_default_value, ZEND_ACC_PROTECTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_closeListeners_name, true);

	zval property_conn_default_value;
	ZVAL_NULL(&property_conn_default_value);
	zend_string *property_conn_name = zend_string_init("conn", sizeof("conn") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_conn_name);
	zend_string *property_conn_class_NativePlaywright_Connection = zend_string_init("NativePlaywright\\Connection", sizeof("NativePlaywright\\Connection")-1, 1);
	zend_declare_typed_property(class_entry, property_conn_name, &property_conn_default_value, ZEND_ACC_PROTECTED|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_conn_class_NativePlaywright_Connection, 0, 0));
	zend_string_release_ex(property_conn_name, true);

	return class_entry;
}
