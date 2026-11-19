/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: d7dda80abf6e5b9601f08240d3913e2f45783d8d */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_FileChooser___construct, 0, 0, 3)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 0)
	ZEND_ARG_TYPE_INFO(0, backendNodeId, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, multiple, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_FileChooser_page, 0, 0, NativePlaywright\\Page, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_FileChooser_isMultiple, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_FileChooser_setFiles, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_MASK(0, files, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_FileChooser, __construct);
ZEND_METHOD(NativePlaywright_FileChooser, page);
ZEND_METHOD(NativePlaywright_FileChooser, isMultiple);
ZEND_METHOD(NativePlaywright_FileChooser, setFiles);

static const zend_function_entry class_NativePlaywright_FileChooser_methods[] = {
	ZEND_ME(NativePlaywright_FileChooser, __construct, arginfo_class_NativePlaywright_FileChooser___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FileChooser, page, arginfo_class_NativePlaywright_FileChooser_page, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FileChooser, isMultiple, arginfo_class_NativePlaywright_FileChooser_isMultiple, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_FileChooser, setFiles, arginfo_class_NativePlaywright_FileChooser_setFiles, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_FileChooser(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "FileChooser", class_NativePlaywright_FileChooser_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_page_default_value;
	ZVAL_NULL(&property_page_default_value);
	zend_string *property_page_name = zend_string_init("page", sizeof("page") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_page_name);
	zend_string *property_page_class_NativePlaywright_Page = zend_string_init("NativePlaywright\\Page", sizeof("NativePlaywright\\Page")-1, 1);
	zend_declare_typed_property(class_entry, property_page_name, &property_page_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_page_class_NativePlaywright_Page, 0, 0));
	zend_string_release_ex(property_page_name, true);

	zval property_backendNodeId_default_value;
	ZVAL_LONG(&property_backendNodeId_default_value, 0);
	zend_string *property_backendNodeId_name = zend_string_init("backendNodeId", sizeof("backendNodeId") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_backendNodeId_name);
	zend_declare_typed_property(class_entry, property_backendNodeId_name, &property_backendNodeId_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_backendNodeId_name, true);

	zval property_multiple_default_value;
	ZVAL_FALSE(&property_multiple_default_value);
	zend_string *property_multiple_name = zend_string_init("multiple", sizeof("multiple") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_multiple_name);
	zend_declare_typed_property(class_entry, property_multiple_name, &property_multiple_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_multiple_name, true);

	return class_entry;
}
