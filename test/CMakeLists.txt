cmake_minimum_required(VERSION 3.23.1)

# Add test source files here
set(Sources
    gtest_validation_test.cpp
)

add_executable(${ProjectTestName} ${Sources})

target_link_libraries(${ProjectTestName} PUBLIC
    gtest_main
    ${ProjectName}
)

add_test(
    NAME ${ProjectTestName}
    COMMAND ${ProjectTestName}
)
