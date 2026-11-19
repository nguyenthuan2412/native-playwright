/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 22bfaf7dd0e6625ace4ec441a846a56a2e9c9164 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Browser___construct, 0, 0, 3)
	ZEND_ARG_OBJ_INFO(0, t, NativePlaywright\\Transport, 0)
	ZEND_ARG_OBJ_INFO(0, conn, NativePlaywright\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, launchOptions, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Browser_launch, 0, 0, NativePlaywright\\Browser, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_initialize, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Browser_transport, 0, 0, NativePlaywright\\Transport, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_defaultTimeout, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_launchOption, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Browser_slowMo arginfo_class_NativePlaywright_Browser_defaultTimeout

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_defaultUserAgent, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_send, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, params, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Browser_connection, 0, 0, NativePlaywright\\Connection, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_pid, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Browser_version arginfo_class_NativePlaywright_Browser_defaultUserAgent

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Browser_browserType, 0, 0, NativePlaywright\\BrowserType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_isConnected, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_contexts, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Browser_newContext, 0, 0, NativePlaywright\\BrowserContext, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Browser_newPage, 0, 0, NativePlaywright\\Page, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Browser_useDefaultContext, 0, 1, NativePlaywright\\BrowserContext, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Browser_createPage, 0, 1, NativePlaywright\\Page, 0)
	ZEND_ARG_OBJ_INFO(0, ctx, NativePlaywright\\BrowserContext, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_contextClosed, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, ctx, NativePlaywright\\BrowserContext, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_onProtocolEvent, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Browser_pageForFrame, 0, 1, NativePlaywright\\Page, 1)
	ZEND_ARG_TYPE_INFO(0, frameId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_attachPage, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, sid, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, info, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_didDisconnect, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Browser_close arginfo_class_NativePlaywright_Browser_didDisconnect

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Browser_newBrowserCDPSession, 0, 0, NativePlaywright\\CDPSession, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_on, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, handler, Closure, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Browser_once arginfo_class_NativePlaywright_Browser_on

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_off, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, handler, Closure, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_removeAllListeners, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, event, IS_STRING, 0, "''")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_listenerCount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_onListenerAdded, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_emit, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_waitForEvent, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, predicate, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_DOUBLE, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Browser_expectEvent, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, action, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, predicate, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_DOUBLE, 1, "null")
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Browser, __construct);
ZEND_METHOD(NativePlaywright_Browser, launch);
ZEND_METHOD(NativePlaywright_Browser, initialize);
ZEND_METHOD(NativePlaywright_Browser, transport);
ZEND_METHOD(NativePlaywright_Browser, defaultTimeout);
ZEND_METHOD(NativePlaywright_Browser, launchOption);
ZEND_METHOD(NativePlaywright_Browser, slowMo);
ZEND_METHOD(NativePlaywright_Browser, defaultUserAgent);
ZEND_METHOD(NativePlaywright_Browser, send);
ZEND_METHOD(NativePlaywright_Browser, connection);
ZEND_METHOD(NativePlaywright_Browser, pid);
ZEND_METHOD(NativePlaywright_Browser, version);
ZEND_METHOD(NativePlaywright_Browser, browserType);
ZEND_METHOD(NativePlaywright_Browser, isConnected);
ZEND_METHOD(NativePlaywright_Browser, contexts);
ZEND_METHOD(NativePlaywright_Browser, newContext);
ZEND_METHOD(NativePlaywright_Browser, newPage);
ZEND_METHOD(NativePlaywright_Browser, useDefaultContext);
ZEND_METHOD(NativePlaywright_Browser, createPage);
ZEND_METHOD(NativePlaywright_Browser, contextClosed);
ZEND_METHOD(NativePlaywright_Browser, onProtocolEvent);
ZEND_METHOD(NativePlaywright_Browser, pageForFrame);
ZEND_METHOD(NativePlaywright_Browser, attachPage);
ZEND_METHOD(NativePlaywright_Browser, didDisconnect);
ZEND_METHOD(NativePlaywright_Browser, close);
ZEND_METHOD(NativePlaywright_Browser, newBrowserCDPSession);
ZEND_METHOD(NativePlaywright_Browser, on);
ZEND_METHOD(NativePlaywright_Browser, once);
ZEND_METHOD(NativePlaywright_Browser, off);
ZEND_METHOD(NativePlaywright_Browser, removeAllListeners);
ZEND_METHOD(NativePlaywright_Browser, listenerCount);
ZEND_METHOD(NativePlaywright_Browser, onListenerAdded);
ZEND_METHOD(NativePlaywright_Browser, emit);
ZEND_METHOD(NativePlaywright_Browser, waitForEvent);
ZEND_METHOD(NativePlaywright_Browser, expectEvent);

