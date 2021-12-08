#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "khaos/Compiler.h"

#include "doctest/doctest.h"

#include <iostream>

TEST_CASE("Testing the Compiler")
{
//Set to 0 to avoid warning
#if COMPILER_IS(ACC)
  std::cout << "Compiler : ACC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(AltiumMicroblaze)
  std::cout << "Compiler : AltiumMicroblaze, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Altium)
  std::cout << "Compiler : Altium, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Amsterdam)
  std::cout << "Compiler : Amsterdam, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(ARM)
  std::cout << "Compiler : ARM, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Aztec)
  std::cout << "Compiler : Aztec, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Borland)
  std::cout << "Compiler : Borland, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(CC65)
  std::cout << "Compiler : CC65, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Comeau)
  std::cout << "Compiler : Comeau, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Compaq)
  std::cout << "Compiler : Compaq, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Convex)
  std::cout << "Compiler : Convex, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Compcert)
  std::cout << "Compiler : Compcert, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Coverity)
  std::cout << "Compiler : Coverity, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(CrayC)
  std::cout << "Compiler : CrayC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Diab)
  std::cout << "Compiler : Diab, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(DICE)
  std::cout << "Compiler : DICE, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(DigitalMars)
  std::cout << "Compiler : DigitalMars, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Dignus)
  std::cout << "Compiler : Dignus, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(DJGPP)
  std::cout << "Compiler : DJGPP, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(EDG)
  std::cout << "Compiler : EDG, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(EKOPath)
  std::cout << "Compiler : EKOPath, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Emscripten)
  std::cout << "Compiler : Emscripten, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Fujitsu)
  std::cout << "Compiler : Fujitsu, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(GCCXML)
  std::cout << "Compiler : GCCXML, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(GreenHills)
  std::cout << "Compiler : GreenHills, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(HPCC)
  std::cout << "Compiler : HPCC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(HPaCC)
  std::cout << "Compiler : HPaCC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(IAR)
  std::cout << "Compiler : IAR, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(IBM)
  std::cout << "Compiler : IBM, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(IBMClang)
  std::cout << "Compiler : IBMClang, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(IBMLegacy)
  std::cout << "Compiler : IBMLegacy, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(ImageCraft)
  std::cout << "Compiler : ImageCraft, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Intel)
  std::cout << "Compiler : Intel, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Kai)
  std::cout << "Compiler : Kai, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(KeilCarm)
  std::cout << "Compiler : KeilCarm, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(KeilC166)
  std::cout << "Compiler : KeilC166, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(KeilC51)
  std::cout << "Compiler : KeilC51, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(LCC)
  std::cout << "Compiler : LCC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Metaware)
  std::cout << "Compiler : Metaware, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Metrowerks)
  std::cout << "Compiler : Metrowerks, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(MSVC)
  std::cout << "Compiler : MSVC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Microtec)
  std::cout << "Compiler : Microtec, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Microway)
  std::cout << "Compiler : Microway, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(MIPSpro)
  std::cout << "Compiler : MIPSpro, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Miracle)
  std::cout << "Compiler : Miracle, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(MPW)
  std::cout << "Compiler : MPW, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Norcroft)
  std::cout << "Compiler : Norcroft, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(NWCC)
  std::cout << "Compiler : NWCC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Open64)
  std::cout << "Compiler : Open64, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Oracle)
  std::cout << "Compiler : Oracle, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Solaris)
  std::cout << "Compiler : Solaris, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Pacific)
  std::cout << "Compiler : Pacific, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Palm)
  std::cout << "Compiler : Palm, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Pelles)
  std::cout << "Compiler : Pelles, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Portland)
  std::cout << "Compiler : Portland, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Renesas)
  std::cout << "Compiler : Renesas, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(SASC)
  std::cout << "Compiler : SASC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(SCO)
  std::cout << "Compiler : SCO, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(SDCC)
  std::cout << "Compiler : SDCC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(SNC)
  std::cout << "Compiler : SNC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Stratus)
  std::cout << "Compiler : Stratus, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(StratusKR)
  std::cout << "Compiler : StratusKR, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(StratusANSI)
  std::cout << "Compiler : StratusANSI, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Symantec)
  std::cout << "Compiler : Symantec, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Tendra)
  std::cout << "Compiler : Tendra, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(TI)
  std::cout << "Compiler : TI, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Think)
  std::cout << "Compiler : Think, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Tiny)
  std::cout << "Compiler : Tiny, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Turbo)
  std::cout << "Compiler : Turbo, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Ultimate)
  std::cout << "Compiler : Ultimate, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(USLC)
  std::cout << "Compiler : USLC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(VBCC)
  std::cout << "Compiler : VBCC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Watcom)
  std::cout << "Compiler : Watcom, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Zortech)
  std::cout << "Compiler : Zortech, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(AppleClang)
  std::cout << "Compiler : AppleClang, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Clang)
  std::cout << "Compiler : Clang, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(LLVM)
  std::cout << "Compiler : LLVM, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(GCC)
  std::cout << "Compiler : GCC, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(Unknown)
  std::cout << "Compiler : Unknown, Version : " << KHAOS_COMPILER_VERSION << std::endl;
#endif
#if COMPILER_IS(ClangEmulated)
  std::cout << "Compiler : ClangEmulated, Version : " << KHAOS_CLANG_EMULATED_VERSION << std::endl;
#endif
#if COMPILER_IS(GCCEmulated)
  std::cout << "Compiler : GCCEmulated, Version : " << KHAOS_GCC_EMULATED_VERSION << std::endl;
#endif
#if COMPILER_IS(LLVMEmulated)
  std::cout << "Compiler : LLVMEmulated, Version : " << KHAOS_COMPILER_LLVMEmulated << std::endl;
#endif
#if COMPILER_IS(NVCC)
  std::cout << "Compiler : NVCC, Version : " << KHAOS_NVCC_VERSION << std::endl;
#endif
}
