#ifndef KHAOS_COMPILER_MACROS_H
#define KHAOS_COMPILER_MACROS_H

#include "khaos/VersionMacros.h"

/** \file CompilerMacros.h
 * Detect the compiler, convert the vendor version number to standardized one if available at compilation time and store it in `COMPILER_VERSION`.
 */

/**
 * \hideinitializer Detect the compiler.
 *
 * \param[in] compiler The compiler name.
 *
 * \note Use this macro only if you need preprocessor compiler checking.
 * For example :
 * \code{.cpp}
 * #if COMPILER_IS(gcc)
 * //...
 * #else
 * //...
 * #endif
 * \endcode
 *
 * Format of the version numbers :
 *
 * The base of the specified version number :
 * **0X** for hexadecimal digits, and **10** for decimal digits.
 *
 * The format of the vendor version number :
 * - **V** indicates the version digits.
 * - **R** indicates the revision digits.
 * - **P** indicates the patch digits.
 * - **T** indicates the tweak digits.
 * - **0** indicates an ignored digit.
 *
 * Detected compilers are :
 * ========================
 *
*/
#define COMPILER_IS(compiler)( KHAOS_COMPILER_##compiler == 1 )

#if defined(__ibmxl__) && defined(__clang__)
  //Should be include before clang as it defined some macro of Clang
  #define KHAOS_COMPILER_IBM 1
  #define KHAOS_COMPILER_IBMClang 1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(__ibmxl_version__,__ibmxl_release__,__ibmxl_modification__)
  #define KHAOS_COMPILER_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(__ibmxl_ptf_fix_level__)
#elif defined(__clang__)
  //Clang
  //Should be include before gcc as it defined some macro of GCC and MSVC
  //Note that marketing version numbers should not be used to check for language features, as different vendors use different numbering schemes. Instead, use the Feature Checking Macros.
  #if defined(__apple_build_version__)
    #define KHAOS_COMPILER_AppleClang 1
  #endif
  #define KHAOS_COMPILER_Clang 1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(__clang_major__,__clang_minor__,__clang_patchlevel__)
#elif defined(__GNUC__) || defined(__GNUG__)
  #define KHAOS_COMPILER_GCC 1
  #if defined(__GNUC_PATCHLEVEL__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(__GNUC__,__GNUC_MINOR__,__GNUC_PATCHLEVEL__)
  #else
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(__GNUC__,__GNUC_MINOR__,0)
  #endif
#elif defined(_MSC_VER)
  #define KHAOS_COMPILER_MSVC 1
  #if !defined (_MSC_BUILD)
    #define COMP_MSVC_BUILD 0
  #else
    #define COMP_MSVC_BUILD _MSC_BUILD
  #endif

  // how many digits does the build number have?
  #if _MSC_FULL_VER / 10000 == _MSC_VER
    // four digits
    #define COMP_MSVC_BUILD_PATCH (_MSC_FULL_VER % 10000)
  #elif _MSC_FULL_VER / 100000 == _MSC_VER
    // five digits
    #define COMP_MSVC_BUILD_PATCH (_MSC_FULL_VER % 100000)
  #endif
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((_MSC_VER/100)%1000,(_MSC_VER)%1000,COMP_MSVC_BUILD_PATCH)
  #define KHAOS_COMPILER_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(COMP_MSVC_BUILD)
#else

#endif

#if !defined(KHAOS_COMPILER_VERSION)
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(0,0,0)
#endif
#if !defined(KHAOS_COMPILER_VERSION_TWEAK)
  #define KHAOS_COMPILER_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(0)
#endif

#endif
