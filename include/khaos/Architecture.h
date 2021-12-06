#ifndef KHAOS_ARCHITECTURE_H
#define KHAOS_ARCHITECTURE_H

#include "VersionMacros.h"

/*! \file Architecture.h
    \brief Detect the architecture.
*/

/**
 * \hideinitializer Detect the architecture.
 *
 * \param[in] architecture The architecture name.
 *
 * \note Use this macro only if you need preprocessor architecture checking.
 * For example :
 * \code{.cpp}
 * #if ARCHITECTURE_IS(ARM)
 * //...
 * #else
 * //...
 * #endif
 * \endcode
 *
 * Values for architecture
 *
 * | Macro      |
 * | :--------: |
 * | Alpha      |
 * | AlphaEV4   |
 * | AlphaEV5   |
 * | AlphaEV6   |
 * | ARM        |
 * | ARM8       |
 * | ARM7       |
 * | ARM6       |
 * | ARM5       |
 * | ARM4       |
 * | aarch64    |
 * | Blackfin   |
 * | Convex     |
 * | Convex1    |
 * | Convex2    |
 * | Convex3p2  |
 * | Convex3p4  |
 * | Convex3p8  |
 * | E2K        |
 * | IA64       |
 * | m68k       |
 * | m68k6      |
 * | m68k4      |
 * | m68k3      |
 * | m68k2      |
 * | m68k1      |
 * | m68k0      |
 * | MIPS       |
 * | MIPS1      |
 * | MIPS2      |
 * | MIPS3      |
 * | MIPS4      |
 * | PARISC     |
 * | PARISC1    |
 * | PARISC1p1  |
 * | PARISC2    |
 * | PowerPC    |
 * | PowerPC6p1 |
 * | PowerPC6p3 |
 * | PowerPC6p4 |
 * | ptx        |
 * | Pyramid    |
 * | RISCV      |
 * | RS6000     |
 * | SPARC      |
 * | SPARC9     |
 * | SPARC8     |
 * | sh         |
 * | sh5        |
 * | sh4        |
 * | sh3        |
 * | sh2        |
 * | sh1        |
 * | SYS370     |
 * | SYS390     |
 * | z          |
 * | X86_32     |
 * | i686       |
 * | i586       |
 * | i486       |
 * | i386       |
 * | x86_64     |
 * | Epiphany   |
 */

#define ARCHITECTURE_IS(architecture) (KHAOS_ARCH_##architecture >= 1)

#if defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
  #define KHAOS_ARCH_Alpha 1
  #if defined(__alpha_ev4__)
    #define KHAOS_ARCH_AlphaEV4 1
    #define KHAOS_ARCH_VERSION  KHAOS_SET_VERSION(4, 0, 0)
  #elif defined(__alpha_ev5__)
    #define KHAOS_ARCH_AlphaEV5 1
    #define KHAOS_ARCH_VERSION  KHAOS_SET_VERSION(5, 0, 0)
  #elif defined(__alpha_ev6__)
    #define KHAOS_ARCH_AlphaEV6 1
    #define KHAOS_ARCH_VERSION  KHAOS_SET_VERSION(6, 0, 0)
  #endif
#elif defined(__ARM_ARCH) || defined(__TARGET_ARCH_ARM) || defined(__TARGET_ARCH_THUMB) || defined(_M_ARM) || defined(__arm__) || defined(__thumb__) || defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) \
  || defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_6K__) || defined(__ARM_ARCH_6Z__) || defined(__ARM_ARCH_6KZ__) || defined(__ARM_ARCH_6T2__) || defined(__ARM_ARCH_5TE__) || defined(__ARM_ARCH_5TEJ__) || defined(__ARM_ARCH_4T__)  \
  || defined(__ARM_ARCH_4__)
  #define KHAOS_ARCH_ARM 1
  #if defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) || defined(__ARM_ARCH_7M__)
    #define KHAOS_ARCH_ARM7    1
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(7, 0, 0)
  #elif defined(__ARM_ARCH_6K__) || defined(__ARM_ARCH_6Z__) || defined(__ARM_ARCH_6KZ__) || defined(__ARM_ARCH_6T2__)
    #define KHAOS_ARCH_ARM6    1
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(6, 0, 0)
  #elif defined(__ARM_ARCH_5TE__) || defined(__ARM_ARCH_5TEJ__)
    #define KHAOS_ARCH_ARM5    1
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(5, 0, 0)
  #elif defined(__ARM_ARCH_4T__) || defined(__ARM_ARCH_4__)
    #define KHAOS_ARCH_ARM4    1
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(4, 0, 0)
  #elif defined(__ARM_ARCH)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(__ARM_ARCH, 0, 0)
  #elif defined(__TARGET_ARCH_ARM)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(__TARGET_ARCH_ARM, 0, 0)
  #elif defined(__TARGET_ARCH_THUMB)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(__TARGET_ARCH_THUMB, 0, 0)
  #elif defined(_M_ARM)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(_M_ARM, 0, 0)
  #endif
