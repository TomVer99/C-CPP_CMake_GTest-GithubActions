set(Sources
    gtest_validation_test.cpp
)

set(TestName ${ProjectTestName}_YourTestName)

add_executable(${TestName} ${Sources})

target_link_libraries(${TestName} PUBLIC
    gtest_main
    # Add your library to test here
    ExampleNestedTopLib
)

add_test(
    NAME ${TestName}
    COMMAND ${TestName}
)

add_dependencies(coverage ${TestName})
