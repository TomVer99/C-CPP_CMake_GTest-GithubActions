cmake_minimum_required(VERSION 3.22.1)

set(ProjectName CHANGE_ME) # <Var name> <Name of the project>
set(ProjectRunName ${ProjectName}_Run) # <Var name> <Name of the executable>
set(ProjectTestName ${ProjectName}_Test) # <Var name> <Name of the executable>

# set output directories for executables and libraries
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/release/executables )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/release/libraries )
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/release/libraries )

project(${ProjectName} C CXX) # project uses C and C++ languages
set(CMAKE_C_STANDARD 99) # C standard is C99
set(CMAKE_CXX_STANDARD 20) # C++ standard is C++20
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

if(CMAKE_COMPILER_IS_GNUCXX)
  add_compile_options(-Wall -Wextra -Wpedantic)
  # add_compile_options(-Werror)
elseif(MSVC)
  add_compile_options(/W4)
  # add_compile_options(/WX)
endif()

enable_testing()

include(FetchContent)

# get google test
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.12.1
)
FetchContent_MakeAvailable(googletest)
# get google test

add_subdirectory(src) # add src subdirectory
add_subdirectory(test) # add test subdirectory