#elif defined(__arm64) || defined(_M_ARM64) || defined(__aarch64__) || defined(__AARCH64EL__)
  #define KHAOS_ARCH_ARM8    1
  #define KHAOS_ARCH_aarch64 1
  #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(8, 0, 0)
#elif defined(__bfin__) || defined(__BFIN__) || defined(bfin) || defined(BFIN)
  #define KHAOS_ARCH_Blackfin 1
#elif defined(__convex__)
  #define KHAOS_ARCH_Convex 1
  #if defined(__convex_c1__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(1, 0, 0)
    #define KHAOS_ARCH_Convex1 1
  #elif defined(__convex_c2__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(2, 0, 0)
    #define KHAOS_ARCH_Convex2 1
  #elif defined(__convex_c32__)
    #define KHAOS_ARCH_VERSION   KHAOS_SET_VERSION(3, 2, 0)
    #define KHAOS_ARCH_Convex3_2 1
  #elif defined(__convex_c34__)
    #define KHAOS_ARCH_VERSION   KHAOS_SET_VERSION(3, 4, 0)
    #define KHAOS_ARCH_Convex3_4 1
  #elif defined(__convex_c38__)
    #define KHAOS_ARCH_VERSION   KHAOS_SET_VERSION(3, 8, 0)
    #define KHAOS_ARCH_Convex3_8 1
  #endif
#elif defined(__e2k__)
  #define KHAOS_ARCH_E2K 1
  #if defined(__iset__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(__iset__, 0, 0)
  #endif
#elif defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(__ia64) || defined(_M_IA64) || defined(__itanium__)
  #define KHAOS_ARCH_IA64 1
#elif defined(__m68k__) || defined(M68000) || defined(__MC68K__)
  #define KHAOS_ARCH_m68k 1
  #if defined(__mc68060__) || defined(mc68060) || defined(__mc68060)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(6, 0, 0)
    #define KHAOS_ARCH_m68k6   1
  #elif defined(__mc68040__) || defined(mc68040) || defined(__mc68040)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(4, 0, 0)
    #define KHAOS_ARCH_m68k4   1
  #elif defined(__mc68030__) || defined(mc68030) || defined(__mc68030)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(3, 0, 0)
    #define KHAOS_ARCH_m68k3   1
  #elif defined(__mc68020__) || defined(mc68020) || defined(__mc68020)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(2, 0, 0)
    #define KHAOS_ARCH_m68k2   1
  #elif defined(__mc68010__) || defined(mc68010) || defined(__mc68010)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(1, 0, 0)
    #define KHAOS_ARCH_m68k1   1
  #elif defined(__mc68000__) || defined(mc68000) || defined(__mc68000)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(0, 0, 0)
    #define KHAOS_ARCH_m68k0   1
  #endif
#elif defined(__mips__) || defined(__mips) || defined(__MIPS__) || defined(mips)
  #define KHAOS_ARCH_MIPS 1
  #if defined(_MIPS_ISA_MIPS1) || defined(_R3000)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(1, 0, 0)
    #define KHAOS_ARCH_MIPS1   1
  #elif defined(_MIPS_ISA_MIPS2) || defined(__MIPS_ISA2__) || defined(_R4000)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(2, 0, 0)
    #define KHAOS_ARCH_MIPS2   1
  #elif defined(_MIPS_ISA_MIPS3) || defined(__MIPS_ISA3__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(3, 0, 0)
    #define KHAOS_ARCH_MIPS3   1
  #elif defined(_MIPS_ISA_MIPS4) || defined(__MIPS_ISA4__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(4, 0, 0)
    #define KHAOS_ARCH_MIPS4   1
  #elif defined(__mips)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(__mips, 0, 0)
  #endif
