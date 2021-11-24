#ifndef KHAOS_LANGUAGES_H
#define KHAOS_LANGUAGES_H

/*! \file Languages.h
    \brief Detect the languages and define some useful macros.

*/

#if defined(__CUDA__) || defined(__CUDACC__)
  /*!
  * Both clang and nvcc define __CUDACC__ during CUDA compilation.
  *
  * When clang is actually compiling CUDA code – rather than being used as a subtool of NVCC’s – it defines the __CUDA__ macro.
  */
  #define KHAOS_LANGUAGE_cuda 1
  #if defined(__clang__) && defined(__CUDA__)
    #define KHAOS_LANGUAGE_clang_cuda 1
  #endif
#elif defined(__OBJC__)
  #if defined(__cplusplus)
    #define KHAOS_LANGUAGE_objcpp 1
  #else
    #define KHAOS_LANGUAGE_objc 1
  #endif
#elif defined(__ASSEMBLER__)
  #define KHAOS_LANGUAGE_assembler 1
#elif defined(__cplusplus)
  #define KHAOS_LANGUAGE_cpp 1
#else
  #define KHAOS_LANGUAGE_c 1
#endif

#define KHAOS_LANGUAGE_IS(language) (KHAOS_LANGUAGE_##language)

#endif
