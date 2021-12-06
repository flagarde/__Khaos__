#ifndef KHAOS_COMPILER_MACROS_H
#define KHAOS_COMPILER_MACROS_H

#include "khaos/VersionMacros.h"

/** \file Compiler.h
 * Detect the compiler, convert the vendor version number to standardized one if available at compilation time and store it in `KHAOS_COMPILER_VERSION`.
 */

/**
 * \hideinitializer Detect the compiler.
 *
 * \param[in] compiler The compiler name.
 *
 * \note Use this macro only if you need preprocessor compiler checking.
 * For example :
 * \code{.cpp}
 * #if COMPILER_IS(gcc)
 * //...
 * #else
 * //...
 * #endif
 * \endcode
 *
 * Format of the version numbers :
 *
 * The base of the specified version number :
 * **0X** for hexadecimal digits, and **10** for decimal digits.
 *
 * The format of the vendor version number :
 * - **V** indicates the version digits.
 * - **R** indicates the revision digits.
 * - **P** indicates the patch digits.
 * - **T** indicates the tweak digits.
 * - **M** indicates the modification digits.
 * - **0** indicates an ignored digit.
 *
 * Detected compilers are :
 * ========================
 *
 * ACC
 * ---
 *
 * [ACC](http://en.wikipedia.org/wiki/ACC_%28programming_language%29)
 *
 * | Macro  |     Type      |
 * | :----: | :-----------: |
 * | _ACC_  | **detection** |
 *
 * \note check with ACC
 *
 * Altium MicroBlaze C
 * -------------------
 *
 * [Altium MicroBlaze C](http://en.wikipedia.org/wiki/Altium)
 *
 * |  Macro       |     Type      |     Format        |
 * | :----------: | :-----------: | :-------------:   |
 * | __CMB__      | **detection** |                   |
 * | __VERSION__  |  **Version**  | 10VRRR            |
 * | __REVISION__ |  **Version**  | 10P               |
 * | __BUILD__    |  **Version**  | 10VRRRPPP         |
 *
 * \note check with AltiumMicroblaze
 *
 * Altium C-to-Hardware
 * --------------------
 *
 * [Altium C-to-hardware](http://en.wikipedia.org/wiki/Altium)
 *
 * |  Macro       |     Type      |     Format        |
 * | :----------: | :-----------: | :-------------:   |
 * | __CHC__      | **detection** |                   |
 * | __VERSION__  |  **Version**  | 10VRRR            |
 * | __REVISION__ |  **Version**  | 10P               |
 * | __BUILD__    |  **Version**  | 10VRRRPPP         |
 *
 * \note check with Altium
 *
 * Amsterdam Compiler Kit
 * ----------------------
 *
 * [Amsterdam Compiler Kit](http://en.wikipedia.org/wiki/Amsterdam_Compiler_Kit)
 *
 * |  Macro       |     Type      |
 * | :----------: | :-----------: |
 * | __ACK__      | **detection** |
 *
 * \note check with Amsterdam
 *
 * ARM Compiler
 * ------------
 *
 * [ARM Compiler](http://www.arm.com/products/tools/software-tools/rvds/arm-compiler.php)
 *
 * |  Macro           |     Type      |     Format      |
 * | :----------:     | :-----------: | :-------------: |
 * | __CC_ARM         | **detection** |                 |
 * | __ARMCC_VERSION  |  **Version**  | 10VRPBBB        |
 *
 * \note check with ARM
 *

 * Aztec C
 * -------
 *
 * [Aztec C](http://en.wikipedia.org/wiki/Aztec_C)
 *
 * |  Macro           |     Type      |     Format      |
 * | :----------:     | :-----------: | :-------------: |
 * | AZTEC_C          | **detection** |                 |
 * | __AZTEC_C__      | **detection** |                 |
 * | __VERSION        |  **Version**  | 10VRR           |
 *
 * \note check with Aztec
 *
 * Borland
 * -------
 *
 * [Borland C++](http://en.wikipedia.org/wiki/C_plus_plus_builder)
 *
 * | Macros           |     Type      |  Format |
 * | :----:           | :-----------: |  :---:  |
 * |  `__BORLANDC__`  | **detection** |         |
 * | `__CODEGEARC__`  | **detection** |         |
 * | `__BORLANDC__`   |  **version**  | 0XVVRP  |
 * | `__CODEGEARC__`  |   **version** | 0XVVRP  |
 *
 * \note check with Borland
 *
 * CC65
 * ----
 *
 * [CC65](http://en.wikipedia.org/wiki/Cc65)
 *
 * | Macros           |     Type      |  Format |
 * | :----:           | :-----------: |  :---:  |
 * | `__CC65__`       | **detection** |         |
 * | `__CC65__`       |  **version**  | 0XVRP   |
 *
 * \note check with CC65
 *
 * Clang
 * -----
 *
 * [Clang](https://en.wikipedia.org/wiki/Clang)
 *
 * | Macros                  |     Type      |  Format                           |
 * | :---------------------: | :-----------: |  :-----------------------------:  |
 * | `__clang__`             | **detection** |                                   |
 * | `__clang_major__`       |  **version**  | V                                 |
 * | `__clang_minor__`       |  **version**  | R                                 |
 * | `__clang_patchlevel__`  |  **version**  | P                                 |
 * | `__clang_version__`     |  **version**  | V.R.P (tags/RELEASE_VRP/final)    |
 *
 * \note check with Clang (always defined)
 * \note check with AppleClang (only for Apple)
 *
 * Comeau C++
 * ----------
 *
 * [Comeau C++](http://en.wikipedia.org/wiki/Comeau_C/C%2B%2B)
 *
 * | Macros           |     Type      |  Format |
 * | :----:           | :-----------: |  :---:  |
 * | `__COMO__`       | **detection** |         |
 * |`__COMO_VERSION__`|  **version**  | 10VRR   |
 *
 * \note check with Comeau
 *
 * Compaq C/C++
 * ------------
 *
 * [Compaq C/C++](http://www.openvms.compaq.com/openvms/brochures/deccplus/)
 *
 * | Macros           |     Type      |  Format      |
 * | :----:           | :-----------: |  :---:       |
 * | `__DECC`         | **detection** | C compiler   |
 * | `__DECC_VER`     |  **version**  | 10_VVRRTPPPP |
 * | `__DECCXX`       | **detection** | C++ compiler |
 * | `__DECCXX_VER`   |  **version**  | 10_VVRRTPPPP |
 * | `__VAXC`         |               | Obsolete     |
 * | `VAXC`           |               | Obsolete     |
 *
 * \note check with Compaq
 *
 * Convex C
 * --------
 *
 * [Convex C](http://en.wikipedia.org/wiki/Convex_Computer)
 *
 * | Macro       |     Type      |
 * | :----:      | :-----------: |
 * | __convexc__ | **detection** |
 *
 * \note check with Convex
 *
 * CompCert
 * --------
 *
 * [CompCert](http://en.wikipedia.org/wiki/CompCert)
 *
 * | Macro        |     Type      |
 * | :----:       | :-----------: |
 * | __COMPCERT__ | **detection** |
 *
 * \note check with CompCert
 *
 * Coverity
 * --------
 *
 * [Coverity](http://www.coverity.com/)
 *
 * | Macro        |     Type      |
 * | :----:       | :-----------: |
 * | __COVERITY__ | **detection** |
 *
 * \note check with Coverity
 *
 * Cray C
 * ------
 *
 * Cray C
 *
 * | Macros         |     Type      |  Format |
 * | :----:         | :-----------: |  :---:  |
 * | `_CRAYC`       | **detection** |         |
 * |`_RELEASE`      |  **version**  | 10V     |
 * |`_RELEASE_MINOR`|  **version**  | 10R     |
 *
 * \note check with CrayC
 *
 * Diab C/C++
 * ----------
 *
 * [Diab C/C++](http://www.windriver.com/products/development_suite/wind_river_compiler/)
 *
 * | Macros              |     Type      |  Format |
 * | :----:              | :-----------: |  :---:  |
 * | `__DCC__`           | **detection** |         |
 * |`__VERSION_NUMBER__` |  **version**  | 10_VRPP |
 *
 * \note check with Diab
 *
 * DICE C
 * ------
 *
 * [DICE C](http://en.wikipedia.org/wiki/DICE_%28compiler%29)
 *
 * | Macro        |     Type      |
 * | :----:       | :-----------: |
 * | _DICE        | **detection** |
 *
 * \note check with DICE
 *
 * Digital mars
 * ------------
 *
 * [Digital Mars](http://en.wikipedia.org/wiki/Digital_Mars)
 *
 * | Macros    |     Type      | Format |
 * | :----:    | :-----------: | :---:  |
 * | `__DMC__` | **detection** |        |
 * | `__DMC__` |  **version**  | 0XVRP  |
 *
 * \note check with DigitalMars
 *
 *
 * Dignus Systems/C++
 * ------
 *
 * [Dignus Systems/C++](http://www.dignus.com/dcxx/)
 *
 * | Macros         |     Type      |  Format |
 * | :----:         | :-----------: |  :---:  |
 * | `__SYSC__`     | **detection** |         |
 * | `__SYSC_VER__` |  **version**  |10_VRRPP |
 *
 * \note check with Dignus
 *
 * DJGPP
 * -----
 *
 * [DJGPP](http://en.wikipedia.org/wiki/Djgpp)
 *
 * | Macros           |     Type      |  Format  |
 * | :----:           | :-----------: |  :---:   |
 * | `__DJGPP__`      | **detection** |          |
 * | `__DJGPP__`      |  **version**  | 10V      |
 * | `__DJGPP_MINOR__`|  **version**  | 10R      |
 * | `__GO32__`       | **detection** | Obsolete |
 *
 * \note check with DJGPP
 *
 * EDG C++ Frontend
 * ----------------
 *
 * [EDG C++ Frontend](http://en.wikipedia.org/wiki/Edison_Design_Group)
 *
 * | Macros           |     Type      |  Format  |
 * | :----:           | :-----------: |  :---:   |
 * | `__EDG__`        | **detection** |          |
 * | `__EDG_VERSION__`|  **version**  | 10_VRR   |
 *
 * \note check with EDG
 *
 * EKOPath
 * -------
 *
 * [EKOPath](http://en.wikipedia.org/wiki/PathScale)
 *
 * |  Macro                |     Type      |     Format        |
 * | :----------:          | :-----------: | :-------------:   |
 * | __PATHCC__            | **detection** |                   |
 * | __PATHCC__            |  **Version**  | V                 |
 * | __PATHCC_MINOR__      |  **Version**  | R                 |
 * | __PATHCC_PATCHLEVEL__ |  **Version**  | P                 |
 *
 * \note check with EKOPath
 *
 * Emscripten
 * ----------
 *
 * [Emscripten](https://emscripten.org/docs/compiling/Building-Projects.html)
 *
 * |  Macro                |     Type      |     Format        |
 * | :----------:          | :-----------: | :-------------:   |
 * | __EMSCRIPTEN__        | **detection** |                   |
 * | __EMSCRIPTEN_major__  |  **Version**  | V                 |
 * | __EMSCRIPTEN_minor__  |  **Version**  | R                 |
 * | __EMSCRIPTEN_tiny__   |  **Version**  | P                 |
 *
 * \note check with Emscripten
 *
 * Fujitsu C++
 * -----------
 *
 * Fujitsu C++
 *
 * | Macro         |     Type      |
 * | :----:        | :-----------: |
 * | __FCC_VERSION | **detection** |
 *
 * \note check with Fujitsu
 *
 * Gnu GCC C/C++
 * -------------
 *
 * [Gnu GCC C/C++](http://en.wikipedia.org/wiki/GNU_Compiler_Collection)
 *
 * | Macros                |     Type      |  Value  |
 * | :----:                | :-----------: |  :---:  |
 * | `__GNUC__`            | **detection** |         |
 * | `__GNUC__`            |  **version**  |   V     |
 * | `__GNUC_MINOR__`      |  **version**  |   R     |
 * | `__GNUC_PATCHLEVEL__` |  **version**  |   P     |
 *
 * \note check with GCC
 *
 * GCC XML
 * -------
 *
 * GCC XML
 *
 * | Macro         |     Type      |
 * | :----:        | :-----------: |
 * | __GCCXML__    | **detection** |
 *
 * \note check with GCCXML
 *
 * Green Hills
 * -----------
 *
 * [Green Hills C/C++](http://en.wikipedia.org/wiki/Green_Hills_Software)
 *
 * | Macros                   |     Type      |  Value      |
 * | :----:                   | :-----------: |  :---:      |
 * | `__ghs`                  | **detection** |             |
 * | `__ghs__`                | **detection** |             |
 * | `__GHS_VERSION_NUMBER__` |  **version**  | 10_VRP      |
 * | `__GHS_REVISION_DATE__`  |  **version**  | epoch time  |
 * | `__ghs`                  |  **version**  | 10_VRP      |
 *
 * \note check with GreenHills
 *
 * HP ANSI C
 * ---------
 *
 * HP ANSI C
 *
 * | Macro         |     Type      |
 * | :----:        | :-----------: |
 * | __HP_cc       | **detection** |
 *
 * \note check with HPCC
 *
 * HP aC++ compiler
 * ----------------
 *
 * [HP aC++](http://en.wikipedia.org/wiki/HP_aC%2B%2B)
 *
 * | Macros     |     Type      |  Value  |
 * | :----:     | :-----------: |  :---:  |
 * | `__HP_aCC` | **detection** |         |
 * | `__HP_aCC` |  **version**  |10_VVRRPP|
 *
 * \note check with HPaCC
 *
 * IAR C/C++
 * ---------
 *
 * IAR C/C++
 *
 * | Macros                |     Type      |  Value  |
 * | :----:                | :-----------: |  :---:  |
 * | `__IAR_SYSTEMS_ICC__` | **detection** |         |
 * | `__VER__`             |  **version**  | 10_VVRR |
 *
 * \note check with IAR
 *
 * IBM XL C/C++ (Clang-based versions)
 * -----------------------------------
 *
 * [IBM XL C/C++ (Clang-based versions)](https://www.ibm.com/us-en/marketplace/ibm-c-and-c-plus-plus-compiler-family)
 *
 * | Macros                      |     Type      |  Value     |
 * | :-------------------------: | :-----------: |  :------:  |
 * | `__ibmxl__` and `__clang__` | **detection** |            |
 * | `__ibmxl_vrm__`             |  **version**  | 0xVVRRMM00 |
 * | `__ibmxl_version__`         |  **version**  | V          |
 * | `__ibmxl_release__`         |  **version**  | R          |
 * | `__ibmxl_modification__`    |  **version**  | M          |
 * | `__ibmxl_ptf_fix_level__`   |  **version**  | F          |
 *
 * \note check with IBMClang or IBM
 *
 * IBM XL C/C++ (legacy)
 * ---------------------
 *
 * [IBM XL C/C++](https://www.ibm.com/us-en/marketplace/ibm-c-and-c-plus-plus-compiler-family)
 *
 * | Macros        |     Type      |  Value     |
 * | :----:        | :-----------: |  :---:     |
 * | `__xlC__`     | **detection** |            |
 * | `__IBMC__`    |  **version**  | 0X_VRRMM   |
 * | `__IBMCPP__`  |  **version**  | 0X_VRRMM   |
 * | `__xlc__`     |  **version**  | 0xVVRRMMFF |
 * | `__xlC__`     |  **version**  | 0xVVRR     |
 * | `__xlC_ver__` |  **version**  | 0x0000MMFF |
 *
 * \note check with IBM or IBMLegacy
 *
 * IBM z/OS XL C/C++
 * -----------------
 *
 * [IBM z/OS XL C/C++](https://www.ibm.com/us-en/marketplace/xl-cpp-compiler-zos)
 *
 * | Macros        |     Type      |  Value     |
 * | :----:        | :-----------: |  :---:     |
 * | `__IBMC__`    | **detection** |            |
 * | `__IBMCPP__`  | **detection** |            |
 * | `__IBMC__`    |  **version**  | NVRRM 	N = Product (0 = C/370, 1 = MVS, 2 = OS/390, 4 = z/OS) V = Version RR = Revision M = Modification   |
 * | `__IBMCPP__`  |  **version**  |N = Product (0 = C/370, 1 = MVS, 2 = OS/390, 4 = z/OS) V = Version RR = Revision M = Modification   |
 * | `__COMPILER_VER__`     |  **version**  | 0xNVRRMMFF 	N = Product (see above) V = Version RR = Revision MM = Modification FF = Fix Pack |
 *
 * \note check with IBM or for platform : IBMC370 or IBMMVS or IBMOS390 or IBMZOS
 *
 * ImageCraft C
 * -----------
 *
 * [ImageCraft C](http://www.imagecraft.com/)
 *
 * | Macro          |     Type      |
 * | :----:         | :-----------: |
 * | __IMAGECRAFT__ | **detection** |
 *
 * \note ImageCraft
 *
 * Intel C/C++
 * ---------------------
 *
 * [Intel C/C++](http://en.wikipedia.org/wiki/Intel_C%2B%2B)
 *
 * | Macros                        |     Type      |  Value     |
 * | :---------------------------: | :-----------: |  :---:     |
 * | `__INTEL_COMPILER`            | **detection** |            |
 * | `__ICC`                       | **detection** | Obsolete   |
 * | `__ECC`                       | **detection** | Obsolete   |
 * | `__ICL`                       | **detection** | Obsolete   |
 * | `__INTEL_COMPILER`            |  **version**  | VRP        |
 * | `__INTEL_COMPILER_BUILD_DATE` |  **date**     | YYYYMMDD   |
 *
 * \note check with Intel
 *
 * Kai C++ compiler
 * ----------------
 *
 * Kai C++ compiler
 *
 * | Macros          |     Type      |  Value  |
 * | :----:          | :-----------: |  :---:  |
 * | `__KCC`         | **detection** |         |
 * | `__KCC_VERSION` |  **version**  |10_VVRRPP|
 *
 * \note check with Kai
 *
 * KEIL CARM
 * ---------
 *
 * [KEIL CARM](http://www.keil.com/arm/carm.asp)
 *
 * | Macros    |     Type      |  Value  |
 * | :----:    | :-----------: |  :---:  |
 * | `__CA__`  | **detection** |         |
 * | `__KEIL__`| **detection** |         |
 * | `__CA__`  |  **version**  | 10VRR   |
 *
 * \note check with KeilCarm
 *
 * KEIL C166
 * ---------
 *
 * [KEIL C166](http://www.keil.com/c166/c166.asp)
 *
 * | Macros    |     Type      |  Value  |
 * | :----:    | :-----------: |  :---:  |
 * | `__C166__`| **detection** |         |
 * | `__C166__`|  **version**  | 10VRR   |
 *
 * \note check with KeilC166
 *
 * KEIL C51
 * ---------
 *
 * [KEIL C51](http://www.keil.com/c51/c51.asp)
 *
 * | Macros    |     Type      |  Value  |
 * | :----:    | :-----------: |  :---:  |
 * | `__C51__` | **detection** |         |
 * | `__CX51__`| **detection** |         |
 * | `__C51__` |  **version**  | 10VRR   |
 *
 * \note check with KeilC51
 *
 * LCC
 * ---
 *
 * [LCC](http://en.wikipedia.org/wiki/Local_C_compiler)
 *
 * | Macro   |     Type      |
 * | :----:  | :-----------: |
 * | __LCC__ | **detection** |
 *
 * \note check with LCC
 *
 * LLVM
 * ----
 *
 * [LLVM](http://en.wikipedia.org/wiki/LLVM)
 *
 * | Macros     |     Type      |
 * | :----:     | :-----------: |
 * | `__llvm__` | **detection** |
 *
 * \note check with LLVM
 *
 * MetaWare High C/C++
 * -------------------
 *
 * MetaWare High C/C++
 *
 * | Macros      |     Type      |
 * | :----:      | :-----------: |
 * | `__HIGHC__` | **detection** |
 *
 * \note check with MetaWare
 *
 * Metrowerks CodeWarrior
 * ----------------------
 *
 * [Metrowerks CodeWarrior](http://en.wikipedia.org/wiki/CodeWarrior)
 *
 * | Macros       |     Type      |  Value  |
 * | :----:       | :-----------: |  :---:  |
 * | `__MWERKS__` | **detection** |         |
 * | `__CWCC__`   | **detection** |         |
 * | `__CWCC__`   |  **version**  | 0X_VRPP |
 * | `__MWERKS__` |  **version**  | 0X_VRPP  >= 4.2.0    |
 * | `__MWERKS__` |  **version**  | __MWERKS__ >= 0x3204 note the "skip": 04->9.3     |
 * | `__MWERKS__` |  **version**  | __MWERKS__ >= 0x3200 |
 * | `__MWERKS__` |  **version**  | __MWERKS__ >= 0x3000 |
 *
 * \note check with Metrowerks
 *
 * Microsoft Visual C/C++
 * ----------------------
 *
 * [Microsoft Visual C/C++](http://en.wikipedia.org/wiki/Visual_studio)
 *
 * | Macros          |     Type      |  Value  |
 * | :----:          | :-----------: |  :---:  |
 * | `_MSC_VER`      | **detection** |         |
 * | `_MSC_FULL_VER` |  **version**  |         |
 * | `_MSC_VER`      |  **version**  |         |
 * | `_MSC_BUILD`    |  **version**  |         |
 *
 * \note check with MSVC
 *
 * Microtec C/C++
 * --------------
 *
 * [Microtec C/C++](http://www.mentor.com/microtec/)
 *
 * | Macros  |     Type      |  Value  |
 * | :----:  | :-----------: |  :---:  |
 * |  `_MRI` | **detection** |         |
 *
 * \note check with Microtec
 *
 * Microway NDP C
 * --------------
 *
 * [Microway NDP C](http://en.wikipedia.org/wiki/Microway)
 *
 * | Macros   |     Type      |  Value  |
 * | :----:   | :-----------: |  :---:  |
 * |`__NDPC__`| **detection** |         |
 * |`__NDPX__`| **detection** |         |
 *
 * \note check with Microway
 *
 * SGI MIPSpro
 * -----------
 *
 * [SGI MIPSpro](http://en.wikipedia.org/wiki/MIPSpro)
 *
 * | Macros                  |     Type      |  Value  |
 * | :----:                  | :-----------: |  :---:  |
 * | `__sgi`                 | **detection** |         |
 * | `sgi`                   | **detection** |         |
 * | `_SGI_COMPILER_VERSION` |  **version**  | 10_VRP  |
 * | `_COMPILER_VERSION`     |  **version**  | 10_VRP  |
 *
 * \note check with MIPSpro
 *
 * Miracle C
 * ---------
 *
 * [Miracle C](http://www.c-compiler.com/)
 *
 * | Macro    |     Type      |
 * | :----:   | :-----------: |
 * | MIRACLE  | **detection** |
 *
 * \note check with Miracle
 *
 * MPW C++
 * -------
 *
 * [MPW C++](http://en.wikipedia.org/wiki/Macintosh_Programmer%27s_Workshop)
 *
 * | Macros     |     Type      |  Value  |
 * | :----:     | :-----------: |  :---:  |
 * | `__MRC__`  | **detection** |         |
 * | `MPW_C`    | **detection** |         |
 * | `MPW_CPLUS`| **detection** |         |
 * | `__MRC__`  |  **version**  | 0X_VVRR |
 *
 * \note check with MPW
 *
 * Norcroft C
 * ----------
 *
 * [Norcroft C](http://www.codemist.co.uk/ncc/index.html)
 *
 * |  Macro           |     Type      |     Format      |
 * | :----------:     | :-----------: | :-------------: |
 * | __CC_NORCROFT    | **detection** |                 |
 * | __ARMCC_VERSION  |  **Version**  | V.R             |
 *
 * \note check with Norcroft
 *
 * NWCC
 * ----
 *
 * [NWCC](http://nwcc.sourceforge.net/)
 *
 * | Macro    |     Type      |
 * | :----:   | :-----------: |
 * | __NWCC__ | **detection** |
 *
 * \note check with NWCC
 *
 * Open64
 * ------
 *
 * [Open64](http://en.wikipedia.org/wiki/Open64)
 *
 * |  Macro                |     Type      |     Format        |
 * | :----------:          | :-----------: | :-------------:   |
 * | __OPEN64__            | **detection** |                   |
 * | __OPENCC__            | **detection** |                   |
 * | __OPENCC__            |  **Version**  | V                 |
 * | __OPENCC_MINOR__      |  **Version**  | R                 |
 * | __OPENCC_PATCHLEVEL__ |  **Version**  | P.B               |
 *
 * \note check with Open64
 *
 * Oracle Pro*C Precompiler
 * ------------------------
 *
 * [Oracle Pro*C Precompiler](http://en.wikipedia.org/wiki/Pro*C)
 *
 * | Macro    |     Type      |
 * | :----:   | :-----------: |
 * | ORA_PROC | **detection** |
 *
 * \note check with Oracle
 *
 * Oracle Solaris Studio
 * ---------------------
 *
 * [Oracle Solaris Studio](http://en.wikipedia.org/wiki/Oracle_Solaris_Studio)
 *
 * | Macros       |     Type      |  Value  |
 * | :----:       | :-----------: |  :---:  |
 * | `__SUNPRO_CC`| **detection** |         |
 * | `__SUNPRO_C` | **detection** |         |
 * | `__SUNPRO_CC`|  **version**  | 0X_VRP  |
 * | `__SUNPRO_C` |  **version**  | 0X_VRP  |
 * | `__SUNPRO_CC`|  **version**  | 0X_VVRRP|
 * | `__SUNPRO_C` |  **version**  | 0X_VVRRP|
 *
 * \note check with Solaris
 *
 * Pacific C
 * ---------
 *
 * Pacific C
 *
 * | Macro        |     Type      |
 * | :----:       | :-----------: |
 * | __PACIFIC__  | **detection** |
 *
 * \note check with Pacific
 *
 * Palm C/C++
 * ----------
 *
 * | Macros        |     Type      |  Value      |
 * | :----:        | :-----------: |  :---:      |
 * |  `_PACC_VER`  | **detection** |             |
 * |  `_PACC_VER`  |  **version**  | 0X_VRRPPBBB |
 *
 * \note check with Palm
 *
 * Pelles C
 * -------------------
 *
 * [Pelles C](http://en.wikipedia.org/wiki/Pelles_C)
 *
 * |  Macro       |     Type      |     Format        |
 * | :----------: | :-----------: | :-------------:   |
 * | __POCC__     | **detection** |                   |
 * | __POCC__     |  **Version**  | 10VRR             |
 *
 * \note check with Pelles
 *
 * Portland Group C/C++
 * --------------------
 *
 * [Portland Group C/C++](http://en.wikipedia.org/wiki/The_Portland_Group)
 *
 * | Macros                |     Type      |  Value  |
 * | :----:                | :-----------: |  :---:  |
 * | `__PGI`               | **detection** |         |
 * | `__PGI`               |  **version**  |   V     |
 * | `__PGIC_MINOR__`      |  **version**  |   M     |
 * | `__PGIC_PATCHLEVEL__` |  **version**  |   P     |
 *
 * \note check with Portland
 *
 * Renesas C/C++
 * -------------
 *
 * Renesas C/C++
 *
 * |  Macro              |     Type      |     Format      |
 * | :----------:        | :-----------: | :-------------: |
 * | __RENESAS__         | **detection** |                 |
 * | __HITACHI__         | **detection** |                 |
 * | __RENESAS_VERSION__ |  **Version**  | 0xVVRR          |
 * | __RENESAS_VERSION__ |  **Version**  | 0xVVRRPP00      |
 * | __HITACHI_VERSION__ |  **Version**  | 0xVVRR          |
 *
 * \note check with Renesas
 *
 * SAS/C
 * -----
 *
 * [SAS/C](http://www.sas.com/products/sasc/)
 *
 * | Macros                    |     Type      |  Value  |
 * | :----:                    | :-----------: |  :---:  |
 * | `SASC`                    | **detection** |         |
 * | `__SASC`                  | **detection** |         |
 * | `__SASC__`                | **detection** |         |
 * | `__VERSION__`             |  **version**  |         |
 * | `__REVISION__`            |  **version**  |         |
 * | `__SASC__`                |  **version**  | VRR     |
 *
 * \note check with SASC
 *
 * SCO OpenServer
 * --------------
 *
 * [SCO OpenServer](http://en.wikipedia.org/wiki/SCO_OpenServer)
 *
 * | Macro   |     Type      |
 * | :----:  | :-----------: |
 * | _SCO_DS | **detection** |
 *
 * \note check with SCO
 *
 * Small Device C Compiler
 * --------------------
 *
 * [Small Device C Compiler](http://en.wikipedia.org/wiki/Small_Device_C_Compiler)
 *
 * |  Macro       |     Type      |     Format        |
 * | :----------: | :-----------: | :-------------:   |
 * | SDCC         | **detection** |                   |
 * | SDCC         |  **Version**  | VRP               |
 *
 * \note check with SDCC
 *
 * SN Compiler
 * ---
 *
 * [SN Compiler](http://en.wikipedia.org/wiki/SN_Systems)
 *
 * | Macro    |     Type      |
 * | :----:   | :-----------: |
 * | __SNC__  | **detection** |
 *
 * \note check with SNC
 *
 * Stratus VOS C
 * -------------
 *
 * [Stratus VOS C](http://en.wikipedia.org/wiki/Stratus_VOS)
 *
 * | Macro     |     Type      |
 * | :----:    | :-----------: |
 * | __VOSC__  | **detection** 0 = K&R compiler 1 = ANSI C compiler|
 *
 * \note check with (StratusKR or StratusANSI) or Stratus
 *
 * Symantec C++
 * ------------
 *
 * Symantec C++
 *
 * | Macros    |     Type      |  Value  |
 * | :----:    | :-----------: |  :---:  |
 * |  `__SC__` | **detection** |         |
 * | `__SC__`  |  **version**  | 0xVVRR  |
 *
 * \note check with Symantec
 *
 * TenDRA C/C++
 * ------------
 *
 * [TenDRA C/C++](http://en.wikipedia.org/wiki/TenDRA_Compiler)
 *
 * | Macro      |     Type      |
 * | :----:     | :-----------: |
 * | __TenDRA__ | **detection** |
 *
 * \note check with Tendra
 *
 * Texas Instruments C/C++ Compiler
 * --------------------------------
 *
 * Texas Instruments C/C++ Compiler
 *
 * |  Macro                         |     Type      |     Format      |
 * | :----------:                   | :-----------: | :-------------: |
 * | __TI_COMPILER_VERSION__        | **detection** |                 |
 * | _TMS320C6X                     | **detection** |                 |
 * | __TI_COMPILER_VERSION__        |  **Version**  | 10VRR           |
 *
 * \note check with TI
 *
 * THINK C
 * -------
 *
 * [THINK C](http://en.wikipedia.org/wiki/THINK_C)
 *
 * | Macro   |     Type      |
 * | :----:  | :-----------: |
 * | THINKC3 | **detection** |
 * | THINKC4 | **detection** |
 *
 * \note check with Think
 *
 * Tiny C
 * ------
 *
 * [Tiny C](http://en.wikipedia.org/wiki/Tiny_C_Compiler)
 *
 * | Macro      |     Type      |
 * | :----:     | :-----------: |
 * | __TINYC__  | **detection** |
 *
 * \note check with Tiny
 *
 * Turbo C/C++
 * -------------------
 *
 * [Turbo C/C++](http://en.wikipedia.org/wiki/Turbo_C)
 *
 * |  Macro       |     Type      |     Format        |
 * | :----------: | :-----------: | :-------------:   |
 * | __TURBOC__   | **detection** |                   |
 * | __TURBOC__   |  **Version**  | 0xVVRR            |
 *
 * \note check with Turbo
 *
 * Ultimate C/C++
 * --------------
 *
 * Ultimate C/C++
 *
 * |  Macro       |     Type      |     Format        |
 * | :----------: | :-----------: | :-------------:   |
 * | _UCC         | **detection** |                   |
 * | _MAJOR_REV   |  **Version**  | V                 |
 * | _MINOR_REV   |  **Version**  | M                 |
 *
 * \note check with Ultimate
 *
 * USL C
 * -----
 *
 * [USL C](http://en.wikipedia.org/wiki/Unix_System_Laboratories)
 *
 * |  Macro          |     Type      |     Format        |
 * | :----------:    | :-----------: | :-------------:   |
 * | __USLC__        | **detection** |                   |
 * | __SCO_VERSION__ |  **Version**  | VRRYYYYMM 	V = Version RR = Revision YYYY = Year MM = Month |
 *
 * \note check with USL
 *
 * VBCC
 * ----
 *
 * [VBCC](http://en.wikipedia.org/wiki/Vbcc)
 *
 * | Macro  |     Type      |
 * | :----: | :-----------: |
 * | VBCC   | **detection** |
 *
 * \note check with VBCC
 *
 * Watcom C++
 * ----------
 *
 * [Watcom C++](http://en.wikipedia.org/wiki/Watcom)
 *
 * | Macros          |     Type      |  Value  |
 * | :----:          | :-----------: |  :---:  |
 * |  `__WATCOMC__`  | **detection** |         |
 * |  `__WATCOMC__`  |  **version**  | 10_VVRR |
 *
 * \note check with Watcom
 *
 * Zortech C++
 * ----------
 *
 * [Zortech C++](http://en.wikipedia.org/wiki/Zortech)
 *
 * | Macros      |     Type      |  Value  |
 * | :----:      | :-----------: |  :---:  |
 * |  `__ZTC__`  | **detection** |         |
 * |  `__ZTC__`  |  **version**  | 0xVRP   |
 *
 * \note check with Zortech
 *
 * NVCC
 * ----
 *
 * [NVCC](https://docs.nvidia.com/cuda/cuda-compiler-driver-nvcc/index.html)
 *
 * | Macros                   |     Type      |  Value  |
 * | :-----------------:      | :-----------: |  :---:  |
 * |  `__NVCC__`              | **detection** |         |
 * |  `__CUDACC_VER_MAJOR__`  |  **version**  | V   |
 * |  `__CUDACC_VER_MINOR__`  |  **version**  | M   |
 * |  `__CUDACC_VER_BUILD__`  |  **version**  | P   |
 *
 * \note check with NVCC and KHAOS_NVCC_VERSION
 *
 */
