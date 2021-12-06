#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "khaos/Unix.h"

#include "doctest/doctest.h"

TEST_CASE("Testing Unix")
{
#if UNIX_STANDARD(POSIX2)
  std::cout<<"Unix Standard : POSIX2"<<std::endl;
#endif
#if UNIX_STANDARD(POSIX_1988)
  std::cout<<"Unix Standard : POSIX_1988"<<std::endl;
#endif
#if UNIX_STANDARD(POSIX_1990)
  std::cout<<"Unix Standard : POSIX_1990"<<std::endl;
#endif
#if UNIX_STANDARD(POSIX_1993)
  std::cout<<"Unix Standard : POSIX_1993"<<std::endl;
#endif
#if UNIX_STANDARD(POSIX_1995)
  std::cout<<"Unix Standard : POSIX_1995"<<std::endl;
#endif
#if UNIX_STANDARD(POSIX_2001)
  std::cout<<"Unix Standard : POSIX_2001"<<std::endl;
#endif
#if UNIX_STANDARD(POSIX_2008)
  std::cout<<"Unix Standard : POSIX_2008"<<std::endl;
#endif
#if UNIX_STANDARD(XPG3)
  std::cout<<"Unix Standard : XPG3"<<std::endl;
#endif
#if UNIX_STANDARD(XPG4)
  std::cout<<"Unix Standard : XPG4"<<std::endl;
#endif
#if UNIX_STANDARD(SUS)
  std::cout<<"Unix Standard : SUS"<<std::endl;
#endif
#if UNIX_STANDARD(SUSv2)
  std::cout<<"Unix Standard : SUSv2"<<std::endl;
#endif
#if UNIX_STANDARD(SUSv3)
  std::cout<<"Unix Standard : SUSv3"<<std::endl;
#endif
#if UNIX_STANDARD(SUSv4)
  std::cout<<"Unix Standard : SUSv4"<<std::endl;
#endif
#if UNIX_STANDARD(LSB)
  std::cout<<"Unix Standard : LSB, Version : "<<KHAOS_UNIX_LSB_VERSION<<std::endl;
#endif
}
