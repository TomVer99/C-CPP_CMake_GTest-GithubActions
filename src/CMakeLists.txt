cmake_minimum_required(VERSION ${CMakeMinimumVersion})

# Add headers here. If no headers, leave empty.
set(Headers
    example.hpp
)

# Add sources here. If no sources, leave empty.
set(Sources
    example.cpp
)

# Builds a static library for gtest
add_library(${ProjectName} STATIC ${Sources} ${Headers}) 

# Builds an executable to run
add_executable(${ProjectRunName} main.cpp ${Sources} ${Headers})

# Adds a subdirectory to the project
add_subdirectory(Example)

# Links code to test. Simply add more libraries after the example.
# This is not folder specific.
# target_link_libraries(${ProjectName} ExampleLib ExampleLib2)
target_link_libraries(${ProjectName} ExampleLib)

# Same as above, but for the executable
target_link_libraries(${ProjectRunName} ExampleLib)
