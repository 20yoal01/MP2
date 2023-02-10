cmake_minimum_required(VERSION 3.24)
project(MP2)

set(CMAKE_CXX_STANDARD 17)

add_executable(MP2 main.cpp Element/Paragraph/Paragraph.cpp Element/Element.cpp main.cpp Element/List/List.h Element/List/List.cpp Element/Header/Header.cpp)
