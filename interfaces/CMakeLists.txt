cmake_minimum_required(VERSION 3.13)
project(interfaces_in_c)

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.c myclass.h iexample.h)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(interfaces_in_c ${SOURCE_FILES})
