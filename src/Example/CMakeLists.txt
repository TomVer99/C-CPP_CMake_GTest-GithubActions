cmake_minimum_required(VERSION 3.23.1)

# Add headers here
set(Headers
    example2.hpp
)

# Add sources here
set(Sources
    example2.cpp
)

# Makes a library from the sources and headers. First argument is the name of the library (used in src/CMakeLists.txt).
add_library(ExampleLib STATIC ${Sources} ${Headers})
