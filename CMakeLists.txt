cmake_minimum_required(VERSION 3.6)
project(CodingInterview)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp header.h IsUnique.cpp CheckPermutation.cpp URLify.cpp TestPalindromePermutation.cpp)
add_executable(CodingInterview ${SOURCE_FILES})