cmake_minimum_required(VERSION 3.9)
project(arya)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(arya main.cpp src/BTreeNode.cpp include/BTreeNode.h src/BTree.cpp include/BTree.h)