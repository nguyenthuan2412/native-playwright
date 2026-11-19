/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: b938a1f157a491b8064239889f9fcceb2b25ec82 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Download___construct, 0, 0, 6)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 0)
	ZEND_ARG_OBJ_INFO(0, context, NativePlaywright\\BrowserContext, 0)
	ZEND_ARG_TYPE_INFO(0, guid, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, suggestedFilename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dir, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Download_guid, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Download_url arginfo_class_NativePlaywright_Download_guid

#define arginfo_class_NativePlaywright_Download_suggestedFilename arginfo_class_NativePlaywright_Download_guid

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Download_page, 0, 0, NativePlaywright\\Page, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Download_waitDone, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Download_path, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Download_failure arginfo_class_NativePlaywright_Download_path

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Download_saveAs, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Download_createReadStream, 0, 0, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Download_cancel arginfo_class_NativePlaywright_Download_waitDone

#define arginfo_class_NativePlaywright_Download_delete arginfo_class_NativePlaywright_Download_waitDone

ZEND_METHOD(NativePlaywright_Download, __construct);
ZEND_METHOD(NativePlaywright_Download, guid);
ZEND_METHOD(NativePlaywright_Download, url);
ZEND_METHOD(NativePlaywright_Download, suggestedFilename);
ZEND_METHOD(NativePlaywright_Download, page);
ZEND_METHOD(NativePlaywright_Download, waitDone);
ZEND_METHOD(NativePlaywright_Download, path);
ZEND_METHOD(NativePlaywright_Download, failure);
ZEND_METHOD(NativePlaywright_Download, saveAs);
ZEND_METHOD(NativePlaywright_Download, createReadStream);
ZEND_METHOD(NativePlaywright_Download, cancel);
ZEND_METHOD(NativePlaywright_Download, delete);

static const zend_function_entry class_NativePlaywright_Download_methods[] = {
	ZEND_ME(NativePlaywright_Download, __construct, arginfo_class_NativePlaywright_Download___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Download, guid, arginfo_class_NativePlaywright_Download_guid, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Download, url, arginfo_class_NativePlaywright_Download_url, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Download, suggestedFilename, arginfo_class_NativePlaywright_Download_suggestedFilename, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Download, page, arginfo_class_NativePlaywright_Download_page, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Download, waitDone, arginfo_class_NativePlaywright_Download_waitDone, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Download, path, arginfo_class_NativePlaywright_Download_path, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Download, failure, arginfo_class_NativePlaywright_Download_failure, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Download, saveAs, arginfo_class_NativePlaywright_Download_saveAs, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Download, createReadStream, arginfo_class_NativePlaywright_Download_createReadStream, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Download, cancel, arginfo_class_NativePlaywright_Download_cancel, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Download, delete, arginfo_class_NativePlaywright_Download_delete, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Download(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Download", class_NativePlaywright_Download_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_state_default_value;
	zend_string *property_state_default_value_str = zend_string_init_interned("inProgress", sizeof("inProgress") - 1, 1);
	ZVAL_INTERNED_STR(&property_state_default_value, property_state_default_value_str);
	zend_string *property_state_name = zend_string_init("state", sizeof("state") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_state_name);
	zend_declare_typed_property(class_entry, property_state_name, &property_state_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_state_name, true);

	zval property_receivedBytes_default_value;
	ZVAL_LONG(&property_receivedBytes_default_value, 0);
	zend_string *property_receivedBytes_name = zend_string_init("receivedBytes", sizeof("receivedBytes") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_receivedBytes_name);
	zend_declare_typed_property(class_entry, property_receivedBytes_name, &property_receivedBytes_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_receivedBytes_name, true);

	zval property_totalBytes_default_value;
	ZVAL_LONG(&property_totalBytes_default_value, 0);
	zend_string *property_totalBytes_name = zend_string_init("totalBytes", sizeof("totalBytes") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_totalBytes_name);
	zend_declare_typed_property(class_entry, property_totalBytes_name, &property_totalBytes_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_totalBytes_name, true);

	zval property_page_default_value;
	ZVAL_NULL(&property_page_default_value);
	zend_string *property_page_name = zend_string_init("page", sizeof("page") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_page_name);
	zend_string *property_page_class_NativePlaywright_Page = zend_string_init("NativePlaywright\\Page", sizeof("NativePlaywright\\Page")-1, 1);
	zend_declare_typed_property(class_entry, property_page_name, &property_page_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_page_class_NativePlaywright_Page, 0, 0));
	zend_string_release_ex(property_page_name, true);

	zval property_context_default_value;
	ZVAL_NULL(&property_context_default_value);
	zend_string *property_context_name = zend_string_init("context", sizeof("context") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_context_name);
	zend_string *property_context_class_NativePlaywright_BrowserContext = zend_string_init("NativePlaywright\\BrowserContext", sizeof("NativePlaywright\\BrowserContext")-1, 1);
	zend_declare_typed_property(class_entry, property_context_name, &property_context_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_context_class_NativePlaywright_BrowserContext, 0, 0));
	zend_string_release_ex(property_context_name, true);

	zval property_guid_default_value;
	ZVAL_EMPTY_STRING(&property_guid_default_value);
	zend_string *property_guid_name = zend_string_init("guid", sizeof("guid") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_guid_name);
	zend_declare_typed_property(class_entry, property_guid_name, &property_guid_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_guid_name, true);

	zval property_url_default_value;
	ZVAL_EMPTY_STRING(&property_url_default_value);
	zend_string *property_url_name = zend_string_init("url", sizeof("url") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_url_name);
	zend_declare_typed_property(class_entry, property_url_name, &property_url_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_url_name, true);

	zval property_suggestedFilename_default_value;
	ZVAL_EMPTY_STRING(&property_suggestedFilename_default_value);
	zend_string *property_suggestedFilename_name = zend_string_init("suggestedFilename", sizeof("suggestedFilename") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_suggestedFilename_name);
	zend_declare_typed_property(class_entry, property_suggestedFilename_name, &property_suggestedFilename_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_suggestedFilename_name, true);

	zval property_dir_default_value;
	ZVAL_EMPTY_STRING(&property_dir_default_value);
	zend_string *property_dir_name = zend_string_init("dir", sizeof("dir") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_dir_name);
	zend_declare_typed_property(class_entry, property_dir_name, &property_dir_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_dir_name, true);

	return class_entry;
}
