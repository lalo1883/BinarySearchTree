cmake_minimum_required(VERSION 3.27)
project(Trees)

set(CMAKE_CXX_STANDARD 17)

add_executable(Trees main.cpp
        BinarySearchTree.cpp
        BinarySearchTree.h)
