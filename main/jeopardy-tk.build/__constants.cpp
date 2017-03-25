
#include "nuitka/prelude.hpp"

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *const_int_0;
PyObject *const_int_pos_1;
PyObject *const_str_empty;
PyObject *const_dict_empty;
PyObject *const_tuple_empty;
PyObject *const_str_plain_int;
PyObject *const_str_plain_len;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_long;
PyObject *const_str_plain_open;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_site;
PyObject *const_str_plain_type;
PyObject *const_str_plain_range;
PyObject *const_str_plain_xrange;
PyObject *const_str_plain___all__;
PyObject *const_str_plain___cmp__;
PyObject *const_str_plain___doc__;
PyObject *const_str_plain_compile;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain___dict__;
PyObject *const_str_plain___exit__;
PyObject *const_str_plain___file__;
PyObject *const_str_plain___iter__;
PyObject *const_str_plain___main__;
PyObject *const_str_plain___name__;
PyObject *const_str_plain___path__;
PyObject *const_str_plain_exc_type;
PyObject *const_str_plain___class__;
PyObject *const_str_plain___enter__;
PyObject *const_str_plain_exc_value;
PyObject *const_str_plain___import__;
PyObject *const_str_plain___module__;
PyObject *const_str_plain___delattr__;
PyObject *const_str_plain___getattr__;
PyObject *const_str_plain___setattr__;
PyObject *const_str_plain___builtins__;
PyObject *const_str_plain___metaclass__;
PyObject *const_str_plain_exc_traceback;
PyObject *const_str_digest_58961c73026e70b23b08cf381b49e04e;

#if defined(_WIN32) && defined(_NUITKA_EXE)
#include <Windows.h>
const unsigned char* constant_bin;
struct __initResourceConstants
{
    __initResourceConstants()
    {
        constant_bin = (const unsigned char*)LockResource(
            LoadResource(
                NULL,
                FindResource(NULL, MAKEINTRESOURCE(3), RT_RCDATA)
            )
        );
    }
} __initResourceConstants_static_initializer;
#else
extern "C" const unsigned char constant_bin[];
#endif

