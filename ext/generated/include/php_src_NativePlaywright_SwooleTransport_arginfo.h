/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: b8139ff7ad2c44a5db3162ac4a1fa65c6d048931 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_SwooleTransport___construct, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, conn, NativePlaywright\\Connection, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_SwooleTransport_readLoop, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_SwooleTransport_newWaiter, 0, 0, NativePlaywright\\Waiter, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_SwooleTransport_await, 0, 2, IS_MIXED, 0)
	ZEND_ARG_OBJ_INFO(0, w, NativePlaywright\\Waiter, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, what, IS_STRING, 0, "'operation'")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_SwooleTransport_sleep, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_SwooleTransport_async, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, fn, Closure, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_SwooleTransport_close arginfo_class_NativePlaywright_SwooleTransport_readLoop

ZEND_METHOD(NativePlaywright_SwooleTransport, __construct);
ZEND_METHOD(NativePlaywright_SwooleTransport, readLoop);
ZEND_METHOD(NativePlaywright_SwooleTransport, newWaiter);
ZEND_METHOD(NativePlaywright_SwooleTransport, await);
ZEND_METHOD(NativePlaywright_SwooleTransport, sleep);
ZEND_METHOD(NativePlaywright_SwooleTransport, async);
ZEND_METHOD(NativePlaywright_SwooleTransport, close);

static const zend_function_entry class_NativePlaywright_SwooleTransport_methods[] = {
	ZEND_ME(NativePlaywright_SwooleTransport, __construct, arginfo_class_NativePlaywright_SwooleTransport___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_SwooleTransport, readLoop, arginfo_class_NativePlaywright_SwooleTransport_readLoop, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_SwooleTransport, newWaiter, arginfo_class_NativePlaywright_SwooleTransport_newWaiter, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_SwooleTransport, await, arginfo_class_NativePlaywright_SwooleTransport_await, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_SwooleTransport, sleep, arginfo_class_NativePlaywright_SwooleTransport_sleep, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_SwooleTransport, async, arginfo_class_NativePlaywright_SwooleTransport_async, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_SwooleTransport, close, arginfo_class_NativePlaywright_SwooleTransport_close, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_SwooleTransport(zend_class_entry *class_entry_NativePlaywright_Transport)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "SwooleTransport", class_NativePlaywright_SwooleTransport_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NativePlaywright_Transport, ZEND_ACC_FINAL);

	zval const_EVENT_READ_value;
	ZVAL_LONG(&const_EVENT_READ_value, 512);
	zend_string *const_EVENT_READ_name = zend_string_init_interned("EVENT_READ", sizeof("EVENT_READ") - 1, true);
	zend_hash_del(&class_entry->constants_table, const_EVENT_READ_name);
	zend_declare_class_constant_ex(class_entry, const_EVENT_READ_name, &const_EVENT_READ_value, ZEND_ACC_PRIVATE, NULL);
	zend_string_release_ex(const_EVENT_READ_name, true);

	zval property_done_default_value;
	ZVAL_NULL(&property_done_default_value);
	zend_string *property_done_name = zend_string_init("done", sizeof("done") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_done_name);
	zend_string *property_done_class_Swoole_Coroutine_Channel = zend_string_init("Swoole\\Coroutine\\Channel", sizeof("Swoole\\Coroutine\\Channel")-1, 1);
	zend_declare_typed_property(class_entry, property_done_name, &property_done_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_done_class_Swoole_Coroutine_Channel, 0, 0));
	zend_string_release_ex(property_done_name, true);

	zval property_closing_default_value;
	ZVAL_FALSE(&property_closing_default_value);
	zend_string *property_closing_name = zend_string_init("closing", sizeof("closing") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_closing_name);
	zend_declare_typed_property(class_entry, property_closing_name, &property_closing_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_closing_name, true);
	typephp_finalize_property_hook_inheritance(class_entry);

	return class_entry;
}
