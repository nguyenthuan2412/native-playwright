/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: c1274d73bc9cf8627823228da93bea9bb398b7a8 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Request___construct, 0, 0, 9)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 1)
	ZEND_ARG_TYPE_INFO(0, id, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, headers, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, postData, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, resourceType, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, frameId, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, isNavigation, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, redirectedFrom, NativePlaywright\\Request, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Request_url, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Request_method arginfo_class_NativePlaywright_Request_url

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Request_headers, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Request_allHeaders arginfo_class_NativePlaywright_Request_headers

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Request_headerValue, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Request_postData, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Request_postDataJSON, 0, 0, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Request_resourceType arginfo_class_NativePlaywright_Request_url

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Request_isNavigationRequest, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Request_frameId arginfo_class_NativePlaywright_Request_url

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Request_frame, 0, 0, NativePlaywright\\Frame, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Request_page, 0, 0, NativePlaywright\\Page, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Request_redirectedFrom, 0, 0, NativePlaywright\\Request, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Request_redirectedTo arginfo_class_NativePlaywright_Request_redirectedFrom

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Request_response, 0, 0, NativePlaywright\\Response, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Request_failure, 0, 0, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Request_timing arginfo_class_NativePlaywright_Request_headers

#define arginfo_class_NativePlaywright_Request_sizes arginfo_class_NativePlaywright_Request_headers

ZEND_METHOD(NativePlaywright_Request, __construct);
ZEND_METHOD(NativePlaywright_Request, url);
ZEND_METHOD(NativePlaywright_Request, method);
ZEND_METHOD(NativePlaywright_Request, headers);
ZEND_METHOD(NativePlaywright_Request, allHeaders);
ZEND_METHOD(NativePlaywright_Request, headerValue);
ZEND_METHOD(NativePlaywright_Request, postData);
ZEND_METHOD(NativePlaywright_Request, postDataJSON);
ZEND_METHOD(NativePlaywright_Request, resourceType);
ZEND_METHOD(NativePlaywright_Request, isNavigationRequest);
ZEND_METHOD(NativePlaywright_Request, frameId);
ZEND_METHOD(NativePlaywright_Request, frame);
ZEND_METHOD(NativePlaywright_Request, page);
ZEND_METHOD(NativePlaywright_Request, redirectedFrom);
ZEND_METHOD(NativePlaywright_Request, redirectedTo);
ZEND_METHOD(NativePlaywright_Request, response);
ZEND_METHOD(NativePlaywright_Request, failure);
ZEND_METHOD(NativePlaywright_Request, timing);
ZEND_METHOD(NativePlaywright_Request, sizes);

static const zend_function_entry class_NativePlaywright_Request_methods[] = {
	ZEND_ME(NativePlaywright_Request, __construct, arginfo_class_NativePlaywright_Request___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, url, arginfo_class_NativePlaywright_Request_url, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, method, arginfo_class_NativePlaywright_Request_method, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, headers, arginfo_class_NativePlaywright_Request_headers, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, allHeaders, arginfo_class_NativePlaywright_Request_allHeaders, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, headerValue, arginfo_class_NativePlaywright_Request_headerValue, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, postData, arginfo_class_NativePlaywright_Request_postData, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, postDataJSON, arginfo_class_NativePlaywright_Request_postDataJSON, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, resourceType, arginfo_class_NativePlaywright_Request_resourceType, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, isNavigationRequest, arginfo_class_NativePlaywright_Request_isNavigationRequest, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, frameId, arginfo_class_NativePlaywright_Request_frameId, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, frame, arginfo_class_NativePlaywright_Request_frame, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, page, arginfo_class_NativePlaywright_Request_page, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, redirectedFrom, arginfo_class_NativePlaywright_Request_redirectedFrom, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, redirectedTo, arginfo_class_NativePlaywright_Request_redirectedTo, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, response, arginfo_class_NativePlaywright_Request_response, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, failure, arginfo_class_NativePlaywright_Request_failure, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, timing, arginfo_class_NativePlaywright_Request_timing, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Request, sizes, arginfo_class_NativePlaywright_Request_sizes, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Request(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Request", class_NativePlaywright_Request_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_response_default_value;
	ZVAL_NULL(&property_response_default_value);
	zend_string *property_response_name = zend_string_init("response", sizeof("response") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_response_name);
	zend_string *property_response_class_NativePlaywright_Response = zend_string_init("NativePlaywright\\Response", sizeof("NativePlaywright\\Response")-1, 1);
	zend_declare_typed_property(class_entry, property_response_name, &property_response_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_response_class_NativePlaywright_Response, 0, MAY_BE_NULL));
	zend_string_release_ex(property_response_name, true);

	zval property_failure_default_value;
	ZVAL_NULL(&property_failure_default_value);
	zend_string *property_failure_name = zend_string_init("failure", sizeof("failure") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_failure_name);
	zend_declare_typed_property(class_entry, property_failure_name, &property_failure_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release_ex(property_failure_name, true);

	zval property_redirectedTo_default_value;
	ZVAL_NULL(&property_redirectedTo_default_value);
	zend_string *property_redirectedTo_name = zend_string_init("redirectedTo", sizeof("redirectedTo") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_redirectedTo_name);
	zend_string *property_redirectedTo_class_NativePlaywright_Request = zend_string_init("NativePlaywright\\Request", sizeof("NativePlaywright\\Request")-1, 1);
	zend_declare_typed_property(class_entry, property_redirectedTo_name, &property_redirectedTo_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_redirectedTo_class_NativePlaywright_Request, 0, MAY_BE_NULL));
	zend_string_release_ex(property_redirectedTo_name, true);

	zval property_startTime_default_value;
	ZVAL_DOUBLE(&property_startTime_default_value, 0.0);
	zend_string *property_startTime_name = zend_string_init("startTime", sizeof("startTime") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_startTime_name);
	zend_declare_typed_property(class_entry, property_startTime_name, &property_startTime_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release_ex(property_startTime_name, true);

	zval property_endTime_default_value;
	ZVAL_DOUBLE(&property_endTime_default_value, -1.0);
	zend_string *property_endTime_name = zend_string_init("endTime", sizeof("endTime") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_endTime_name);
	zend_declare_typed_property(class_entry, property_endTime_name, &property_endTime_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release_ex(property_endTime_name, true);

	zval property_finished_default_value;
	ZVAL_FALSE(&property_finished_default_value);
	zend_string *property_finished_name = zend_string_init("finished", sizeof("finished") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_finished_name);
	zend_declare_typed_property(class_entry, property_finished_name, &property_finished_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_finished_name, true);

	zval property_page_default_value;
	ZVAL_NULL(&property_page_default_value);
	zend_string *property_page_name = zend_string_init("page", sizeof("page") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_page_name);
	zend_string *property_page_class_NativePlaywright_Page = zend_string_init("NativePlaywright\\Page", sizeof("NativePlaywright\\Page")-1, 1);
	zend_declare_typed_property(class_entry, property_page_name, &property_page_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_page_class_NativePlaywright_Page, 0, MAY_BE_NULL));
	zend_string_release_ex(property_page_name, true);

	zval property_id_default_value;
	ZVAL_UNDEF(&property_id_default_value);
	zend_string *property_id_name = zend_string_init("id", sizeof("id") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_id_name);
	zend_declare_typed_property(class_entry, property_id_name, &property_id_default_value, ZEND_ACC_PUBLIC|ZEND_ACC_READONLY|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_id_name, true);

	zval property_url_default_value;
	ZVAL_EMPTY_STRING(&property_url_default_value);
	zend_string *property_url_name = zend_string_init("url", sizeof("url") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_url_name);
	zend_declare_typed_property(class_entry, property_url_name, &property_url_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_url_name, true);

	zval property_method_default_value;
	ZVAL_EMPTY_STRING(&property_method_default_value);
	zend_string *property_method_name = zend_string_init("method", sizeof("method") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_method_name);
	zend_declare_typed_property(class_entry, property_method_name, &property_method_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_method_name, true);

	zval property_headers_default_value;
	ZVAL_EMPTY_ARRAY(&property_headers_default_value);
	zend_string *property_headers_name = zend_string_init("headers", sizeof("headers") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_headers_name);
	zend_declare_typed_property(class_entry, property_headers_name, &property_headers_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_headers_name, true);

	zval property_postData_default_value;
	ZVAL_NULL(&property_postData_default_value);
	zend_string *property_postData_name = zend_string_init("postData", sizeof("postData") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_postData_name);
	zend_declare_typed_property(class_entry, property_postData_name, &property_postData_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release_ex(property_postData_name, true);

	zval property_resourceType_default_value;
	ZVAL_EMPTY_STRING(&property_resourceType_default_value);
	zend_string *property_resourceType_name = zend_string_init("resourceType", sizeof("resourceType") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_resourceType_name);
	zend_declare_typed_property(class_entry, property_resourceType_name, &property_resourceType_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_resourceType_name, true);

	zval property_frameId_default_value;
	ZVAL_EMPTY_STRING(&property_frameId_default_value);
	zend_string *property_frameId_name = zend_string_init("frameId", sizeof("frameId") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_frameId_name);
	zend_declare_typed_property(class_entry, property_frameId_name, &property_frameId_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_frameId_name, true);

	zval property_isNavigation_default_value;
	ZVAL_FALSE(&property_isNavigation_default_value);
	zend_string *property_isNavigation_name = zend_string_init("isNavigation", sizeof("isNavigation") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_isNavigation_name);
	zend_declare_typed_property(class_entry, property_isNavigation_name, &property_isNavigation_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_isNavigation_name, true);

	zval property_redirectedFrom_default_value;
	ZVAL_NULL(&property_redirectedFrom_default_value);
	zend_string *property_redirectedFrom_name = zend_string_init("redirectedFrom", sizeof("redirectedFrom") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_redirectedFrom_name);
	zend_string *property_redirectedFrom_class_NativePlaywright_Request = zend_string_init("NativePlaywright\\Request", sizeof("NativePlaywright\\Request")-1, 1);
	zend_declare_typed_property(class_entry, property_redirectedFrom_name, &property_redirectedFrom_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_redirectedFrom_class_NativePlaywright_Request, 0, MAY_BE_NULL));
	zend_string_release_ex(property_redirectedFrom_name, true);

	return class_entry;
}