#elif defined(__hppa__) || defined(__hppa) || defined(__HPPA__)
  #define KHAOS_ARCH_PARISC 1
  #if defined(_PA_RISC1_0)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(1, 0, 0)
    #define KHAOS_ARCH_PARISC1 1
  #elif defined(_PA_RISC1_1) || defined(__HPPA11__) || defined(__PA7100__)
    #define KHAOS_ARCH_VERSION   KHAOS_SET_VERSION(1, 1, 0)
    #define KHAOS_ARCH_PARISC1_1 1
  #elif defined(_PA_RISC2_0) || defined(__RISC2_0__) || defined(__HPPA20__) || defined(__PA8000__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(2, 0, 0)
    #define KHAOS_ARCH_PARISC2 1
  #endif
#elif defined(__powerpc) || defined(__powerpc__) || defined(__powerpc64__) || defined(__POWERPC__) || defined(__ppc__) || defined(__ppc64__) || defined(__PPC__) || defined(__PPC64__) || defined(_M_PPC) || defined(_ARCH_PPC) || defined(_ARCH_PPC64) \
  || defined(__PPCGECKO__) || defined(__PPCBROADWAY__) || defined(_XENON) || defined(__ppc)
  #define KHAOS_ARCH_PowerPC 1
  #if defined(__ppc601__) || defined(_ARCH_601) || defined(_ARCH_601)
    #define KHAOS_ARCH_VERSION    KHAOS_SET_VERSION(6, 1, 0)
    #define KHAOS_ARCH_PowerPC6_1 1
  #elif defined(__ppc603__) || defined(_ARCH_603) || defined(_ARCH_603)
    #define KHAOS_ARCH_VERSION    KHAOS_SET_VERSION(6, 3, 0)
    #define KHAOS_ARCH_PowerPC6_3 1
  #elif defined(__ppc604__) || defined(__ppc604__) || defined(_ARCH_604)
    #define KHAOS_ARCH_VERSION    KHAOS_SET_VERSION(6, 4, 0)
    #define KHAOS_ARCH_PowerPC6_4 1
  #endif
#elif defined(__CUDA_ARCH__)
  #define KHAOS_ARCH_ptx     1
  #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(__CUDA_ARCH__ / 100, __CUDA_ARCH__ / 10, 0)
#elif defined(pyr)
  #define KHAOS_ARCH_Pyramid 1
#elif defined(__riscv)
  #define KHAOS_ARCH_RISCV 1
#elif defined(__THW_RS6000) || defined(_IBMR2) || defined(_POWER) || defined(_ARCH_PWR) || defined(_ARCH_PWR2)
  #define KHAOS_ARCH_RS6000 1
#elif defined(__sparc__) || defined(__sparc)
  #define KHAOS_ARCH_SPARC 1
  #if defined(__sparcv9) || defined(__sparc_v9__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(9, 0, 0)
    #define KHAOS_ARCH_SPARC9  1
  #elif defined(__sparcv8) || defined(__sparc_v8__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(8, 0, 0)
    #define KHAOS_ARCH_SPARC8  1
  #endif
#elif defined(__sh__)
  #define KHAOS_ARCH_sh 1
  #if defined(__SH5__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(5, 0, 0)
    #define KHAOS_ARCH_sh5     1
  #elif defined(__SH4__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(4, 0, 0)
    #define KHAOS_ARCH_sh4     1
  #elif defined(__sh3__) || defined(__SH3__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(3, 0, 0)
    #define KHAOS_ARCH_sh3     1
  #elif defined(__sh2__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(2, 0, 0)
    #define KHAOS_ARCH_sh2     1
  #elif defined(__sh1__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(1, 0, 0)
    #define KHAOS_ARCH_sh1     1
  #endif
#elif defined(__370__) || defined(__THW_370__)
  #define KHAOS_ARCH_SYS370 1
#elif defined(__s390__) || defined(__s390x__)
  #define KHAOS_ARCH_SYS390 1
#elif defined(__SYSC_ZARCH__)
  #define KHAOS_ARCH_z 1
