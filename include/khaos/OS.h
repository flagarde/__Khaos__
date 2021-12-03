#ifndef KHAOS_OS_H
#define KHAOS_OS_H

#include "VersionMacros.h"

/*! \file OS.h
    \brief Detect the OS.
*/

/**
 * \hideinitializer Detect the operating system.
 *
 * \param[in] os The os name.
 *
 * \note Use this macro only if you need preprocessor operating system checking.
 * For example :
 * \code{.cpp}
 * #if OS_IS(Linux)
 * //...
 * #else
 * //...
 * #endif
 * \endcode
 *
 * Values for os
 *
 * | Macro                   |
 * | :---------------------: |
 * | AIX                     |
 * | AIX4p3                  |
 * | AIX4p1                  |
 * | AIX3p2                  |
 * | AIX3                    |
 * | AmigaOS                 |
 * | BEOS                    |
 * | BSD                     |
 * | BSD4p4                  |
 * | BSD4p3                  |
 * | BSD4p2                  |
 * | BSDi                    |
 * | DragonFly               |
 * | FreeBSD                 |
 * | FreeBSD4p10             |
 * | FreeBSD4p11             |
 * | NetBSD                  |
 * | NetBSD0p8               |
 * | NetBSD0p9               |
 * | NetBSD1                 |
 * | OpenBSD                 |
 * | OpenBSD2 to  OpenBSD6p9 |
 * | CYGWIN                  |
 * | HAIKU                   |
 * | HPUX                    |
 * | iOS                     |
 * | IRIX                    |
 * | Linux                   |
 * | MacOS                   |
 * | OS400                   |
 * | QNX                     |
 * | QNX4                    |
 * | Solaris                 |
 * | SVR4                    |
 * | UNIX                    |
 * | VMS                     |
 * | Windows                 |
 *
 **/

#define OS_IS(os) (KHAOS_OS_##os==1)

#if defined(_AIX) || defined(__TOS_AIX__)
  #define KHAOS_OS_AIX 1
  #if defined(_AIX43)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,3,0)
    #define KHAOS_OS_AIX4p3 1
  #elif defined(_AIX41)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,1,0)
    #define KHAOS_OS_AIX4p1 1
  #elif defined(_AIX32)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(3,2,0)
    #define KHAOS_OS_AIX3p2 1
  #elif defined(_AIX3)
    #define KHAOS_OS_AIX3 1
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(3,0,0)
  #endif
#elif defined(AMIGA) || defined(__amigaos__)
  #define KHAOS_OS_AmigaOS 1
#elif defined(__BEOS__)
  #define KHAOS_OS_BEOS 1
#elif defined(__bsdi__)
  #define KHAOS_OS_BSDi 1
#elif defined(__DragonFly__)
  #define KHAOS_OS_DragonFly 1
#elif defined(__FreeBSD__)
  #define KHAOS_OS_FreeBSD 1
  #include <sys/param.h>
  #if defined(__FreeBSD_version)
    #if __FreeBSD_version == 491000
      #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,10,0)
      #define KHAOS_OS_FreeBSD4p10 1
    #elif __FreeBSD_version == 492000
      #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,11,0)
      #define KHAOS_OS_FreeBSD4p11 1
    #elif __FreeBSD_version < 500000
      #define KHAOS_OS_VERSION KHAOS_SET_VERSION((__FreeBSD_version/100000)%10,(__FreeBSD_version/10000)%10,__FreeBSD_version%10000)
    #else
      #define KHAOS_OS_VERSION KHAOS_SET_VERSION((__FreeBSD_version/100000)%100,(__FreeBSD_version/1000)%100,__FreeBSD_version%1000)
    #endif
  #endif
