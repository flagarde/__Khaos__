#ifndef KHAOS_CXX_H
#define KHAOS_CXX_H

/*! \file CXX.h
    \brief Detect the C++ standard and define some useful macros.
    \warning CXX11 is always false for MSVC only c++14 and upper are considered
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
    #define KHAOS_CXX_STANDARD __cplusplus  //!< Define the CXX standard
  #endif
#else
  #define KHAOS_CXX_STANDARD __cplusplus    //!< Define the CXX standard
#endif

#if defined(__STRICT_ANSI__) || !defined(_MSC_EXTENSIONS)
  #define KHAOS_LANGUAGE_ISO        1  //!< 1 if strict ISO
  #define KHAOS_LANGUAGE_Extensions 0  //!< 1 if  not strict ISO
#else
  #define KHAOS_LANGUAGE_Extensions 1  //!< 1 if  not strict ISO
  #define KHAOS_LANGUAGE_ISO        0  //!< 1 if strict ISO
#endif

#if defined(__embedded_cplusplus)
  #define KHAOS_LANGUAGE_Embedded 1  //!< 1 if CPP Embedded
#endif

#endif
