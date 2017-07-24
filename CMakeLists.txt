cmake_minimum_required(VERSION 3.8)
project(Library_V_Unique)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Library.cpp Library.h User.cpp User.h Book.cpp Book.h)
add_executable(Library_V_Unique ${SOURCE_FILES})