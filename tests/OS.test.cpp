#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "khaos/OS.h"

#include "doctest/doctest.h"

TEST_CASE("Testing the OS")
{
#if OS_IS(AIX)
  std::cout << "OS : AIX" << std::endl;
#endif
#if OS_IS(AIX4p3)
  std::cout << "OS : AIX4p3" << std::endl;
#endif
#if OS_IS(AIX4p1)
  std::cout << "OS : AIX4p1" << std::endl;
#endif
#if OS_IS(AIX3p2)
  std::cout << "OS : AIX3p2" << std::endl;
#endif
#if OS_IS(AIX3)
  std::cout << "OS : AIX3" << std::endl;
#endif
#if OS_IS(AmigaOS)
  std::cout << "OS : AmigaOS" << std::endl;
#endif
#if OS_IS(BEOS)
  std::cout << "OS : BEOS" << std::endl;
#endif
#if OS_IS(BSDi)
  std::cout << "OS : BSDi" << std::endl;
#endif
#if OS_IS(DragonFly)
  std::cout << "OS : DragonFly" << std::endl;
#endif
#if OS_IS(FreeBSD)
  std::cout << "OS : FreeBSD" << std::endl;
#endif
#if OS_IS(FreeBSD4p10)
  std::cout << "OS : FreeBSD4p10" << std::endl;
#endif
#if OS_IS(FreeBSD4p11)
  std::cout << "OS : FreeBSD4p11" << std::endl;
#endif
#if OS_IS(NetBSD)
  std::cout << "OS : NetBSD" << std::endl;
#endif
#if OS_IS(NetBSD0p8)
  std::cout << "OS : NetBSD0p8" << std::endl;
#endif
#if OS_IS(NetBSD0p9)
  std::cout << "OS : NetBSD0p9" << std::endl;
#endif
#if OS_IS(NetBSD1)
  std::cout << "OS : NetBSD1" << std::endl;
#endif
#if OS_IS(OpenBSD)
  std::cout << "OS : OpenBSD" << std::endl;
#endif
#if OS_IS(OpenBSD2_0)
  std::cout << "OS : OpenBSD2_0" << std::endl;
#endif
#if OS_IS(OpenBSD2_1)
  std::cout << "OS : OpenBSD2_1" << std::endl;
#endif
#if OS_IS(OpenBSD2_2)
  std::cout << "OS : OpenBSD2_2" << std::endl;
#endif
#if OS_IS(OpenBSD2_3)
  std::cout << "OS : OpenBSD2_3" << std::endl;
#endif
#if OS_IS(OpenBSD2_4)
  std::cout << "OS : OpenBSD2_4" << std::endl;
#endif
#if OS_IS(OpenBSD2_5)
  std::cout << "OS : OpenBSD2_5" << std::endl;
#endif
#if OS_IS(OpenBSD2_6)
  std::cout << "OS : OpenBSD2_6" << std::endl;
#endif
#if OS_IS(OpenBSD2_7)
  std::cout << "OS : OpenBSD2_7" << std::endl;
#endif
#if OS_IS(OpenBSD2_8)
  std::cout << "OS : OpenBSD2_8" << std::endl;
#endif
#if OS_IS(OpenBSD2_9)
  std::cout << "OS : OpenBSD2_9" << std::endl;
#endif
#if OS_IS(OpenBSD3_0)
  std::cout << "OS : OpenBSD3_0" << std::endl;
#endif
#if OS_IS(OpenBSD3_1)
  std::cout << "OS : OpenBSD3_1" << std::endl;
#endif
#if OS_IS(OpenBSD3_2)
  std::cout << "OS : OpenBSD3_2" << std::endl;
#endif
#if OS_IS(OpenBSD3_3)
  std::cout << "OS : OpenBSD3_3" << std::endl;
#endif
#if OS_IS(OpenBSD3_4)
  std::cout << "OS : OpenBSD3_4" << std::endl;
#endif
#if OS_IS(OpenBSD3_5)
  std::cout << "OS : OpenBSD3_5" << std::endl;
#endif
#if OS_IS(OpenBSD3_6)
  std::cout << "OS : OpenBSD3_6" << std::endl;
#endif
#if OS_IS(OpenBSD3_7)
  std::cout << "OS : OpenBSD3_7" << std::endl;
#endif
#if OS_IS(OpenBSD3_8)
  std::cout << "OS : OpenBSD3_8" << std::endl;
#endif
#if OS_IS(OpenBSD3_9)
  std::cout << "OS : OpenBSD3_9" << std::endl;
#endif
#if OS_IS(OpenBSD4_0)
  std::cout << "OS : OpenBSD4_0" << std::endl;
#endif
#if OS_IS(OpenBSD4_1)
  std::cout << "OS : OpenBSD4_1" << std::endl;
#endif
#if OS_IS(OpenBSD4_2)
  std::cout << "OS : OpenBSD4_2" << std::endl;
#endif
#if OS_IS(OpenBSD4_3)
  std::cout << "OS : OpenBSD4_3" << std::endl;
#endif
#if OS_IS(OpenBSD4_4)
  std::cout << "OS : OpenBSD4_4" << std::endl;
#endif
#if OS_IS(OpenBSD4_5)
  std::cout << "OS : OpenBSD4_5" << std::endl;
#endif
#if OS_IS(OpenBSD4_6)
  std::cout << "OS : OpenBSD4_6" << std::endl;
#endif
#if OS_IS(OpenBSD4_7)
  std::cout << "OS : OpenBSD4_7" << std::endl;
#endif
#if OS_IS(OpenBSD4_8)
  std::cout << "OS : OpenBSD4_8" << std::endl;
#endif
#if OS_IS(OpenBSD4_9)
  std::cout << "OS : OpenBSD4_9" << std::endl;
#endif
#if OS_IS(OpenBSD5_0)
  std::cout << "OS : OpenBSD5_0" << std::endl;
#endif
#if OS_IS(OpenBSD5_1)
  std::cout << "OS : OpenBSD5_1" << std::endl;
#endif
#if OS_IS(OpenBSD5_2)
  std::cout << "OS : OpenBSD5_2" << std::endl;
#endif
#if OS_IS(OpenBSD5_3)
  std::cout << "OS : OpenBSD5_3" << std::endl;
#endif
#if OS_IS(OpenBSD5_4)
  std::cout << "OS : OpenBSD5_4" << std::endl;
#endif
#if OS_IS(OpenBSD5_5)
  std::cout << "OS : OpenBSD5_5" << std::endl;
#endif
#if OS_IS(OpenBSD5_6)
  std::cout << "OS : OpenBSD5_6" << std::endl;
#endif
#if OS_IS(OpenBSD5_7)
  std::cout << "OS : OpenBSD5_7" << std::endl;
#endif
#if OS_IS(OpenBSD5_8)
  std::cout << "OS : OpenBSD5_8" << std::endl;
#endif
#if OS_IS(OpenBSD5_9)
  std::cout << "OS : OpenBSD5_9" << std::endl;
#endif
#if OS_IS(OpenBSD6_0)
  std::cout << "OS : OpenBSD6_0" << std::endl;
#endif
#if OS_IS(OpenBSD6_1)
  std::cout << "OS : OpenBSD6_1" << std::endl;
#endif
#if OS_IS(OpenBSD6_2)
  std::cout << "OS : OpenBSD6_2" << std::endl;
#endif
#if OS_IS(OpenBSD6_3)
  std::cout << "OS : OpenBSD6_3" << std::endl;
#endif
#if OS_IS(OpenBSD6_4)
  std::cout << "OS : OpenBSD6_4" << std::endl;
#endif
#if OS_IS(OpenBSD6_5)
  std::cout << "OS : OpenBSD6_5" << std::endl;
#endif
#if OS_IS(OpenBSD6_6)
  std::cout << "OS : OpenBSD6_6" << std::endl;
#endif
#if OS_IS(OpenBSD6_7)
  std::cout << "OS : OpenBSD6_7" << std::endl;
#endif
#if OS_IS(OpenBSD6_8)
  std::cout << "OS : OpenBSD6_8" << std::endl;
#endif
#if OS_IS(OpenBSD6_9)
  std::cout << "OS : OpenBSD6_9" << std::endl;
#endif
#if OS_IS(CYGWIN)
  std::cout << "OS : CYGWIN" << std::endl;
#endif
#if OS_IS(HAIKU)
  std::cout << "OS : HAIKU" << std::endl;
#endif
#if OS_IS(HPUX)
  std::cout << "OS : HPUX" << std::endl;
#endif
#if OS_IS(iOS)
  std::cout << "OS : iOS" << std::endl;
#endif
#if OS_IS(IRIX)
  std::cout << "OS : IRIX" << std::endl;
#endif
#if OS_IS(Linux)
  std::cout << "OS : Linux" << std::endl;
#endif
#if OS_IS(MacOS)
  std::cout << "OS : MacOS" << std::endl;
#endif
#if OS_IS(OS400)
  std::cout << "OS : OS400" << std::endl;
#endif
#if OS_IS(QNX)
  std::cout << "OS : QNX" << std::endl;
#endif
#if OS_IS(QNX4)
  std::cout << "OS : QNX4" << std::endl;
#endif
#if OS_IS(Solaris)
  std::cout << "OS : Solaris" << std::endl;
#endif
#if OS_IS(VMS)
  std::cout << "OS : VMS" << std::endl;
#endif
#if OS_IS(Windows)
  std::cout << "OS : Windows" << std::endl;
#endif
#if OS_IS(BSD)
  std::cout << "OS : BSD" << std::endl;
#endif
#if OS_IS(BSD4p4)
  std::cout << "OS : BSD4p4" << std::endl;
#endif
#if OS_IS(BSD4p3)
  std::cout << "OS : BSD4p3" << std::endl;
#endif
#if OS_IS(BSD4p2)
  std::cout << "OS : BSD4p2" << std::endl;
#endif
#if OS_IS(UNIX)
  std::cout << "OS : UNIX" << std::endl;
#endif
#if OS_IS(SVR4)
  std::cout << "OS : SVR4" << std::endl;
#endif
}
