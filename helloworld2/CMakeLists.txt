# set minimum cmake version
cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)

# should be set from vscode task via the -D flag
if(DEFINED PROJECT_NAME)
	message(STATUS "project name var is ${PROJECT_NAME}")
else()
	message(STATUS "project name var is empty")
	set(PROJECT_NAME theProgram)
endif()

project(${PROJECT_NAME}
    VERSION 1.0.0
    LANGUAGES CXX
    DESCRIPTION "CMake project for C++."
    HOMEPAGE_URL "https://github.com/genedelisa/somerepo"
)

if(NOT CMAKE_BUILD_TYPE)
  message(STATUS "setting release type to Release")
  set(CMAKE_BUILD_TYPE Release)
else()
  message(STATUS "build type is ${CMAKE_BUILD_TYPE}")
endif()

 if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    message(STATUS "running Darwin")
 endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "AppleClang")
  message(STATUS "compiler id is AppleClang")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -stdlib=libc++ -pedantic -Wall")
else()
  message(STATUS "The compiler ${CMAKE_CXX_COMPILER_ID} is not configured.")
endif()


include_directories(include/)

file(GLOB_RECURSE MY_SRC
        src/*.cpp
        include/*.hpp
        include/*.h)

add_executable(${PROJECT_NAME}
        ${MY_SRC}
)
