#include <cstring>
#include <phpx.h>
#include <phpx_helper.h>
#include <phpx_big_int.h>
#include <phpx_big_float.h>
#include <phpx_decimal.h>
#include <phpx_python.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <phpx_std.h>
#include <php_native_playwright_runtime_decl.h>
#include <php_native_playwright_src_NativePlaywright_BrowserContext_cd971a2234_decl.h>
#include <php_native_playwright_src_NativePlaywright_Download_e51727d17f_decl.h>
#include <php_native_playwright_src_NativePlaywright_Exception_de2f0e3f97_decl.h>
#include <php_native_playwright_src_NativePlaywright_Page_0aa1495138_decl.h>

void php_nativeplaywright__download____construct(php::Object &this_, php::Object page, php::Object context, php::Str guid, php::Str url, php::Str suggestedFilename, php::Str dir) {
typephp_write_property_scoped(this_, "page", page, get_persistent_class(PersistentClassId{26}, get_str(671)));
typephp_write_property_scoped(this_, "context", context, get_persistent_class(PersistentClassId{26}, get_str(671)));
typephp_write_property_scoped(this_, "guid", guid, get_persistent_class(PersistentClassId{26}, get_str(671)));
typephp_write_property_scoped(this_, "url", url, get_persistent_class(PersistentClassId{26}, get_str(671)));
typephp_write_property_scoped(this_, "suggestedFilename", suggestedFilename, get_persistent_class(PersistentClassId{26}, get_str(671)));
typephp_write_property_scoped(this_, "dir", dir, get_persistent_class(PersistentClassId{26}, get_str(671)));

}

php::Str php_nativeplaywright__download__guid(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{89}, get_str(672), get_str(671)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__download__url(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{90}, get_str(203), get_str(671)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Str php_nativeplaywright__download__suggestedfilename(php::Object &this_) {
    php::Str tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{91}, get_str(673), get_str(671)), php::AttrMode::Get));
    return tmp_var_0;
}

php::Object php_nativeplaywright__download__page(php::Object &this_) {
    php::Object tmp_var_0;

    tmp_var_0 = (this_.attr(get_persistent_prop(PersistentPropertyId{92}, get_str(433), get_str(671)), php::AttrMode::Get));
    return tmp_var_0;
}

void php_nativeplaywright__download__waitdone(php::Object &this_) {
    php::Object self;
    php::Var tmp_var_0;

    self = this_;
    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{92}, get_str(433), get_str(671)), php::AttrMode::Get);
    php::Object tmp_var_1 = tmp_var_0;
    php::ClosureFn tmp_var_2 = [](INTERNAL_FUNCTION_PARAMETERS, php::Object &this_, php::Args &vars_) -> php::Var {
    php::checkCallArgCount(0, 0, false);
        php::Object self = php::Object(vars_.get(0));
        php::Var tmp_var_0;
        php::Var tmp_var_1;
    tmp_var_0 = self.attr(get_persistent_prop(PersistentPropertyId{93}, get_str(674), get_str(671)), php::AttrMode::Get);
    tmp_var_1 = !(php::same(tmp_var_0, get_str(19)));
        if (UNEXPECTED(!(tmp_var_1.isBool()))) {
            php::throwReturnTypeError(tmp_var_1, get_str(458), get_str(106), false);
            return php::null;
        }
        return tmp_var_1;};
    php_nativeplaywright__page__waitforcondition(tmp_var_1, php::toObject(php::newClosureWithParameters(tmp_var_2, { self }, this_, get_persistent_class(PersistentClassId{26}, get_str(671)), {  }, php::ClosureStrictTypes::Enabled), get_persistent_class(PersistentClassId{5}, get_str(148))), php::toFloat(0.0), get_str(675));
    tmp_var_0.unset();
}

