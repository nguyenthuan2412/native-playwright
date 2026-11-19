/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: c7b654944d454d3aa71c7e6f152ed579bd0311e7 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Response___construct, 0, 0, 6)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 1)
	ZEND_ARG_OBJ_INFO(0, request, NativePlaywright\\Request, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, status, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, statusText, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, headers, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, remoteIp, IS_STRING, 0, "''")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, remotePort, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, securityDetails, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, fromServiceWorker, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Response_url, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Response_status, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Response_statusText arginfo_class_NativePlaywright_Response_url

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Response_ok, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Response_headers, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Response_allHeaders arginfo_class_NativePlaywright_Response_headers

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Response_headerValue, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Response_headerValues, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Response_request, 0, 0, NativePlaywright\\Request, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Response_frame, 0, 0, NativePlaywright\\Frame, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Response_fromServiceWorker arginfo_class_NativePlaywright_Response_ok

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Response_serverAddr, 0, 0, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Response_securityDetails arginfo_class_NativePlaywright_Response_serverAddr

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Response_finished, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Response_body arginfo_class_NativePlaywright_Response_url

#define arginfo_class_NativePlaywright_Response_text arginfo_class_NativePlaywright_Response_url

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Response_json, 0, 0, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Response, __construct);
ZEND_METHOD(NativePlaywright_Response, url);
ZEND_METHOD(NativePlaywright_Response, status);
ZEND_METHOD(NativePlaywright_Response, statusText);
ZEND_METHOD(NativePlaywright_Response, ok);
ZEND_METHOD(NativePlaywright_Response, headers);
ZEND_METHOD(NativePlaywright_Response, allHeaders);
ZEND_METHOD(NativePlaywright_Response, headerValue);
ZEND_METHOD(NativePlaywright_Response, headerValues);
ZEND_METHOD(NativePlaywright_Response, request);
ZEND_METHOD(NativePlaywright_Response, frame);
ZEND_METHOD(NativePlaywright_Response, fromServiceWorker);
ZEND_METHOD(NativePlaywright_Response, serverAddr);
ZEND_METHOD(NativePlaywright_Response, securityDetails);
ZEND_METHOD(NativePlaywright_Response, finished);
ZEND_METHOD(NativePlaywright_Response, body);
ZEND_METHOD(NativePlaywright_Response, text);
ZEND_METHOD(NativePlaywright_Response, json);

