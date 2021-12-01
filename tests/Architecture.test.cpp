#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "khaos/Architecture.h"

#include "doctest/doctest.h"

TEST_CASE("testing the Architecture values")
{
#if ARCHITECTURE_IS(x86_64)
  std::cout<<"x86_64"<<std::endl;
#endif
}