php::Var php_nativeplaywright__download__path(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var tmp_var_4;
    php::Var tmp_var_5;

    php_nativeplaywright__download__waitdone(this_);
    tmp_var_5 = [&]() -> php::Var {
        tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{93}, get_str(674), get_str(671)), php::AttrMode::Get);
        tmp_var_3 = php::same(tmp_var_0, get_str(677));
        tmp_var_0.unset();
        if (php::toBool(tmp_var_3)) {
            tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{94}, get_str(678), get_str(671)), php::AttrMode::Get);
            tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{89}, get_str(672), get_str(671)), php::AttrMode::Get);
            tmp_var_4 = php::concat({tmp_var_1, get_str(211), tmp_var_2});
            tmp_var_1.unset();
            tmp_var_2.unset();
            return tmp_var_4;
        } else {
            return php::Var(php::null);
        }
    }();
    if (UNEXPECTED(!(tmp_var_5.isNull() || tmp_var_5.isString()))) {
        php::throwReturnTypeError(tmp_var_5, get_str(679), get_str(545), false);
    }
    return tmp_var_5;
}

php::Var php_nativeplaywright__download__failure(php::Object &this_) {
    php::Var tmp_var_0;
    php::Var tmp_var_1;
    php::Var tmp_var_2;

    php_nativeplaywright__download__waitdone(this_);
    tmp_var_2 = [&]() -> php::Var {
        tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{93}, get_str(674), get_str(671)), php::AttrMode::Get);
        tmp_var_1 = php::same(tmp_var_0, get_str(677));
        tmp_var_0.unset();
        if (php::toBool(tmp_var_1)) {
            return php::Var(php::null);
        } else {
            return php::Var(this_.attr(get_persistent_prop(PersistentPropertyId{93}, get_str(674), get_str(671)), php::AttrMode::Get));
        }
    }();
    if (UNEXPECTED(!(tmp_var_2.isNull() || tmp_var_2.isString()))) {
        php::throwReturnTypeError(tmp_var_2, get_str(680), get_str(545), false);
    }
    return tmp_var_2;
}

void php_nativeplaywright__download__saveas(php::Object &this_, php::Str path) {
    php::Var src;
    php::Var tmp_var_1;
    php::Var tmp_var_2;
    php::Var tmp_var_3;
    php::Var dir;
    zend_function * tmp_var_4;
    zend_function * tmp_var_5;
    zend_function * tmp_var_6;
    zend_function * tmp_var_7;
    zend_class_entry *tmp_var_0 = get_persistent_class(PersistentClassId{0}, get_str(75));

    src = php_nativeplaywright__download__path(this_);
    if (php::toBool(php::same(src, php::null))) {
        tmp_var_1 = this_.attr(get_persistent_prop(PersistentPropertyId{93}, get_str(674), get_str(671)), php::AttrMode::Get);
        tmp_var_2 = php::concat({get_str(681), tmp_var_1});
        tmp_var_1.unset();
        tmp_var_3 = php::newObject(tmp_var_0, php::VarList{tmp_var_2});
        tmp_var_2.unset();
        php::throwValue(php::takeValue(tmp_var_3));
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{85}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{85}) = php::fn::function_exists(get_str(682)) ? 1 : 2; }
    tmp_var_4 = get_function_resolution_cache(FunctionResolutionCacheId{85}) == 1 ? get_func(RequestFuncId{40}, get_str(682)) : get_persistent_func(PersistentFuncId{44}, get_str(683));
    dir = php::call(tmp_var_4, php::VarList{path});
    if (get_function_resolution_cache(FunctionResolutionCacheId{86}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{86}) = php::fn::function_exists(get_str(684)) ? 1 : 2; }
    tmp_var_5 = get_function_resolution_cache(FunctionResolutionCacheId{86}) == 1 ? get_func(RequestFuncId{41}, get_str(684)) : get_persistent_func(PersistentFuncId{45}, get_str(685));
    if (php::toBool(!(php::toBool(php::call(tmp_var_5, php::VarList{dir}))))) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{87}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{87}) = php::fn::function_exists(get_str(686)) ? 1 : 2; }
        tmp_var_6 = get_function_resolution_cache(FunctionResolutionCacheId{87}) == 1 ? get_func(RequestFuncId{42}, get_str(686)) : get_persistent_func(PersistentFuncId{46}, get_str(687));
        php::call(tmp_var_6, php::VarList{dir, 511L, true});
    }
    if (get_function_resolution_cache(FunctionResolutionCacheId{88}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{88}) = php::fn::function_exists(get_str(688)) ? 1 : 2; }
    tmp_var_7 = get_function_resolution_cache(FunctionResolutionCacheId{88}) == 1 ? get_func(RequestFuncId{43}, get_str(688)) : get_persistent_func(PersistentFuncId{47}, get_str(438));
    if (php::toBool(!(php::toBool(php::call(tmp_var_7, php::VarList{src, path}))))) {
        php::throwException(php::newObject(tmp_var_0, php::VarList{php::concat({get_str(689), path})}));
    }
}