static const zend_function_entry class_NativePlaywright_Response_methods[] = {
	ZEND_ME(NativePlaywright_Response, __construct, arginfo_class_NativePlaywright_Response___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, url, arginfo_class_NativePlaywright_Response_url, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, status, arginfo_class_NativePlaywright_Response_status, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, statusText, arginfo_class_NativePlaywright_Response_statusText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, ok, arginfo_class_NativePlaywright_Response_ok, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, headers, arginfo_class_NativePlaywright_Response_headers, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, allHeaders, arginfo_class_NativePlaywright_Response_allHeaders, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, headerValue, arginfo_class_NativePlaywright_Response_headerValue, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, headerValues, arginfo_class_NativePlaywright_Response_headerValues, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, request, arginfo_class_NativePlaywright_Response_request, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, frame, arginfo_class_NativePlaywright_Response_frame, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, fromServiceWorker, arginfo_class_NativePlaywright_Response_fromServiceWorker, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, serverAddr, arginfo_class_NativePlaywright_Response_serverAddr, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, securityDetails, arginfo_class_NativePlaywright_Response_securityDetails, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, finished, arginfo_class_NativePlaywright_Response_finished, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, body, arginfo_class_NativePlaywright_Response_body, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, text, arginfo_class_NativePlaywright_Response_text, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Response, json, arginfo_class_NativePlaywright_Response_json, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Response(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Response", class_NativePlaywright_Response_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_encodedLength_default_value;
	ZVAL_LONG(&property_encodedLength_default_value, 0);
	zend_string *property_encodedLength_name = zend_string_init("encodedLength", sizeof("encodedLength") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_encodedLength_name);
	zend_declare_typed_property(class_entry, property_encodedLength_name, &property_encodedLength_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_encodedLength_name, true);

	zval property_body_default_value;
	ZVAL_NULL(&property_body_default_value);
	zend_string *property_body_name = zend_string_init("body", sizeof("body") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_body_name);
	zend_declare_typed_property(class_entry, property_body_name, &property_body_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release_ex(property_body_name, true);

	zval property_page_default_value;
	ZVAL_NULL(&property_page_default_value);
	zend_string *property_page_name = zend_string_init("page", sizeof("page") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_page_name);
	zend_string *property_page_class_NativePlaywright_Page = zend_string_init("NativePlaywright\\Page", sizeof("NativePlaywright\\Page")-1, 1);
	zend_declare_typed_property(class_entry, property_page_name, &property_page_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_page_class_NativePlaywright_Page, 0, MAY_BE_NULL));
	zend_string_release_ex(property_page_name, true);

	zval property_request_default_value;
	ZVAL_NULL(&property_request_default_value);
	zend_string *property_request_name = zend_string_init("request", sizeof("request") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_request_name);
	zend_string *property_request_class_NativePlaywright_Request = zend_string_init("NativePlaywright\\Request", sizeof("NativePlaywright\\Request")-1, 1);
	zend_declare_typed_property(class_entry, property_request_name, &property_request_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_request_class_NativePlaywright_Request, 0, 0));
	zend_string_release_ex(property_request_name, true);

	zval property_url_default_value;
	ZVAL_EMPTY_STRING(&property_url_default_value);
	zend_string *property_url_name = zend_string_init("url", sizeof("url") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_url_name);
	zend_declare_typed_property(class_entry, property_url_name, &property_url_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_url_name, true);

	zval property_status_default_value;
	ZVAL_LONG(&property_status_default_value, 0);
	zend_string *property_status_name = zend_string_init("status", sizeof("status") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_status_name);
	zend_declare_typed_property(class_entry, property_status_name, &property_status_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_status_name, true);

	zval property_statusText_default_value;
	ZVAL_EMPTY_STRING(&property_statusText_default_value);
	zend_string *property_statusText_name = zend_string_init("statusText", sizeof("statusText") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_statusText_name);
	zend_declare_typed_property(class_entry, property_statusText_name, &property_statusText_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_statusText_name, true);

	zval property_headers_default_value;
	ZVAL_EMPTY_ARRAY(&property_headers_default_value);
	zend_string *property_headers_name = zend_string_init("headers", sizeof("headers") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_headers_name);
	zend_declare_typed_property(class_entry, property_headers_name, &property_headers_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_headers_name, true);

	zval property_remoteIp_default_value;
	ZVAL_EMPTY_STRING(&property_remoteIp_default_value);
	zend_string *property_remoteIp_name = zend_string_init("remoteIp", sizeof("remoteIp") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_remoteIp_name);
	zend_declare_typed_property(class_entry, property_remoteIp_name, &property_remoteIp_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_remoteIp_name, true);

	zval property_remotePort_default_value;
	ZVAL_LONG(&property_remotePort_default_value, 0);
	zend_string *property_remotePort_name = zend_string_init("remotePort", sizeof("remotePort") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_remotePort_name);
	zend_declare_typed_property(class_entry, property_remotePort_name, &property_remotePort_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_remotePort_name, true);

	zval property_securityDetails_default_value;
	ZVAL_EMPTY_ARRAY(&property_securityDetails_default_value);
	zend_string *property_securityDetails_name = zend_string_init("securityDetails", sizeof("securityDetails") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_securityDetails_name);
	zend_declare_typed_property(class_entry, property_securityDetails_name, &property_securityDetails_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_securityDetails_name, true);

	zval property_fromServiceWorker_default_value;
	ZVAL_FALSE(&property_fromServiceWorker_default_value);
	zend_string *property_fromServiceWorker_name = zend_string_init("fromServiceWorker", sizeof("fromServiceWorker") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_fromServiceWorker_name);
	zend_declare_typed_property(class_entry, property_fromServiceWorker_name, &property_fromServiceWorker_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_fromServiceWorker_name, true);

	return class_entry;
}
