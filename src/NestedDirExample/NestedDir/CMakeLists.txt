set(Headers
    nestedBottom.hpp
)

set(Sources
    nestedBottom.cpp
)

add_library(ExampleNestedBottomLib STATIC ${Sources} ${Headers})

target_link_libraries(ExampleNestedBottomLib PRIVATE
    ExampleNestedTopLib
)

target_include_directories(ExampleNestedBottomLib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
