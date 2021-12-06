#ifndef KHAOS_PLATFORM_H
#define KHAOS_PLATFORM_H

#include "VersionMacros.h"

/*! \file Platform.h
    \brief Detect the platform.
*/

/**
 * \hideinitializer Detect the platform.
 *
 * \param[in] platform The platform name.
 *
 * \note Use this macro only if you need preprocessor platform checking.
 * For example :
 * \code{.cpp}
 * #if PLATFORM_IS(Android)
 * //...
 * #else
 * //...
 * #endif
 * \endcode
 *
 * Values for platform
 *
 *
 */

#include "khaos/OS.h"

#define PLATFORM_IS(platform) (KHAOS_PLATFORM_##platform == 1)

#if defined(__ANDROID__)
  #define KHAOS_PLATFORM_Android 1
#elif defined(__CloudABI__)
  #define KHAOS_PLATFORM_CloudABI 1
#elif OS_IS(iOS)
  #include <TargetConditionals.h>
  #if TARGET_OS_SIMULATOR == 1
    #define KHAOS_PLATFORM_iOSTarget 1
  #elif TARGET_IPHONE_SIMULATOR
    #define KHAOS_PLATFORM_iOSIphone 1
  #else
    #define KHAOS_PLATFORM_iOSSimulator 1
  #endif
#elif defined(__MINGW32__) || defined(__MINGW64__)
  #define KHAOS_PLATFORM_MINGW 1
  #if defined(__MINGW64__)
    #define KHAOS_PLATFORM_MINGW64 1
  #else
    #define KHAOS_PLATFORM_MINGW32 1
  #endif
  #include <_mingw.h>
  #if defined(__MINGW64_VERSION_MAJOR) && defined(__MINGW64_VERSION_MINOR)
    #define KHAOS_PLATFORM_VERSION KHAOS_SET_VERSION(__MINGW64_VERSION_MAJOR, __MINGW64_VERSION_MINOR, 0)
  #elif defined(__MINGW32_VERSION_MAJOR) && defined(__MINGW32_VERSION_MINOR)
    #define KHAOS_PLATFORM_VERSION KHAOS_SET_VERSION(__MINGW32_VERSION_MAJOR, __MINGW32_VERSION_MINOR, 0)
  #endif
#endif

#if OS_IS(Windows)
  //  MinGW (32-bit), WinCE, and wineg++ don't have a ntverp.h header
  #if !defined(__MINGW32__) && !defined(_WIN32_WCE) && !defined(__WINE__)
    #include <ntverp.h>
  #endif

  // 9200 is Windows SDK 8.0 from ntverp.h which introduced family support
  #if(VER_PRODUCTBUILD >= 9200) || (defined(__MINGW64__) && __MINGW64_VERSION_MAJOR >= 3)
    #include <winapifamily.h>  // Windows SDK
    #define KHAOS_PLATFORM_UWP 1
  #endif

  #if((defined(WINAPI_FAMILY_DESKTOP_APP) && WINAPI_FAMILY == WINAPI_FAMILY_DESKTOP_APP) || !KHAOS_PLATFORM_UWP)
    #define KHAOS_PLATFORM_WindowsDesktop 1
  #endif

  #if defined(WINAPI_FAMILY_PHONE_APP) && WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP
    #define KHAOS_PLATFORM_WindowsPhone 1
  #endif

  #if defined(WINAPI_FAMILY_SERVER) && WINAPI_FAMILY == WINAPI_FAMILY_SERVER
    #define KHAOS_PLATFORM_WindowsServer 1
  #endif

  #if((defined(WINAPI_FAMILY_PC_APP) && WINAPI_FAMILY == WINAPI_FAMILY_PC_APP) || (defined(WINAPI_FAMILY_APP) && WINAPI_FAMILY == WINAPI_FAMILY_APP))
    #define KHAOS_PLATFORM_WindowsStore 1
  #endif

  #if defined(WINAPI_FAMILY_SYSTEM) && WINAPI_FAMILY == WINAPI_FAMILY_SYSTEM
    #define KHAOS_PLATFORM_WindowsSystem 1
  #endif
