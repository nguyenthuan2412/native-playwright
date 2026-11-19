/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 2e4dac9790b4589e7c8f0a1deac27deeb244e273 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Frame___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, page, NativePlaywright\\Page, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, parentId, IS_STRING, 0, "''")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Frame_page, 0, 0, NativePlaywright\\Page, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_url, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_name arginfo_class_NativePlaywright_Frame_url

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_isDetached, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Frame_parentFrame, 0, 0, NativePlaywright\\Frame, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_childFrames, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_resetContexts, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_contextDestroyed, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_isContextLost, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, msg, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_ensureUtil, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_utilCall, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, expression, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, byValue, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_utilValue, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, expression, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_mainContextId arginfo_class_NativePlaywright_Frame_ensureUtil

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_adoptToMain, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, objectId, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_offset arginfo_class_NativePlaywright_Frame_childFrames

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_lifecycleName, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, waitUntil, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_lifecycleReached, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, loaderId, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Frame_goto, 0, 1, NativePlaywright\\Response, 1)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_waitForLoader, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, loaderId, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, deadline, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, api, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Frame_expectNavigation, 0, 1, NativePlaywright\\Response, 1)
	ZEND_ARG_OBJ_INFO(0, action, Closure, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_waitForLoadState, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, state, IS_STRING, 0, "'load'")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_waitForURL, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, url, Closure, MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_title arginfo_class_NativePlaywright_Frame_url

#define arginfo_class_NativePlaywright_Frame_content arginfo_class_NativePlaywright_Frame_url

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_setContent, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, html, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_evaluate, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, js, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arg, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_waitForFunction, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, js, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arg, IS_MIXED, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_addScriptTag, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_addStyleTag arginfo_class_NativePlaywright_Frame_addScriptTag

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Frame_locator, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Frame_getByText, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Frame_getByRole, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_getByLabel arginfo_class_NativePlaywright_Frame_getByText

#define arginfo_class_NativePlaywright_Frame_getByPlaceholder arginfo_class_NativePlaywright_Frame_getByText

#define arginfo_class_NativePlaywright_Frame_getByAltText arginfo_class_NativePlaywright_Frame_getByText

#define arginfo_class_NativePlaywright_Frame_getByTitle arginfo_class_NativePlaywright_Frame_getByText

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Frame_getByTestId, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, testId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Frame_frameLocator, 0, 1, NativePlaywright\\FrameLocator, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_click, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_dblclick arginfo_class_NativePlaywright_Frame_click

#define arginfo_class_NativePlaywright_Frame_tap arginfo_class_NativePlaywright_Frame_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_fill, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_type, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_press, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_hover arginfo_class_NativePlaywright_Frame_click

#define arginfo_class_NativePlaywright_Frame_focus arginfo_class_NativePlaywright_Frame_click

#define arginfo_class_NativePlaywright_Frame_check arginfo_class_NativePlaywright_Frame_click

#define arginfo_class_NativePlaywright_Frame_uncheck arginfo_class_NativePlaywright_Frame_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_setChecked, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, checked, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_selectOption, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK(0, values, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_setInputFiles, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK(0, files, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_dragAndDrop, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_dispatchEvent, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, eventInit, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_textContent, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_innerText, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_innerHTML arginfo_class_NativePlaywright_Frame_innerText

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_getAttribute, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_inputValue arginfo_class_NativePlaywright_Frame_innerText

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_isVisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_isHidden arginfo_class_NativePlaywright_Frame_isVisible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_isEnabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_isDisabled arginfo_class_NativePlaywright_Frame_isEnabled

#define arginfo_class_NativePlaywright_Frame_isEditable arginfo_class_NativePlaywright_Frame_isEnabled

#define arginfo_class_NativePlaywright_Frame_isChecked arginfo_class_NativePlaywright_Frame_isEnabled

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Frame_waitForSelector, 0, 1, NativePlaywright\\Locator, 1)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Frame_evalOnSelector, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, js, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arg, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Frame_evalOnSelectorAll arginfo_class_NativePlaywright_Frame_evalOnSelector

