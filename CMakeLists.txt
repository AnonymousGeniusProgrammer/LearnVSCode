cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

project(MYSWAP)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
OPTION(BUILD_DOCS "build documentation for the AOS_Optimizer library" ON)

add_executable(my_cmake_swap src/main.cpp src/swap.cpp)

IF(BUILD_DOCS)
find_package(Doxygen)
if(DOXYGEN_FOUND)
# set input and output files
set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/doc/Doxyfile.in)
set(DOXYGEN_OUT ${CMAKE_CURRENT_SOURCE_DIR}/doc/Doxyfile)
# request to configure the file
configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
message("Generating Doxygen documentation target")
# note the option ALL which allows to build the docs together with the
# application
add_custom_target(
  doc_doxygen ALL
  COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  COMMENT "Building documentation with Doxygen"
  VERBATIM)
else(DOXYGEN_FOUND)
message(
  "Doxygen needs to be installed to generate the doxygen documentation")

endif(DOXYGEN_FOUND)
endif(BUILD_DOCS)