#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "khaos/Features.h"

TEST_CASE("Testing the Features")
{

#if __has_cpp_attribute(carries_dependency)
  std::cout<<"has [[carries_dependency]]"<<std::endl;
#endif

}
