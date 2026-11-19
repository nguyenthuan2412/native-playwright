/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: f75c72705718fa94e4163eb9926de01b4c218521 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Playwright_chromium, 0, 0, NativePlaywright\\BrowserType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Playwright_setTestIdAttribute, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Playwright_devices, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Playwright, chromium);
ZEND_METHOD(NativePlaywright_Playwright, setTestIdAttribute);
ZEND_METHOD(NativePlaywright_Playwright, devices);

static const zend_function_entry class_NativePlaywright_Playwright_methods[] = {
	ZEND_ME(NativePlaywright_Playwright, chromium, arginfo_class_NativePlaywright_Playwright_chromium, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Playwright, setTestIdAttribute, arginfo_class_NativePlaywright_Playwright_setTestIdAttribute, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Playwright, devices, arginfo_class_NativePlaywright_Playwright_devices, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Playwright(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Playwright", class_NativePlaywright_Playwright_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	return class_entry;
}