#define COMPILER_IS(compiler) (KHAOS_COMPILER_##compiler == 1)

#if defined(__NVCC__)
  #define KHAOS_COMPILER_NVCC 1
  // /warn https://github.com/boostorg/predef/blob/develop/include/boost/predef/compiler/nvcc.h
  #if defined(__CUDACC_VER_MAJOR__) && defined(__CUDACC_VER_MINOR__) && defined(__CUDACC_VER_BUILD__)
    #define KHAOS_NVCC_VERSION KHAOS_SET_VERSION(__CUDACC_VER_MAJOR__, __CUDACC_VER_MINOR__, __CUDACC_VER_BUILD__)
  #endif
#else
  #define KHAOS_COMPILER_NVCC 0
  #define KHAOS_NVCC_VERSION KHAOS_SET_VERSION(0, 0, 0)
  #define KHAOS_NVCC_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(0, 0, 0)
#endif

// Put all compiler first then MSVC clang llvm gcc as some mimic others.

#if defined(_ACC_)
  #define KHAOS_COMPILER_ACC 1
#elif defined(__CMB__)
  #define KHAOS_COMPILER_AltiumMicroblaze 1
  #if defined(__BUILD__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__BUILD__ / 1000000) % 10, ((__BUILD__) / 1000) % 1000, __BUILD__ % 1000)
  #else
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__VERSION__ / 1000) % 10, __VERSION__ % 1000, __REVISION__)
  #endif
