set(CMakeMinimumVersion 3.22.1)

cmake_minimum_required(VERSION ${CMakeMinimumVersion})

set(ProjectName CHANGE_ME) # <Var name> <Name of the project>
set(ProjectRunName ${ProjectName}_Run) # <Var name> <Name of the executable>
set(ProjectTestName ${ProjectName}_Test) # <Var name> <Name of the executable>

project(${ProjectName} C CXX) # project uses C and C++ languages

set(CMAKE_C_STANDARD 99) # C standard is C99
set(CMAKE_CXX_STANDARD 17) # C++ standard is C++17
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

# get google test
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.12.1
)
FetchContent_MakeAvailable(googletest)
# get google test

add_subdirectory(src) # add src subdirectory
add_subdirectory(test) # add test subdirectory
