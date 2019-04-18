cmake_minimum_required(VERSION 3.13)

project(myapp)

set(CMAKE_CXX_STANDARD 14)

set(LIB_TEST_PARSER_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/libtestparser)

include_directories(${LIB_TEST_PARSER_ROOT}/include)

add_subdirectory(libtestparser)

add_executable(myapp main.cpp)

target_link_libraries(myapp TestParser)

#install(TARGETS myapp DESTINATION bin)