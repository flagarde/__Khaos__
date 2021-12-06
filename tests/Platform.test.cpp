#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "khaos/Platform.h"

#include "doctest/doctest.h"

TEST_CASE("Testing the Platform")
{
#if PLATFORM_IS(Android)
  std::cout << "Platform : Android, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(CloudABI)
  std::cout << "Platform : CloudABI, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(iOSTarget)
  std::cout << "Platform : iOSTarget, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(iOSIphone)
  std::cout << "Platform : iOSIphone, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(iOSSimulator)
  std::cout << "Platform : iOSSimulator, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(MINGW)
  std::cout << "Platform : MINGW, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(MINGW32)
  std::cout << "Platform : MINGW32, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(MINGW64)
  std::cout << "Platform : MINGW64, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(UWP)
  std::cout << "Platform : UWP, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(WindowsDesktop)
  std::cout << "Platform : WindowsDesktop, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(WindowsPhone)
  std::cout << "Platform : WindowsPhone, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(WindowsServer)
  std::cout << "Platform : WindowsServer, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(WindowsStore)
  std::cout << "Platform : WindowsStore, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(WindowsSystem)
  std::cout << "Platform : WindowsSystem, Version : " << KHAOS_PLATFORM_VERSION << std::endl;
#endif
#if PLATFORM_IS(MINGWEmulated)
  std::cout << "Platform : MINGWEmulated, Version : " << KHAOS_MINGW_VERSION << std::endl;
#endif
#if PLATFORM_IS(MINGW32Emulated)
  std::cout << "Platform : MINGW32Emulated, Version : " << KHAOS_MINGW_VERSION << std::endl;
#endif
#if PLATFORM_IS(MINGW64Emulated)
  std::cout << "Platform : MINGW64Emulated, Version : " << KHAOS_MINGW_VERSION << std::endl;
#endif
}
