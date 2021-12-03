#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "khaos/OS.h"

#include "doctest/doctest.h"

TEST_CASE("Testing the OS")
{
#if OS_IS(Linux)
  std::cout << "I'm Linux" << std::endl;
#endif

#if OS_IS(UNIX)
  std::cout << "I'm Unix" << std::endl;
#endif

#if OS_IS(MacOS)
  std::cout << "I'm MacOS" << std::endl;
#endif

#if OS_IS(Windows)
  std::cout << "I'm Windows" << std::endl;
#endif
}
