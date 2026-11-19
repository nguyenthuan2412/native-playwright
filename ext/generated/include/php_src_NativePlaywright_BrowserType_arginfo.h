/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: c3694f3e224a5e3f233ad23f244c1537c34d4ade */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserType_name, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserType_executablePath arginfo_class_NativePlaywright_BrowserType_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserType_buildArgs, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_BrowserType_launch, 0, 0, NativePlaywright\\Browser, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_BrowserType_start, 0, 2, NativePlaywright\\Browser, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, userDataDir, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_BrowserType_launchPersistentContext, 0, 1, NativePlaywright\\BrowserContext, 0)
	ZEND_ARG_TYPE_INFO(0, userDataDir, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_BrowserType, name);
ZEND_METHOD(NativePlaywright_BrowserType, executablePath);
ZEND_METHOD(NativePlaywright_BrowserType, buildArgs);
ZEND_METHOD(NativePlaywright_BrowserType, launch);
ZEND_METHOD(NativePlaywright_BrowserType, start);
ZEND_METHOD(NativePlaywright_BrowserType, launchPersistentContext);

static const zend_function_entry class_NativePlaywright_BrowserType_methods[] = {
	ZEND_ME(NativePlaywright_BrowserType, name, arginfo_class_NativePlaywright_BrowserType_name, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserType, executablePath, arginfo_class_NativePlaywright_BrowserType_executablePath, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserType, buildArgs, arginfo_class_NativePlaywright_BrowserType_buildArgs, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_BrowserType, launch, arginfo_class_NativePlaywright_BrowserType_launch, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserType, start, arginfo_class_NativePlaywright_BrowserType_start, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_BrowserType, launchPersistentContext, arginfo_class_NativePlaywright_BrowserType_launchPersistentContext, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_BrowserType(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "BrowserType", class_NativePlaywright_BrowserType_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval const_DEFAULT_ARGS_value;
	ZVAL_EMPTY_ARRAY(&const_DEFAULT_ARGS_value);
	zend_string *const_DEFAULT_ARGS_name = zend_string_init_interned("DEFAULT_ARGS", sizeof("DEFAULT_ARGS") - 1, true);
	zend_hash_del(&class_entry->constants_table, const_DEFAULT_ARGS_name);
	zend_declare_class_constant_ex(class_entry, const_DEFAULT_ARGS_name, &const_DEFAULT_ARGS_value, ZEND_ACC_PUBLIC, NULL);
	zend_string_release_ex(const_DEFAULT_ARGS_name, true);

	zval const_DISABLED_FEATURES_value;
	ZVAL_EMPTY_ARRAY(&const_DISABLED_FEATURES_value);
	zend_string *const_DISABLED_FEATURES_name = zend_string_init_interned("DISABLED_FEATURES", sizeof("DISABLED_FEATURES") - 1, true);
	zend_hash_del(&class_entry->constants_table, const_DISABLED_FEATURES_name);
	zend_declare_class_constant_ex(class_entry, const_DISABLED_FEATURES_name, &const_DISABLED_FEATURES_value, ZEND_ACC_PUBLIC, NULL);
	zend_string_release_ex(const_DISABLED_FEATURES_name, true);

	return class_entry;
}
