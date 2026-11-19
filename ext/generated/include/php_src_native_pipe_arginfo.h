/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 13f22b02cbe42ec45e6abf9bd50800a5fa35fa76 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pwlite_spawn, 0, 3, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, exe, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, args, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, userDataDir, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pwlite_write, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pipe, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, json, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pwlite_read, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, pipe, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pwlite_fd, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pipe, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_pwlite_pid arginfo_pwlite_fd

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pwlite_close, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, pipe, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, graceful, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(pwlite_spawn);
ZEND_FUNCTION(pwlite_write);
ZEND_FUNCTION(pwlite_read);
ZEND_FUNCTION(pwlite_fd);
ZEND_FUNCTION(pwlite_pid);
ZEND_FUNCTION(pwlite_close);