#elif defined(__CHC__)
  #define KHAOS_COMPILER_Altium 1
  #if defined(__BUILD__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__BUILD__ / 1000000) % 10, ((__BUILD__) / 1000) % 1000, __BUILD__ % 1000)
  #else
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__VERSION__ / 1000) % 10, __VERSION__ % 1000, __REVISION__)
  #endif
#elif defined(__ACK__)
  #define KHAOS_COMPILER_Amsterdam 1
#elif defined(__CC_ARM)
  #define KHAOS_COMPILER_ARM           1
  #define KHAOS_COMPILER_VERSION       KHAOS_SET_VERSION((__ARMCC_VERSION / 100000) % 10, ((__ARMCC_VERSION) / 10000) % 10, (__ARMCC_VERSION / 1000) % 10)
  #define KHAOS_COMPILER_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(__ARMCC_VERSION % 1000)
#elif defined(AZTEC_C) || defined(__AZTEC_C__)
  #define KHAOS_COMPILER_Aztec   1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__VERSION) / 100) % 10, (__VERSION) % 100, 0)
#elif defined(__BORLANDC__) || defined(__CODEGEARC__)
  #define KHAOS_COMPILER_Borland 1
  #if defined(__CODEGEARC__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__CODEGEARC__ & 0xFF00) >> 8, (__CODEGEARC__ & 0xF0) >> 4, (__CODEGEARC__ & 0xF))
  #elif defined(__BORLANDC__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__BORLANDC__ & 0xFF00) >> 8, (__BORLANDC__ & 0xF0) >> 4, (__BORLANDC__ & 0xF))
  #endif
