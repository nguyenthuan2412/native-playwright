/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: d7d41e4a4e5d0aa1d0cf68d805a71daf93ec320f */

static zend_class_entry *php_register_class_NativePlaywright_TimeoutError(zend_class_entry *class_entry_NativePlaywright_Exception)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "TimeoutError", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NativePlaywright_Exception, 0);
	typephp_finalize_property_hook_inheritance(class_entry);

	return class_entry;
}
