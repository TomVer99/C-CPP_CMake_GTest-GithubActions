add_executable(${ProjectRunName} main.cpp)

# All the libs need to be linked here to make them available to the executable
target_link_libraries(${ProjectRunName} PRIVATE
    ExampleLib
    ExampleNestedTopLib
    ExampleNestedBottomLib
)

add_subdirectory(Example)
add_subdirectory(NestedDirExample)
