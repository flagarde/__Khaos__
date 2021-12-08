#ifndef KHAOS_FEATURES_H
#define KHAOS_FEATURES_H

#include "khaos/Compiler.h"
#include "khaos/Language.h"

#ifndef __has_include
  #define __has_include(x) 0
#endif

/** Implement  __has_feature like Clang **/
#ifndef __has_feature
  #define __has_feature_def(x) __has_feature__##x
  #define __has_feature(x)     __has_feature_def(x)
#endif

#if __has_include(<version>)
  #include <version>
#else
  #define __has_cpp_attribute(x) (__has_cpp_attribute_##x)
  /* [[carries_dependency]] */
  #if COMPILER_IS_GREATER_EQUAL(ClangEmulated, 3, 3, 0) && LANGUAGE_IS_GREATER_EQUAL(CXX11)
    #define __has_cpp_attribute_carries_dependency 200809L
  #endif
  #if COMPILER_IS_GREATER_EQUAL(GCCEmulated, 3, 3, 0) && LANGUAGE_IS_GREATER_EQUAL(CXX11)
    #define __has_cpp_attribute_carries_dependency 0L
  #endif
  #if COMPILER_IS_GREATER_EQUAL(MSVC, 0, 0, 1)
    #define __has_cpp_attribute_carries_dependency 200809L
  #endif
  #if !defined(__has_cpp_attribute_carries_dependency)
    #define __has_cpp_attribute_carries_dependency 0
  #endif
#endif

#endif