#elif defined(__CC65__)
  #define KHAOS_COMPILER_CC65    1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__CC65__ & 0xF00) >> 8, (__CC65__ & 0xF0) >> 4, (__CC65__ & 0xF))
#elif defined(__COMO__)
  #define KHAOS_COMPILER_Comeau  1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__COMO_VERSION__ & 0xF00) >> 8, (__COMO_VERSION__ & 0xF0) >> 4, (__COMO_VERSION__ & 0xF))
#elif defined(__DECC) || defined(__DECCXX) || defined(__VAXC) || defined(VAXC)
  #define KHAOS_COMPILER_Compaq 1
  #if defined(__DECCXX_VER)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__DECCXX_VER) / 10000000) % 100, ((__DECCXX_VER) / 100000) % 100, ((__DECCXX_VER) / 100) % 100)
  #elif defined(__DECC_VER)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__DECC_VER) / 10000000) % 100, ((__DECC_VER) / 100000) % 100, ((__DECC_VER) / 100) % 100)
  #endif
#elif defined(__convexc__)
  #define KHAOS_COMPILER_Convex 1
#elif defined(__COMPCERT__)
  #define KHAOS_COMPILER_Compcert 1
#elif defined(__COVERITY__)
  #define KHAOS_COMPILER_Coverity 1
