# set required version
cmake_minimum_required(VERSION 3.1)
# set compiler
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
# set project name
project(c-kad C)

add_executable(main main.c)