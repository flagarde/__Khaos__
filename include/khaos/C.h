#ifndef KHAOS_C_H
#define KHAOS_C_H

/*! \file C.h
    \brief Detect the C standard and define some useful macros.
*/

#include "CStandards.h"

#if defined(__STDC__)
  #if defined(__STDC_VERSION__)
    #define KHAOS_C_STANDARD __STDC_VERSION__  //!< define KHAOS_C_STANDARD
  #else
    #define KHAOS_C_STANDARD KHAOS_STANDARD_C90  //!< define KHAOS_C_STANDARD
  #endif
#else
  /* For GCC this should never happen https://gcc.gnu.org/onlinedocs/cpp/Traditional-Mode.html#Traditional-Mode */
  #if defined(_MSC_VER)
    /*
    * The compiler uses C compilation mode by default when a source file has a .c extension, or when the /Tc or /TC option is specified.
    * The C compiler is an C89/C90 compiler that, by default, enables Microsoft extensions to the C language. For more information about specific extensions, see Microsoft Extensions to C and C++.
    * When both C compilation and the /Za option are specified, the C compiler conforms strictly to the C89/C90 standard.
    * The compiler treats Microsoft extended keywords as simple identifiers, disables the other Microsoft extensions, and automatically defines the __STDC__ predefined macro for C programs.
    */
    #define KHAOS_C_STANDARD KHAOS_STANDARD_C90
  #else
    #error "C is detected but __STDC__ is not defined !"
  #endif
#endif

#if defined(__STRICT_ANSI__) || !defined(_MSC_EXTENSIONS)
  #define KHAOS_LANGUAGE_ISO        1  //!< 1 if strict ISO, 0 otherwise
  #define KHAOS_LANGUAGE_Extensions 0  //!< 0 if strict ISO, 1 otherwise
#else
  #define KHAOS_LANGUAGE_ISO        0  //!< 1 if strict ISO, 0 otherwise
  #define KHAOS_LANGUAGE_Extensions 1  //!< 0 if strict ISO, 1 otherwise
#endif

#endif