#elif defined(_CRAYC)
  #define KHAOS_COMPILER_CrayC   1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(_RELEASE, _RELEASE_MINOR, 0)
#elif defined(__DCC__)
  #define KHAOS_COMPILER_Diab    1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__VERSION_NUMBER__) / 1000) % 10, ((__VERSION_NUMBER__) / 100) % 10, (__VERSION_NUMBER__) % 100)
#elif defined(_DICE)
  #define KHAOS_COMPILER_DICE 1
#elif defined(__DMC__)
  #define KHAOS_COMPILER_DigitalMars 1
  #define KHAOS_COMPILER_VERSION     KHAOS_SET_VERSION((__DMC__ & 0xF00) >> 8, (__DMC__ & 0xF0) >> 4, (__DMC__ & 0xF))
#elif defined(__SYSC__)
  #define KHAOS_COMPILER_Dignus  1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__SYSC_VER__) / 10000) % 10, ((__SYSC_VER__) / 100) % 100, (__SYSC_VER__) % 100)
#elif defined(__DJGPP__) || defined(__GO32__)
  #define KHAOS_COMPILER_DJGPP   1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(__DJGPP__, __DJGPP_MINOR__, 0)
#elif defined(__EDG__)
  #define KHAOS_COMPILER_EDG     1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__EDG_VERSION__) / 100000) % 10, ((__EDG_VERSION__) / 1000) % 100, 0)
#elif defined(__PATHCC__)
  #define KHAOS_COMPILER_EKOPath 1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(__PATHCC__, __PATHCC_MINOR__, __PATHCC_PATCHLEVEL__)
#elif defined(__EMSCRIPTEN__)
  #define KHAOS_COMPILER_Emscripten 1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(__EMSCRIPTEN_major__, __EMSCRIPTEN_minor__, __EMSCRIPTEN_tiny__)
#elif defined(__FCC_VERSION)
  #define KHAOS_COMPILER_Fujitsu 1
#elif defined(__GCCXML__)
  #define KHAOS_COMPILER_GCCXML 1
#elif defined(__ghs) || defined(__ghs__)
  #define KHAOS_COMPILER_GreenHills 1
  #if defined(__GHS_VERSION_NUMBER__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__GHS_VERSION_NUMBER__) / 100) % 10, ((__GHS_VERSION_NUMBER__) / 10) % 10, (__GHS_VERSION_NUMBER__) % 10)
  #elif defined(__ghs)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__ghs) / 100) % 10, ((__ghs) / 10) % 10, (__ghs) % 10)
  #endif
#elif defined(__HP_cc)
  #define KHAOS_COMPILER_HPCC 1
#elif defined(__HP_aCC)
  #define KHAOS_COMPILER_HPaCC 1
  #if __HP_aCC > 1
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__HP_aCC) / 10000) % 100, ((__HP_aCC) / 100) % 100, (__HP_aCC) % 100)
  #endif
#elif defined(__IAR_SYSTEMS_ICC__)
  #define KHAOS_COMPILER_IAR     1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__VER__) / 100) % 100, (__VER__) % 100, 0)
#elif defined(__ibmxl__) && defined(__clang__)
  //Should be include before clang as it defined some macro of Clang
  #define KHAOS_COMPILER_IBM           1
  #define KHAOS_COMPILER_IBMClang      1
  #define KHAOS_COMPILER_VERSION       KHAOS_SET_VERSION(__ibmxl_version__, __ibmxl_release__, __ibmxl_modification__)
  #define KHAOS_COMPILER_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(__ibmxl_ptf_fix_level__)
#elif defined(__xlC__)
  #define KHAOS_COMPILER_IBM       1
  #define KHAOS_COMPILER_IBMLegacy 1
  #if defined(__IBMC__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__IBMC__ & 0xFF0000) >> 16, (__IBMC__ & 0xFF00) >> 8, (__IBMC__ & 0xFF))
  #elif defined(__IBMCPP__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__IBMCPP__ & 0xFF0000) >> 16, (__IBMCPP__ & 0xFF00) >> 8, (__IBMCPP__ & 0xFF))
  #endif
  #if defined(__xlc__)
    #define KHAOS_COMPILER_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK((__ibmxl_ptf_fix_level__ & 0xFF) % 100)
  #elif defined(__xlC_ver__)
    #define KHAOS_COMPILER_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK((__ibmxl_ptf_fix_level__ & 0xFF) % 100)
  #endif
