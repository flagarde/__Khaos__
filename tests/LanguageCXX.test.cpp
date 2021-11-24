#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"

#include "khaos/Languages.h"

TEST_CASE("testing the Language CXX"){
#if KHAOS_LANGUAGE_IS(cpp)
  CHECK(true);
#else
  CHECK(false);
#endif
}