static const zend_function_entry class_NativePlaywright_Browser_methods[] = {
	ZEND_ME(NativePlaywright_Browser, __construct, arginfo_class_NativePlaywright_Browser___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, launch, arginfo_class_NativePlaywright_Browser_launch, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Browser, initialize, arginfo_class_NativePlaywright_Browser_initialize, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, transport, arginfo_class_NativePlaywright_Browser_transport, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_Browser, defaultTimeout, arginfo_class_NativePlaywright_Browser_defaultTimeout, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_Browser, launchOption, arginfo_class_NativePlaywright_Browser_launchOption, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, slowMo, arginfo_class_NativePlaywright_Browser_slowMo, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, defaultUserAgent, arginfo_class_NativePlaywright_Browser_defaultUserAgent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, send, arginfo_class_NativePlaywright_Browser_send, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, connection, arginfo_class_NativePlaywright_Browser_connection, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, pid, arginfo_class_NativePlaywright_Browser_pid, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, version, arginfo_class_NativePlaywright_Browser_version, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, browserType, arginfo_class_NativePlaywright_Browser_browserType, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, isConnected, arginfo_class_NativePlaywright_Browser_isConnected, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, contexts, arginfo_class_NativePlaywright_Browser_contexts, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, newContext, arginfo_class_NativePlaywright_Browser_newContext, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, newPage, arginfo_class_NativePlaywright_Browser_newPage, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, useDefaultContext, arginfo_class_NativePlaywright_Browser_useDefaultContext, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, createPage, arginfo_class_NativePlaywright_Browser_createPage, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, contextClosed, arginfo_class_NativePlaywright_Browser_contextClosed, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, onProtocolEvent, arginfo_class_NativePlaywright_Browser_onProtocolEvent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, pageForFrame, arginfo_class_NativePlaywright_Browser_pageForFrame, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Browser, attachPage, arginfo_class_NativePlaywright_Browser_attachPage, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, didDisconnect, arginfo_class_NativePlaywright_Browser_didDisconnect, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, close, arginfo_class_NativePlaywright_Browser_close, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, newBrowserCDPSession, arginfo_class_NativePlaywright_Browser_newBrowserCDPSession, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, on, arginfo_class_NativePlaywright_Browser_on, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, once, arginfo_class_NativePlaywright_Browser_once, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, off, arginfo_class_NativePlaywright_Browser_off, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, removeAllListeners, arginfo_class_NativePlaywright_Browser_removeAllListeners, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, listenerCount, arginfo_class_NativePlaywright_Browser_listenerCount, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, onListenerAdded, arginfo_class_NativePlaywright_Browser_onListenerAdded, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_Browser, emit, arginfo_class_NativePlaywright_Browser_emit, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_Browser, waitForEvent, arginfo_class_NativePlaywright_Browser_waitForEvent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Browser, expectEvent, arginfo_class_NativePlaywright_Browser_expectEvent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Browser(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Browser", class_NativePlaywright_Browser_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_contexts_default_value;
	ZVAL_EMPTY_ARRAY(&property_contexts_default_value);
	zend_string *property_contexts_name = zend_string_init("contexts", sizeof("contexts") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_contexts_name);
	zend_declare_typed_property(class_entry, property_contexts_name, &property_contexts_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_contexts_name, true);

	zval property_pages_default_value;
	ZVAL_EMPTY_ARRAY(&property_pages_default_value);
	zend_string *property_pages_name = zend_string_init("pages", sizeof("pages") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_pages_name);
	zend_declare_typed_property(class_entry, property_pages_name, &property_pages_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_pages_name, true);

	zval property_sessions_default_value;
	ZVAL_EMPTY_ARRAY(&property_sessions_default_value);
	zend_string *property_sessions_name = zend_string_init("sessions", sizeof("sessions") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_sessions_name);
	zend_declare_typed_property(class_entry, property_sessions_name, &property_sessions_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_sessions_name, true);

	zval property_pageWaiters_default_value;
	ZVAL_EMPTY_ARRAY(&property_pageWaiters_default_value);
	zend_string *property_pageWaiters_name = zend_string_init("pageWaiters", sizeof("pageWaiters") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_pageWaiters_name);
	zend_declare_typed_property(class_entry, property_pageWaiters_name, &property_pageWaiters_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_pageWaiters_name, true);

	zval property_downloads_default_value;
	ZVAL_EMPTY_ARRAY(&property_downloads_default_value);
	zend_string *property_downloads_name = zend_string_init("downloads", sizeof("downloads") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_downloads_name);
	zend_declare_typed_property(class_entry, property_downloads_name, &property_downloads_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_downloads_name, true);

	zval property_closed_default_value;
	ZVAL_FALSE(&property_closed_default_value);
	zend_string *property_closed_name = zend_string_init("closed", sizeof("closed") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_closed_name);
	zend_declare_typed_property(class_entry, property_closed_name, &property_closed_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_closed_name, true);

	zval property_userAgent_default_value;
	ZVAL_EMPTY_STRING(&property_userAgent_default_value);
	zend_string *property_userAgent_name = zend_string_init("userAgent", sizeof("userAgent") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_userAgent_name);
	zend_declare_typed_property(class_entry, property_userAgent_name, &property_userAgent_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_userAgent_name, true);

	zval property_version_default_value;
	ZVAL_EMPTY_STRING(&property_version_default_value);
	zend_string *property_version_name = zend_string_init("version", sizeof("version") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_version_name);
	zend_declare_typed_property(class_entry, property_version_name, &property_version_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_version_name, true);

	zval property_defaultContext_default_value;
	ZVAL_NULL(&property_defaultContext_default_value);
	zend_string *property_defaultContext_name = zend_string_init("defaultContext", sizeof("defaultContext") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_defaultContext_name);
	zend_string *property_defaultContext_class_NativePlaywright_BrowserContext = zend_string_init("NativePlaywright\\BrowserContext", sizeof("NativePlaywright\\BrowserContext")-1, 1);
	zend_declare_typed_property(class_entry, property_defaultContext_name, &property_defaultContext_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_defaultContext_class_NativePlaywright_BrowserContext, 0, MAY_BE_NULL));
	zend_string_release_ex(property_defaultContext_name, true);

	zval property_t_default_value;
	ZVAL_NULL(&property_t_default_value);
	zend_string *property_t_name = zend_string_init("t", sizeof("t") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_t_name);
	zend_string *property_t_class_NativePlaywright_Transport = zend_string_init("NativePlaywright\\Transport", sizeof("NativePlaywright\\Transport")-1, 1);
	zend_declare_typed_property(class_entry, property_t_name, &property_t_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_t_class_NativePlaywright_Transport, 0, 0));
	zend_string_release_ex(property_t_name, true);

	zval property_conn_default_value;
	ZVAL_NULL(&property_conn_default_value);
	zend_string *property_conn_name = zend_string_init("conn", sizeof("conn") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_conn_name);
	zend_string *property_conn_class_NativePlaywright_Connection = zend_string_init("NativePlaywright\\Connection", sizeof("NativePlaywright\\Connection")-1, 1);
	zend_declare_typed_property(class_entry, property_conn_name, &property_conn_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_conn_class_NativePlaywright_Connection, 0, 0));
	zend_string_release_ex(property_conn_name, true);

	zval property_launchOptions_default_value;
	ZVAL_EMPTY_ARRAY(&property_launchOptions_default_value);
	zend_string *property_launchOptions_name = zend_string_init("launchOptions", sizeof("launchOptions") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_launchOptions_name);
	zend_declare_typed_property(class_entry, property_launchOptions_name, &property_launchOptions_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_launchOptions_name, true);

	zval property_handlers_default_value;
	ZVAL_EMPTY_ARRAY(&property_handlers_default_value);
	zend_string *property_handlers_name = zend_string_init("handlers", sizeof("handlers") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_handlers_name);
	zend_declare_typed_property(class_entry, property_handlers_name, &property_handlers_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_handlers_name, true);

	zval property_handlerSeq_default_value;
	ZVAL_LONG(&property_handlerSeq_default_value, 0);
	zend_string *property_handlerSeq_name = zend_string_init("handlerSeq", sizeof("handlerSeq") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_handlerSeq_name);
	zend_declare_typed_property(class_entry, property_handlerSeq_name, &property_handlerSeq_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_handlerSeq_name, true);

	return class_entry;
}