ZEND_METHOD(NativePlaywright_Frame, __construct);
ZEND_METHOD(NativePlaywright_Frame, page);
ZEND_METHOD(NativePlaywright_Frame, url);
ZEND_METHOD(NativePlaywright_Frame, name);
ZEND_METHOD(NativePlaywright_Frame, isDetached);
ZEND_METHOD(NativePlaywright_Frame, parentFrame);
ZEND_METHOD(NativePlaywright_Frame, childFrames);
ZEND_METHOD(NativePlaywright_Frame, resetContexts);
ZEND_METHOD(NativePlaywright_Frame, contextDestroyed);
ZEND_METHOD(NativePlaywright_Frame, isContextLost);
ZEND_METHOD(NativePlaywright_Frame, ensureUtil);
ZEND_METHOD(NativePlaywright_Frame, utilCall);
ZEND_METHOD(NativePlaywright_Frame, utilValue);
ZEND_METHOD(NativePlaywright_Frame, mainContextId);
ZEND_METHOD(NativePlaywright_Frame, adoptToMain);
ZEND_METHOD(NativePlaywright_Frame, offset);
ZEND_METHOD(NativePlaywright_Frame, lifecycleName);
ZEND_METHOD(NativePlaywright_Frame, lifecycleReached);
ZEND_METHOD(NativePlaywright_Frame, goto);
ZEND_METHOD(NativePlaywright_Frame, waitForLoader);
ZEND_METHOD(NativePlaywright_Frame, expectNavigation);
ZEND_METHOD(NativePlaywright_Frame, waitForLoadState);
ZEND_METHOD(NativePlaywright_Frame, waitForURL);
ZEND_METHOD(NativePlaywright_Frame, title);
ZEND_METHOD(NativePlaywright_Frame, content);
ZEND_METHOD(NativePlaywright_Frame, setContent);
ZEND_METHOD(NativePlaywright_Frame, evaluate);
ZEND_METHOD(NativePlaywright_Frame, waitForFunction);
ZEND_METHOD(NativePlaywright_Frame, addScriptTag);
ZEND_METHOD(NativePlaywright_Frame, addStyleTag);
ZEND_METHOD(NativePlaywright_Frame, locator);
ZEND_METHOD(NativePlaywright_Frame, getByText);
ZEND_METHOD(NativePlaywright_Frame, getByRole);
ZEND_METHOD(NativePlaywright_Frame, getByLabel);
ZEND_METHOD(NativePlaywright_Frame, getByPlaceholder);
ZEND_METHOD(NativePlaywright_Frame, getByAltText);
ZEND_METHOD(NativePlaywright_Frame, getByTitle);
ZEND_METHOD(NativePlaywright_Frame, getByTestId);
ZEND_METHOD(NativePlaywright_Frame, frameLocator);
ZEND_METHOD(NativePlaywright_Frame, click);
ZEND_METHOD(NativePlaywright_Frame, dblclick);
ZEND_METHOD(NativePlaywright_Frame, tap);
ZEND_METHOD(NativePlaywright_Frame, fill);
ZEND_METHOD(NativePlaywright_Frame, type);
ZEND_METHOD(NativePlaywright_Frame, press);
ZEND_METHOD(NativePlaywright_Frame, hover);
ZEND_METHOD(NativePlaywright_Frame, focus);
ZEND_METHOD(NativePlaywright_Frame, check);
ZEND_METHOD(NativePlaywright_Frame, uncheck);
ZEND_METHOD(NativePlaywright_Frame, setChecked);
ZEND_METHOD(NativePlaywright_Frame, selectOption);
ZEND_METHOD(NativePlaywright_Frame, setInputFiles);
ZEND_METHOD(NativePlaywright_Frame, dragAndDrop);
ZEND_METHOD(NativePlaywright_Frame, dispatchEvent);
ZEND_METHOD(NativePlaywright_Frame, textContent);
ZEND_METHOD(NativePlaywright_Frame, innerText);
ZEND_METHOD(NativePlaywright_Frame, innerHTML);
ZEND_METHOD(NativePlaywright_Frame, getAttribute);
ZEND_METHOD(NativePlaywright_Frame, inputValue);
ZEND_METHOD(NativePlaywright_Frame, isVisible);
ZEND_METHOD(NativePlaywright_Frame, isHidden);
ZEND_METHOD(NativePlaywright_Frame, isEnabled);
ZEND_METHOD(NativePlaywright_Frame, isDisabled);
ZEND_METHOD(NativePlaywright_Frame, isEditable);
ZEND_METHOD(NativePlaywright_Frame, isChecked);
ZEND_METHOD(NativePlaywright_Frame, waitForSelector);
ZEND_METHOD(NativePlaywright_Frame, evalOnSelector);
ZEND_METHOD(NativePlaywright_Frame, evalOnSelectorAll);