#elif defined(__IBMC__) || defined(__IBMCPP__)
  #define KHAOS_COMPILER_IBM 1
  #if __COMPILER_VER__ & 0xF0000000)>> 28 == 0
    #define KHAOS_COMPILER_IBMC370 1
  #elif __COMPILER_VER__ & 0xF0000000)>> 28 == 1
    #define KHAOS_COMPILER_IBMMVS 1
  #elif __COMPILER_VER__ & 0xF0000000)>> 28 == 2
    #define KHAOS_COMPILER_IBMOS390 1
  #elif __COMPILER_VER__ & 0xF0000000)>> 28 == 4
    #define KHAOS_COMPILER_IBMZOS 1
  #endif
  #define KHAOS_COMPILER_VERSION       KHAOS_SET_VERSION((__COMPILER_VER__ & 0xF000000) >> 24, (__COMPILER_VER__ & 0xFF0000) >> 16, (__COMPILER_VER__ & 0xFF00) >> 8)
  #define KHAOS_COMPILER_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK((__COMPILER_VER__ & 0xFF))
#elif defined(__IMAGECRAFT__)
  #define KHAOS_COMPILER_ImageCraft 1
#elif defined(__INTEL_COMPILER) || defined(__ICL) || defined(__ICC) || defined(__ECC)
  #define KHAOS_COMPILER_Intel 1
  /**
   * \note Because of an Intel mistake in the release version numbering when `__INTEL_COMPILER` is `9999` it is detected as version 12.1.0.
   */
  #if defined(__INTEL_COMPILER) && (__INTEL_COMPILER == 9999)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(12, 1, 0)
  #elif defined(__INTEL_COMPILER) && defined(__INTEL_COMPILER_UPDATE)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__INTEL_COMPILER) / 100) % 100, (__INTEL_COMPILER) % 100, __INTEL_COMPILER_UPDATE)
  #elif defined(__INTEL_COMPILER)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__INTEL_COMPILER) / 100) % 100, (__INTEL_COMPILER) % 100, 0)
  #endif
#elif defined(__KCC)
  #define KHAOS_COMPILER_Kai     1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__KCC_VERSION & 0xF000) >> 12, (__KCC_VERSION & 0xF00) >> 8, (__KCC_VERSION & 0xFF))
#elif defined(__CA__) || defined(__KEIL__)
  #define KHAOS_COMPILER_KeilCarm 1
  #define KHAOS_COMPILER_VERSION  KHAOS_SET_VERSION(((__CA__) / 100) % 10, (__CA__) % 100, 0)
#elif defined(__C166__)
  #define KHAOS_COMPILER_KeilC166 1
  #define KHAOS_COMPILER_VERSION  KHAOS_SET_VERSION(((__C166__) / 100) % 10, (__C166__) % 100, 0)
#elif defined(__C51__) || defined(__CX51__)
  #define KHAOS_COMPILER_KeilC51 1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__C51__) / 100) % 10, (__C51__) % 100, 0)
#elif defined(__LCC__)
  #define KHAOS_COMPILER_LCC 1
#elif defined(__HIGHC__)
  #define KHAOS_COMPILER_Metaware 1
#elif defined(__MWERKS__) || defined(__CWCC__)
  #define KHAOS_COMPILER_Metrowerks 1
  #if defined(__CWCC__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__CWCC__ & 0xF000) >> 12, (__CWCC__ & 0xF00) >> 8, (__CWCC__ & 0xFF))
  #elif(__MWERKS__ >= 0x4200)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__MWERKS__ & 0xF000) >> 12, (__MWERKS__ & 0xF00) >> 8, (__MWERKS__ & 0xFF))
  #elif(__MWERKS__ >= 0x3204)  // note the "skip": 04->9.3
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(9, (__MWERKS__) % 100 - 1, 0)
  #elif(__MWERKS__ >= 0x3200)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(9, (__MWERKS__) % 100, 0)
  #elif(__MWERKS__ >= 0x3000)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(8, (__MWERKS__) % 100, 0)
  #endif
#elif defined(_MSC_VER)
  #define KHAOS_COMPILER_MSVC 1
  #if defined(_MSC_BUILD)
    #define KHAOS_COMPILER_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(_MSC_BUILD)
  #endif

  // how many digits does the build number have?
  #if defined(_MSC_FULL_VER)
    #if _MSC_FULL_VER / 10000 == _MSC_VER
      // four digits
      #define COMP_MSVC_BUILD_PATCH (_MSC_FULL_VER % 10000)
    #elif _MSC_FULL_VER / 100000 == _MSC_VER
      // five digits
      #define COMP_MSVC_BUILD_PATCH (_MSC_FULL_VER % 100000)
    #endif
  #else
    #define COMP_MSVC_BUILD_PATCH 0
  #endif
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((_MSC_VER / 100) % 1000, (_MSC_VER) % 1000, COMP_MSVC_BUILD_PATCH)
#elif defined(_MRI)
  #define KHAOS_COMPILER_Microtec 1
#elif defined(__NDPC__) || defined(__NDPX__)
  #define KHAOS_COMPILER_Microway 1
#elif defined(__sgi) || defined(sgi)
  #define KHAOS_COMPILER_MIPSpro 1
  #if defined(_SGI_COMPILER_VERSION)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((_SGI_COMPILER_VERSION) / 100) % 10, ((_SGI_COMPILER_VERSION) / 10) % 10, (_SGI_COMPILER_VERSION) % 10)
  #elif defined(_COMPILER_VERSION)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((_COMPILER_VERSION) / 100) % 10, ((_COMPILER_VERSION) / 10) % 10, (_COMPILER_VERSION) % 10)
  #endif
#elif defined(MIRACLE)
  #define KHAOS_COMPILER_Miracle 1
#elif defined(__MRC__) || defined(MPW_C) || defined(MPW_CPLUS)
  #define KHAOS_COMPILER_MPW 1
  #if defined(__MRC__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__MRC__ & 0xFF00) >> 8, (__MRC__ & 0xFF), 0)
  #endif
#elif defined(__CC_NORCROFT)
  #define KHAOS_COMPILER_Norcroft 1
  #define KHAOS_COMPILER_VERSION  KHAOS_SET_VERSION(((__ARMCC_VERSION * 100) / 100), (__ARMCC_VERSION * 100) % 100, 0)
#elif defined(__NWCC__)
  #define KHAOS_COMPILER_NWCC 1
#elif defined(__OPEN64__) || defined(__OPENCC__)
  #define KHAOS_COMPILER_Open64        1
  #define KHAOS_COMPILER_VERSION       KHAOS_SET_VERSION(__OPENCC__, __OPENCC_MINOR__, (_OPENCC_PATCHLEVEL__ * 10) / 10)
  #define KHAOS_COMPILER_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK((_OPENCC_PATCHLEVEL__ * 10) % 10)
#elif defined(ORA_PROC)
  #define KHAOS_COMPILER_Oracle 1
#elif defined(__SUNPRO_CC) || defined(__SUNPRO_C)
  #define KHAOS_COMPILER_Solaris 1
  #if defined(__SUNPRO_CC)
    #if(__SUNPRO_CC < 0x5100)
      #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__SUNPRO_CC & 0xF00) >> 8, (__SUNPRO_CC & 0xF0) >> 4, (__SUNPRO_CC & 0xF))
    #else
      #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__SUNPRO_CC & 0xFF000) >> 12, (__SUNPRO_CC & 0xFF0) >> 4, (__SUNPRO_CC & 0xF))
    #endif
  #elif defined(__SUNPRO_C)
    #if(__SUNPRO_C < 0x5100)
      #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__SUNPRO_C & 0xF00) >> 8, (__SUNPRO_C & 0xF0) >> 4, (__SUNPRO_C & 0xF))
    #else
      #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__SUNPRO_C & 0xFF000) >> 12, (__SUNPRO_C & 0xFF0) >> 4, (__SUNPRO_C & 0xF))
    #endif
  #endif
#elif defined(__PACIFIC__)
  #define KHAOS_COMPILER_Pacific 1
#elif defined(_PACC_VER)
  #define KHAOS_COMPILER_Palm          1
  #define KHAOS_COMPILER_VERSION       KHAOS_SET_VERSION((_PACC_VER & 0xF0000000) >> 28, (_PACC_VER & 0xFF00000) >> 20, (_PACC_VER & 0xFF000) >> 12)
  #define KHAOS_COMPILER_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK((_PACC_VER & 0xFFF))
#elif defined(__POCC__)
  #define KHAOS_COMPILER_Pelles  1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__POCC__) / 100) % 10, (__POCC__) % 100, 0)
#elif defined(__PGI)
  #define KHAOS_COMPILER_Portland 1
  #if defined(__PGIC__) && defined(__PGIC_MINOR__) && defined(__PGIC_PATCHLEVEL__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(__PGIC__, __PGIC_MINOR__, __PGIC_PATCHLEVEL__)
  #endif
