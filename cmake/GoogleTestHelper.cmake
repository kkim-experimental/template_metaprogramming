include(CMakePackageConfigHelpers)
include(GoogleTest)

function(add_googletest)
    set(optionalArgs "")
    set(oneValueArgs TARGET)
    set(multipleValueArgs SOURCE_FILES LIBRARIES)
    cmake_parse_arguments(googletest
        "${optionalArgs}" "${oneValueArgs}" "${multipleValueArgs}" "${ARGV}"
    )

    message("Target: ${googletest_TARGET}")
    message("Source Files: ${googletest_SOURCE_FILES}")
    add_executable(${googletest_TARGET} ${googletest_SOURCE_FILES})

    target_link_libraries(${googletest_TARGET}
        PRIVATE
            gtest
            gmock
            gtest_main
            ${googletest_LIBRARIES}
    )

    gtest_discover_tests(${googletest_TARGET}
        PROPERTIES FOLDER tests
    )
endfunction()
