#ifndef KHAOS_LIBRARY_H
#define KHAOS_LIBRARY_H

#include "khaos/VersionMacros.h"

#if defined(__cplusplus)
  #include <cassert>
  #include <exception>
  #include <cstddef>
#else
  #include <stddef.h>
  #include <assert.h>
#endif

/*! \file Library.h
    \brief Detect the library and define some useful macros.
*/

/**
 * \hideinitializer Detect the C library.
 *
 * \param[in] library The library name.
 *
 * \note Use this macro only if you need preprocessor operating system checking.
 * For example :
 * \code{.cpp}
 * #if C_LIBRARY_IS(...)
 * //...
 * #else
 * //...
 * #endif
 * \endcode
 *
 * Values for library
 *
 * | Macro                   |
 * | :---------------------: |
 *
 **/
#define C_LIBRARY_IS(library) ( defined(KHAOS_LIBRARYC_##library) )

/**
 * \hideinitializer Detect the CXX library.
 *
 * \param[in] library The library name.
 *
 * \note Use this macro only if you need preprocessor operating system checking.
 * For example :
 * \code{.cpp}
 * #if CXX_LIBRARY_IS(...)
 * //...
 * #else
 * //...
 * #endif
 * \endcode
 *
 * Values for library
 *
 * | Macro                   |
 * | :---------------------: |
 *
 **/
#define CXX_LIBRARY_IS(library) ( defined(KHAOS_LIBRARYCXX_##library) )

#if defined(__CloudABI__)
  #if defined(__cloudlibc__)
    #define KHAOS_LIBRARYC_CloudABI 1
    #define KHAOS_LIBRARYC_VERSION KHAOS_SET_VERSION(__cloudlibc_major__,__cloudlibc_minor__,0)
  #endif
#elif defined(__GLIBC__) || defined(__GNU_LIBRARY__)
  #define KHAOS_LIBRARYC_GNU 1
  #if defined(__GLIBC__)
    #define KHAOS_LIBRARYC_VERSION KHAOS_SET_VERSION(__GLIBC__,__GLIBC_MINOR__,0)
  #else
    #define KHAOS_LIBRARYC_VERSION KHAOS_SET_VERSION(__GNU_LIBRARY__,__GNU_LIBRARY_MINOR__,0)
  #endif
#elif defined(__UCLIBC__)
  #define KHAOS_LIBRARYC_uClibc 1
  #define KHAOS_LIBRARYC_VERSION KHAOS_SET_VERSION(__UCLIBC_MAJOR__,__UCLIBC_MINOR__,__UCLIBC_SUBLEVEL__)
#elif defined(__CRTL_VER)
  #define KHAOS_LIBRARY_VMC 1
  #define KHAOS_LIBRARYC_VERSION KHAOS_SET_VERSION((__CRTL_VER/10000000)%100,(__CRTL_VER/100000)%100,(__CRTL_VER/100)%100)
#elif defined(__LIBREL__)
  #define KHAOS_LIBRARYC_ZOS 1
  #if defined(__LIBREL__)
    #define KHAOS_LIBRARYC_VERSION KHAOS_SET_VERSION((__LIBREL__/1000000)%10,(__LIBREL__/10000)%100,__LIBREL__%10000)
  #elif defined(__TARGET_LIB__)
    #define KHAOS_LIBRARYC_VERSION KHAOS_SET_VERSION((__TARGET_LIB__/1000000)%10,(__TARGET_LIB__/10000)%100,__TARGET_LIB__%10000)
  #endif
#endif

#if defined(_LIBCPP_VERSION)
  #define KHAOS_LIBRARYCXX_CXX 1
  #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION((_LIBCPP_VERSION/1000)%100,(_LIBCPP_VERSION)%1000,0)
#elif (defined(_YVALS) && !defined(__IBMCPP__)) || defined(_CPPLIB_VER)
  #define KHAOS_LIBRARYCXX_Dinkumware 1
  #if defined(_CPPLIB_VER)
    #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION((_CPPLIB_VER/100)%100,_CPPLIB_VER%100,0)
  #endif
#elif defined(__LIBCOMO__)
  #define KHAOS_LIBRARYCXX_Comeau 1
  #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION(__LIBCOMO_VERSION__,0,0)
#elif defined(MSIPL_COMPILE_H) || defined(__MSIPL_COMPILE_H)
  #define KHAOS_LIBRARYCXX_Modena 1
#elif defined(__MSL_CPP__) || defined(__MSL__)
  #define KHAOS_LIBRARYCXX_Metrowerks 1
  #if defined(__MSL_CPP__)
    #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION((__MSL_CPP__>>12)%10,(__MSL_CPP__>>8)%10,__MSL_CPP__%100)
  #else
    #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION((__MSL__>>12)%10,(__MSL__>>8)%10,__MSL__%100)
  #endif
#elif defined(__STD_RWCOMPILER_H__) || defined(_RWSTD_VER)
  #define KHAOS_LIBRARYCXX_Roguewave 1
  #if defined(_RWSTD_VER)
    #if _RWSTD_VER < 0x010000
      #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION((_RWSTD_VER>>12)%100,(_RWSTD_VER>>4)%100,_RWSTD_VER%10)
    #else
      #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION((_RWSTD_VER>>16)%100,(_RWSTD_VER>>8)%100,_RWSTD_VER%100)
    #endif
  #endif
#elif defined(__STL_CONFIG_H)
  #define KHAOS_LIBRARYCXX_SGI 1
  #if defined(__SGI_STL)
    #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION((__SGI_STL>>8)%10,(__SGI_STL>>4)%10,__SGI_STL%10)
  #endif
#elif defined(__GLIBCPP__) || defined(__GLIBCXX__)
  #define KHAOS_LIBRARYCXX_GNU 1
  #if defined(__GLIBCXX__)
    #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION((__GLIBCXX__/10000)%10000,(__GLIBCXX__/100)%100,__GLIBCXX__%100)
  #else
    #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION((__GLIBCPP__/10000)%10000,(__GLIBCPP__/100)%100,__GLIBCPP__%100)
  #endif
#elif defined(__SGI_STL_PORT) || defined(_STLPORT_VERSION)
  #define KHAOS_LIBRARYCXX_STLport 1
  #if defined(_STLPORT_MAJOR)
    #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION(_STLPORT_MAJOR,_STLPORT_MINOR,_STLPORT_PATCHLEVEL)
  #elif defined(_STLPORT_VERSION)
    #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION((_STLPORT_VERSION>>8)%10,(_STLPORT_VERSION>>4)%10,_STLPORT_VERSION%10)
  #else
    #define KHAOS_LIBRARYCXX_VERSION KHAOS_SET_VERSION((__SGI_STL_PORT>>8)%10,(__SGI_STL_PORT>>4)%10,__SGI_STL_PORT%10)
  #endif
#elif defined(__IBMCPP__)
  #define KHAOS_LIBRARYCXX_IBM 1
#endif

#endif
