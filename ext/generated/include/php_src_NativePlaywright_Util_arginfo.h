/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 46617829fa8e77b6f572c2f755a841658d6b6497 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Util_urlMatches, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, pattern, Closure, MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, baseURL, IS_STRING, 0, "''")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Util_isRegex, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Util_globToRegex, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, glob, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Util_resolveUrl, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Util_remoteValue, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, ro, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Util_isFunction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, js, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Util_headersArray, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, headers, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Util_lowerHeaders, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Util_toInches, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NativePlaywright_Util_mimeType, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NativePlaywright_Util, urlMatches);
ZEND_METHOD(NativePlaywright_Util, isRegex);
ZEND_METHOD(NativePlaywright_Util, globToRegex);
ZEND_METHOD(NativePlaywright_Util, resolveUrl);
ZEND_METHOD(NativePlaywright_Util, remoteValue);
ZEND_METHOD(NativePlaywright_Util, isFunction);
ZEND_METHOD(NativePlaywright_Util, headersArray);
ZEND_METHOD(NativePlaywright_Util, lowerHeaders);
ZEND_METHOD(NativePlaywright_Util, toInches);
ZEND_METHOD(NativePlaywright_Util, mimeType);

static const zend_function_entry class_NativePlaywright_Util_methods[] = {
	ZEND_ME(NativePlaywright_Util, urlMatches, arginfo_class_NativePlaywright_Util_urlMatches, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Util, isRegex, arginfo_class_NativePlaywright_Util_isRegex, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Util, globToRegex, arginfo_class_NativePlaywright_Util_globToRegex, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Util, resolveUrl, arginfo_class_NativePlaywright_Util_resolveUrl, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Util, remoteValue, arginfo_class_NativePlaywright_Util_remoteValue, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Util, isFunction, arginfo_class_NativePlaywright_Util_isFunction, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Util, headersArray, arginfo_class_NativePlaywright_Util_headersArray, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Util, lowerHeaders, arginfo_class_NativePlaywright_Util_lowerHeaders, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Util, toInches, arginfo_class_NativePlaywright_Util_toInches, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NativePlaywright_Util, mimeType, arginfo_class_NativePlaywright_Util_mimeType, ZEND_ACC_STRICT_TYPES|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static zend_class_entry *php_register_class_NativePlaywright_Util(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "NativePlaywright", "Util", class_NativePlaywright_Util_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval const_SERIALIZER_value;
	zend_string *const_SERIALIZER_value_str = zend_string_init_interned("function (v) { const seen = new WeakSet(); const ser = (x, d) => { if (x === undefined) return undefined; if (x === null) return null; const t = typeof x; if (t === \"number\" || t === \"string\" || t === \"boolean\") return x; if (t === \"bigint\") return x.toString(); if (t === \"function\" || t === \"symbol\") return undefined; if (x instanceof Date) return x.toISOString(); if (x instanceof RegExp) return String(x); if (x instanceof Error) return { name: x.name, message: x.message, stack: x.stack }; if ((typeof Node !== \"undefined\" && x instanceof Node) || x === globalThis || (typeof Window !== \"undefined\" && x instanceof Window)) return undefined; if (seen.has(x) || d > 100) return undefined; seen.add(x); let out; if (Array.isArray(x) || ArrayBuffer.isView(x)) out = Array.from(x, e => { const r = ser(e, d + 1); return r === undefined ? null : r; }); else if (x instanceof Map) { out = {}; for (const [k, e] of x) { const r = ser(e, d + 1); if (r !== undefined) out[String(k)] = r; } } else if (x instanceof Set) out = [...x].map(e => { const r = ser(e, d + 1); return r === undefined ? null : r; }); else { out = {}; for (const k of Object.keys(x)) { const r = ser(x[k], d + 1); if (r !== undefined) out[k] = r; } } seen.delete(x); return out; }; return ser(v, 0); }", sizeof("function (v) { const seen = new WeakSet(); const ser = (x, d) => { if (x === undefined) return undefined; if (x === null) return null; const t = typeof x; if (t === \"number\" || t === \"string\" || t === \"boolean\") return x; if (t === \"bigint\") return x.toString(); if (t === \"function\" || t === \"symbol\") return undefined; if (x instanceof Date) return x.toISOString(); if (x instanceof RegExp) return String(x); if (x instanceof Error) return { name: x.name, message: x.message, stack: x.stack }; if ((typeof Node !== \"undefined\" && x instanceof Node) || x === globalThis || (typeof Window !== \"undefined\" && x instanceof Window)) return undefined; if (seen.has(x) || d > 100) return undefined; seen.add(x); let out; if (Array.isArray(x) || ArrayBuffer.isView(x)) out = Array.from(x, e => { const r = ser(e, d + 1); return r === undefined ? null : r; }); else if (x instanceof Map) { out = {}; for (const [k, e] of x) { const r = ser(e, d + 1); if (r !== undefined) out[String(k)] = r; } } else if (x instanceof Set) out = [...x].map(e => { const r = ser(e, d + 1); return r === undefined ? null : r; }); else { out = {}; for (const k of Object.keys(x)) { const r = ser(x[k], d + 1); if (r !== undefined) out[k] = r; } } seen.delete(x); return out; }; return ser(v, 0); }") - 1, 1);
	ZVAL_INTERNED_STR(&const_SERIALIZER_value, const_SERIALIZER_value_str);
	zend_string *const_SERIALIZER_name = zend_string_init_interned("SERIALIZER", sizeof("SERIALIZER") - 1, true);
	zend_hash_del(&class_entry->constants_table, const_SERIALIZER_name);
	zend_declare_class_constant_ex(class_entry, const_SERIALIZER_name, &const_SERIALIZER_value, ZEND_ACC_PUBLIC, NULL);
	zend_string_release_ex(const_SERIALIZER_name, true);

	return class_entry;
}