#elif defined(i386) || defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__) || defined(__i386) || defined(_M_IX86) || defined(_X86_) || defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__)
  #define KHAOS_ARCH_X86_32 1
  #if defined(__i686__)
    #define KHAOS_ARCH_i686    1
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(6, 0, 0)
  #elif defined(__i586__)
    #define KHAOS_ARCH_i586    1
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(5, 0, 0)
  #elif defined(__i486__)
    #define KHAOS_ARCH_i486    1
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(4, 0, 0)
  #elif defined(__i386__)
    #define KHAOS_ARCH_i386    1
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(3, 0, 0)
  #elif defined(__I86__)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(__I86__, 0, 0)
  #elif defined(_M_IX86)
    #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(_M_IX86 / 100, 0, 0)
  #endif
#elif defined(__x86_64) || defined(__x86_64__) || defined(__amd64__) || defined(__amd64) || defined(_M_X64)
  #define KHAOS_ARCH_x86_64 1
#elif defined(__epiphany__)
  #define KHAOS_ARCH_Epiphany 1
#endif

#if !defined(KHAOS_ARCH_Alpha)
  #define KHAOS_ARCH_Alpha 0
#endif
#if !defined(KHAOS_ARCH_AlphaEV4)
  #define KHAOS_ARCH_AlphaEV4 0
#endif
#if !defined(KHAOS_ARCH_AlphaEV5)
  #define KHAOS_ARCH_AlphaEV5 0
#endif
#if !defined(KHAOS_ARCH_AlphaEV6)
  #define KHAOS_ARCH_AlphaEV6 0
#endif
#if !defined(KHAOS_ARCH_ARM)
  #define KHAOS_ARCH_ARM 0
#endif
#if !defined(KHAOS_ARCH_ARM7)
  #define KHAOS_ARCH_ARM7 0
#endif
#if !defined(KHAOS_ARCH_ARM6)
  #define KHAOS_ARCH_ARM6 0
#endif
#if !defined(KHAOS_ARCH_ARM5)
  #define KHAOS_ARCH_ARM5 0
#endif
#if !defined(KHAOS_ARCH_ARM4)
  #define KHAOS_ARCH_ARM4 0
#endif
#if !defined(KHAOS_ARCH_ARM8)
  #define KHAOS_ARCH_ARM8 0
#endif
#if !defined(KHAOS_ARCH_aarch64)
  #define KHAOS_ARCH_aarch64 0
#endif
#if !defined(KHAOS_ARCH_Blackfin)
  #define KHAOS_ARCH_Blackfin 0
#endif
#if !defined(KHAOS_ARCH_Convex)
  #define KHAOS_ARCH_Convex 0
#endif
#if !defined(KHAOS_ARCH_Convex1)
  #define KHAOS_ARCH_Convex1 0
#endif
#if !defined(KHAOS_ARCH_Convex2)
  #define KHAOS_ARCH_Convex2 0
#endif
#if !defined(KHAOS_ARCH_Convex3_2)
  #define KHAOS_ARCH_Convex3_2 0
#endif
#if !defined(KHAOS_ARCH_Convex3_4)
  #define KHAOS_ARCH_Convex3_4 0
#endif
#if !defined(KHAOS_ARCH_Convex3_8)
  #define KHAOS_ARCH_Convex3_8 0
#endif
#if !defined(KHAOS_ARCH_E2K)
  #define KHAOS_ARCH_E2K 0
#endif
#if !defined(KHAOS_ARCH_IA64)
  #define KHAOS_ARCH_IA64 0
#endif
#if !defined(KHAOS_ARCH_m68k)
  #define KHAOS_ARCH_m68k 0
#endif
#if !defined(KHAOS_ARCH_m68k6)
  #define KHAOS_ARCH_m68k6 0
#endif
#if !defined(KHAOS_ARCH_m68k4)
  #define KHAOS_ARCH_m68k4 0
#endif
#if !defined(KHAOS_ARCH_m68k3)
  #define KHAOS_ARCH_m68k3 0
#endif
#if !defined(KHAOS_ARCH_m68k2)
  #define KHAOS_ARCH_m68k2 0
#endif
#if !defined(KHAOS_ARCH_m68k1)
  #define KHAOS_ARCH_m68k1 0
#endif
#if !defined(KHAOS_ARCH_m68k0)
  #define KHAOS_ARCH_m68k0 0
#endif
#if !defined(KHAOS_ARCH_MIPS)
  #define KHAOS_ARCH_MIPS 0
#endif
#if !defined(KHAOS_ARCH_MIPS1)
  #define KHAOS_ARCH_MIPS1 0
#endif
#if !defined(KHAOS_ARCH_MIPS2)
  #define KHAOS_ARCH_MIPS2 0
