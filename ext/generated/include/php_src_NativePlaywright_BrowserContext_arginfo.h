/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: e809c8d28b70b41bd5810de64dd7d658e62f2aef */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_BrowserContext___construct, 0, 0, 4)
	ZEND_ARG_OBJ_INFO(0, browser, NativePlaywright\\Browser, 0)
	ZEND_ARG_OBJ_INFO(0, t, NativePlaywright\\Transport, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, isDefault, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_initialize, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_transport, 0, 0, NativePlaywright\\Transport, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_defaultTimeout, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_id, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_options, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_browser, 0, 0, NativePlaywright\\Browser, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_baseURL arginfo_class_NativePlaywright_BrowserContext_id

#define arginfo_class_NativePlaywright_BrowserContext_defaultTimeoutMs arginfo_class_NativePlaywright_BrowserContext_defaultTimeout

#define arginfo_class_NativePlaywright_BrowserContext_defaultNavigationTimeoutMs arginfo_class_NativePlaywright_BrowserContext_defaultTimeout

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_setDefaultTimeout, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, ms, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_setDefaultNavigationTimeout arginfo_class_NativePlaywright_BrowserContext_setDefaultTimeout

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_hasListeners, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_emitFromPage, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_newPage, 0, 0, NativePlaywright\\Page, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_pages arginfo_class_NativePlaywright_BrowserContext_options

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_didCreatePage, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_pageClosed arginfo_class_NativePlaywright_BrowserContext_didCreatePage

#define arginfo_class_NativePlaywright_BrowserContext_setOwner arginfo_class_NativePlaywright_BrowserContext_didCreatePage

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_ownedBy, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_expectPage, 0, 1, NativePlaywright\\Page, 0)
	ZEND_ARG_OBJ_INFO(0, action, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_cookieOut, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_ctxParam arginfo_class_NativePlaywright_BrowserContext_options

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_cookies, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_MASK(0, urls, MAY_BE_STRING|MAY_BE_ARRAY, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_cookieMatchesAny, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, urls, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_addCookies, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, cookies, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_clearCookies, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_storageState, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_permissionParams, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, permissions, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, origin, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_grantPermissions, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, permissions, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_clearPermissions arginfo_class_NativePlaywright_BrowserContext_initialize

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_geolocation, 0, 0, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_setGeolocation, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, geo, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_extraHTTPHeaders arginfo_class_NativePlaywright_BrowserContext_options

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_setExtraHTTPHeaders, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, headers, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_isOffline, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_setOffline, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, offline, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_httpCredentials arginfo_class_NativePlaywright_BrowserContext_geolocation

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_scriptSource, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK(0, script, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arg, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_initScripts arginfo_class_NativePlaywright_BrowserContext_options

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_addInitScript, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_MASK(0, script, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arg, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_bindingNames arginfo_class_NativePlaywright_BrowserContext_options

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_binding, 0, 1, Closure, 1)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_exposeBinding, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, fn, Closure, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_exposeFunction arginfo_class_NativePlaywright_BrowserContext_exposeBinding

#define arginfo_class_NativePlaywright_BrowserContext_hasRoutes arginfo_class_NativePlaywright_BrowserContext_isOffline

#define arginfo_class_NativePlaywright_BrowserContext_routeHandlers arginfo_class_NativePlaywright_BrowserContext_options

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_route, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, url, Closure, MAY_BE_STRING, NULL)
	ZEND_ARG_OBJ_INFO(0, handler, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_unroute, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, url, Closure, MAY_BE_STRING, NULL)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, handler, Closure, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_unrouteAll arginfo_class_NativePlaywright_BrowserContext_initialize

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_newCDPSession, 0, 1, NativePlaywright\\CDPSession, 0)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_downloadDir arginfo_class_NativePlaywright_BrowserContext_id

#define arginfo_class_NativePlaywright_BrowserContext_isClosed arginfo_class_NativePlaywright_BrowserContext_isOffline

#define arginfo_class_NativePlaywright_BrowserContext_close arginfo_class_NativePlaywright_BrowserContext_initialize

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_on, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, handler, Closure, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_once arginfo_class_NativePlaywright_BrowserContext_on

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_off, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, handler, Closure, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_removeAllListeners, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, event, IS_STRING, 0, "''")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_listenerCount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_onListenerAdded, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_BrowserContext_emit arginfo_class_NativePlaywright_BrowserContext_emitFromPage

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_waitForEvent, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, predicate, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_DOUBLE, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_BrowserContext_expectEvent, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, action, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, predicate, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_DOUBLE, 1, "null")
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_BrowserContext, __construct);
ZEND_METHOD(NativePlaywright_BrowserContext, initialize);
ZEND_METHOD(NativePlaywright_BrowserContext, transport);
ZEND_METHOD(NativePlaywright_BrowserContext, defaultTimeout);
ZEND_METHOD(NativePlaywright_BrowserContext, id);
ZEND_METHOD(NativePlaywright_BrowserContext, options);
ZEND_METHOD(NativePlaywright_BrowserContext, browser);
ZEND_METHOD(NativePlaywright_BrowserContext, baseURL);
ZEND_METHOD(NativePlaywright_BrowserContext, defaultTimeoutMs);
ZEND_METHOD(NativePlaywright_BrowserContext, defaultNavigationTimeoutMs);
ZEND_METHOD(NativePlaywright_BrowserContext, setDefaultTimeout);
ZEND_METHOD(NativePlaywright_BrowserContext, setDefaultNavigationTimeout);
ZEND_METHOD(NativePlaywright_BrowserContext, hasListeners);
ZEND_METHOD(NativePlaywright_BrowserContext, emitFromPage);
ZEND_METHOD(NativePlaywright_BrowserContext, newPage);
ZEND_METHOD(NativePlaywright_BrowserContext, pages);
ZEND_METHOD(NativePlaywright_BrowserContext, didCreatePage);
ZEND_METHOD(NativePlaywright_BrowserContext, pageClosed);
ZEND_METHOD(NativePlaywright_BrowserContext, setOwner);
ZEND_METHOD(NativePlaywright_BrowserContext, ownedBy);
ZEND_METHOD(NativePlaywright_BrowserContext, expectPage);
ZEND_METHOD(NativePlaywright_BrowserContext, cookieOut);
ZEND_METHOD(NativePlaywright_BrowserContext, ctxParam);
ZEND_METHOD(NativePlaywright_BrowserContext, cookies);
ZEND_METHOD(NativePlaywright_BrowserContext, cookieMatchesAny);
ZEND_METHOD(NativePlaywright_BrowserContext, addCookies);
ZEND_METHOD(NativePlaywright_BrowserContext, clearCookies);
ZEND_METHOD(NativePlaywright_BrowserContext, storageState);
ZEND_METHOD(NativePlaywright_BrowserContext, permissionParams);
ZEND_METHOD(NativePlaywright_BrowserContext, grantPermissions);
ZEND_METHOD(NativePlaywright_BrowserContext, clearPermissions);
ZEND_METHOD(NativePlaywright_BrowserContext, geolocation);
ZEND_METHOD(NativePlaywright_BrowserContext, setGeolocation);
ZEND_METHOD(NativePlaywright_BrowserContext, extraHTTPHeaders);
ZEND_METHOD(NativePlaywright_BrowserContext, setExtraHTTPHeaders);
ZEND_METHOD(NativePlaywright_BrowserContext, isOffline);
ZEND_METHOD(NativePlaywright_BrowserContext, setOffline);
ZEND_METHOD(NativePlaywright_BrowserContext, httpCredentials);
ZEND_METHOD(NativePlaywright_BrowserContext, scriptSource);
ZEND_METHOD(NativePlaywright_BrowserContext, initScripts);
ZEND_METHOD(NativePlaywright_BrowserContext, addInitScript);
ZEND_METHOD(NativePlaywright_BrowserContext, bindingNames);
ZEND_METHOD(NativePlaywright_BrowserContext, binding);
ZEND_METHOD(NativePlaywright_BrowserContext, exposeBinding);
ZEND_METHOD(NativePlaywright_BrowserContext, exposeFunction);
ZEND_METHOD(NativePlaywright_BrowserContext, hasRoutes);
ZEND_METHOD(NativePlaywright_BrowserContext, routeHandlers);
ZEND_METHOD(NativePlaywright_BrowserContext, route);
ZEND_METHOD(NativePlaywright_BrowserContext, unroute);
ZEND_METHOD(NativePlaywright_BrowserContext, unrouteAll);
ZEND_METHOD(NativePlaywright_BrowserContext, newCDPSession);
ZEND_METHOD(NativePlaywright_BrowserContext, downloadDir);
ZEND_METHOD(NativePlaywright_BrowserContext, isClosed);
ZEND_METHOD(NativePlaywright_BrowserContext, close);
ZEND_METHOD(NativePlaywright_BrowserContext, on);
ZEND_METHOD(NativePlaywright_BrowserContext, once);
ZEND_METHOD(NativePlaywright_BrowserContext, off);
ZEND_METHOD(NativePlaywright_BrowserContext, removeAllListeners);
ZEND_METHOD(NativePlaywright_BrowserContext, listenerCount);
ZEND_METHOD(NativePlaywright_BrowserContext, onListenerAdded);
ZEND_METHOD(NativePlaywright_BrowserContext, emit);
ZEND_METHOD(NativePlaywright_BrowserContext, waitForEvent);
ZEND_METHOD(NativePlaywright_BrowserContext, expectEvent);

