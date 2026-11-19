/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: ed416ed826fc61791ec05578400535afe704e30f */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NativePlaywright_Locator___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, frame, NativePlaywright\\Frame, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_selector, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_page, 0, 0, NativePlaywright\\Page, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator___toString arginfo_class_NativePlaywright_Locator_selector

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_escapeText, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, exact, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_jsRegex, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, re, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_byText, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, exact, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_byLabel arginfo_class_NativePlaywright_Locator_byText

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_byAttr, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, attr, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, exact, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_byTestId, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_byRole, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_chain, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, sel, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_locator, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, selector, NativePlaywright\\Locator, MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_filter, 0, 0, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_and, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_OBJ_INFO(0, other, NativePlaywright\\Locator, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_or arginfo_class_NativePlaywright_Locator_and

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_nth, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_first, 0, 0, NativePlaywright\\Locator, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_last arginfo_class_NativePlaywright_Locator_first

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_getByText, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_getByRole, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_getByLabel arginfo_class_NativePlaywright_Locator_getByText

#define arginfo_class_NativePlaywright_Locator_getByPlaceholder arginfo_class_NativePlaywright_Locator_getByText

#define arginfo_class_NativePlaywright_Locator_getByAltText arginfo_class_NativePlaywright_Locator_getByText

#define arginfo_class_NativePlaywright_Locator_getByTitle arginfo_class_NativePlaywright_Locator_getByText

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_getByTestId, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, testId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_frameLocator, 0, 1, NativePlaywright\\FrameLocator, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_contentFrame, 0, 0, NativePlaywright\\FrameLocator, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NativePlaywright_Locator_describe, 0, 1, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_all, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_resolve, 0, 0, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_js, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_timeout, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_retrying, 0, 3, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, api, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, attempt, Closure, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_prepare, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, api, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_read, 0, 4, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, api, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, op, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, wait, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_withModifiers, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, fn, Closure, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_click, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_dblclick arginfo_class_NativePlaywright_Locator_click

#define arginfo_class_NativePlaywright_Locator_tap arginfo_class_NativePlaywright_Locator_click

#define arginfo_class_NativePlaywright_Locator_hover arginfo_class_NativePlaywright_Locator_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_fill, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_clear arginfo_class_NativePlaywright_Locator_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_pressSequentially, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_type arginfo_class_NativePlaywright_Locator_pressSequentially

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_press, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_focus arginfo_class_NativePlaywright_Locator_click

#define arginfo_class_NativePlaywright_Locator_blur arginfo_class_NativePlaywright_Locator_click

#define arginfo_class_NativePlaywright_Locator_check arginfo_class_NativePlaywright_Locator_click

#define arginfo_class_NativePlaywright_Locator_uncheck arginfo_class_NativePlaywright_Locator_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_setChecked, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, checked, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_selectOption, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_MASK(0, values, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_selectText arginfo_class_NativePlaywright_Locator_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_setInputFiles, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_MASK(0, files, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_materializeFiles, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_MASK(0, files, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_dragTo, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, target, NativePlaywright\\Locator, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_scrollIntoViewIfNeeded arginfo_class_NativePlaywright_Locator_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_dispatchEvent, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, eventInit, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_screenshot, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_highlight, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_count, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_textContent, 0, 0, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_innerText arginfo_class_NativePlaywright_Locator_screenshot

#define arginfo_class_NativePlaywright_Locator_innerHTML arginfo_class_NativePlaywright_Locator_screenshot

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_getAttribute, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_inputValue arginfo_class_NativePlaywright_Locator_screenshot

#define arginfo_class_NativePlaywright_Locator_allTextContents arginfo_class_NativePlaywright_Locator_all

#define arginfo_class_NativePlaywright_Locator_allInnerTexts arginfo_class_NativePlaywright_Locator_all

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_isVisible, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_isHidden arginfo_class_NativePlaywright_Locator_isVisible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_isEnabled, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_isDisabled arginfo_class_NativePlaywright_Locator_isEnabled

#define arginfo_class_NativePlaywright_Locator_isEditable arginfo_class_NativePlaywright_Locator_isEnabled

#define arginfo_class_NativePlaywright_Locator_isChecked arginfo_class_NativePlaywright_Locator_isEnabled

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_boundingBox, 0, 0, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_NativePlaywright_Locator_ariaSnapshot arginfo_class_NativePlaywright_Locator_screenshot

#define arginfo_class_NativePlaywright_Locator_waitFor arginfo_class_NativePlaywright_Locator_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_evaluate, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, js, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arg, IS_MIXED, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Locator_evaluateAll, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, js, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arg, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Locator, __construct);
ZEND_METHOD(NativePlaywright_Locator, selector);
ZEND_METHOD(NativePlaywright_Locator, page);
ZEND_METHOD(NativePlaywright_Locator, __toString);
ZEND_METHOD(NativePlaywright_Locator, escapeText);
ZEND_METHOD(NativePlaywright_Locator, jsRegex);
ZEND_METHOD(NativePlaywright_Locator, byText);
ZEND_METHOD(NativePlaywright_Locator, byLabel);
ZEND_METHOD(NativePlaywright_Locator, byAttr);
ZEND_METHOD(NativePlaywright_Locator, byTestId);
ZEND_METHOD(NativePlaywright_Locator, byRole);
ZEND_METHOD(NativePlaywright_Locator, chain);
ZEND_METHOD(NativePlaywright_Locator, locator);
ZEND_METHOD(NativePlaywright_Locator, filter);
ZEND_METHOD(NativePlaywright_Locator, and);
ZEND_METHOD(NativePlaywright_Locator, or);
ZEND_METHOD(NativePlaywright_Locator, nth);
ZEND_METHOD(NativePlaywright_Locator, first);
ZEND_METHOD(NativePlaywright_Locator, last);
ZEND_METHOD(NativePlaywright_Locator, getByText);
ZEND_METHOD(NativePlaywright_Locator, getByRole);
ZEND_METHOD(NativePlaywright_Locator, getByLabel);
ZEND_METHOD(NativePlaywright_Locator, getByPlaceholder);
ZEND_METHOD(NativePlaywright_Locator, getByAltText);
ZEND_METHOD(NativePlaywright_Locator, getByTitle);
ZEND_METHOD(NativePlaywright_Locator, getByTestId);
ZEND_METHOD(NativePlaywright_Locator, frameLocator);
ZEND_METHOD(NativePlaywright_Locator, contentFrame);
ZEND_METHOD(NativePlaywright_Locator, describe);
ZEND_METHOD(NativePlaywright_Locator, all);
ZEND_METHOD(NativePlaywright_Locator, resolve);
ZEND_METHOD(NativePlaywright_Locator, js);
ZEND_METHOD(NativePlaywright_Locator, timeout);
ZEND_METHOD(NativePlaywright_Locator, retrying);
ZEND_METHOD(NativePlaywright_Locator, prepare);
ZEND_METHOD(NativePlaywright_Locator, read);
ZEND_METHOD(NativePlaywright_Locator, withModifiers);
ZEND_METHOD(NativePlaywright_Locator, click);
ZEND_METHOD(NativePlaywright_Locator, dblclick);
ZEND_METHOD(NativePlaywright_Locator, tap);
ZEND_METHOD(NativePlaywright_Locator, hover);
ZEND_METHOD(NativePlaywright_Locator, fill);
ZEND_METHOD(NativePlaywright_Locator, clear);
ZEND_METHOD(NativePlaywright_Locator, pressSequentially);
ZEND_METHOD(NativePlaywright_Locator, type);
ZEND_METHOD(NativePlaywright_Locator, press);
ZEND_METHOD(NativePlaywright_Locator, focus);
ZEND_METHOD(NativePlaywright_Locator, blur);
ZEND_METHOD(NativePlaywright_Locator, check);
ZEND_METHOD(NativePlaywright_Locator, uncheck);
ZEND_METHOD(NativePlaywright_Locator, setChecked);
ZEND_METHOD(NativePlaywright_Locator, selectOption);
ZEND_METHOD(NativePlaywright_Locator, selectText);
ZEND_METHOD(NativePlaywright_Locator, setInputFiles);
ZEND_METHOD(NativePlaywright_Locator, materializeFiles);
ZEND_METHOD(NativePlaywright_Locator, dragTo);
ZEND_METHOD(NativePlaywright_Locator, scrollIntoViewIfNeeded);
ZEND_METHOD(NativePlaywright_Locator, dispatchEvent);
ZEND_METHOD(NativePlaywright_Locator, screenshot);
ZEND_METHOD(NativePlaywright_Locator, highlight);
ZEND_METHOD(NativePlaywright_Locator, count);
ZEND_METHOD(NativePlaywright_Locator, textContent);
ZEND_METHOD(NativePlaywright_Locator, innerText);
ZEND_METHOD(NativePlaywright_Locator, innerHTML);
ZEND_METHOD(NativePlaywright_Locator, getAttribute);
ZEND_METHOD(NativePlaywright_Locator, inputValue);
ZEND_METHOD(NativePlaywright_Locator, allTextContents);
ZEND_METHOD(NativePlaywright_Locator, allInnerTexts);
ZEND_METHOD(NativePlaywright_Locator, isVisible);
ZEND_METHOD(NativePlaywright_Locator, isHidden);
ZEND_METHOD(NativePlaywright_Locator, isEnabled);
ZEND_METHOD(NativePlaywright_Locator, isDisabled);
ZEND_METHOD(NativePlaywright_Locator, isEditable);
ZEND_METHOD(NativePlaywright_Locator, isChecked);
ZEND_METHOD(NativePlaywright_Locator, boundingBox);
ZEND_METHOD(NativePlaywright_Locator, ariaSnapshot);
ZEND_METHOD(NativePlaywright_Locator, waitFor);
ZEND_METHOD(NativePlaywright_Locator, evaluate);
ZEND_METHOD(NativePlaywright_Locator, evaluateAll);

static const zend_function_entry class_NativePlaywright_Locator_methods[] = {
	ZEND_ME(NativePlaywright_Locator, __construct, arginfo_class_NativePlaywright_Locator___construct, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, selector, arginfo_class_NativePlaywright_Locator_selector, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, page, arginfo_class_NativePlaywright_Locator_page, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, __toString, arginfo_class_NativePlaywright_Locator___toString, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, escapeText, arginfo_class_NativePlaywright_Locator_escapeText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Locator, jsRegex, arginfo_class_NativePlaywright_Locator_jsRegex, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Locator, byText, arginfo_class_NativePlaywright_Locator_byText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Locator, byLabel, arginfo_class_NativePlaywright_Locator_byLabel, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Locator, byAttr, arginfo_class_NativePlaywright_Locator_byAttr, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Locator, byTestId, arginfo_class_NativePlaywright_Locator_byTestId, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Locator, byRole, arginfo_class_NativePlaywright_Locator_byRole, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Locator, chain, arginfo_class_NativePlaywright_Locator_chain, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Locator, locator, arginfo_class_NativePlaywright_Locator_locator, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, filter, arginfo_class_NativePlaywright_Locator_filter, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, and, arginfo_class_NativePlaywright_Locator_and, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, or, arginfo_class_NativePlaywright_Locator_or, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, nth, arginfo_class_NativePlaywright_Locator_nth, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, first, arginfo_class_NativePlaywright_Locator_first, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, last, arginfo_class_NativePlaywright_Locator_last, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, getByText, arginfo_class_NativePlaywright_Locator_getByText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, getByRole, arginfo_class_NativePlaywright_Locator_getByRole, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, getByLabel, arginfo_class_NativePlaywright_Locator_getByLabel, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, getByPlaceholder, arginfo_class_NativePlaywright_Locator_getByPlaceholder, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, getByAltText, arginfo_class_NativePlaywright_Locator_getByAltText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, getByTitle, arginfo_class_NativePlaywright_Locator_getByTitle, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, getByTestId, arginfo_class_NativePlaywright_Locator_getByTestId, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, frameLocator, arginfo_class_NativePlaywright_Locator_frameLocator, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, contentFrame, arginfo_class_NativePlaywright_Locator_contentFrame, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, describe, arginfo_class_NativePlaywright_Locator_describe, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, all, arginfo_class_NativePlaywright_Locator_all, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, resolve, arginfo_class_NativePlaywright_Locator_resolve, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Locator, js, arginfo_class_NativePlaywright_Locator_js, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Locator, timeout, arginfo_class_NativePlaywright_Locator_timeout, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Locator, retrying, arginfo_class_NativePlaywright_Locator_retrying, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Locator, prepare, arginfo_class_NativePlaywright_Locator_prepare, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Locator, read, arginfo_class_NativePlaywright_Locator_read, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Locator, withModifiers, arginfo_class_NativePlaywright_Locator_withModifiers, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PRIVATE)
	ZEND_ME(NativePlaywright_Locator, click, arginfo_class_NativePlaywright_Locator_click, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, dblclick, arginfo_class_NativePlaywright_Locator_dblclick, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, tap, arginfo_class_NativePlaywright_Locator_tap, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, hover, arginfo_class_NativePlaywright_Locator_hover, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, fill, arginfo_class_NativePlaywright_Locator_fill, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, clear, arginfo_class_NativePlaywright_Locator_clear, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, pressSequentially, arginfo_class_NativePlaywright_Locator_pressSequentially, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, type, arginfo_class_NativePlaywright_Locator_type, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, press, arginfo_class_NativePlaywright_Locator_press, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, focus, arginfo_class_NativePlaywright_Locator_focus, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, blur, arginfo_class_NativePlaywright_Locator_blur, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, check, arginfo_class_NativePlaywright_Locator_check, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, uncheck, arginfo_class_NativePlaywright_Locator_uncheck, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, setChecked, arginfo_class_NativePlaywright_Locator_setChecked, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, selectOption, arginfo_class_NativePlaywright_Locator_selectOption, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, selectText, arginfo_class_NativePlaywright_Locator_selectText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, setInputFiles, arginfo_class_NativePlaywright_Locator_setInputFiles, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, materializeFiles, arginfo_class_NativePlaywright_Locator_materializeFiles, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Locator, dragTo, arginfo_class_NativePlaywright_Locator_dragTo, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, scrollIntoViewIfNeeded, arginfo_class_NativePlaywright_Locator_scrollIntoViewIfNeeded, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, dispatchEvent, arginfo_class_NativePlaywright_Locator_dispatchEvent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, screenshot, arginfo_class_NativePlaywright_Locator_screenshot, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, highlight, arginfo_class_NativePlaywright_Locator_highlight, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, count, arginfo_class_NativePlaywright_Locator_count, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, textContent, arginfo_class_NativePlaywright_Locator_textContent, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, innerText, arginfo_class_NativePlaywright_Locator_innerText, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, innerHTML, arginfo_class_NativePlaywright_Locator_innerHTML, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, getAttribute, arginfo_class_NativePlaywright_Locator_getAttribute, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, inputValue, arginfo_class_NativePlaywright_Locator_inputValue, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, allTextContents, arginfo_class_NativePlaywright_Locator_allTextContents, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, allInnerTexts, arginfo_class_NativePlaywright_Locator_allInnerTexts, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, isVisible, arginfo_class_NativePlaywright_Locator_isVisible, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, isHidden, arginfo_class_NativePlaywright_Locator_isHidden, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, isEnabled, arginfo_class_NativePlaywright_Locator_isEnabled, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, isDisabled, arginfo_class_NativePlaywright_Locator_isDisabled, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, isEditable, arginfo_class_NativePlaywright_Locator_isEditable, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, isChecked, arginfo_class_NativePlaywright_Locator_isChecked, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, boundingBox, arginfo_class_NativePlaywright_Locator_boundingBox, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, ariaSnapshot, arginfo_class_NativePlaywright_Locator_ariaSnapshot, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, waitFor, arginfo_class_NativePlaywright_Locator_waitFor, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, evaluate, arginfo_class_NativePlaywright_Locator_evaluate, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_ME(NativePlaywright_Locator, evaluateAll, arginfo_class_NativePlaywright_Locator_evaluateAll, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Locator(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Locator", class_NativePlaywright_Locator_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval const_ENTER_FRAME_value;
	zend_string *const_ENTER_FRAME_value_str = zend_string_init_interned(" >> internal:control=enter-frame >> ", sizeof(" >> internal:control=enter-frame >> ") - 1, 1);
	ZVAL_INTERNED_STR(&const_ENTER_FRAME_value, const_ENTER_FRAME_value_str);
	zend_string *const_ENTER_FRAME_name = zend_string_init_interned("ENTER_FRAME", sizeof("ENTER_FRAME") - 1, true);
	zend_hash_del(&class_entry->constants_table, const_ENTER_FRAME_name);
	zend_declare_class_constant_ex(class_entry, const_ENTER_FRAME_name, &const_ENTER_FRAME_value, ZEND_ACC_PUBLIC, NULL);
	zend_string_release_ex(const_ENTER_FRAME_name, true);

	zval const_DELAYS_value;
	ZVAL_EMPTY_ARRAY(&const_DELAYS_value);
	zend_string *const_DELAYS_name = zend_string_init_interned("DELAYS", sizeof("DELAYS") - 1, true);
	zend_hash_del(&class_entry->constants_table, const_DELAYS_name);
	zend_declare_class_constant_ex(class_entry, const_DELAYS_name, &const_DELAYS_value, ZEND_ACC_PRIVATE, NULL);
	zend_string_release_ex(const_DELAYS_name, true);

	zval property_testIdAttribute_default_value;
	zend_string *property_testIdAttribute_default_value_str = zend_string_init_interned("data-testid", sizeof("data-testid") - 1, 1);
	ZVAL_INTERNED_STR(&property_testIdAttribute_default_value, property_testIdAttribute_default_value_str);
	zend_string *property_testIdAttribute_name = zend_string_init("testIdAttribute", sizeof("testIdAttribute") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_testIdAttribute_name);
	zend_declare_typed_property(class_entry, property_testIdAttribute_name, &property_testIdAttribute_default_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_testIdAttribute_name, true);

	zval property_frame_default_value;
	ZVAL_NULL(&property_frame_default_value);
	zend_string *property_frame_name = zend_string_init("frame", sizeof("frame") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_frame_name);
	zend_string *property_frame_class_NativePlaywright_Frame = zend_string_init("NativePlaywright\\Frame", sizeof("NativePlaywright\\Frame")-1, 1);
	zend_declare_typed_property(class_entry, property_frame_name, &property_frame_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_frame_class_NativePlaywright_Frame, 0, 0));
	zend_string_release_ex(property_frame_name, true);

	zval property_selector_default_value;
	ZVAL_EMPTY_STRING(&property_selector_default_value);
	zend_string *property_selector_name = zend_string_init("selector", sizeof("selector") - 1, true);
	typephp_prepare_property_redeclaration(class_entry, property_selector_name);
	zend_declare_typed_property(class_entry, property_selector_name, &property_selector_default_value, ZEND_ACC_PRIVATE|ZEND_ACC_PROMOTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release_ex(property_selector_name, true);

	return class_entry;
}
