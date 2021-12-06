#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "khaos/Architecture.h"

#include "doctest/doctest.h"

TEST_CASE("Testing the Architecture")
{
#if ARCHITECTURE_IS(Alpha)
  std::cout<<"Architecture : Alpha, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(AlphaEV4)
  std::cout<<"Architecture : AlphaEV4, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(AlphaEV5)
  std::cout<<"Architecture : AlphaEV5, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(AlphaEV6)
  std::cout<<"Architecture : AlphaEV6, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(ARM)
  std::cout<<"Architecture : ARM, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(ARM7)
  std::cout<<"Architecture : ARM7, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(ARM6)
  std::cout<<"Architecture : ARM6, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(ARM5)
  std::cout<<"Architecture : ARM5, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(ARM4)
  std::cout<<"Architecture : ARM4, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(ARM8)
  std::cout<<"Architecture : ARM8, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(aarch64)
  std::cout<<"Architecture : aarch64, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(Blackfin)
  std::cout<<"Architecture : Blackfin, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(Convex)
  std::cout<<"Architecture : Convex, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(Convex1)
  std::cout<<"Architecture : Convex1, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(Convex2)
  std::cout<<"Architecture : Convex2, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(Convex3_2)
  std::cout<<"Architecture : Convex3_2, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(Convex3_4)
  std::cout<<"Architecture : Convex3_4, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(Convex3_8)
  std::cout<<"Architecture : Convex3_8, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(E2K)
  std::cout<<"Architecture : E2K, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(IA64)
  std::cout<<"Architecture : IA64, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(m68k)
  std::cout<<"Architecture : m68k, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(m68k6)
  std::cout<<"Architecture : m68k6, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(m68k4)
  std::cout<<"Architecture : m68k4, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(m68k3)
  std::cout<<"Architecture : m68k3, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(m68k2)
  std::cout<<"Architecture : m68k2, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(m68k1)
  std::cout<<"Architecture : m68k1, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(m68k0)
  std::cout<<"Architecture : m68k0, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(MIPS)
  std::cout<<"Architecture : MIPS, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(MIPS1)
  std::cout<<"Architecture : MIPS1, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(MIPS2)
  std::cout<<"Architecture : MIPS2, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(MIPS3)
  std::cout<<"Architecture : MIPS3, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(MIPS4)
  std::cout<<"Architecture : MIPS4, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(PARISC)
  std::cout<<"Architecture : PARISC, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(PARISC1)
  std::cout<<"Architecture : PARISC1, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(PARISC1_1)
  std::cout<<"Architecture : PARISC1_1, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(PARISC2)
  std::cout<<"Architecture : PARISC2, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(PowerPC)
  std::cout<<"Architecture : PowerPC, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(PowerPC6_1)
  std::cout<<"Architecture : PowerPC6_1, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(PowerPC6_3)
  std::cout<<"Architecture : PowerPC6_3, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(PowerPC6_4)
  std::cout<<"Architecture : PowerPC6_4, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(ptx)
  std::cout<<"Architecture : ptx, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(Pyramid)
  std::cout<<"Architecture : Pyramid, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(RISCV)
  std::cout<<"Architecture : RISCV, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(RS6000)
  std::cout<<"Architecture : RS6000, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(SPARC)
  std::cout<<"Architecture : SPARC, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(SPARC9)
  std::cout<<"Architecture : SPARC9, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(SPARC8)
  std::cout<<"Architecture : SPARC8, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(sh)
  std::cout<<"Architecture : sh, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(sh5)
  std::cout<<"Architecture : sh5, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(sh4)
  std::cout<<"Architecture : sh4, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(sh3)
  std::cout<<"Architecture : sh3, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(sh2)
  std::cout<<"Architecture : sh2, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(sh1)
  std::cout<<"Architecture : sh1, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(SYS370)
  std::cout<<"Architecture : SYS370, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(SYS390)
  std::cout<<"Architecture : SYS390, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(z)
  std::cout<<"Architecture : z, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(X86_32)
  std::cout<<"Architecture : X86_32, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(i686)
  std::cout<<"Architecture : i686, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(i586)
  std::cout<<"Architecture : i586, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(i486)
  std::cout<<"Architecture : i486, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(i386)
  std::cout<<"Architecture : i386, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(x86_64)
  std::cout<<"Architecture : x86_64, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
#if ARCHITECTURE_IS(Epiphany)
  std::cout<<"Architecture : Epiphany, Version : "<<KHAOS_ARCH_VERSION<<std::endl;
#endif
}
