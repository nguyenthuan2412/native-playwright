/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 7ec5626b437018af5e5a12677fcf181778119046 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Page___construct, 0, 0, 5)
	ZEND_ARG_OBJ_INFO(0, browser, NativePlaywright\\Browser, 0)
	ZEND_ARG_OBJ_INFO(0, context, NativePlaywright\\BrowserContext, 0)
	ZEND_ARG_OBJ_INFO(0, t, NativePlaywright\\Transport, 0)
	ZEND_ARG_TYPE_INFO(0, sessionId, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, targetId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_transport, 0, 0, NativePlaywright\\Transport, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_defaultTimeout, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_send, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, params, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_DOUBLE, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_sendMany, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, calls, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_releaseObject, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, objectId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_callOn, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, objectId, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fn, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_callFunction, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, fn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, args, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, objectId, IS_STRING, 0, "''")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, contextId, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_timeoutSeconds, 0, 0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_navigationTimeoutSeconds arginfo_class_NativePlaywright_Page_timeoutSeconds

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_setDefaultTimeout, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, ms, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_setDefaultNavigationTimeout arginfo_class_NativePlaywright_Page_setDefaultTimeout

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_waitForCondition, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, cond, Closure, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, what, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_poke, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_afterAction arginfo_class_NativePlaywright_Page_poke

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_initialize, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, frameTree, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_emulationCalls, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_metrics, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, vp, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_mediaParams arginfo_class_NativePlaywright_Page_emulationCalls

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_loadFrameTree, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tree, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, parent, IS_STRING, 0, "''")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_onProtocolEvent, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_detachFrame, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_emitBoth, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_onConsole, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_onDialog arginfo_class_NativePlaywright_Page_onConsole

