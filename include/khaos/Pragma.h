#ifndef KHAOS_PRAGMA_H
#define KHAOS_PRAGMA_H

#include "khaos/Compiler.h"

/*! \file Pragma.h
    \brief Cross-compiler pragma macro.
*/

#if COMPILER_IS(MSVC)
  #define PRAGMA(x) __pragma(#x)
#else
  #define PRAGMA(x) _Pragma(#x)
#endif

#endif
