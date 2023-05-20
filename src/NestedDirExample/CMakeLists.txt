set(Headers
    nestedTop.hpp
)

set(Sources
    nestedTop.cpp
)

add_library(ExampleNestedTopLib STATIC ${Sources} ${Headers})

target_include_directories(ExampleNestedTopLib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_subdirectory(NestedDir)
