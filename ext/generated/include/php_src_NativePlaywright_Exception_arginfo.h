/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 54afe7622024943090f834422735e9cda7cdf16c */

static zend_class_entry *php_register_class_NativePlaywright_Exception(zend_class_entry *class_entry_RuntimeException)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Exception", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_RuntimeException, 0);
	typephp_finalize_property_hook_inheritance(class_entry);

	return class_entry;
}
