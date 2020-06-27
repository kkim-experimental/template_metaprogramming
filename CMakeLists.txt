cmake_minimum_required(VERSION 3.5...3.10)
project(template_metaprogramming VERSION 1.0.0)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

enable_testing()
add_subdirectory(extern/googletest)

add_subdirectory(basics)
