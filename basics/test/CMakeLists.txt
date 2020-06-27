include(GoogleTestHelper)

add_googletest(
    TARGET max1_test
    SOURCE_FILES max1.cpp
    LIBRARIES tmp::basics
)
