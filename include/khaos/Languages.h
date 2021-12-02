#ifndef KHAOS_LANGUAGES_H
#define KHAOS_LANGUAGES_H

#include "khaos/VersionMacros.h"

/*! \file Languages.h
    \brief Detect the languages and define some useful macros.

*/

#if defined(__CUDA__) || defined(__CUDACC__)
  /*!
  * Both clang and nvcc define __CUDACC__ during CUDA compilation.
  *
  * When clang is actually compiling CUDA code – rather than being used as a subtool of NVCC’s – it defines the __CUDA__ macro.
  */
  #include <cuda.h>
  #define KHAOS_LANGUAGE_Cuda 1
  #if define(__CUDACC_VER_MAJOR__)
    #define KHAOS_CUDA_VERSION KHAOS_SET_VERSION(__CUDACC_VER_MAJOR__,__CUDACC_VER_MINOR__,__CUDACC_VER_BUILD__)
  #else
    #define KHAOS_CUDA_VERSION KHAOS_SET_VERSION(CUDA_VERSION/1000,CUDA_VERSION/10%100,0)
  #endif
  #if defined(__clang__) && defined(__CUDA__)
    #define KHAOS_LANGUAGE_Clang_Cuda 1
  #endif
#elif defined(__OBJC__)
  #if defined(__cplusplus)
    #define KHAOS_LANGUAGE_ObjCPP 1
  #else
    #define KHAOS_LANGUAGE_ObjC 1
  #endif
#elif defined(__ASSEMBLER__)
  #define KHAOS_LANGUAGE_Assembler 1
#elif defined(__GFORTRAN__)
  #define KHAOS_LANGUAGE_Fortran 1
#elif defined(__cplusplus)
  #define KHAOS_LANGUAGE_CXX 1
  #include "khaos/CXX.h"
#else
  #define KHAOS_LANGUAGE_C 1
  #include "khaos/C.h"
#endif

/** @hideinitializer
 * Check the language.
 * \param[in] language The language to test.
 *
 * Values :
 * | Macro      | (other value) |
 * | :--------: | :-----------: |
 * | Assembler  |               |
 * | C          |               |
 * | Clang_Cuda | Cuda          |
 * | Cuda       |               |
 * | CXX        |               |
 * | Fortran    |               |
 * | ObjC       |               |
 * | ObjCPP     |               |
 *
 * \note Can be directly used in both preprocessor and compiler expressions.
 *
 * \note If CUDA the version is defined in KHAOS_CUDA_VERSION
 */
#define LANGUAGE_IS(language) (KHAOS_LANGUAGE_##language)
#if LANGUAGE_IS(C)
  /** @hideinitializer
  * Check if the C, CXX standard is greater than \b standard.
  * \param[in] standard The language to test.
  *
  * Values for C
  * | Macro      |
  * | :--------: |
  * | C90        |
  * | C95        |
  * | C99        |
  * | C11        |
  * | C17        |
  *
  * Values for CXX
  * | Macro      |
  * | :--------: |
  * | CXX97      |
  * | CXX11      |
  * | CXX14      |
  * | CXX17      |
  * | CXX20      |
  *
  * \note Can be directly used in both preprocessor and compiler expressions.
  */
  #define LANGUAGE_IS_GREATER(standard)       (KHAOS_C_STANDARD > KHAOS_STANDARD_##standard)
  /** @hideinitializer
  * Check if the C, CXX standard is greater or equal than \b standard.
  * \param[in] standard The language to test.
  *
  * Values for C and CXX : see KHAOS_LANGUAGE_IS_GREATER
  *
  * \note Can be directly used in both preprocessor and compiler expressions.
  */
  #define LANGUAGE_IS_GREATER_EQUAL(standard) (KHAOS_C_STANDARD >= KHAOS_STANDARD_##standard)
  /** @hideinitializer
  * Check if the C, CXX standard is equal than \b standard.
  * \param[in] standard The language to test.
  *
  * Values for C and CXX : see KHAOS_LANGUAGE_IS_GREATER
  *
  * \note Can be directly used in both preprocessor and compiler expressions.
  */
  #define LANGUAGE_IS_EQUAL(standard)         (KHAOS_C_STANDARD == KHAOS_STANDARD_##standard)
  /** @hideinitializer
  * Check if the C, CXX standard is lower or equal than \b standard.
  * \param[in] standard The language to test.
  *
  * Values for C and CXX : see KHAOS_LANGUAGE_IS_GREATER
  *
  * \note Can be directly used in both preprocessor and compiler expressions.
  */
  #define LANGUAGE_IS_LOWER_EQUAL(standard)   (KHAOS_C_STANDARD <= KHAOS_STANDARD_##standard)
  /** @hideinitializer
  * Check if the C, CXX standard is lower than \b standard.
  * \param[in] standard The language to test.
  *
  * Values for C and CXX : see KHAOS_LANGUAGE_IS_GREATER
  *
  * \note Can be directly used in both preprocessor and compiler expressions.
  */
  #define KHAOS_LANGUAGE_IS_LOWER(standard)         (KHAOS_C_STANDARD < KHAOS_STANDARD_##standard)
#elif LANGUAGE_IS(CXX)
  #define LANGUAGE_IS_GREATER(standard)       (KHAOS_CXX_STANDARD > KHAOS_STANDARD_##standard)
  #define LANGUAGE_IS_GREATER_EQUAL(standard) (KHAOS_CXX_STANDARD >= KHAOS_STANDARD_##standard)
  #define LANGUAGE_IS_EQUAL(standard)         (KHAOS_CXX_STANDARD == KHAOS_STANDARD_##standard)
  #define LANGUAGE_IS_LOWER_EQUAL(standard)   (KHAOS_CXX_STANDARD <= KHAOS_STANDARD_##standard)
  #define LANGUAGE_IS_LOWER(standard)         (KHAOS_CXX_STANDARD < KHAOS_STANDARD_##standard)
#else
  #define LANGUAGE_IS_GREATER(standard)       (0L)
  #define LANGUAGE_IS_GREATER_EQUAL(standard) (0L)
  #define LANGUAGE_IS_EQUAL(standard)         (0L)
  #define LANGUAGE_IS_LOWER_EQUAL(standard)   (0L)
  #define LANGUAGE_IS_LOWER(standard)         (0L)
#endif

#endif
