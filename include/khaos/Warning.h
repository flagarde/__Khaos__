#ifndef KHAOS_WARNING_H
#define KHAOS_WARNING_H

#include "khaos/Pragma.h"
#include "khaos/Compiler.h"

#if COMPILER_IS(MSVC)
  #define WARNING_PUSH           PRAGMA(warning( push ))
  #define WARNING_POP            PRAGMA(warning( pop ))
  #define DISABLE_WARNING(warningNumber) PRAGMA(warning( disable :  warningNumber))
#elif COMPILER_IS(ClangEmulated) || COMPILER_IS(LLVMEmulated)
  #define WARNING_PUSH           PRAGMA(clang diagnostic push)
  #define WARNING_POP            PRAGMA(clang diagnostic pop)
  #define DISABLE_WARNING(warningName)   PRAGMA(clang diagnostic ignored #warningName)
#elif COMPILER_IS(GCCEmulated)
  #define WARNING_PUSH           PRAGMA(GCC diagnostic push)
  #define WARNING_POP            PRAGMA(GCC diagnostic pop)
  #define DISABLE_WARNING(warningName)   PRAGMA(GCC diagnostic ignored #warningName)
#else
  #define WARNING_PUSH
  #define WARNING_POP
  #define DISABLE_WARNING(warningName)
#endif

#endif
