#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>

#include "doctest/doctest.h"
#include "khaos/Compiler.h"

TEST_CASE("Testing the Compiler")
{
  std::cout << KHAOS_COMPILER_VERSION << " " << KHAOS_COMPILER_VERSION_TWEAK << " " << std::endl;
#if COMPILER_IS(Clang)
  std::cout << KHAOS_COMPILER_GCCEmulated << "  " << KHAOS_GCC_EMULATED_VERSION << "  " << KHAOS_COMPILER_LLVMEmulated << std::endl;
#endif
}
