#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "khaos/CXXStandards.h"

#include "doctest/doctest.h"

TEST_CASE("Testing the CXXStandards values")
{
  CHECK(KHAOS_STANDARD_CXX97 == 199711L);
  CHECK(KHAOS_STANDARD_CXX11 == 201103L);
  CHECK(KHAOS_STANDARD_CXX14 == 201402L);
  CHECK(KHAOS_STANDARD_CXX17 == 201703L);
  CHECK(KHAOS_STANDARD_CXX20 == 202002L);
}
