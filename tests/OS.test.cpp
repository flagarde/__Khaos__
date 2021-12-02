#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "khaos/OS.h"

TEST_CASE("testing the Language CXX")
{

#if OS_IS(Linux)
  std::cout<<"I'm Linux"<<std::endl;
#endif

#if OS_IS(UNIX)
  std::cout<<"I'm Unix"<<std::endl;
#endif

#if OS_IS(MacOS)
  std::cout<<"I'm MacOS"<<std::endl;
#endif

#if OS_IS(Windows)
  std::cout<<"I'm Windows"<<std::endl;
#endif
}
