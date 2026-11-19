/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 44302681ab60b57b9a803fe9825383b2926c371e */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_BlockingTransport_newWaiter, 0, 0, NativePlaywright\\Waiter, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BlockingTransport_await, 0, 2, IS_MIXED, 0)
	ZEND_ARG_OBJ_INFO(0, w, NativePlaywright\\Waiter, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, what, IS_STRING, 0, "'operation'")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BlockingTransport_pump, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BlockingTransport_sleep, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BlockingTransport_async, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, fn, Closure, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BlockingTransport_close, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_BlockingTransport, newWaiter);
ZEND_METHOD(NativePlaywright_BlockingTransport, await);
ZEND_METHOD(NativePlaywright_BlockingTransport, pump);
ZEND_METHOD(NativePlaywright_BlockingTransport, sleep);
ZEND_METHOD(NativePlaywright_BlockingTransport, async);
ZEND_METHOD(NativePlaywright_BlockingTransport, close);

static const zend_function_entry class_NativePlaywright_BlockingTransport_methods[] = {
	ZEND_ME(NativePlaywright_BlockingTransport, newWaiter, arginfo_class_NativePlaywright_BlockingTransport_newWaiter, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BlockingTransport, await, arginfo_class_NativePlaywright_BlockingTransport_await, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BlockingTransport, pump, arginfo_class_NativePlaywright_BlockingTransport_pump, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_BlockingTransport, sleep, arginfo_class_NativePlaywright_BlockingTransport_sleep, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BlockingTransport, async, arginfo_class_NativePlaywright_BlockingTransport_async, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BlockingTransport, close, arginfo_class_NativePlaywright_BlockingTransport_close, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_BlockingTransport(zend_class_entry *class_entry_NativePlaywright_Transport)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "BlockingTransport", class_NativePlaywright_BlockingTransport_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NativePlaywright_Transport, ZEND_ACC_FINAL);

	zval property_queue_default_value;
	ZVAL_EMPTY_ARRAY(&property_queue_default_value);
	zend_string *property_queue_name = zend_string_init("queue", sizeof("queue") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_queue_name);
	zend_declare_typed_property(class_entry, property_queue_name, &property_queue_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_queue_name, true);

	zval property_head_default_value;
	ZVAL_LONG(&property_head_default_value, 0);
	zend_string *property_head_name = zend_string_init("head", sizeof("head") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_head_name);
	zend_declare_typed_property(class_entry, property_head_name, &property_head_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_head_name, true);
	typephp_finalize_property_hook_inheritance(class_entry);

	return class_entry;
}
