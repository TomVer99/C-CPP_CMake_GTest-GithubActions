add_executable(${ProjectRunName} main.cpp)

# All the libs need to be linked here to make them available to the executable
target_link_libraries(${ProjectRunName} PRIVATE
    ExampleLib
    ExampleNestedTopLib
    ExampleNestedBottomLib
)

set(PROJECT_LIB_EXAMPLE_NAME exampleLib)
add_library(${PROJECT_LIB_EXAMPLE_NAME} INTERFACE)

# All the libs need to be linked here to make them available to the library
target_link_libraries(${PROJECT_LIB_EXAMPLE_NAME} INTERFACE
    ExampleLib
    ExampleNestedTopLib
    ExampleNestedBottomLib
)

add_subdirectory(Example)
add_subdirectory(NestedDirExample)
