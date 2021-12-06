#ifndef KHAOS_UNIX_H
#define KHAOS_UNIX_H

#include "khaos/OS.h"
#include "khaos/VersionMacros.h"

/*! \file Unix.h
    \brief Define the values of the official POSIX,X/Open and LSB standards.

   Define macros that expand to the integer constant of type \b long whose
   value are the version of the POSIX,X/Open and LSB standards
*/

#define UNIX_STANDARD(standard) (KHAOS_UNIX_STANDARD_##standard == 1)

#if OS_IS(UNIX)
  #include <unistd.h>
  #if defined(_POSIX2_C_VERSION)
    #define KHAOS_UNIX_STANDARD_POSIX2 1
  #elif defined(_POSIX_VERSION)
    #if _POSIX_VERSION == 198808L
      #define KHAOS_UNIX_STANDARD_POSIX_1988 1
    #elif _POSIX_VERSION == 199009L
      #define KHAOS_UNIX_STANDARD_POSIX_1990 1
    #elif _POSIX_VERSION == 199309L
      #define KHAOS_UNIX_STANDARD_POSIX_1993 1
    #elif _POSIX_VERSION == 199506L
      #define KHAOS_UNIX_STANDARD_POSIX_1995 1
    #elif _POSIX_VERSION == 200112L
      #define KHAOS_UNIX_STANDARD_POSIX_2001 1
    #elif _POSIX_VERSION == 200809L
      #define KHAOS_UNIX_STANDARD_POSIX_2008 1
    #endif
  #endif
  #if defined(_XOPEN_VERSION)
    #if _XOPEN_VERSION == 3
      #define KHAOS_UNIX_STANDARD_XPG3 1
    #elif _XOPEN_VERSION == 4
      #define KHAOS_UNIX_STANDARD_XPG4 1
    #elif _XOPEN_VERSION == 4 && defined(_XOPEN_UNIX)
      #define KHAOS_UNIX_STANDARD_SUS 1
    #elif _XOPEN_VERSION == 500
      #define KHAOS_UNIX_STANDARD_SUSv2 1
    #elif _XOPEN_VERSION == 600
      #define KHAOS_UNIX_STANDARD_SUSv3 1
    #elif _XOPEN_VERSION == 700
      #define KHAOS_UNIX_STANDARD_SUSv4 1
    #endif
  #endif

  #if defined(__LSB_VERSION__)
    #define KHAOS_UNIX_STANDARD_LSB 1
    #define KHAOS_UNIX_LSB_VERSION  KHAOS_SET_VERSION((__LSB_VERSION__ / 10) % 10, __LSB_VERSION__ % 10, 0)
  #endif
#endif

#if !defined(KHAOS_UNIX_STANDARD_POSIX2)
  #define KHAOS_UNIX_STANDARD_POSIX2 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_POSIX_1988)
  #define KHAOS_UNIX_STANDARD_POSIX_1988 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_POSIX_1990)
  #define KHAOS_UNIX_STANDARD_POSIX_1990 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_POSIX_1993)
  #define KHAOS_UNIX_STANDARD_POSIX_1993 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_POSIX_1995)
  #define KHAOS_UNIX_STANDARD_POSIX_1995 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_POSIX_2001)
  #define KHAOS_UNIX_STANDARD_POSIX_2001 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_POSIX_2008)
  #define KHAOS_UNIX_STANDARD_POSIX_2008 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_XPG3)
  #define KHAOS_UNIX_STANDARD_XPG3 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_XPG4)
  #define KHAOS_UNIX_STANDARD_XPG4 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_SUS)
  #define KHAOS_UNIX_STANDARD_SUS 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_SUSv2)
  #define KHAOS_UNIX_STANDARD_SUSv2 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_SUSv3)
  #define KHAOS_UNIX_STANDARD_SUSv3 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_SUSv4)
  #define KHAOS_UNIX_STANDARD_SUSv4 0
#endif
#if !defined(KHAOS_UNIX_STANDARD_LSB)
  #define KHAOS_UNIX_STANDARD_LSB 0
#endif
#if !defined(KHAOS_UNIX_LSB_VERSION)
  #define KHAOS_UNIX_LSB_VERSION KHAOS_SET_VERSION(0, 0, 0)
#endif
#if !defined(KHAOS_UNIX_LSB_VERSION_TWEAK)
  #define KHAOS_UNIX_LSB_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(0)
#endif

#endif
