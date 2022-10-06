cmake_minimum_required(VERSION 3.23.1)

# Add headers here
set(Headers
    example.hpp
)

# Add sources here
set(Sources
    main.cpp
    example.cpp
)

add_library(${ProjectName} STATIC ${Sources} ${Headers}) # Builds a static library for gtest

add_executable(${ProjectRunName} ${Sources} ${Headers}) # Builds an executable to run