static void _createGlobalConstants( void )
{
    NUITKA_MAY_BE_UNUSED PyObject *exception_type, *exception_value;
    NUITKA_MAY_BE_UNUSED PyTracebackObject *exception_tb;

#ifdef _MSC_VER
    // Prevent unused warnings in case of simple programs, the attribute
    // NUITKA_MAY_BE_UNUSED doesn't work for MSVC.
    (void *)exception_type; (void *)exception_value; (void *)exception_tb;
#endif

    const_int_0 = PyInt_FromLong( 0l );
    const_int_pos_1 = PyInt_FromLong( 1l );
    const_str_empty = UNSTREAM_STRING( &constant_bin[ 0 ], 0, 0 );
    const_dict_empty = _PyDict_NewPresized( 0 );
    assert( PyDict_Size( const_dict_empty ) == 0 );
    const_tuple_empty = PyTuple_New( 0 );
    const_str_plain_int = UNSTREAM_STRING( &constant_bin[ 2061 ], 3, 1 );
    const_str_plain_len = UNSTREAM_STRING( &constant_bin[ 397 ], 3, 1 );
    const_str_plain_iter = UNSTREAM_STRING( &constant_bin[ 5527 ], 4, 1 );
    const_str_plain_long = UNSTREAM_STRING( &constant_bin[ 5531 ], 4, 1 );
    const_str_plain_open = UNSTREAM_STRING( &constant_bin[ 5535 ], 4, 1 );
    const_str_plain_repr = UNSTREAM_STRING( &constant_bin[ 5539 ], 4, 1 );
    const_str_plain_site = UNSTREAM_STRING( &constant_bin[ 5543 ], 4, 1 );
    const_str_plain_type = UNSTREAM_STRING( &constant_bin[ 2007 ], 4, 1 );
    const_str_plain_range = UNSTREAM_STRING( &constant_bin[ 5547 ], 5, 1 );
    const_str_plain_xrange = UNSTREAM_STRING( &constant_bin[ 5552 ], 6, 1 );
    const_str_plain___all__ = UNSTREAM_STRING( &constant_bin[ 5558 ], 7, 1 );
    const_str_plain___cmp__ = UNSTREAM_STRING( &constant_bin[ 5565 ], 7, 1 );
    const_str_plain___doc__ = UNSTREAM_STRING( &constant_bin[ 5572 ], 7, 1 );
    const_str_plain_compile = UNSTREAM_STRING( &constant_bin[ 5579 ], 7, 1 );
    const_str_plain_inspect = UNSTREAM_STRING( &constant_bin[ 5586 ], 7, 1 );
    const_str_plain___dict__ = UNSTREAM_STRING( &constant_bin[ 5593 ], 8, 1 );
    const_str_plain___exit__ = UNSTREAM_STRING( &constant_bin[ 5601 ], 8, 1 );
    const_str_plain___file__ = UNSTREAM_STRING( &constant_bin[ 5609 ], 8, 1 );
    const_str_plain___iter__ = UNSTREAM_STRING( &constant_bin[ 5617 ], 8, 1 );
    const_str_plain___main__ = UNSTREAM_STRING( &constant_bin[ 5625 ], 8, 1 );
    const_str_plain___name__ = UNSTREAM_STRING( &constant_bin[ 5633 ], 8, 1 );
    const_str_plain___path__ = UNSTREAM_STRING( &constant_bin[ 5641 ], 8, 1 );
    const_str_plain_exc_type = UNSTREAM_STRING( &constant_bin[ 5649 ], 8, 1 );
    const_str_plain___class__ = UNSTREAM_STRING( &constant_bin[ 5657 ], 9, 1 );
    const_str_plain___enter__ = UNSTREAM_STRING( &constant_bin[ 5666 ], 9, 1 );
    const_str_plain_exc_value = UNSTREAM_STRING( &constant_bin[ 5675 ], 9, 1 );
    const_str_plain___import__ = UNSTREAM_STRING( &constant_bin[ 5684 ], 10, 1 );
    const_str_plain___module__ = UNSTREAM_STRING( &constant_bin[ 5694 ], 10, 1 );
    const_str_plain___delattr__ = UNSTREAM_STRING( &constant_bin[ 5704 ], 11, 1 );
    const_str_plain___getattr__ = UNSTREAM_STRING( &constant_bin[ 5715 ], 11, 1 );
    const_str_plain___setattr__ = UNSTREAM_STRING( &constant_bin[ 5726 ], 11, 1 );
    const_str_plain___builtins__ = UNSTREAM_STRING( &constant_bin[ 5737 ], 12, 1 );
    const_str_plain___metaclass__ = UNSTREAM_STRING( &constant_bin[ 5749 ], 13, 1 );
    const_str_plain_exc_traceback = UNSTREAM_STRING( &constant_bin[ 5762 ], 13, 1 );
    const_str_digest_58961c73026e70b23b08cf381b49e04e = UNSTREAM_STRING( &constant_bin[ 5775 ], 15, 0 );

#if _NUITKA_EXE
    /* Set the "sys.executable" path to the original CPython executable. */
    PySys_SetObject(
        (char *)"executable",
        const_str_digest_58961c73026e70b23b08cf381b49e04e
    );
#endif
}

// In debug mode we can check that the constants were not tampered with in any
// given moment. We typically do it at program exit, but we can add extra calls
// for sanity.
#ifndef __NUITKA_NO_ASSERT__
void checkGlobalConstants( void )
{

}
#endif


void createGlobalConstants( void )
{
    if ( _sentinel_value == NULL )
    {
#if PYTHON_VERSION < 300
        _sentinel_value = PyCObject_FromVoidPtr( NULL, NULL );
#else
        // The NULL value is not allowed for a capsule, so use something else.
        _sentinel_value = PyCapsule_New( (void *)27, "sentinel", NULL );
#endif
        assert( _sentinel_value );

        _createGlobalConstants();
    }
}
