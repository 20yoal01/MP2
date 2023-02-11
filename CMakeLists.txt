cmake_minimum_required(VERSION 3.24)
project(MP2)

set(CMAKE_CXX_STANDARD 17)

add_executable(MP2 main.cpp Element/Paragraph/Paragraph.cpp Element/Element.cpp Element/Creator/ElementCreator.cpp Element/List/List.cpp Element/Header/Header.cpp Element/Container/ElementContainer.cpp Element/Iterator/ElementIterator.cpp)