#elif defined(__NETBSD__) || defined(__NetBSD__)
  #define KHAOS_OS_NetBSD 1
  #if defined(__NETBSD__)
    #if defined(__NETBSD_version)
      #if __NETBSD_version < 500000
        #define KHAOS_OS_VERSION KHAOS_SET_VERSION((__NETBSD_version/100000)%10,(__NETBSD_version/10000)%10,(__NETBSD_version/1000)%10)
      #else
        #define KHAOS_OS_VERSION KHAOS_SET_VERSION((__NETBSD_version/100000)%10,(__NETBSD_version/100)%100,0)
      #endif
    #elif defined(__NetBSD__)
      #if defined(NetBSD0_8)
        #define KHAOS_OS_VERSION KHAOS_SET_VERSION(0,8,0)
        #define KHAOS_OS_NetBSD0p8 1
      #elif defined(NetBSD0_9)
        #define KHAOS_OS_VERSION KHAOS_SET_VERSION(0,9,0)
        #define KHAOS_OS_NetBSD0p9 1
      #elif defined(NetBSD1_0)
        #define KHAOS_OS_VERSION KHAOS_SET_VERSION(1,0,0)
        #define KHAOS_OS_NetBSD1 1
      #elif defined(__NetBSD_Version)
        #define KHAOS_OS_VERSION KHAOS_SET_VERSION((__NetBSD_Version/100000000)%100,(__NetBSD_Version/1000000)%100,(__NetBSD_Version/100)%100)
      #endif
    #endif
  #endif
#elif defined(__OpenBSD__)
  #define KHAOS_OS_OpenBSD 1
  #if defined(OpenBSD2_0)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(2,0,0)
  #elif defined(OpenBSD2_1)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(2,1,0)
  #elif defined(OpenBSD2_2)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(2,2,0)
  #elif defined(OpenBSD2_3)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(2,3,0)
  #elif defined(OpenBSD2_4)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(2,4,0)
  #elif defined(OpenBSD2_5)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(2,5,0)
  #elif defined(OpenBSD2_6)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(2,6,0)
  #elif defined(OpenBSD2_7)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(2,7,0)
  #elif defined(OpenBSD2_8)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(2,8,0)
  #elif defined(OpenBSD2_9)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(2,9,0)
  #elif defined(OpenBSD3_0)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(3,0,0)
  #elif defined(OpenBSD3_1)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(3,1,0)
  #elif defined(OpenBSD3_2)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(3,2,0)
  #elif defined(OpenBSD3_3)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(3,3,0)
  #elif defined(OpenBSD3_4)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(3,4,0)
  #elif defined(OpenBSD3_5)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(3,5,0)
  #elif defined(OpenBSD3_6)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(3,6,0)
  #elif defined(OpenBSD3_7)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(3,7,0)
  #elif defined(OpenBSD3_8)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(3,8,0)
  #elif defined(OpenBSD3_9)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(3,9,0)
  #elif defined(OpenBSD4_0)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,0,0)
  #elif defined(OpenBSD4_1)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,1,0)
  #elif defined(OpenBSD4_2)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,2,0)
  #elif defined(OpenBSD4_3)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,3,0)
  #elif defined(OpenBSD4_4)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,4,0)
  #elif defined(OpenBSD4_5)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,5,0)
  #elif defined(OpenBSD4_6)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,6,0)
  #elif defined(OpenBSD4_7)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,7,0)
  #elif defined(OpenBSD4_8)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,8,0)
  #elif defined(OpenBSD4_9)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,9,0)
  #elif defined(OpenBSD5_0)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(5,0,0)
  #elif defined(OpenBSD5_1)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(5,1,0)
  #elif defined(OpenBSD5_2)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(5,2,0)
  #elif defined(OpenBSD5_3)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(5,3,0)
  #elif defined(OpenBSD5_4)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(5,4,0)
  #elif defined(OpenBSD5_5)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(5,5,0)
  #elif defined(OpenBSD5_6)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(5,6,0)
  #elif defined(OpenBSD5_7)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(5,7,0)
  #elif defined(OpenBSD5_8)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(5,8,0)
  #elif defined(OpenBSD5_9)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(5,9,0)
  #elif defined(OpenBSD6_0)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(6,0,0)
  #elif defined(OpenBSD6_1)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(6,1,0)
  #elif defined(OpenBSD6_2)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(6,2,0)
  #elif defined(OpenBSD6_3)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(6,3,0)
  #elif defined(OpenBSD6_4)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(6,4,0)
  #elif defined(OpenBSD6_5)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(6,5,0)
  #elif defined(OpenBSD6_6)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(6,6,0)
  #elif defined(OpenBSD6_7)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(6,7,0)
  #elif defined(OpenBSD6_8)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(6,8,0)
  #elif defined(OpenBSD6_9)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(6,9,0)
  #endif
