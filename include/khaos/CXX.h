#ifndef KHAOS_CXX_H
#define KHAOS_CXX_H

/*! \file CPP.h
    \brief Detect the C++ standard and define some useful macros.
*/

#include "CXXStandards.h"

#if defined(_MSC_VER)
  /*!
   * https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/
   *
   * Starting from Visual Studio 2017 version 15.7 the option /Zc:__cplusplus.
   *
   * Try to warn the user to do this !
   *
   */
  #if defined(_MSVC_LANG)
    #define KHAOS_CXX_STANDARD _MSVC_LANG
    #if __cplusplus != _MSVC_LANG
      #if _MSC_VER >= 1914
        #pragma message("[Khaos] : MSVC doesn't set the correct value for __cplusplus (cf. https:////devblogs.microsoft.com//cppblog//msvc-now-correctly-reports-__cplusplus//) !")
        #pragma message("[Khaos] : Use /Zc:__cplusplus option to activate it !")
      #else
        #pragma message("[Khaos] : MSVC doesn't set the correct value for __cplusplus (cf. https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/) !")
      #endif
    #endif
  #else
    #define KHAOS_CXX_STANDARD __cplusplus
  #endif
#else
  #define KHAOS_CXX_STANDARD __cplusplus
#endif

#if defined(__STRICT_ANSI__)
  #define KHAOS_LANGUAGE_ISO        1  //!< 1 if strict ISO, 0 otherwise
  #define KHAOS_LANGUAGE_Extensions 0  //!< 0 if strict ISO, 1 otherwise
#else
  #define KHAOS_LANGUAGE_ISO        0  //!< 1 if strict ISO, 0 otherwise
  #define KHAOS_LANGUAGE_Extensions 1  //!< 0 if strict ISO, 1 otherwise
#endif

#endif
