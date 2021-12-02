#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "khaos/Platform.h"

TEST_CASE("Testing the Platform")
{
#if PLATFORM_IS(MINGW)
std::cout<<"I'm MINGW"<<std::endl;
#endif

#if PLATFORM_IS(UWP) || PLATFORM_IS(WindowsDesktop) || PLATFORM_IS(WindowsPhone) || PLATFORM_IS(WindowsServer) || PLATFORM_IS(WindowsStore) || PLATFORM_IS(WindowsSystem)
std::cout<<"I'm UWP or WindowsDesktop or WindowsPhone or WindowsServer or WindowsStore or WindowsSystem"<<std::endl;
#endif

#if PLATFORM_IS(MINGWEmulated)
std::cout<<"I'm MINGWEmulated"<<std::endl;
#endif
}
