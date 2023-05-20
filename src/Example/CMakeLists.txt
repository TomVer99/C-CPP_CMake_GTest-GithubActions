set(Headers
    example.hpp
)

set(Sources
    example.cpp
)

add_library(ExampleLib STATIC ${Sources} ${Headers})

target_include_directories(ExampleLib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