#define arginfo_class_NativePlaywright_Page_onRequest arginfo_class_NativePlaywright_Page_onConsole

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_makeResponse, 0, 2, NativePlaywright\\Response, 0)
	ZEND_ARG_OBJ_INFO(0, req, NativePlaywright\\Request, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_onResponse arginfo_class_NativePlaywright_Page_onConsole

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_navigationResponse, 0, 1, NativePlaywright\\Response, 1)
	ZEND_ARG_TYPE_INFO(0, loaderId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_needsInterception, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_fetchParams arginfo_class_NativePlaywright_Page_emulationCalls

#define arginfo_class_NativePlaywright_Page_syncInterception arginfo_class_NativePlaywright_Page_poke

#define arginfo_class_NativePlaywright_Page_onRequestPaused arginfo_class_NativePlaywright_Page_onConsole

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_route, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, url, Closure, MAY_BE_STRING, NULL)
	ZEND_ARG_OBJ_INFO(0, handler, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_unroute, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, url, Closure, MAY_BE_STRING, NULL)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, handler, Closure, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_unrouteAll arginfo_class_NativePlaywright_Page_poke

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_bindingScript, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_exposeBinding, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, fn, Closure, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_exposeFunction arginfo_class_NativePlaywright_Page_exposeBinding

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_installBinding, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_onBindingCalled arginfo_class_NativePlaywright_Page_onConsole

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_addInitScript, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_MASK(0, script, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arg, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_didClose arginfo_class_NativePlaywright_Page_poke

#define arginfo_class_NativePlaywright_Page_isClosed arginfo_class_NativePlaywright_Page_needsInterception

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_close, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_setOpener, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, opener, NativePlaywright\\Page, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_opener, 0, 0, NativePlaywright\\Page, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_context, 0, 0, NativePlaywright\\BrowserContext, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_emitDownload, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, d, NativePlaywright\\Download, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_emitPopup, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, p, NativePlaywright\\Page, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_onListenerAdded, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_mainFrame, 0, 0, NativePlaywright\\Frame, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_frames arginfo_class_NativePlaywright_Page_emulationCalls

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_frameById, 0, 1, NativePlaywright\\Frame, 1)
	ZEND_ARG_TYPE_INFO(0, id, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_frame, 0, 1, NativePlaywright\\Frame, 1)
	ZEND_ARG_TYPE_MASK(0, selector, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_url, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_goto, 0, 1, NativePlaywright\\Response, 1)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_historyNavigate, 0, 2, NativePlaywright\\Response, 1)
	ZEND_ARG_OBJ_INFO(0, trigger, Closure, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_reload, 0, 0, NativePlaywright\\Response, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_goHistory, 0, 2, NativePlaywright\\Response, 1)
	ZEND_ARG_TYPE_INFO(0, delta, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_goBack arginfo_class_NativePlaywright_Page_reload

#define arginfo_class_NativePlaywright_Page_goForward arginfo_class_NativePlaywright_Page_reload

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_waitForLoadState, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, state, IS_STRING, 0, "'load'")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_waitForURL, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, url, Closure, MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_expectNavigation, 0, 1, NativePlaywright\\Response, 1)
	ZEND_ARG_OBJ_INFO(0, action, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_waitForTimeout arginfo_class_NativePlaywright_Page_setDefaultTimeout

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_expectRequest, 0, 2, NativePlaywright\\Request, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, urlOrPredicate, Closure, MAY_BE_STRING, NULL)
	ZEND_ARG_OBJ_INFO(0, action, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_expectResponse, 0, 2, NativePlaywright\\Response, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, urlOrPredicate, Closure, MAY_BE_STRING, NULL)
	ZEND_ARG_OBJ_INFO(0, action, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_waitForRequest, 0, 1, NativePlaywright\\Request, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, urlOrPredicate, Closure, MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_waitForResponse, 0, 1, NativePlaywright\\Response, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, urlOrPredicate, Closure, MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_expectPopup, 0, 1, NativePlaywright\\Page, 0)
	ZEND_ARG_OBJ_INFO(0, action, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_expectDownload, 0, 1, NativePlaywright\\Download, 0)
	ZEND_ARG_OBJ_INFO(0, action, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_expectConsoleMessage, 0, 1, NativePlaywright\\ConsoleMessage, 0)
	ZEND_ARG_OBJ_INFO(0, action, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_expectFileChooser, 0, 1, NativePlaywright\\FileChooser, 0)
	ZEND_ARG_OBJ_INFO(0, action, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_expectDialog, 0, 1, NativePlaywright\\Dialog, 0)
	ZEND_ARG_OBJ_INFO(0, action, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_title arginfo_class_NativePlaywright_Page_url

#define arginfo_class_NativePlaywright_Page_content arginfo_class_NativePlaywright_Page_url

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_setContent, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, html, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_evaluate, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, js, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arg, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_waitForFunction, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, js, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arg, IS_MIXED, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_addScriptTag, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_addStyleTag arginfo_class_NativePlaywright_Page_addScriptTag

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_locator, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_getByText, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_getByRole, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_getByLabel arginfo_class_NativePlaywright_Page_getByText

#define arginfo_class_NativePlaywright_Page_getByPlaceholder arginfo_class_NativePlaywright_Page_getByText

#define arginfo_class_NativePlaywright_Page_getByAltText arginfo_class_NativePlaywright_Page_getByText

#define arginfo_class_NativePlaywright_Page_getByTitle arginfo_class_NativePlaywright_Page_getByText

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_getByTestId, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, testId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_frameLocator, 0, 1, NativePlaywright\\FrameLocator, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_click, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_dblclick arginfo_class_NativePlaywright_Page_click

#define arginfo_class_NativePlaywright_Page_tap arginfo_class_NativePlaywright_Page_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_fill, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_type, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_press, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_hover arginfo_class_NativePlaywright_Page_click

#define arginfo_class_NativePlaywright_Page_focus arginfo_class_NativePlaywright_Page_click

#define arginfo_class_NativePlaywright_Page_check arginfo_class_NativePlaywright_Page_click

#define arginfo_class_NativePlaywright_Page_uncheck arginfo_class_NativePlaywright_Page_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_setChecked, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, checked, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_selectOption, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK(0, values, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_setInputFiles, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK(0, files, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_dragAndDrop, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_dispatchEvent, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, eventInit, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_textContent, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_innerText, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_innerHTML arginfo_class_NativePlaywright_Page_innerText

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_getAttribute, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_inputValue arginfo_class_NativePlaywright_Page_innerText

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_isVisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_isHidden arginfo_class_NativePlaywright_Page_isVisible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_isEnabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_isDisabled arginfo_class_NativePlaywright_Page_isEnabled

#define arginfo_class_NativePlaywright_Page_isEditable arginfo_class_NativePlaywright_Page_isEnabled

#define arginfo_class_NativePlaywright_Page_isChecked arginfo_class_NativePlaywright_Page_isEnabled

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_waitForSelector, 0, 1, NativePlaywright\\Locator, 1)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_evalOnSelector, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, js, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arg, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_evalOnSelectorAll arginfo_class_NativePlaywright_Page_evalOnSelector

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_setViewportSize, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_viewportSize, 0, 0, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_emulateMedia arginfo_class_NativePlaywright_Page_close

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_setExtraHTTPHeaders, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, headers, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_applyExtraHeaders arginfo_class_NativePlaywright_Page_poke

#define arginfo_class_NativePlaywright_Page_bringToFront arginfo_class_NativePlaywright_Page_poke