php::Var php_nativeplaywright__download__createreadstream(php::Object &this_) {
    php::Var p;
    zend_function * tmp_var_0;
    php::Var tmp_var_1;

    p = php_nativeplaywright__download__path(this_);
    tmp_var_1 = ([&]() -> php::Var {
        if (php::toBool(php::same(p, php::null))) {
            return php::Var(php::null);
        } else {
            if (get_function_resolution_cache(FunctionResolutionCacheId{89}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{89}) = php::fn::function_exists(get_str(690)) ? 1 : 2; }
            tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{89}) == 1 ? get_func(RequestFuncId{44}, get_str(690)) : get_persistent_func(PersistentFuncId{48}, get_str(691));
            return php::Var(php::call(tmp_var_0, php::VarList{p, get_str(692)}));
        }
    }());
    return tmp_var_1;
}

void php_nativeplaywright__download__cancel(php::Object &this_) {
    php::Var tmp_var_0;
    php::Bool tmp_var_1 = 0;
    php::Var tmp_var_2;
    php::Object tmp_var_4;
    php::Var tmp_var_5;
    php::Var tmp_var_6;
    php::Var tmp_var_8;
    php::Var tmp_var_9;
    php::Var tmp_var_10;

    tmp_var_0 = this_.attr(get_persistent_prop(PersistentPropertyId{93}, get_str(674), get_str(671)), php::AttrMode::Get);
    tmp_var_1 = php::toBool(!(php::same(tmp_var_0, get_str(19))));
    tmp_var_0.unset();
    if (php::toBool(tmp_var_1)) {
        return;
    }
    tmp_var_2 = this_.attr(get_persistent_prop(PersistentPropertyId{95}, get_str(693), get_str(671)), php::AttrMode::Get);
    php::Object tmp_var_3 = tmp_var_2;
    tmp_var_4 = php_nativeplaywright__browsercontext__browser(tmp_var_3);
    tmp_var_2.unset();
    tmp_var_5 = this_.attr(get_persistent_prop(PersistentPropertyId{89}, get_str(672), get_str(671)), php::AttrMode::Get);
    tmp_var_6 = this_.attr(get_persistent_prop(PersistentPropertyId{95}, get_str(693), get_str(671)), php::AttrMode::Get);
    php::Object tmp_var_7 = tmp_var_6;
    tmp_var_8 = php_nativeplaywright__browsercontext__id(tmp_var_7);
    tmp_var_6.unset();
    tmp_var_10 = php::Array{
        { get_str(672).str(), php::Var(tmp_var_5) }, 
        { get_str(696).str(), php::Var((tmp_var_9 = tmp_var_8)) }
    };
    tmp_var_5.unset();
    tmp_var_8.unset();
    php_nativeplaywright__browser__send(tmp_var_4, get_str(695), tmp_var_10);
    tmp_var_4.unset();
    tmp_var_10.unset();
}

