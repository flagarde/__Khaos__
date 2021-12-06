#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "khaos/Language.h"

TEST_CASE("Testing the Language CXX")
{

#if LANGUAGE_IS(C)
  CHECK(false);
#else
  CHECK(true);
#endif

#if LANGUAGE_IS(CXX)
  CHECK(true);
#else
  CHECK(false);
#endif

#if LANGUAGE_IS_EQUAL(CXX14)
  CHECK(true);
#else
  CHECK(false);
#endif

#if LANGUAGE_IS_GREATER_EQUAL(CXX97)
  CHECK(true);
#else
  CHECK(false);
#endif

#if LANGUAGE_IS_LOWER_EQUAL(CXX14)
  CHECK(true);
#else
  CHECK(false);
#endif

#if LANGUAGE_IS_LOWER(CXX17)
  CHECK(true);
#else
  CHECK(false);
#endif

#if !LANGUAGE_IS(ISO)
  CHECK(true);
#else
  CHECK(false);
#endif

#if !LANGUAGE_IS(Extensions)
  CHECK(false);
#else
  CHECK(true);
#endif
}