#define arginfo_class_NativePlaywright_Page_requestGC arginfo_class_NativePlaywright_Page_poke

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Page_newCDPSession, 0, 0, NativePlaywright\\CDPSession, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_screenshot, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_pdf arginfo_class_NativePlaywright_Page_screenshot

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_on, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, handler, Closure, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_once arginfo_class_NativePlaywright_Page_on

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_off, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, handler, Closure, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_removeAllListeners, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, event, IS_STRING, 0, "''")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_listenerCount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Page_emit arginfo_class_NativePlaywright_Page_emitBoth

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_waitForEvent, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, predicate, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_DOUBLE, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Page_expectEvent, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, action, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, predicate, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_DOUBLE, 1, "null")
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Page, __construct);
ZEND_METHOD(NativePlaywright_Page, transport);
ZEND_METHOD(NativePlaywright_Page, defaultTimeout);
ZEND_METHOD(NativePlaywright_Page, send);
ZEND_METHOD(NativePlaywright_Page, sendMany);
ZEND_METHOD(NativePlaywright_Page, releaseObject);
ZEND_METHOD(NativePlaywright_Page, callOn);
ZEND_METHOD(NativePlaywright_Page, callFunction);
ZEND_METHOD(NativePlaywright_Page, timeoutSeconds);
ZEND_METHOD(NativePlaywright_Page, navigationTimeoutSeconds);
ZEND_METHOD(NativePlaywright_Page, setDefaultTimeout);
ZEND_METHOD(NativePlaywright_Page, setDefaultNavigationTimeout);
ZEND_METHOD(NativePlaywright_Page, waitForCondition);
ZEND_METHOD(NativePlaywright_Page, poke);
ZEND_METHOD(NativePlaywright_Page, afterAction);
ZEND_METHOD(NativePlaywright_Page, initialize);
ZEND_METHOD(NativePlaywright_Page, emulationCalls);
ZEND_METHOD(NativePlaywright_Page, metrics);
ZEND_METHOD(NativePlaywright_Page, mediaParams);
ZEND_METHOD(NativePlaywright_Page, loadFrameTree);
ZEND_METHOD(NativePlaywright_Page, onProtocolEvent);
ZEND_METHOD(NativePlaywright_Page, detachFrame);
ZEND_METHOD(NativePlaywright_Page, emitBoth);
ZEND_METHOD(NativePlaywright_Page, onConsole);
ZEND_METHOD(NativePlaywright_Page, onDialog);
ZEND_METHOD(NativePlaywright_Page, onRequest);
ZEND_METHOD(NativePlaywright_Page, makeResponse);
ZEND_METHOD(NativePlaywright_Page, onResponse);
ZEND_METHOD(NativePlaywright_Page, navigationResponse);
ZEND_METHOD(NativePlaywright_Page, needsInterception);
ZEND_METHOD(NativePlaywright_Page, fetchParams);
ZEND_METHOD(NativePlaywright_Page, syncInterception);
ZEND_METHOD(NativePlaywright_Page, onRequestPaused);
ZEND_METHOD(NativePlaywright_Page, route);
ZEND_METHOD(NativePlaywright_Page, unroute);
ZEND_METHOD(NativePlaywright_Page, unrouteAll);
ZEND_METHOD(NativePlaywright_Page, bindingScript);
ZEND_METHOD(NativePlaywright_Page, exposeBinding);
ZEND_METHOD(NativePlaywright_Page, exposeFunction);
ZEND_METHOD(NativePlaywright_Page, installBinding);
ZEND_METHOD(NativePlaywright_Page, onBindingCalled);
ZEND_METHOD(NativePlaywright_Page, addInitScript);
ZEND_METHOD(NativePlaywright_Page, didClose);
ZEND_METHOD(NativePlaywright_Page, isClosed);
ZEND_METHOD(NativePlaywright_Page, close);
ZEND_METHOD(NativePlaywright_Page, setOpener);
ZEND_METHOD(NativePlaywright_Page, opener);
ZEND_METHOD(NativePlaywright_Page, context);
ZEND_METHOD(NativePlaywright_Page, emitDownload);
ZEND_METHOD(NativePlaywright_Page, emitPopup);
ZEND_METHOD(NativePlaywright_Page, onListenerAdded);
ZEND_METHOD(NativePlaywright_Page, mainFrame);
ZEND_METHOD(NativePlaywright_Page, frames);
ZEND_METHOD(NativePlaywright_Page, frameById);
ZEND_METHOD(NativePlaywright_Page, frame);
ZEND_METHOD(NativePlaywright_Page, url);
ZEND_METHOD(NativePlaywright_Page, goto);
ZEND_METHOD(NativePlaywright_Page, historyNavigate);
ZEND_METHOD(NativePlaywright_Page, reload);
ZEND_METHOD(NativePlaywright_Page, goHistory);
ZEND_METHOD(NativePlaywright_Page, goBack);
ZEND_METHOD(NativePlaywright_Page, goForward);
ZEND_METHOD(NativePlaywright_Page, waitForLoadState);
ZEND_METHOD(NativePlaywright_Page, waitForURL);
ZEND_METHOD(NativePlaywright_Page, expectNavigation);
ZEND_METHOD(NativePlaywright_Page, waitForTimeout);
ZEND_METHOD(NativePlaywright_Page, expectRequest);
ZEND_METHOD(NativePlaywright_Page, expectResponse);
ZEND_METHOD(NativePlaywright_Page, waitForRequest);
ZEND_METHOD(NativePlaywright_Page, waitForResponse);
ZEND_METHOD(NativePlaywright_Page, expectPopup);
ZEND_METHOD(NativePlaywright_Page, expectDownload);
ZEND_METHOD(NativePlaywright_Page, expectConsoleMessage);
ZEND_METHOD(NativePlaywright_Page, expectFileChooser);
ZEND_METHOD(NativePlaywright_Page, expectDialog);
ZEND_METHOD(NativePlaywright_Page, title);
ZEND_METHOD(NativePlaywright_Page, content);
ZEND_METHOD(NativePlaywright_Page, setContent);
ZEND_METHOD(NativePlaywright_Page, evaluate);
ZEND_METHOD(NativePlaywright_Page, waitForFunction);
ZEND_METHOD(NativePlaywright_Page, addScriptTag);
ZEND_METHOD(NativePlaywright_Page, addStyleTag);
ZEND_METHOD(NativePlaywright_Page, locator);
ZEND_METHOD(NativePlaywright_Page, getByText);
ZEND_METHOD(NativePlaywright_Page, getByRole);
ZEND_METHOD(NativePlaywright_Page, getByLabel);
ZEND_METHOD(NativePlaywright_Page, getByPlaceholder);
ZEND_METHOD(NativePlaywright_Page, getByAltText);
ZEND_METHOD(NativePlaywright_Page, getByTitle);
ZEND_METHOD(NativePlaywright_Page, getByTestId);
ZEND_METHOD(NativePlaywright_Page, frameLocator);
ZEND_METHOD(NativePlaywright_Page, click);
ZEND_METHOD(NativePlaywright_Page, dblclick);
ZEND_METHOD(NativePlaywright_Page, tap);
ZEND_METHOD(NativePlaywright_Page, fill);
ZEND_METHOD(NativePlaywright_Page, type);
ZEND_METHOD(NativePlaywright_Page, press);
ZEND_METHOD(NativePlaywright_Page, hover);
ZEND_METHOD(NativePlaywright_Page, focus);
ZEND_METHOD(NativePlaywright_Page, check);
ZEND_METHOD(NativePlaywright_Page, uncheck);
ZEND_METHOD(NativePlaywright_Page, setChecked);
ZEND_METHOD(NativePlaywright_Page, selectOption);
ZEND_METHOD(NativePlaywright_Page, setInputFiles);
ZEND_METHOD(NativePlaywright_Page, dragAndDrop);
ZEND_METHOD(NativePlaywright_Page, dispatchEvent);
ZEND_METHOD(NativePlaywright_Page, textContent);
ZEND_METHOD(NativePlaywright_Page, innerText);
ZEND_METHOD(NativePlaywright_Page, innerHTML);
ZEND_METHOD(NativePlaywright_Page, getAttribute);
ZEND_METHOD(NativePlaywright_Page, inputValue);
ZEND_METHOD(NativePlaywright_Page, isVisible);
ZEND_METHOD(NativePlaywright_Page, isHidden);
ZEND_METHOD(NativePlaywright_Page, isEnabled);
ZEND_METHOD(NativePlaywright_Page, isDisabled);
ZEND_METHOD(NativePlaywright_Page, isEditable);
ZEND_METHOD(NativePlaywright_Page, isChecked);
ZEND_METHOD(NativePlaywright_Page, waitForSelector);
ZEND_METHOD(NativePlaywright_Page, evalOnSelector);
ZEND_METHOD(NativePlaywright_Page, evalOnSelectorAll);
ZEND_METHOD(NativePlaywright_Page, setViewportSize);
ZEND_METHOD(NativePlaywright_Page, viewportSize);
ZEND_METHOD(NativePlaywright_Page, emulateMedia);
ZEND_METHOD(NativePlaywright_Page, setExtraHTTPHeaders);
ZEND_METHOD(NativePlaywright_Page, applyExtraHeaders);
ZEND_METHOD(NativePlaywright_Page, bringToFront);
ZEND_METHOD(NativePlaywright_Page, requestGC);
ZEND_METHOD(NativePlaywright_Page, newCDPSession);
ZEND_METHOD(NativePlaywright_Page, screenshot);
ZEND_METHOD(NativePlaywright_Page, pdf);
ZEND_METHOD(NativePlaywright_Page, on);
ZEND_METHOD(NativePlaywright_Page, once);
ZEND_METHOD(NativePlaywright_Page, off);
ZEND_METHOD(NativePlaywright_Page, removeAllListeners);
ZEND_METHOD(NativePlaywright_Page, listenerCount);
ZEND_METHOD(NativePlaywright_Page, emit);
ZEND_METHOD(NativePlaywright_Page, waitForEvent);
ZEND_METHOD(NativePlaywright_Page, expectEvent);

