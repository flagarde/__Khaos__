#ifndef KHAOS_PRAGMA_H
#define KHAOS_PRAGMA_H

#include "khaos/Compiler.h"
#include "khaos/Languages.h"

/*! \file Pragma.h
    \brief Cross-compiler pragma macro.
*/

#if LANGUAGE_IS_GREATER(C99) || \
    COMPILER_IS(ClangEmulates) || \
    COMPILER_IS_GREATER_EQUAL(GCCEmulated,3,0,0) || \
    COMPILER_IS_GREATER_EQUAL(Intel,13,0,0) || \
    COMPILER_IS_GREATER_EQUAL(IAR,8,0,0) || \
    COMPILER_IS_GREATER_EQUAL(Portland,18,4,0) || \
    COMPILER_IS_GREATER_EQUAL(ARM,4,1,0) || \
    COMPILER_IS_GREATER_EQUAL(TI,15,12,0) || \
    HEDLEY_TI_ARMCL_VERSION_CHECK(4,7,0) || \
    HEDLEY_TI_CL430_VERSION_CHECK(2,0,1) || \
    HEDLEY_TI_CL2000_VERSION_CHECK(6,1,0) || \
    HEDLEY_TI_CL6X_VERSION_CHECK(7,0,0) || \
    HEDLEY_TI_CL7X_VERSION_CHECK(1,2,0) || \
    HEDLEY_TI_CLPRU_VERSION_CHECK(2,1,0) || \
    COMPILER_IS_GREATER_EQUAL(CrayC,5,0,0) || \
    COMPILER_IS_GREATER_EQUAL(Tiny,0,9,17) || \
    COMPILER_IS_GREATER_EQUAL(Solaris,8,0,0) || \
    (COMPILER_IS_GREATER_EQUAL(IBM,10,1,0) && defined(__C99_PRAGMA_OPERATOR))
  #define PRAGMA(x) _Pragma(#x)
#if COMPILER_IS(MSVC)
  #define PRAGMA(x) __pragma(#x)
#else
  #define PRAGMA(x) _Pragma(#x)
#endif

#endif
