#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "khaos/Library.h"

#include "doctest/doctest.h"

TEST_CASE("Testing the library")
{
#if C_LIBRARY_IS(Bionic)
  std::cout << "C library : Bionic, Version : " << KHAOS_LIBRARYC_VERSION << std::endl;
#endif
#if C_LIBRARY_IS(CloudABI)
  std::cout << "C library : CloudABI, Version : " << KHAOS_LIBRARYC_VERSION << std::endl;
#endif
#if C_LIBRARY_IS(GNU)
  std::cout << "C library : GNU, Version : " << KHAOS_LIBRARYC_VERSION << std::endl;
#endif
#if C_LIBRARY_IS(klibc)
  std::cout << "C library : klibc, Version : " << KHAOS_LIBRARYC_VERSION << std::endl;
#endif
#if C_LIBRARY_IS(uClibc)
  std::cout << "C library : uClibc, Version : " << KHAOS_LIBRARYC_VERSION << std::endl;
#endif
#if C_LIBRARY_IS(VMC)
  std::cout << "C library : VMC, Version : " << KHAOS_LIBRARYC_VERSION << std::endl;
#endif
#if C_LIBRARY_IS(ZOS)
  std::cout << "C library : ZOS, Version : " << KHAOS_LIBRARYC_VERSION << std::endl;
#endif

#if CXX_LIBRARY_IS(CXX)
  std::cout << "CXX library : CXX, Version : " << KHAOS_LIBRARYCXX_VERSION << std::endl;
#endif
#if CXX_LIBRARY_IS(Dinkumware)
  std::cout << "CXX library : Dinkumware, Version : " << KHAOS_LIBRARYCXX_VERSION << std::endl;
#endif
#if CXX_LIBRARY_IS(Comeau)
  std::cout << "CXX library : Comeau, Version : " << KHAOS_LIBRARYCXX_VERSION << std::endl;
#endif
#if CXX_LIBRARY_IS(Modena)
  std::cout << "CXX library : Modena, Version : " << KHAOS_LIBRARYCXX_VERSION << std::endl;
#endif
#if CXX_LIBRARY_IS(Metrowerks)
  std::cout << "CXX library : Metrowerks, Version : " << KHAOS_LIBRARYCXX_VERSION << std::endl;
#endif
#if CXX_LIBRARY_IS(Roguewave)
  std::cout << "CXX library : Roguewave, Version : " << KHAOS_LIBRARYCXX_VERSION << std::endl;
#endif
#if CXX_LIBRARY_IS(SGI)
  std::cout << "CXX library : SGI, Version : " << KHAOS_LIBRARYCXX_VERSION << std::endl;
#endif
#if CXX_LIBRARY_IS(GNU)
  std::cout << "CXX library : GNU, Version : " << KHAOS_LIBRARYCXX_VERSION << std::endl;
#endif
#if CXX_LIBRARY_IS(STLport)
  std::cout << "CXX library : STLport, Version : " << KHAOS_LIBRARYCXX_VERSION << std::endl;
#endif
#if CXX_LIBRARY_IS(IBM)
  std::cout << "CXX library : IBM, Version : " << KHAOS_LIBRARYCXX_VERSION << std::endl;
#endif
#if CXX_LIBRARY_IS(MFC)
  std::cout << "CXX library : MFC, Version : " << KHAOS_LIBRARYCXX_VERSION << std::endl;
#endif
}