#elif defined(__RENESAS__) || defined(__HITACHI__)
  #define KHAOS_COMPILER_Renesas 1
  #if defined(__RENESAS_VERSION__)
    #if __RENESAS_VERSION__ >= 0x1000000
      #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__RENESAS_VERSION__ & 0xFF000000) >> 24, (__RENESAS_VERSION__ & 0xFF0000) >> 16, (__RENESAS_VERSION__ & 0xFF00) >> 8)
    #else
      #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__RENESAS_VERSION__ & 0xFF00) >> 8, (__RENESAS_VERSION__ & 0xFF), 0)
    #endif
  #elif defined(__HITACHI_VERSION__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__HITACHI_VERSION__ & 0xFF00) >> 8, (__HITACHI_VERSION__ & 0xFF), 0)
  #endif
#elif defined(SASC) || defined(__SASC) || defined(__SASC__)
  #define KHAOS_COMPILER_SASC 1
  #if defined(__SASC__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__SASC__) / 100) % 10, (__SASC__) % 100, 0)
  #elif defined(__VERSION__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(__VERSION__, __REVISION__, 0)
  #endif
#elif defined(_SCO_DS)
  #define KHAOS_COMPILER_SCO 1
#elif defined(SDCC)
  #define KHAOS_COMPILER_SDCC    1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((SDCC) / 100) % 10, ((SDCC) / 10) % 10, (SDCC) % 10)
#elif defined(__SNC__)
  #define KHAOS_COMPILER_SNC 1
#elif defined(__VOSC__)
  #define KHAOS_COMPILER_Stratus 1
  #if __VOSC__ == 0
    #define KHAOS_COMPILER_StratusKR 1
  #elif __VOSC__ == 1
    #define KHAOS_COMPILER_StratusANSI 1
  #endif
#elif defined(__SC__)
  #define KHAOS_COMPILER_Symantec 1
  #define KHAOS_COMPILER_VERSION  KHAOS_SET_VERSION((__SC__ & 0xFF00) >> 8, (__SC__ & 0xFF), 0)
#elif defined(__TenDRA__)
  #define KHAOS_COMPILER_Tendra 1
#elif defined(__TI_COMPILER_VERSION__) || defined(_TMS320C6X)
  #define KHAOS_COMPILER_TI 1
  #if defined(__TI_COMPILER_VERSION__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__TI_COMPILER_VERSION__ / 1000000) % 1000, (__TI_COMPILER_VERSION__ / 1000) % 1000, __TI_COMPILER_VERSION__ % 1000)
  #endif
#elif defined(THINKC3) || defined(THINKC4)
  #define KHAOS_COMPILER_Think 1
  #if defined(THINKC3)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(3, 0, 0)
  #elif defined(THINKC4)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(4, 0, 0)
  #endif
#elif defined(__TINYC__)
  #define KHAOS_COMPILER_Tiny 1
#elif defined(__TURBOC__)
  #define KHAOS_COMPILER_Turbo 1
  #if __TURBOC__ < 0x295 || __TURBOC__ > 0x400
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__TURBOC__ & 0xFF00) >> 8, (__TURBOC__ & 0xFF), 0)
  #endif
#elif defined(_UCC)
  #define KHAOS_COMPILER_Ultimate 1
  #define KHAOS_COMPILER_VERSION  KHAOS_SET_VERSION(_MAJOR_REV, _MINOR_REV, 0)
#elif defined(__USLC__)
  #define KHAOS_COMPILER_USLC    1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__SCO_VERSION__ / 10000000), (__SCO_VERSION__ / 100000) % 100)
#elif defined(__VBCC__)
  #define KHAOS_COMPILER_VBCC 1
#elif defined(__WATCOMC__)
  #define KHAOS_COMPILER_Watcom  1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(((__WATCOMC__) / 100) % 100, (__WATCOMC__) % 100, 0)
#elif defined(__ZTC__)
  #define KHAOS_COMPILER_Zortech 1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION((__ZTC__ & 0xF00) >> 8, (__ZTC__ & 0xF0) >> 4, (__ZTC__ & 0xF))
#elif defined(__clang__)
  //Should be include before gcc as it defined some macro of GCC and MSVC
  //Note that marketing version numbers should not be used to check for language features, as different vendors use different numbering schemes. Instead, use the Feature Checking Macros.
  #if defined(__apple_build_version__)
    #define KHAOS_COMPILER_AppleClang 1
  #endif
  #define KHAOS_COMPILER_Clang   1
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(__clang_major__, __clang_minor__, __clang_patchlevel__)
#elif defined(__llvm__)
  //Should be after clang because clang mimic llvm
  #define KHAOS_COMPILER_LLVM 1
#elif defined(__GNUC__) || defined(__GNUG__)
  #define KHAOS_COMPILER_GCC 1
  #if defined(__GNUC_PATCHLEVEL__)
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__)
  #else
    #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(__GNUC__, __GNUC_MINOR__, 0)
  #endif
#else
  #define KHAOS_COMPILER_Unknown 1
#endif

#if !defined(KHAOS_COMPILER_VERSION)
  #define KHAOS_COMPILER_VERSION KHAOS_SET_VERSION(0, 0, 0)
#endif

#if !defined(KHAOS_COMPILER_VERSION_TWEAK)
  #define KHAOS_COMPILER_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(0)
#endif

/**
 * \hideinitializer Detect the emulated compilers.
 *
 * Detected emulated compilers are :
 *
 * Clang :
 *
 * \note check with ClangEmulated and KHAOS_CLANG_EMULATED_VERSION
 *
 * LLVM :
 *
 * \note check with LLVMEmulated
 *
 * GCC :
 *
 * \note check with GCCEmulated KHAOS_GCC_EMULATED_VERSION
 *
 **/
#if defined(__clang__)
  #define KHAOS_COMPILER_ClangEmulated 1
  #if defined(__clang_major__)
    #define KHAOS_CLANG_EMULATED_VERSION KHAOS_SET_VERSION(__clang_major__, __clang_minor__, __clang_patchlevel__)
  #endif
#else
  #define KHAOS_COMPILER_ClangEmulated 0
  #define KHAOS_CLANG_EMULATED_VERSION KHAOS_SET_VERSION(0, 0, 0)
#endif
#define KHAOS_CLANG_EMULATED_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(0, 0, 0)

#if defined(__GNUC__) || defined(__GNUG__)
  #define KHAOS_COMPILER_GCCEmulated 1
  #if defined(__GNUC_PATCHLEVEL__)
    #define KHAOS_GCC_EMULATED_VERSION KHAOS_SET_VERSION(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__)
  #else
    #define KHAOS_GCC_EMULATED_VERSION KHAOS_SET_VERSION(__GNUC__, __GNUC_MINOR__, 0)
  #endif
#else
  #define KHAOS_COMPILER_GCCEmulated 0
  #define KHAOS_GCC_EMULATED_VERSION KHAOS_SET_VERSION(0, 0, 0)
#endif
#define KHAOS_GCC_EMULATED_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(0)


#if defined(__llvm__)
  #define KHAOS_COMPILER_LLVMEmulated 1
#else
  #define KHAOS_COMPILER_LLVMEmulated 0
#endif
#define KHAOS_LLVM_EMULATED_VERSION KHAOS_SET_VERSION(0, 0, 0)
#define KHAOS_LLVM_EMULATED_VERSION_TWEAK KHAOS_SET_VERSION_TWEAK(0)


//Set to 0 to avoid warning
#if !defined(KHAOS_COMPILER_ACC)
  #define KHAOS_COMPILER_ACC 0
#endif
#if !defined(KHAOS_COMPILER_AltiumMicroblaze)
  #define KHAOS_COMPILER_AltiumMicroblaze 0
#endif
#if !defined(KHAOS_COMPILER_Altium)
  #define KHAOS_COMPILER_Altium 0
#endif
#if !defined(KHAOS_COMPILER_Amsterdam)
  #define KHAOS_COMPILER_Amsterdam 0
#endif
#if !defined(KHAOS_COMPILER_ARM)
  #define KHAOS_COMPILER_ARM 0
#endif
#if !defined(KHAOS_COMPILER_Aztec)
  #define KHAOS_COMPILER_Aztec 0
#endif
#if !defined(KHAOS_COMPILER_Borland)
  #define KHAOS_COMPILER_Borland 0
#endif
#if !defined(KHAOS_COMPILER_CC65)
  #define KHAOS_COMPILER_CC65 0
#endif
#if !defined(KHAOS_COMPILER_Comeau)
  #define KHAOS_COMPILER_Comeau 0
#endif
#if !defined(KHAOS_COMPILER_Compaq)
  #define KHAOS_COMPILER_Compaq 0
#endif
#if !defined(KHAOS_COMPILER_Convex)
  #define KHAOS_COMPILER_Convex 0
#endif
#if !defined(KHAOS_COMPILER_Compcert)
  #define KHAOS_COMPILER_Compcert 0
#endif
#if !defined(KHAOS_COMPILER_Coverity)
  #define KHAOS_COMPILER_Coverity 0