#endif
#if !defined(KHAOS_ARCH_MIPS3)
  #define KHAOS_ARCH_MIPS3 0
#endif
#if !defined(KHAOS_ARCH_MIPS4)
  #define KHAOS_ARCH_MIPS4 0
#endif
#if !defined(KHAOS_ARCH_PARISC)
  #define KHAOS_ARCH_PARISC 0
#endif
#if !defined(KHAOS_ARCH_PARISC1)
  #define KHAOS_ARCH_PARISC1 0
#endif
#if !defined(KHAOS_ARCH_PARISC1_1)
  #define KHAOS_ARCH_PARISC1_1 0
#endif
#if !defined(KHAOS_ARCH_PARISC2)
  #define KHAOS_ARCH_PARISC2 0
#endif
#if !defined(KHAOS_ARCH_PowerPC)
  #define KHAOS_ARCH_PowerPC 0
#endif
#if !defined(KHAOS_ARCH_PowerPC6_1)
  #define KHAOS_ARCH_PowerPC6_1 0
#endif
#if !defined(KHAOS_ARCH_PowerPC6_3)
  #define KHAOS_ARCH_PowerPC6_3 0
#endif
#if !defined(KHAOS_ARCH_PowerPC6_4)
  #define KHAOS_ARCH_PowerPC6_4 0
#endif
#if !defined(KHAOS_ARCH_ptx)
  #define KHAOS_ARCH_ptx 0
#endif
#if !defined(KHAOS_ARCH_Pyramid)
  #define KHAOS_ARCH_Pyramid 0
#endif
#if !defined(KHAOS_ARCH_RISCV)
  #define KHAOS_ARCH_RISCV 0
#endif
#if !defined(KHAOS_ARCH_RS6000)
  #define KHAOS_ARCH_RS6000 0
#endif
#if !defined(KHAOS_ARCH_SPARC)
  #define KHAOS_ARCH_SPARC 0
#endif
#if !defined(KHAOS_ARCH_SPARC9)
  #define KHAOS_ARCH_SPARC9 0
#endif
#if !defined(KHAOS_ARCH_SPARC8)
  #define KHAOS_ARCH_SPARC8 0
#endif
#if !defined(KHAOS_ARCH_sh)
  #define KHAOS_ARCH_sh 0
#endif
#if !defined(KHAOS_ARCH_sh5)
  #define KHAOS_ARCH_sh5 0
#endif
#if !defined(KHAOS_ARCH_sh4)
  #define KHAOS_ARCH_sh4 0
#endif
#if !defined(KHAOS_ARCH_sh3)
  #define KHAOS_ARCH_sh3 0
#endif
#if !defined(KHAOS_ARCH_sh2)
  #define KHAOS_ARCH_sh2 0
#endif
#if !defined(KHAOS_ARCH_sh1)
  #define KHAOS_ARCH_sh1 0
#endif
#if !defined(KHAOS_ARCH_SYS370)
  #define KHAOS_ARCH_SYS370 0
#endif
#if !defined(KHAOS_ARCH_SYS390)
  #define KHAOS_ARCH_SYS390 0
#endif
#if !defined(KHAOS_ARCH_z)
  #define KHAOS_ARCH_z 0
#endif
#if !defined(KHAOS_ARCH_X86_32)
  #define KHAOS_ARCH_X86_32 0
#endif
#if !defined(KHAOS_ARCH_i686)
  #define KHAOS_ARCH_i686 0
#endif
#if !defined(KHAOS_ARCH_i586)
  #define KHAOS_ARCH_i586 0
#endif
#if !defined(KHAOS_ARCH_i486)
  #define KHAOS_ARCH_i486 0
#endif
#if !defined(KHAOS_ARCH_i386)
  #define KHAOS_ARCH_i386 0
#endif
#if !defined(KHAOS_ARCH_x86_64)
  #define KHAOS_ARCH_x86_64 0
#endif
#if !defined(KHAOS_ARCH_Epiphany)
  #define KHAOS_ARCH_Epiphany 0
#endif

#if !defined(KHAOS_ARCH_VERSION)
  #define KHAOS_ARCH_VERSION KHAOS_SET_VERSION(0, 0, 0)
#endif

#if !defined(KHAOS_ARCH_VERSION_TWEAK)
  #define KHAOS_ARCH_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(0)
#endif

#endif