#endif

#if !defined(KHAOS_PLATFORM_Android)
 #define KHAOS_PLATFORM_Android 0
#endif
#if !defined(KHAOS_PLATFORM_CloudABI)
#define KHAOS_PLATFORM_CloudABI 0
#endif
#if !defined(KHAOS_PLATFORM_iOSTarget)
#define KHAOS_PLATFORM_iOSTarget 0
#endif
#if !defined(KHAOS_PLATFORM_iOSIphone)
#define KHAOS_PLATFORM_iOSIphone 0
#endif
#if !defined(KHAOS_PLATFORM_iOSSimulator)
#define KHAOS_PLATFORM_iOSSimulator 0
#endif
#if !defined(KHAOS_PLATFORM_MINGW)
#define KHAOS_PLATFORM_MINGW 0
#endif
#if !defined(KHAOS_PLATFORM_MINGW32)
#define KHAOS_PLATFORM_MINGW32 0
#endif
#if !defined(KHAOS_PLATFORM_MINGW64)
#define KHAOS_PLATFORM_MINGW64 0
#endif
#if !defined(KHAOS_PLATFORM_UWP)
#define KHAOS_PLATFORM_UWP 0
#endif
#if !defined(KHAOS_PLATFORM_WindowsDesktop)
#define KHAOS_PLATFORM_WindowsDesktop 0
#endif
#if !defined(KHAOS_PLATFORM_WindowsPhone)
#define KHAOS_PLATFORM_WindowsPhone 0
#endif
#if !defined(KHAOS_PLATFORM_WindowsServer)
#define KHAOS_PLATFORM_WindowsServer 0
#endif
#if !defined(KHAOS_PLATFORM_WindowsStore)
#define KHAOS_PLATFORM_WindowsStore 0
#endif
#if !defined(KHAOS_PLATFORM_WindowsSystem)
#define KHAOS_PLATFORM_WindowsSystem 0
#endif
#if !defined(KHAOS_PLATFORM_MINGWEmulated)
#define KHAOS_PLATFORM_MINGWEmulated 0
#endif
#if !defined(KHAOS_PLATFORM_MINGW32Emulated)
#define KHAOS_PLATFORM_MINGW32Emulated 0
#endif
#if !defined(KHAOS_PLATFORM_MINGW64Emulated)
#define KHAOS_PLATFORM_MINGW64Emulated 0
#endif

#if !defined(KHAOS_PLATFORM_VERSION)
  #define KHAOS_PLATFORM_VERSION KHAOS_SET_VERSION(0, 0, 0)
#endif
#if !defined(KHAOS_PLATFORM_VERSION_TWEAK)
  #define KHAOS_PLATFORM_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(0)
#endif

#if !defined(KHAOS_MINGW_VERSION)
#define KHAOS_MINGW_VERSION KHAOS_SET_VERSION(0, 0, 0)
#endif
#if !defined(KHAOS_MINGW_VERSION_TWEAK)
#define KHAOS_MINGW_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(0)
#endif

/* Special case for MINGW */
#if !PLATFORM_IS(MINGW) && (defined(__MINGW32__) || defined(__MINGW64__))
#define KHAOS_PLATFORM_MINGWEmulated 1
  #if defined(__MINGW32__)
    #define KHAOS_PLATFORM_MINGW32Emulated 1
  #else
    #define KHAOS_PLATFORM_MINGW64Emulated 1
  #endif
  #include <_mingw.h>
  #if defined(__MINGW64_VERSION_MAJOR) && defined(__MINGW64_VERSION_MINOR)
    #define KHAOS_MINGW_VERSION KHAOS_SET_VERSION(__MINGW64_VERSION_MAJOR, __MINGW64_VERSION_MINOR, 0)
  #elif defined(__MINGW32_VERSION_MAJOR) && defined(__MINGW32_VERSION_MINOR)
    #define KHAOS_MINGW_VERSION KHAOS_SET_VERSION(__MINGW32_VERSION_MAJOR, __MINGW32_VERSION_MINOR, 0)
  #endif
#endif

#endif