static const zend_function_entry class_NativePlaywright_Frame_methods[] = {
	ZEND_ME(NativePlaywright_Frame, __construct, arginfo_class_NativePlaywright_Frame___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, page, arginfo_class_NativePlaywright_Frame_page, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, url, arginfo_class_NativePlaywright_Frame_url, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, name, arginfo_class_NativePlaywright_Frame_name, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, isDetached, arginfo_class_NativePlaywright_Frame_isDetached, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, parentFrame, arginfo_class_NativePlaywright_Frame_parentFrame, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, childFrames, arginfo_class_NativePlaywright_Frame_childFrames, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, resetContexts, arginfo_class_NativePlaywright_Frame_resetContexts, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, contextDestroyed, arginfo_class_NativePlaywright_Frame_contextDestroyed, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, isContextLost, arginfo_class_NativePlaywright_Frame_isContextLost, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Frame, ensureUtil, arginfo_class_NativePlaywright_Frame_ensureUtil, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Frame, utilCall, arginfo_class_NativePlaywright_Frame_utilCall, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, utilValue, arginfo_class_NativePlaywright_Frame_utilValue, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, mainContextId, arginfo_class_NativePlaywright_Frame_mainContextId, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, adoptToMain, arginfo_class_NativePlaywright_Frame_adoptToMain, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, offset, arginfo_class_NativePlaywright_Frame_offset, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, lifecycleName, arginfo_class_NativePlaywright_Frame_lifecycleName, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Frame, lifecycleReached, arginfo_class_NativePlaywright_Frame_lifecycleReached, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, goto, arginfo_class_NativePlaywright_Frame_goto, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, waitForLoader, arginfo_class_NativePlaywright_Frame_waitForLoader, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Frame, expectNavigation, arginfo_class_NativePlaywright_Frame_expectNavigation, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, waitForLoadState, arginfo_class_NativePlaywright_Frame_waitForLoadState, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, waitForURL, arginfo_class_NativePlaywright_Frame_waitForURL, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, title, arginfo_class_NativePlaywright_Frame_title, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, content, arginfo_class_NativePlaywright_Frame_content, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, setContent, arginfo_class_NativePlaywright_Frame_setContent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, evaluate, arginfo_class_NativePlaywright_Frame_evaluate, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, waitForFunction, arginfo_class_NativePlaywright_Frame_waitForFunction, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, addScriptTag, arginfo_class_NativePlaywright_Frame_addScriptTag, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, addStyleTag, arginfo_class_NativePlaywright_Frame_addStyleTag, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, locator, arginfo_class_NativePlaywright_Frame_locator, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, getByText, arginfo_class_NativePlaywright_Frame_getByText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, getByRole, arginfo_class_NativePlaywright_Frame_getByRole, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, getByLabel, arginfo_class_NativePlaywright_Frame_getByLabel, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, getByPlaceholder, arginfo_class_NativePlaywright_Frame_getByPlaceholder, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, getByAltText, arginfo_class_NativePlaywright_Frame_getByAltText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, getByTitle, arginfo_class_NativePlaywright_Frame_getByTitle, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, getByTestId, arginfo_class_NativePlaywright_Frame_getByTestId, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, frameLocator, arginfo_class_NativePlaywright_Frame_frameLocator, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, click, arginfo_class_NativePlaywright_Frame_click, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, dblclick, arginfo_class_NativePlaywright_Frame_dblclick, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, tap, arginfo_class_NativePlaywright_Frame_tap, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, fill, arginfo_class_NativePlaywright_Frame_fill, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, type, arginfo_class_NativePlaywright_Frame_type, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, press, arginfo_class_NativePlaywright_Frame_press, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, hover, arginfo_class_NativePlaywright_Frame_hover, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, focus, arginfo_class_NativePlaywright_Frame_focus, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, check, arginfo_class_NativePlaywright_Frame_check, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, uncheck, arginfo_class_NativePlaywright_Frame_uncheck, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, setChecked, arginfo_class_NativePlaywright_Frame_setChecked, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, selectOption, arginfo_class_NativePlaywright_Frame_selectOption, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, setInputFiles, arginfo_class_NativePlaywright_Frame_setInputFiles, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, dragAndDrop, arginfo_class_NativePlaywright_Frame_dragAndDrop, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, dispatchEvent, arginfo_class_NativePlaywright_Frame_dispatchEvent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, textContent, arginfo_class_NativePlaywright_Frame_textContent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, innerText, arginfo_class_NativePlaywright_Frame_innerText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, innerHTML, arginfo_class_NativePlaywright_Frame_innerHTML, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, getAttribute, arginfo_class_NativePlaywright_Frame_getAttribute, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, inputValue, arginfo_class_NativePlaywright_Frame_inputValue, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, isVisible, arginfo_class_NativePlaywright_Frame_isVisible, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, isHidden, arginfo_class_NativePlaywright_Frame_isHidden, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, isEnabled, arginfo_class_NativePlaywright_Frame_isEnabled, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, isDisabled, arginfo_class_NativePlaywright_Frame_isDisabled, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, isEditable, arginfo_class_NativePlaywright_Frame_isEditable, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, isChecked, arginfo_class_NativePlaywright_Frame_isChecked, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, waitForSelector, arginfo_class_NativePlaywright_Frame_waitForSelector, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, evalOnSelector, arginfo_class_NativePlaywright_Frame_evalOnSelector, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Frame, evalOnSelectorAll, arginfo_class_NativePlaywright_Frame_evalOnSelectorAll, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Frame(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Frame", class_NativePlaywright_Frame_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_url_default_value;
	ZVAL_EMPTY_STRING(&property_url_default_value);
	zend_string *property_url_name = zend_string_init("url", sizeof("url") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_url_name);
	zend_declare_typed_property(class_entry, property_url_name, &property_url_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_url_name, true);

	zval property_name_default_value;
	ZVAL_EMPTY_STRING(&property_name_default_value);
	typephp_prepare_property_redeclaration(class_entry, ZSTR_KNOWN(ZEND_STR_NAME));
	zend_declare_typed_property(class_entry, ZSTR_KNOWN(ZEND_STR_NAME), &property_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));

	zval property_loaderId_default_value;
	ZVAL_EMPTY_STRING(&property_loaderId_default_value);
	zend_string *property_loaderId_name = zend_string_init("loaderId", sizeof("loaderId") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_loaderId_name);
	zend_declare_typed_property(class_entry, property_loaderId_name, &property_loaderId_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_loaderId_name, true);

	zval property_lifecycleLoader_default_value;
	ZVAL_EMPTY_STRING(&property_lifecycleLoader_default_value);
	zend_string *property_lifecycleLoader_name = zend_string_init("lifecycleLoader", sizeof("lifecycleLoader") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_lifecycleLoader_name);
	zend_declare_typed_property(class_entry, property_lifecycleLoader_name, &property_lifecycleLoader_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_lifecycleLoader_name, true);

	zval property_lifecycle_default_value;
	ZVAL_EMPTY_ARRAY(&property_lifecycle_default_value);
	zend_string *property_lifecycle_name = zend_string_init("lifecycle", sizeof("lifecycle") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_lifecycle_name);
	zend_declare_typed_property(class_entry, property_lifecycle_name, &property_lifecycle_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release_ex(property_lifecycle_name, true);

	zval property_sameDocumentNavigations_default_value;
	ZVAL_LONG(&property_sameDocumentNavigations_default_value, 0);
	zend_string *property_sameDocumentNavigations_name = zend_string_init("sameDocumentNavigations", sizeof("sameDocumentNavigations") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_sameDocumentNavigations_name);
	zend_declare_typed_property(class_entry, property_sameDocumentNavigations_name, &property_sameDocumentNavigations_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_sameDocumentNavigations_name, true);

	zval property_detached_default_value;
	ZVAL_FALSE(&property_detached_default_value);
	zend_string *property_detached_name = zend_string_init("detached", sizeof("detached") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_detached_name);
	zend_declare_typed_property(class_entry, property_detached_name, &property_detached_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release_ex(property_detached_name, true);

	zval property_mainContext_default_value;
	ZVAL_LONG(&property_mainContext_default_value, 0);
	zend_string *property_mainContext_name = zend_string_init("mainContext", sizeof("mainContext") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_mainContext_name);
	zend_declare_typed_property(class_entry, property_mainContext_name, &property_mainContext_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_mainContext_name, true);

	zval property_utilContext_default_value;
	ZVAL_LONG(&property_utilContext_default_value, 0);
	zend_string *property_utilContext_name = zend_string_init("utilContext", sizeof("utilContext") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_utilContext_name);
	zend_declare_typed_property(class_entry, property_utilContext_name, &property_utilContext_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_utilContext_name, true);

	zval property_injectedContext_default_value;
	ZVAL_LONG(&property_injectedContext_default_value, 0);
	zend_string *property_injectedContext_name = zend_string_init("injectedContext", sizeof("injectedContext") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_injectedContext_name);
	zend_declare_typed_property(class_entry, property_injectedContext_name, &property_injectedContext_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release_ex(property_injectedContext_name, true);

	zval property_page_default_value;
	ZVAL_NULL(&property_page_default_value);
	zend_string *property_page_name = zend_string_init("page", sizeof("page") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_page_name);
	zend_string *property_page_class_NativePlaywright_Page = zend_string_init("NativePlaywright\\Page", sizeof("NativePlaywright\\Page")-1, 1);
	zend_declare_typed_property(class_entry, property_page_name, &property_page_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_page_class_NativePlaywright_Page, 0, 0));
	zend_string_release_ex(property_page_name, true);

	zval property_id_default_value;
	ZVAL_UNDEF(&property_id_default_value);
	zend_string *property_id_name = zend_string_init("id", sizeof("id") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_id_name);
	zend_declare_typed_property(class_entry, property_id_name, &property_id_default_value, ZEND_ACC_PUBLIC|ZEND_ACC_READONLY|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_id_name, true);

	zval property_parentId_default_value;
	ZVAL_EMPTY_STRING(&property_parentId_default_value);
	zend_string *property_parentId_name = zend_string_init("parentId", sizeof("parentId") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_parentId_name);
	zend_declare_typed_property(class_entry, property_parentId_name, &property_parentId_default_value, ZEND_ACC_PUBLIC|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_parentId_name, true);

	return class_entry;
}
