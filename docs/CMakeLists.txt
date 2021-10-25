include(Documentations)
set(DOXYGEN_PROJECT_LOGO "${PROJECT_SOURCE_DIR}/docs/imgs/icon.png")
doxyfile_docs("${PROJECT_SOURCE_DIR}/include/" "${PROJECT_SOURCE_DIR}/src/")