static const zend_function_entry class_NativePlaywright_Page_methods[] = {
	ZEND_ME(NativePlaywright_Page, __construct, arginfo_class_NativePlaywright_Page___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, transport, arginfo_class_NativePlaywright_Page_transport, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_Page, defaultTimeout, arginfo_class_NativePlaywright_Page_defaultTimeout, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_Page, send, arginfo_class_NativePlaywright_Page_send, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, sendMany, arginfo_class_NativePlaywright_Page_sendMany, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, releaseObject, arginfo_class_NativePlaywright_Page_releaseObject, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, callOn, arginfo_class_NativePlaywright_Page_callOn, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, callFunction, arginfo_class_NativePlaywright_Page_callFunction, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, timeoutSeconds, arginfo_class_NativePlaywright_Page_timeoutSeconds, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, navigationTimeoutSeconds, arginfo_class_NativePlaywright_Page_navigationTimeoutSeconds, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, setDefaultTimeout, arginfo_class_NativePlaywright_Page_setDefaultTimeout, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, setDefaultNavigationTimeout, arginfo_class_NativePlaywright_Page_setDefaultNavigationTimeout, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, waitForCondition, arginfo_class_NativePlaywright_Page_waitForCondition, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, poke, arginfo_class_NativePlaywright_Page_poke, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, afterAction, arginfo_class_NativePlaywright_Page_afterAction, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, initialize, arginfo_class_NativePlaywright_Page_initialize, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, emulationCalls, arginfo_class_NativePlaywright_Page_emulationCalls, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, metrics, arginfo_class_NativePlaywright_Page_metrics, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, mediaParams, arginfo_class_NativePlaywright_Page_mediaParams, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, loadFrameTree, arginfo_class_NativePlaywright_Page_loadFrameTree, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, onProtocolEvent, arginfo_class_NativePlaywright_Page_onProtocolEvent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, detachFrame, arginfo_class_NativePlaywright_Page_detachFrame, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, emitBoth, arginfo_class_NativePlaywright_Page_emitBoth, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, onConsole, arginfo_class_NativePlaywright_Page_onConsole, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, onDialog, arginfo_class_NativePlaywright_Page_onDialog, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, onRequest, arginfo_class_NativePlaywright_Page_onRequest, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, makeResponse, arginfo_class_NativePlaywright_Page_makeResponse, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, onResponse, arginfo_class_NativePlaywright_Page_onResponse, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, navigationResponse, arginfo_class_NativePlaywright_Page_navigationResponse, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, needsInterception, arginfo_class_NativePlaywright_Page_needsInterception, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, fetchParams, arginfo_class_NativePlaywright_Page_fetchParams, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, syncInterception, arginfo_class_NativePlaywright_Page_syncInterception, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, onRequestPaused, arginfo_class_NativePlaywright_Page_onRequestPaused, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, route, arginfo_class_NativePlaywright_Page_route, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, unroute, arginfo_class_NativePlaywright_Page_unroute, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, unrouteAll, arginfo_class_NativePlaywright_Page_unrouteAll, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, bindingScript, arginfo_class_NativePlaywright_Page_bindingScript, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Page, exposeBinding, arginfo_class_NativePlaywright_Page_exposeBinding, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, exposeFunction, arginfo_class_NativePlaywright_Page_exposeFunction, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, installBinding, arginfo_class_NativePlaywright_Page_installBinding, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, onBindingCalled, arginfo_class_NativePlaywright_Page_onBindingCalled, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, addInitScript, arginfo_class_NativePlaywright_Page_addInitScript, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, didClose, arginfo_class_NativePlaywright_Page_didClose, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, isClosed, arginfo_class_NativePlaywright_Page_isClosed, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, close, arginfo_class_NativePlaywright_Page_close, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, setOpener, arginfo_class_NativePlaywright_Page_setOpener, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, opener, arginfo_class_NativePlaywright_Page_opener, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, context, arginfo_class_NativePlaywright_Page_context, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, emitDownload, arginfo_class_NativePlaywright_Page_emitDownload, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, emitPopup, arginfo_class_NativePlaywright_Page_emitPopup, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, onListenerAdded, arginfo_class_NativePlaywright_Page_onListenerAdded, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_Page, mainFrame, arginfo_class_NativePlaywright_Page_mainFrame, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, frames, arginfo_class_NativePlaywright_Page_frames, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, frameById, arginfo_class_NativePlaywright_Page_frameById, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, frame, arginfo_class_NativePlaywright_Page_frame, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, url, arginfo_class_NativePlaywright_Page_url, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, goto, arginfo_class_NativePlaywright_Page_goto, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, historyNavigate, arginfo_class_NativePlaywright_Page_historyNavigate, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, reload, arginfo_class_NativePlaywright_Page_reload, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, goHistory, arginfo_class_NativePlaywright_Page_goHistory, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Page, goBack, arginfo_class_NativePlaywright_Page_goBack, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, goForward, arginfo_class_NativePlaywright_Page_goForward, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, waitForLoadState, arginfo_class_NativePlaywright_Page_waitForLoadState, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, waitForURL, arginfo_class_NativePlaywright_Page_waitForURL, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, expectNavigation, arginfo_class_NativePlaywright_Page_expectNavigation, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, waitForTimeout, arginfo_class_NativePlaywright_Page_waitForTimeout, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, expectRequest, arginfo_class_NativePlaywright_Page_expectRequest, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, expectResponse, arginfo_class_NativePlaywright_Page_expectResponse, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, waitForRequest, arginfo_class_NativePlaywright_Page_waitForRequest, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, waitForResponse, arginfo_class_NativePlaywright_Page_waitForResponse, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, expectPopup, arginfo_class_NativePlaywright_Page_expectPopup, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, expectDownload, arginfo_class_NativePlaywright_Page_expectDownload, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, expectConsoleMessage, arginfo_class_NativePlaywright_Page_expectConsoleMessage, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, expectFileChooser, arginfo_class_NativePlaywright_Page_expectFileChooser, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, expectDialog, arginfo_class_NativePlaywright_Page_expectDialog, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, title, arginfo_class_NativePlaywright_Page_title, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, content, arginfo_class_NativePlaywright_Page_content, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, setContent, arginfo_class_NativePlaywright_Page_setContent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, evaluate, arginfo_class_NativePlaywright_Page_evaluate, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, waitForFunction, arginfo_class_NativePlaywright_Page_waitForFunction, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, addScriptTag, arginfo_class_NativePlaywright_Page_addScriptTag, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, addStyleTag, arginfo_class_NativePlaywright_Page_addStyleTag, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, locator, arginfo_class_NativePlaywright_Page_locator, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, getByText, arginfo_class_NativePlaywright_Page_getByText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, getByRole, arginfo_class_NativePlaywright_Page_getByRole, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, getByLabel, arginfo_class_NativePlaywright_Page_getByLabel, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, getByPlaceholder, arginfo_class_NativePlaywright_Page_getByPlaceholder, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, getByAltText, arginfo_class_NativePlaywright_Page_getByAltText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, getByTitle, arginfo_class_NativePlaywright_Page_getByTitle, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, getByTestId, arginfo_class_NativePlaywright_Page_getByTestId, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, frameLocator, arginfo_class_NativePlaywright_Page_frameLocator, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, click, arginfo_class_NativePlaywright_Page_click, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, dblclick, arginfo_class_NativePlaywright_Page_dblclick, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, tap, arginfo_class_NativePlaywright_Page_tap, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, fill, arginfo_class_NativePlaywright_Page_fill, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, type, arginfo_class_NativePlaywright_Page_type, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, press, arginfo_class_NativePlaywright_Page_press, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, hover, arginfo_class_NativePlaywright_Page_hover, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, focus, arginfo_class_NativePlaywright_Page_focus, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, check, arginfo_class_NativePlaywright_Page_check, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, uncheck, arginfo_class_NativePlaywright_Page_uncheck, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, setChecked, arginfo_class_NativePlaywright_Page_setChecked, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, selectOption, arginfo_class_NativePlaywright_Page_selectOption, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, setInputFiles, arginfo_class_NativePlaywright_Page_setInputFiles, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, dragAndDrop, arginfo_class_NativePlaywright_Page_dragAndDrop, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, dispatchEvent, arginfo_class_NativePlaywright_Page_dispatchEvent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, textContent, arginfo_class_NativePlaywright_Page_textContent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, innerText, arginfo_class_NativePlaywright_Page_innerText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, innerHTML, arginfo_class_NativePlaywright_Page_innerHTML, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, getAttribute, arginfo_class_NativePlaywright_Page_getAttribute, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, inputValue, arginfo_class_NativePlaywright_Page_inputValue, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, isVisible, arginfo_class_NativePlaywright_Page_isVisible, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, isHidden, arginfo_class_NativePlaywright_Page_isHidden, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, isEnabled, arginfo_class_NativePlaywright_Page_isEnabled, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, isDisabled, arginfo_class_NativePlaywright_Page_isDisabled, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, isEditable, arginfo_class_NativePlaywright_Page_isEditable, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, isChecked, arginfo_class_NativePlaywright_Page_isChecked, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, waitForSelector, arginfo_class_NativePlaywright_Page_waitForSelector, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, evalOnSelector, arginfo_class_NativePlaywright_Page_evalOnSelector, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, evalOnSelectorAll, arginfo_class_NativePlaywright_Page_evalOnSelectorAll, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, setViewportSize, arginfo_class_NativePlaywright_Page_setViewportSize, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, viewportSize, arginfo_class_NativePlaywright_Page_viewportSize, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, emulateMedia, arginfo_class_NativePlaywright_Page_emulateMedia, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, setExtraHTTPHeaders, arginfo_class_NativePlaywright_Page_setExtraHTTPHeaders, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, applyExtraHeaders, arginfo_class_NativePlaywright_Page_applyExtraHeaders, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, bringToFront, arginfo_class_NativePlaywright_Page_bringToFront, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, requestGC, arginfo_class_NativePlaywright_Page_requestGC, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, newCDPSession, arginfo_class_NativePlaywright_Page_newCDPSession, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, screenshot, arginfo_class_NativePlaywright_Page_screenshot, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, pdf, arginfo_class_NativePlaywright_Page_pdf, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, on, arginfo_class_NativePlaywright_Page_on, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, once, arginfo_class_NativePlaywright_Page_once, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, off, arginfo_class_NativePlaywright_Page_off, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, removeAllListeners, arginfo_class_NativePlaywright_Page_removeAllListeners, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, listenerCount, arginfo_class_NativePlaywright_Page_listenerCount, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, emit, arginfo_class_NativePlaywright_Page_emit, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PROTECTED)
	ZEND_ME(NativePlaywright_Page, waitForEvent, arginfo_class_NativePlaywright_Page_waitForEvent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Page, expectEvent, arginfo_class_NativePlaywright_Page_expectEvent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Page(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Page", class_NativePlaywright_Page_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_keyboard_default_value;
	ZVAL_UNDEF(&property_keyboard_default_value);
	zend_string *property_keyboard_name = zend_string_init("keyboard", sizeof("keyboard") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_keyboard_name);
	zend_string *property_keyboard_class_NativePlaywright_Keyboard = zend_string_init("NativePlaywright\\Keyboard", sizeof("NativePlaywright\\Keyboard")-1, 1);
	zend_declare_typed_property(class_entry, property_keyboard_name, &property_keyboard_default_value, ZEND_ACC_PUBLIC|ZEND_ACC_READONLY, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_keyboard_class_NativePlaywright_Keyboard, 0, 0));
	zend_string_release_ex(property_keyboard_name, true);

	zval property_mouse_default_value;
	ZVAL_UNDEF(&property_mouse_default_value);
	zend_string *property_mouse_name = zend_string_init("mouse", sizeof("mouse") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_mouse_name);
	zend_string *property_mouse_class_NativePlaywright_Mouse = zend_string_init("NativePlaywright\\Mouse", sizeof("NativePlaywright\\Mouse")-1, 1);
	zend_declare_typed_property(class_entry, property_mouse_name, &property_mouse_default_value, ZEND_ACC_PUBLIC|ZEND_ACC_READONLY, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_mouse_class_NativePlaywright_Mouse, 0, 0));
	zend_string_release_ex(property_mouse_name, true);

	zval property_touchscreen_default_value;
	ZVAL_UNDEF(&property_touchscreen_default_value);
	zend_string *property_touchscreen_name = zend_string_init("touchscreen", sizeof("touchscreen") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_touchscreen_name);
	zend_string *property_touchscreen_class_NativePlaywright_Touchscreen = zend_string_init("NativePlaywright\\Touchscreen", sizeof("NativePlaywright\\Touchscreen")-1, 1);
	zend_declare_typed_property(class_entry, property_touchscreen_name, &property_touchscreen_default_value, ZEND_ACC_PUBLIC|ZEND_ACC_READONLY, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_touchscreen_class_NativePlaywright_Touchscreen, 0, 0));
	zend_string_release_ex(property_touchscreen_name, true);

	zval property_frames_default_value;
	ZVAL_EMPTY_ARRAY(&property_frames_default_value);
	zend_string *property_frames_name = zend_string_init("frames", sizeof("frames") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_frames_name);
	zend_declare_typed_property(class_entry, property_frames_name, &property_frames_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_frames_name, true);

	zval property_mainFrameId_default_value;
	ZVAL_EMPTY_STRING(&property_mainFrameId_default_value);
	zend_string *property_mainFrameId_name = zend_string_init("mainFrameId", sizeof("mainFrameId") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_mainFrameId_name);
	zend_declare_typed_property(class_entry, property_mainFrameId_name, &property_mainFrameId_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_mainFrameId_name, true);

	zval property_requests_default_value;
	ZVAL_EMPTY_ARRAY(&property_requests_default_value);
	zend_string *property_requests_name = zend_string_init("requests", sizeof("requests") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_requests_name);
	zend_declare_typed_property(class_entry, property_requests_name, &property_requests_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_requests_name, true);

	zval property_navRequests_default_value;
	ZVAL_EMPTY_ARRAY(&property_navRequests_default_value);
	zend_string *property_navRequests_name = zend_string_init("navRequests", sizeof("navRequests") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_navRequests_name);
	zend_declare_typed_property(class_entry, property_navRequests_name, &property_navRequests_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_navRequests_name, true);

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

	zval property_pokes_default_value;
	ZVAL_EMPTY_ARRAY(&property_pokes_default_value);
	zend_string *property_pokes_name = zend_string_init("pokes", sizeof("pokes") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_pokes_name);
	zend_declare_typed_property(class_entry, property_pokes_name, &property_pokes_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_pokes_name, true);

	zval property_closed_default_value;
	ZVAL_FALSE(&property_closed_default_value);
	zend_string *property_closed_name = zend_string_init("closed", sizeof("closed") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_closed_name);
	zend_declare_typed_property(class_entry, property_closed_name, &property_closed_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_closed_name, true);

	zval property_fetchEnabled_default_value;
	ZVAL_FALSE(&property_fetchEnabled_default_value);
	zend_string *property_fetchEnabled_name = zend_string_init("fetchEnabled", sizeof("fetchEnabled") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_fetchEnabled_name);
	zend_declare_typed_property(class_entry, property_fetchEnabled_name, &property_fetchEnabled_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_fetchEnabled_name, true);

	zval property_fileChooserIntercepted_default_value;
	ZVAL_FALSE(&property_fileChooserIntercepted_default_value);
	zend_string *property_fileChooserIntercepted_name = zend_string_init("fileChooserIntercepted", sizeof("fileChooserIntercepted") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_fileChooserIntercepted_name);
	zend_declare_typed_property(class_entry, property_fileChooserIntercepted_name, &property_fileChooserIntercepted_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_fileChooserIntercepted_name, true);

	zval property_defaultTimeout_default_value;
	ZVAL_NULL(&property_defaultTimeout_default_value);
	zend_string *property_defaultTimeout_name = zend_string_init("defaultTimeout", sizeof("defaultTimeout") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_defaultTimeout_name);
	zend_declare_typed_property(class_entry, property_defaultTimeout_name, &property_defaultTimeout_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE|MAY_BE_NULL));
	zend_string_release_ex(property_defaultTimeout_name, true);

	zval property_defaultNavigationTimeout_default_value;
	ZVAL_NULL(&property_defaultNavigationTimeout_default_value);
	zend_string *property_defaultNavigationTimeout_name = zend_string_init("defaultNavigationTimeout", sizeof("defaultNavigationTimeout") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_defaultNavigationTimeout_name);
	zend_declare_typed_property(class_entry, property_defaultNavigationTimeout_name, &property_defaultNavigationTimeout_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE|MAY_BE_NULL));
	zend_string_release_ex(property_defaultNavigationTimeout_name, true);

	zval property_viewport_default_value;
	ZVAL_NULL(&property_viewport_default_value);
	zend_string *property_viewport_name = zend_string_init("viewport", sizeof("viewport") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_viewport_name);
	zend_declare_typed_property(class_entry, property_viewport_name, &property_viewport_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release_ex(property_viewport_name, true);

	zval property_extraHeaders_default_value;
	ZVAL_EMPTY_ARRAY(&property_extraHeaders_default_value);
	zend_string *property_extraHeaders_name = zend_string_init("extraHeaders", sizeof("extraHeaders") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_extraHeaders_name);
	zend_declare_typed_property(class_entry, property_extraHeaders_name, &property_extraHeaders_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_extraHeaders_name, true);

	zval property_media_default_value;
	ZVAL_EMPTY_ARRAY(&property_media_default_value);
	zend_string *property_media_name = zend_string_init("media", sizeof("media") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_media_name);
	zend_declare_typed_property(class_entry, property_media_name, &property_media_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_media_name, true);

	zval property_listenerId_default_value;
	ZVAL_LONG(&property_listenerId_default_value, 0);
	zend_string *property_listenerId_name = zend_string_init("listenerId", sizeof("listenerId") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_listenerId_name);
	zend_declare_typed_property(class_entry, property_listenerId_name, &property_listenerId_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_listenerId_name, true);

	zval property_opener_default_value;
	ZVAL_NULL(&property_opener_default_value);
	zend_string *property_opener_name = zend_string_init("opener", sizeof("opener") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_opener_name);
	zend_string *property_opener_class_NativePlaywright_Page = zend_string_init("NativePlaywright\\Page", sizeof("NativePlaywright\\Page")-1, 1);
	zend_declare_typed_property(class_entry, property_opener_name, &property_opener_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_opener_class_NativePlaywright_Page, 0, MAY_BE_NULL));
	zend_string_release_ex(property_opener_name, true);

	zval property_browser_default_value;
	ZVAL_NULL(&property_browser_default_value);
	zend_string *property_browser_name = zend_string_init("browser", sizeof("browser") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_browser_name);
	zend_string *property_browser_class_NativePlaywright_Browser = zend_string_init("NativePlaywright\\Browser", sizeof("NativePlaywright\\Browser")-1, 1);
	zend_declare_typed_property(class_entry, property_browser_name, &property_browser_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_browser_class_NativePlaywright_Browser, 0, 0));
	zend_string_release_ex(property_browser_name, true);

	zval property_context_default_value;
	ZVAL_NULL(&property_context_default_value);
	zend_string *property_context_name = zend_string_init("context", sizeof("context") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_context_name);
	zend_string *property_context_class_NativePlaywright_BrowserContext = zend_string_init("NativePlaywright\\BrowserContext", sizeof("NativePlaywright\\BrowserContext")-1, 1);
	zend_declare_typed_property(class_entry, property_context_name, &property_context_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_context_class_NativePlaywright_BrowserContext, 0, 0));
	zend_string_release_ex(property_context_name, true);

	zval property_t_default_value;
	ZVAL_NULL(&property_t_default_value);
	zend_string *property_t_name = zend_string_init("t", sizeof("t") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_t_name);
	zend_string *property_t_class_NativePlaywright_Transport = zend_string_init("NativePlaywright\\Transport", sizeof("NativePlaywright\\Transport")-1, 1);
	zend_declare_typed_property(class_entry, property_t_name, &property_t_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_t_class_NativePlaywright_Transport, 0, 0));
	zend_string_release_ex(property_t_name, true);

	zval property_sessionId_default_value;
	ZVAL_UNDEF(&property_sessionId_default_value);
	zend_string *property_sessionId_name = zend_string_init("sessionId", sizeof("sessionId") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_sessionId_name);
	zend_declare_typed_property(class_entry, property_sessionId_name, &property_sessionId_default_value, ZEND_ACC_PUBLIC|ZEND_ACC_READONLY|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_sessionId_name, true);

	zval property_targetId_default_value;
	ZVAL_UNDEF(&property_targetId_default_value);
	zend_string *property_targetId_name = zend_string_init("targetId", sizeof("targetId") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_targetId_name);
	zend_declare_typed_property(class_entry, property_targetId_name, &property_targetId_default_value, ZEND_ACC_PUBLIC|ZEND_ACC_READONLY|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_targetId_name, true);

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
