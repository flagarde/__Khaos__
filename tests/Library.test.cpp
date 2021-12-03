#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "khaos/Library.h"

TEST_CASE("Testing the library")
{
#if C_LIBRARY_IS(GNU)
  std::cout<<"I'm GNU"<<std::endl;
#endif

#if CXX_LIBRARY_IS(GNU)
  std::cout<<"I'm GNU c++"<<std::endl;
#endif
}
