#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "khaos/Languages.h"

TEST_CASE("testing the Language CXX")
{
#if KHAOS_LANGUAGE_IS(CPP)
  CHECK(true);
#else
  CHECK(false);
#endif

#if KHAOS_LANGUAGE_IS_EQUAL(CXX11)
  CHECK(true);
#else
  CHECK(false);
#endif

#if KHAOS_LANGUAGE_IS_GREATER_EQUAL(CXX97)
  CHECK(true);
#else
  CHECK(false);
#endif

#if KHAOS_LANGUAGE_IS_LOWER_EQUAL(CXX11)
  CHECK(true);
#else
  CHECK(false);
#endif

#if KHAOS_LANGUAGE_IS_LOWER(CXX17)
  CHECK(true);
#else
  CHECK(false);
#endif

#if KHAOS_LANGUAGE_IS(ISO)
  CHECK(true);
#else
  CHECK(false);
#endif

#if KHAOS_LANGUAGE_IS(Extensions)
  CHECK(false);
#else
  CHECK(true);
#endif

}