static const zend_function_entry class_NativePlaywright_BrowserContext_methods[] = {
	ZEND_ME(NativePlaywright_BrowserContext, __construct, arginfo_class_NativePlaywright_BrowserContext___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, initialize, arginfo_class_NativePlaywright_BrowserContext_initialize, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, transport, arginfo_class_NativePlaywright_BrowserContext_transport, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_BrowserContext, defaultTimeout, arginfo_class_NativePlaywright_BrowserContext_defaultTimeout, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_BrowserContext, id, arginfo_class_NativePlaywright_BrowserContext_id, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, options, arginfo_class_NativePlaywright_BrowserContext_options, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, browser, arginfo_class_NativePlaywright_BrowserContext_browser, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, baseURL, arginfo_class_NativePlaywright_BrowserContext_baseURL, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, defaultTimeoutMs, arginfo_class_NativePlaywright_BrowserContext_defaultTimeoutMs, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, defaultNavigationTimeoutMs, arginfo_class_NativePlaywright_BrowserContext_defaultNavigationTimeoutMs, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, setDefaultTimeout, arginfo_class_NativePlaywright_BrowserContext_setDefaultTimeout, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, setDefaultNavigationTimeout, arginfo_class_NativePlaywright_BrowserContext_setDefaultNavigationTimeout, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, hasListeners, arginfo_class_NativePlaywright_BrowserContext_hasListeners, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, emitFromPage, arginfo_class_NativePlaywright_BrowserContext_emitFromPage, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, newPage, arginfo_class_NativePlaywright_BrowserContext_newPage, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, pages, arginfo_class_NativePlaywright_BrowserContext_pages, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, didCreatePage, arginfo_class_NativePlaywright_BrowserContext_didCreatePage, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, pageClosed, arginfo_class_NativePlaywright_BrowserContext_pageClosed, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, setOwner, arginfo_class_NativePlaywright_BrowserContext_setOwner, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, ownedBy, arginfo_class_NativePlaywright_BrowserContext_ownedBy, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, expectPage, arginfo_class_NativePlaywright_BrowserContext_expectPage, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, cookieOut, arginfo_class_NativePlaywright_BrowserContext_cookieOut, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_BrowserContext, ctxParam, arginfo_class_NativePlaywright_BrowserContext_ctxParam, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_BrowserContext, cookies, arginfo_class_NativePlaywright_BrowserContext_cookies, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, cookieMatchesAny, arginfo_class_NativePlaywright_BrowserContext_cookieMatchesAny, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_BrowserContext, addCookies, arginfo_class_NativePlaywright_BrowserContext_addCookies, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, clearCookies, arginfo_class_NativePlaywright_BrowserContext_clearCookies, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, storageState, arginfo_class_NativePlaywright_BrowserContext_storageState, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, permissionParams, arginfo_class_NativePlaywright_BrowserContext_permissionParams, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_BrowserContext, grantPermissions, arginfo_class_NativePlaywright_BrowserContext_grantPermissions, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, clearPermissions, arginfo_class_NativePlaywright_BrowserContext_clearPermissions, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, geolocation, arginfo_class_NativePlaywright_BrowserContext_geolocation, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, setGeolocation, arginfo_class_NativePlaywright_BrowserContext_setGeolocation, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, extraHTTPHeaders, arginfo_class_NativePlaywright_BrowserContext_extraHTTPHeaders, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, setExtraHTTPHeaders, arginfo_class_NativePlaywright_BrowserContext_setExtraHTTPHeaders, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, isOffline, arginfo_class_NativePlaywright_BrowserContext_isOffline, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, setOffline, arginfo_class_NativePlaywright_BrowserContext_setOffline, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, httpCredentials, arginfo_class_NativePlaywright_BrowserContext_httpCredentials, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, scriptSource, arginfo_class_NativePlaywright_BrowserContext_scriptSource, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_BrowserContext, initScripts, arginfo_class_NativePlaywright_BrowserContext_initScripts, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, addInitScript, arginfo_class_NativePlaywright_BrowserContext_addInitScript, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, bindingNames, arginfo_class_NativePlaywright_BrowserContext_bindingNames, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, binding, arginfo_class_NativePlaywright_BrowserContext_binding, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, exposeBinding, arginfo_class_NativePlaywright_BrowserContext_exposeBinding, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, exposeFunction, arginfo_class_NativePlaywright_BrowserContext_exposeFunction, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, hasRoutes, arginfo_class_NativePlaywright_BrowserContext_hasRoutes, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, routeHandlers, arginfo_class_NativePlaywright_BrowserContext_routeHandlers, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, route, arginfo_class_NativePlaywright_BrowserContext_route, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, unroute, arginfo_class_NativePlaywright_BrowserContext_unroute, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, unrouteAll, arginfo_class_NativePlaywright_BrowserContext_unrouteAll, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, newCDPSession, arginfo_class_NativePlaywright_BrowserContext_newCDPSession, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, downloadDir, arginfo_class_NativePlaywright_BrowserContext_downloadDir, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, isClosed, arginfo_class_NativePlaywright_BrowserContext_isClosed, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, close, arginfo_class_NativePlaywright_BrowserContext_close, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, on, arginfo_class_NativePlaywright_BrowserContext_on, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, once, arginfo_class_NativePlaywright_BrowserContext_once, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, off, arginfo_class_NativePlaywright_BrowserContext_off, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, removeAllListeners, arginfo_class_NativePlaywright_BrowserContext_removeAllListeners, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, listenerCount, arginfo_class_NativePlaywright_BrowserContext_listenerCount, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, onListenerAdded, arginfo_class_NativePlaywright_BrowserContext_onListenerAdded, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_BrowserContext, emit, arginfo_class_NativePlaywright_BrowserContext_emit, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_BrowserContext, waitForEvent, arginfo_class_NativePlaywright_BrowserContext_waitForEvent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_BrowserContext, expectEvent, arginfo_class_NativePlaywright_BrowserContext_expectEvent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_BrowserContext(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "BrowserContext", class_NativePlaywright_BrowserContext_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pages_default_value;
	ZVAL_EMPTY_ARRAY(&property_pages_default_value);
	zend_string *property_pages_name = zend_string_init("pages", sizeof("pages") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_pages_name);
	zend_declare_typed_property(class_entry, property_pages_name, &property_pages_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_pages_name, true);

	zval property_routes_default_value;
	ZVAL_EMPTY_ARRAY(&property_routes_default_value);
	zend_string *property_routes_name = zend_string_init("routes", sizeof("routes") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_routes_name);
	zend_declare_typed_property(class_entry, property_routes_name, &property_routes_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_routes_name, true);

	zval property_bindings_default_value;
	ZVAL_EMPTY_ARRAY(&property_bindings_default_value);
	zend_string *property_bindings_name = zend_string_init("bindings", sizeof("bindings") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_bindings_name);
	zend_declare_typed_property(class_entry, property_bindings_name, &property_bindings_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_bindings_name, true);

	zval property_initScripts_default_value;
	ZVAL_EMPTY_ARRAY(&property_initScripts_default_value);
	zend_string *property_initScripts_name = zend_string_init("initScripts", sizeof("initScripts") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_initScripts_name);
	zend_declare_typed_property(class_entry, property_initScripts_name, &property_initScripts_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_initScripts_name, true);

	zval property_closed_default_value;
	ZVAL_FALSE(&property_closed_default_value);
	zend_string *property_closed_name = zend_string_init("closed", sizeof("closed") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_closed_name);
	zend_declare_typed_property(class_entry, property_closed_name, &property_closed_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_closed_name, true);

	zval property_owner_default_value;
	ZVAL_NULL(&property_owner_default_value);
	zend_string *property_owner_name = zend_string_init("owner", sizeof("owner") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_owner_name);
	zend_string *property_owner_class_NativePlaywright_Page = zend_string_init("NativePlaywright\\Page", sizeof("NativePlaywright\\Page")-1, 1);
	zend_declare_typed_property(class_entry, property_owner_name, &property_owner_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_owner_class_NativePlaywright_Page, 0, MAY_BE_NULL));
	zend_string_release_ex(property_owner_name, true);

	zval property_defaultTimeoutMs_default_value;
	ZVAL_DOUBLE(&property_defaultTimeoutMs_default_value, 30000.0);
	zend_string *property_defaultTimeoutMs_name = zend_string_init("defaultTimeoutMs", sizeof("defaultTimeoutMs") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_defaultTimeoutMs_name);
	zend_declare_typed_property(class_entry, property_defaultTimeoutMs_name, &property_defaultTimeoutMs_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release_ex(property_defaultTimeoutMs_name, true);

	zval property_defaultNavigationTimeoutMs_default_value;
	ZVAL_NULL(&property_defaultNavigationTimeoutMs_default_value);
	zend_string *property_defaultNavigationTimeoutMs_name = zend_string_init("defaultNavigationTimeoutMs", sizeof("defaultNavigationTimeoutMs") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_defaultNavigationTimeoutMs_name);
	zend_declare_typed_property(class_entry, property_defaultNavigationTimeoutMs_name, &property_defaultNavigationTimeoutMs_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE|MAY_BE_NULL));
	zend_string_release_ex(property_defaultNavigationTimeoutMs_name, true);

	zval property_geolocation_default_value;
	ZVAL_NULL(&property_geolocation_default_value);
	zend_string *property_geolocation_name = zend_string_init("geolocation", sizeof("geolocation") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_geolocation_name);
	zend_declare_typed_property(class_entry, property_geolocation_name, &property_geolocation_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release_ex(property_geolocation_name, true);

	zval property_extraHeaders_default_value;
	ZVAL_EMPTY_ARRAY(&property_extraHeaders_default_value);
	zend_string *property_extraHeaders_name = zend_string_init("extraHeaders", sizeof("extraHeaders") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_extraHeaders_name);
	zend_declare_typed_property(class_entry, property_extraHeaders_name, &property_extraHeaders_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_extraHeaders_name, true);

	zval property_offline_default_value;
	ZVAL_FALSE(&property_offline_default_value);
	zend_string *property_offline_name = zend_string_init("offline", sizeof("offline") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_offline_name);
	zend_declare_typed_property(class_entry, property_offline_name, &property_offline_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_offline_name, true);

	zval property_downloadDir_default_value;
	ZVAL_EMPTY_STRING(&property_downloadDir_default_value);
	zend_string *property_downloadDir_name = zend_string_init("downloadDir", sizeof("downloadDir") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_downloadDir_name);
	zend_declare_typed_property(class_entry, property_downloadDir_name, &property_downloadDir_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_downloadDir_name, true);

	zval property_ownsDownloadDir_default_value;
	ZVAL_FALSE(&property_ownsDownloadDir_default_value);
	zend_string *property_ownsDownloadDir_name = zend_string_init("ownsDownloadDir", sizeof("ownsDownloadDir") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_ownsDownloadDir_name);
	zend_declare_typed_property(class_entry, property_ownsDownloadDir_name, &property_ownsDownloadDir_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_ownsDownloadDir_name, true);

	zval property_browser_default_value;
	ZVAL_NULL(&property_browser_default_value);
	zend_string *property_browser_name = zend_string_init("browser", sizeof("browser") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_browser_name);
	zend_string *property_browser_class_NativePlaywright_Browser = zend_string_init("NativePlaywright\\Browser", sizeof("NativePlaywright\\Browser")-1, 1);
	zend_declare_typed_property(class_entry, property_browser_name, &property_browser_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_browser_class_NativePlaywright_Browser, 0, 0));
	zend_string_release_ex(property_browser_name, true);

	zval property_t_default_value;
	ZVAL_NULL(&property_t_default_value);
	zend_string *property_t_name = zend_string_init("t", sizeof("t") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_t_name);
	zend_string *property_t_class_NativePlaywright_Transport = zend_string_init("NativePlaywright\\Transport", sizeof("NativePlaywright\\Transport")-1, 1);
	zend_declare_typed_property(class_entry, property_t_name, &property_t_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_t_class_NativePlaywright_Transport, 0, 0));
	zend_string_release_ex(property_t_name, true);

	zval property_id_default_value;
	ZVAL_EMPTY_STRING(&property_id_default_value);
	zend_string *property_id_name = zend_string_init("id", sizeof("id") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_id_name);
	zend_declare_typed_property(class_entry, property_id_name, &property_id_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_id_name, true);

	zval property_options_default_value;
	ZVAL_EMPTY_ARRAY(&property_options_default_value);
	zend_string *property_options_name = zend_string_init("options", sizeof("options") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_options_name);
	zend_declare_typed_property(class_entry, property_options_name, &property_options_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_options_name, true);

	zval property_isDefault_default_value;
	ZVAL_FALSE(&property_isDefault_default_value);
	zend_string *property_isDefault_name = zend_string_init("isDefault", sizeof("isDefault") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_isDefault_name);
	zend_declare_typed_property(class_entry, property_isDefault_name, &property_isDefault_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_isDefault_name, true);

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
