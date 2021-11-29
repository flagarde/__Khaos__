#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "khaos/CompilerMacros.h"

#include "doctest/doctest.h"

TEST_CASE("testing the Compiler macros")
{
#if COMPILER_IS(MSVC)
  std::cout<<"MSVC : "<<_MSC_FULL_VER<<" Macro "<<KHAOS_COMPILER_VERSION<<" "<<KHAOS_COMPILER_VERSION_TWEAK<<" KHAOS_VC_VERSION : "<<KHAOS_VC_VERSION<<std::endl;
#else
  std::cout<<KHAOS_COMPILER_VERSION<<" "<<KHAOS_COMPILER_VERSION_TWEAK<<" "<<std::endl;
#endif
}