#endif
#if !defined(KHAOS_COMPILER_CrayC)
  #define KHAOS_COMPILER_CrayC 0
#endif
#if !defined(KHAOS_COMPILER_Diab)
  #define KHAOS_COMPILER_Diab 0
#endif
#if !defined(KHAOS_COMPILER_DICE)
  #define KHAOS_COMPILER_DICE 0
#endif
#if !defined(KHAOS_COMPILER_DigitalMars)
  #define KHAOS_COMPILER_DigitalMars 0
#endif
#if !defined(KHAOS_COMPILER_Dignus)
  #define KHAOS_COMPILER_Dignus 0
#endif
#if !defined(KHAOS_COMPILER_DJGPP)
  #define KHAOS_COMPILER_DJGPP 0
#endif
#if !defined(KHAOS_COMPILER_EDG)
  #define KHAOS_COMPILER_EDG 0
#endif
#if !defined(KHAOS_COMPILER_EKOPath)
  #define KHAOS_COMPILER_EKOPath 0
#endif
#if !defined(KHAOS_COMPILER_Emscripten)
#define KHAOS_COMPILER_Emscripten 0
#endif
#if !defined(KHAOS_COMPILER_Fujitsu)
  #define KHAOS_COMPILER_Fujitsu 0
#endif
#if !defined(KHAOS_COMPILER_GCCXML)
  #define KHAOS_COMPILER_GCCXML 0
#endif
#if !defined(KHAOS_COMPILER_GreenHills)
  #define KHAOS_COMPILER_GreenHills 0
#endif
#if !defined(KHAOS_COMPILER_HPCC)
  #define KHAOS_COMPILER_HPCC 0
#endif
#if !defined(KHAOS_COMPILER_HPaCC)
  #define KHAOS_COMPILER_HPaCC 0
#endif
#if !defined(KHAOS_COMPILER_IAR)
  #define KHAOS_COMPILER_IAR 0
#endif
#if !defined(KHAOS_COMPILER_IBM)
  #define KHAOS_COMPILER_IBM 0
#endif
#if !defined(KHAOS_COMPILER_IBMClang)
  #define KHAOS_COMPILER_IBMClang 0
#endif
#if !defined(KHAOS_COMPILER_IBMLegacy)
  #define KHAOS_COMPILER_IBMLegacy 0
#endif
#if !defined(KHAOS_COMPILER_IBMC370)
  #define KHAOS_COMPILER_IBMC370 0
#endif
#if !defined(KHAOS_COMPILER_IBMMVS)
  #define KHAOS_COMPILER_IBMMVS 0
#endif
#if !defined(KHAOS_COMPILER_IBMOS390)
  #define KHAOS_COMPILER_IBMOS390 0
#endif
#if !defined(KHAOS_COMPILER_IBMZOS)
  #define KHAOS_COMPILER_IBMZOS 0
#endif
#if !defined(KHAOS_COMPILER_ImageCraft)
  #define KHAOS_COMPILER_ImageCraft 0
#endif
#if !defined(KHAOS_COMPILER_Intel)
  #define KHAOS_COMPILER_Intel 0
#endif
#if !defined(KHAOS_COMPILER_Kai)
  #define KHAOS_COMPILER_Kai 0
#endif
#if !defined(KHAOS_COMPILER_KeilCarm)
  #define KHAOS_COMPILER_KeilCarm 0
#endif
#if !defined(KHAOS_COMPILER_KeilC166)
  #define KHAOS_COMPILER_KeilC166 0
#endif
#if !defined(KHAOS_COMPILER_KeilC51)
  #define KHAOS_COMPILER_KeilC51 0
#endif
#if !defined(KHAOS_COMPILER_LCC)
  #define KHAOS_COMPILER_LCC 0
#endif
#if !defined(KHAOS_COMPILER_Metaware)
  #define KHAOS_COMPILER_Metaware 0
#endif
#if !defined(KHAOS_COMPILER_Metrowerks)
  #define KHAOS_COMPILER_Metrowerks 0
#endif
#if !defined(KHAOS_COMPILER_MSVC)
  #define KHAOS_COMPILER_MSVC 0
#endif
#if !defined(KHAOS_COMPILER_Microtec)
  #define KHAOS_COMPILER_Microtec 0
#endif
#if !defined(KHAOS_COMPILER_Microway)
  #define KHAOS_COMPILER_Microway 0
#endif
#if !defined(KHAOS_COMPILER_MIPSpro)
  #define KHAOS_COMPILER_MIPSpro 0
#endif
#if !defined(KHAOS_COMPILER_Miracle)
  #define KHAOS_COMPILER_Miracle 0
#endif
#if !defined(KHAOS_COMPILER_MPW)
  #define KHAOS_COMPILER_MPW 0
#endif
#if !defined(KHAOS_COMPILER_Norcroft)
  #define KHAOS_COMPILER_Norcroft 0
#endif
#if !defined(KHAOS_COMPILER_NWCC)
  #define KHAOS_COMPILER_NWCC 0
#endif
#if !defined(KHAOS_COMPILER_Open64)
  #define KHAOS_COMPILER_Open64 0
#endif
#if !defined(KHAOS_COMPILER_Oracle)
  #define KHAOS_COMPILER_Oracle 0
#endif
#if !defined(KHAOS_COMPILER_Solaris)
  #define KHAOS_COMPILER_Solaris 0
#endif
#if !defined(KHAOS_COMPILER_Pacific)
  #define KHAOS_COMPILER_Pacific 0
#endif
#if !defined(KHAOS_COMPILER_Palm)
  #define KHAOS_COMPILER_Palm 0
#endif
#if !defined(KHAOS_COMPILER_Pelles)
  #define KHAOS_COMPILER_Pelles 0
#endif
#if !defined(KHAOS_COMPILER_Portland)
  #define KHAOS_COMPILER_Portland 0
#endif
#if !defined(KHAOS_COMPILER_Renesas)
  #define KHAOS_COMPILER_Renesas 0
#endif
#if !defined(KHAOS_COMPILER_SASC)
  #define KHAOS_COMPILER_SASC 0
#endif
#if !defined(KHAOS_COMPILER_SCO)
  #define KHAOS_COMPILER_SCO 0
#endif
#if !defined(KHAOS_COMPILER_SDCC)
  #define KHAOS_COMPILER_SDCC 0
#endif
#if !defined(KHAOS_COMPILER_SNC)
  #define KHAOS_COMPILER_SNC 0
#endif
#if !defined(KHAOS_COMPILER_Stratus)
  #define KHAOS_COMPILER_Stratus 0
#endif
#if !defined(KHAOS_COMPILER_StratusKR)
  #define KHAOS_COMPILER_StratusKR 0
#endif
#if !defined(KHAOS_COMPILER_StratusANSI)
  #define KHAOS_COMPILER_StratusANSI 0
#endif
#if !defined(KHAOS_COMPILER_Symantec)
  #define KHAOS_COMPILER_Symantec 0
#endif
#if !defined(KHAOS_COMPILER_Tendra)
  #define KHAOS_COMPILER_Tendra 0
#endif
#if !defined(KHAOS_COMPILER_TI)
  #define KHAOS_COMPILER_TI 0
#endif
#if !defined(KHAOS_COMPILER_Think)
  #define KHAOS_COMPILER_Think 0
#endif
#if !defined(KHAOS_COMPILER_Tiny)
  #define KHAOS_COMPILER_Tiny 0
#endif
#if !defined(KHAOS_COMPILER_Turbo)
  #define KHAOS_COMPILER_Turbo 0
#endif
#if !defined(KHAOS_COMPILER_Ultimate)
  #define KHAOS_COMPILER_Ultimate 0
#endif
#if !defined(KHAOS_COMPILER_USLC)
  #define KHAOS_COMPILER_USLC 0
#endif
#if !defined(KHAOS_COMPILER_VBCC)
  #define KHAOS_COMPILER_VBCC 0
#endif
#if !defined(KHAOS_COMPILER_Watcom)
  #define KHAOS_COMPILER_Watcom 0
#endif
#if !defined(KHAOS_COMPILER_Zortech)
  #define KHAOS_COMPILER_Zortech 0
#endif
#if !defined(KHAOS_COMPILER_AppleClang)
  #define KHAOS_COMPILER_AppleClang 0
#endif
#if !defined(KHAOS_COMPILER_Clang)
  #define KHAOS_COMPILER_Clang 0
#endif
#if !defined(KHAOS_COMPILER_LLVM)
  #define KHAOS_COMPILER_LLVM 0
#endif
#if !defined(KHAOS_COMPILER_GCC)
  #define KHAOS_COMPILER_GCC 0
#endif
#if !defined(KHAOS_COMPILER_Unknown)
  #define KHAOS_COMPILER_Unknown 0
#endif

#endif
