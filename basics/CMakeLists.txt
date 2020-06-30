project(basics)

include_directories(
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>"
    "$<INSTALL_INTERFACE:include>"
)

add_executable(max1 "src/max1.cpp")
add_executable(max2 "src/max2.cpp")
