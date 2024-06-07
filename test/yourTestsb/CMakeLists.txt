set(Sources
    gtest_validation_test_b.cpp
)

set(TestName ${ProjectTestName}_YourTestName_b)

add_executable(${TestName} ${Sources})

target_link_libraries(${TestName} PUBLIC
    gtest_main
    # Add your library to test here
    ExampleNestedBottomLib
)

add_test(
    NAME ${TestName}
    COMMAND ${TestName}
)

add_dependencies(coverage ${TestName})