void php_nativeplaywright__download__delete(php::Object &this_) {
    php::Var p;
    zend_function * tmp_var_0;
    zend_function * tmp_var_1;

    p = php_nativeplaywright__download__path(this_);
    if (php::toBool([&]() -> bool {
        if (php::toBool(!(php::same(p, php::null)))) {
            if (get_function_resolution_cache(FunctionResolutionCacheId{90}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{90}) = php::fn::function_exists(get_str(697)) ? 1 : 2; }
            tmp_var_0 = get_function_resolution_cache(FunctionResolutionCacheId{90}) == 1 ? get_func(RequestFuncId{45}, get_str(697)) : get_persistent_func(PersistentFuncId{49}, get_str(698));
            return php::toBool(php::call(tmp_var_0, php::VarList{p}));
        }
        return false;
    }())) {
        if (get_function_resolution_cache(FunctionResolutionCacheId{91}) == 0) { get_function_resolution_cache(FunctionResolutionCacheId{91}) = php::fn::function_exists(get_str(699)) ? 1 : 2; }
        tmp_var_1 = get_function_resolution_cache(FunctionResolutionCacheId{91}) == 1 ? get_func(RequestFuncId{46}, get_str(699)) : get_persistent_func(PersistentFuncId{50}, get_str(700));
        php::call(tmp_var_1, php::VarList{p});
    }
}


ZEND_METHOD(NativePlaywright_Download, __construct) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(6, 6, false);
        php::Object arg_page = php::toObject(php::getCallArg(0), get_persistent_class(PersistentClassId{14}, get_str(475)));
        php::Object arg_context = php::toObject(php::getCallArg(1), get_persistent_class(PersistentClassId{27}, get_str(701)));
        php::Var raw_arg_guid = php::getCallArg(2);
        if (UNEXPECTED(!(raw_arg_guid.isString()))) {
            php::throwArgumentTypeError(raw_arg_guid, get_str(702), 3, get_str(672), get_str(98));
        }
        php::Str arg_guid = php::toString(raw_arg_guid);
        php::Var raw_arg_url = php::getCallArg(3);
        if (UNEXPECTED(!(raw_arg_url.isString()))) {
            php::throwArgumentTypeError(raw_arg_url, get_str(702), 4, get_str(203), get_str(98));
        }
        php::Str arg_url = php::toString(raw_arg_url);
        php::Var raw_arg_suggestedFilename = php::getCallArg(4);
        if (UNEXPECTED(!(raw_arg_suggestedFilename.isString()))) {
            php::throwArgumentTypeError(raw_arg_suggestedFilename, get_str(702), 5, get_str(673), get_str(98));
        }
        php::Str arg_suggestedFilename = php::toString(raw_arg_suggestedFilename);
        php::Var raw_arg_dir = php::getCallArg(5);
        if (UNEXPECTED(!(raw_arg_dir.isString()))) {
            php::throwArgumentTypeError(raw_arg_dir, get_str(702), 6, get_str(678), get_str(98));
        }
        php::Str arg_dir = php::toString(raw_arg_dir);
        php_nativeplaywright__download____construct(this_, php::takeValue(arg_page),php::takeValue(arg_context),php::takeValue(arg_guid),php::takeValue(arg_url),php::takeValue(arg_suggestedFilename),php::takeValue(arg_dir));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Download, guid) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__download__guid(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Download, url) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__download__url(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Download, suggestedFilename) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__download__suggestedfilename(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Download, page) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__download__page(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Download, waitDone) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__download__waitdone(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Download, path) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__download__path(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Download, failure) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__download__failure(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Download, saveAs) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(1, 1, false);
        php::Var raw_arg_path = php::getCallArg(0);
        if (UNEXPECTED(!(raw_arg_path.isString()))) {
            php::throwArgumentTypeError(raw_arg_path, get_str(703), 1, get_str(243), get_str(98));
        }
        php::Str arg_path = php::toString(raw_arg_path);
        php_nativeplaywright__download__saveas(this_, php::takeValue(arg_path));
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Download, createReadStream) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        auto retval = php_nativeplaywright__download__createreadstream(this_);
        php::move(retval, return_value);
        php::deref(return_value);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Download, cancel) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__download__cancel(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

ZEND_METHOD(NativePlaywright_Download, delete) {
    php::Object this_(&execute_data->This);
    PHPX_TRY {
        php::checkCallArgCount(0, 0, false);
        php_nativeplaywright__download__delete(this_);
    } PHPX_CATCH(zend_object *, typephp_wrapper_exception) {
        /* EG(exception) is already set; return control to ZendVM for frame cleanup. */
    }
}

