include(CheckCXXCompilerFlag)
include(CheckCCompilerFlag)
include(CMakePackageConfigHelpers)

add_library(KhaosFlags INTERFACE)
add_library(Khaos::KhaosFlags ALIAS KhaosFlags)
# Compiler flags
set(COMPILER_FLAG_RESULT)
# On MSVC
if(MSVC)
  include(InstallRequiredSystemLibraries)
  # 1) The /Zc:__cplusplus
  # Compiler option enables the __cplusplus preprocessor macro to report an updated value for recent C++ language standards support.
  # By default, Visual Studio always returns the value 199711L for the __cplusplus preprocessor macro.
  # https://docs.microsoft.com/en-us/cpp/build/reference/zc-cplusplus?view=msvc-170
  check_cxx_compiler_flag("/Zc:__cplusplus" COMPILER_FLAG_RESULT)
  if(COMPILER_FLAG_RESULT)
    target_compile_options(KhaosFlags INTERFACE $<$<COMPILE_LANGUAGE:CXX>:/Zc:__cplusplus>)
  endif()
  # 2) /EH (Exception handling model)
  # https://docs.microsoft.com/en-us/cpp/build/reference/eh-exception-handling-model?view=msvc-170
  #Specifying /EHa and trying to handle all exceptions by using catch(...) can be dangerous.
  #In most cases, asynchronous exceptions are unrecoverable and should be considered fatal. Catching them and proceeding can cause process corruption and lead to bugs that are hard to find and fix.
  #Even though Windows and Visual C++ support SEH, we strongly recommend that you use ISO-standard C++ exception handling (/EHsc or /EHs).
  #It makes your code more portable and flexible. There may still be times you have to use SEH in legacy code or for particular kinds of programs.
  #It's required in code compiled to support the common language runtime (/clr), for example. For more information, see Structured exception handling.
  #We recommend that you never link object files compiled using /EHa to ones compiled using /EHs or /EHsc in the same executable module.
  #If you have to handle an asynchronous exception by using /EHa anywhere in your module, use /EHa to compile all the code in the module.
  #You can use structured exception handling syntax in the same module as code that's compiled by using /EHs. However, you can't mix the SEH syntax with C++ try, throw, and catch in the same function.
  check_cxx_compiler_flag("/EHscr" COMPILER_FLAG_RESULT)
  if(COMPILER_FLAG_RESULT)
    target_compile_options(KhaosFlags INTERFACE $<$<COMPILE_LANGUAGE:CXX>:/EHscr>)
  endif()
  # 3) /volatile:iso
  #Selects strict volatile semantics as defined by the ISO-standard C++ language.
  #Acquire/release semantics are not guaranteed on volatile accesses. If the compiler targets ARM, this is the default interpretation of volatile.
  check_cxx_compiler_flag("/volatile:iso" COMPILER_FLAG_RESULT)
  if(COMPILER_FLAG_RESULT)
    target_compile_options(KhaosFlags INTERFACE $<$<COMPILE_LANGUAGE:CXX>:/volatile:iso>)
  endif()
  #4) /Zc:inline (Remove unreferenced COMDAT)
  check_cxx_compiler_flag("/Zc:inline" COMPILER_FLAG_RESULT)
  if(COMPILER_FLAG_RESULT)
    target_compile_options(KhaosFlags INTERFACE $<$<COMPILE_LANGUAGE:CXX>:/Zc:inline>)
  endif()
  #5) /Zc:preprocessor or /experimental:preprocessor
  check_cxx_compiler_flag("/Zc:preprocessor" COMPILER_FLAG_RESULT)
  if(COMPILER_FLAG_RESULT)
    target_compile_options(KhaosFlags INTERFACE $<$<COMPILE_LANGUAGE:CXX>:/Zc:preprocessor>)
  else()
    check_cxx_compiler_flag("/experimental:preprocessor" COMPILER_FLAG_RESULT)
    if(COMPILER_FLAG_RESULT)
      target_compile_options(KhaosFlags INTERFACE $<$<COMPILE_LANGUAGE:CXX>:/experimental:preprocessor>)
    endif()
  endif()
  #6) /Zc:rvalueCast
  check_cxx_compiler_flag("/Zc:rvalueCast" COMPILER_FLAG_RESULT)
  if(COMPILER_FLAG_RESULT)
    target_compile_options(KhaosFlags INTERFACE $<$<COMPILE_LANGUAGE:CXX>:/Zc:rvalueCast>)
  endif()
  #7) /Zc:strictStrings
  check_cxx_compiler_flag("/Zc:strictStrings" COMPILER_FLAG_RESULT)
  if(COMPILER_FLAG_RESULT)
    target_compile_options(KhaosFlags INTERFACE $<$<COMPILE_LANGUAGE:CXX>:/Zc:strictStrings>)
  endif()
  #8) /Zc:ternary
  check_cxx_compiler_flag("/Zc:ternary" COMPILER_FLAG_RESULT)
  if(COMPILER_FLAG_RESULT)
    target_compile_options(KhaosFlags INTERFACE $<$<COMPILE_LANGUAGE:CXX>:/Zc:ternary>)
  endif()
  target_compile_options(KhaosFlags INTERFACE $<$<COMPILE_LANGUAGE:CXX>:/nologo>)
endif()

add_library(Khaos INTERFACE)
target_include_directories(Khaos INTERFACE "$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>"  "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>")
target_link_libraries(Khaos INTERFACE Khaos::KhaosFlags)
add_library(Khaos::Khaos ALIAS Khaos)