#elif defined(__CYGWIN__)
  #include <cygwin/version.h>
  #define KHAOS_OS_CYGWIN 1
  #define KHAOS_OS_VERSION KHAOS_SET_VERSION(CYGWIN_VERSION_API_MAJOR,CYGWIN_VERSION_API_MINOR,0)
#elif defined(__HAIKU__)
  #define KHAOS_OS_HAIKU 1
#elif defined(hpux) || defined(_hpux) || defined(__hpux)
  #define KHAOS_OS_HPUX 1
#elif defined(__APPLE__) && defined(__MACH__) && defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__)
  #define KHAOS_OS_iOS 1
  #define KHAOS_OS_VERSION KHAOS_SET_VERSION(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__*1000,0,0)
#elif defined(sgi) || defined(__sgi)
  #define KHAOS_OS_IRIX 1
#elif defined(linux) || defined(__linux) || defined(__linux__) || defined(__gnu_linux__)
  #define KHAOS_OS_Linux 1
#elif defined(macintosh) || defined(Macintosh) || (defined(__APPLE__) && defined(__MACH__))
  #define KHAOS_OS_MacOS 1
  #if defined(__APPLE__) && defined(__MACH__)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(10,0,0)
  #else
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(9,0,0)
  #endif
#elif defined(__OS400__)
  #define KHAOS_OS_OS400 1
#elif defined(__QNX__) || defined(__QNXNTO__)
  #define KHAOS_OS_QNX 1
  #if defined(_NTO_VERSION)
     #define KHAOS_OS_VERSION KHAOS_SET_VERSION((_NTO_VERSION/100)%100,_NTO_VERSION%100,0)
  #elif defined(__QNX__)
     #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,0,0)
     #define KHAOS_OS_QNX4 1
  #endif
#elif defined(sun) || defined(__sun)
  #define KHAOS_OS_Solaris 1
#elif defined(VMS) || defined(__VMS)
  #define KHAOS_OS_VMS 1
  #if defined(__VMS_VER)
     #define KHAOS_OS_VERSION KHAOS_SET_VERSION((__VMS_VER/100000000)%100,(__VMS_VER/1000000)%100,(__VMS_VER/100)%100)
  #endif
#elif defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
  #define KHAOS_OS_Windows 1
#endif

/* Special case for BSD */
#if defined(BSD) || defined(_SYSTYPE_BSD)
  #include <sys/param.h>
  #define KHAOS_OS_BSD 1
  #if defined(BSD4_4)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,4,0)
    #define KHAOS_OS_BSD4p4 1
  #elif defined(BSD4_3)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,3,0)
    #define KHAOS_OS_BSD4p3 1
  #elif defined(BSD4_2)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION(4,2,0)
    #define KHAOS_OS_BSD4p2 1
  #elif defined(BSD)
    #define KHAOS_OS_VERSION KHAOS_SET_VERSION((BSD/100)%100,BSD%100,0)
  #endif
#endif

/* Special case UNIX */
#if defined(unix) || defined(__unix) || defined(_XOPEN_SOURCE) || defined(_POSIX_SOURCE)
  #define KHAOS_OS_UNIX 1
#endif

/* Special case SVR4 */
#if defined(__sysv__) || defined(__SVR4) || defined(__svr4__) || defined(_SYSTYPE_SVR4)
  #define KHAOS_OS_SVR4 1
#endif

#if !defined(KHAOS_OS_VERSION)
  #define KHAOS_OS_VERSION KHAOS_SET_VERSION(0,0,0)
#endif

#endif
