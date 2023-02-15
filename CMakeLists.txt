cmake_minimum_required(VERSION 3.24)
project(MP2)

set(CMAKE_CXX_STANDARD 17)

add_executable(MP2 main.cpp Element/Paragraph/Paragraph.cpp Element/Header/Header.cpp Element/Table/Table.cpp Element/Element.cpp Element/List/List.cpp Element/List/ListElement.cpp Element/List/ListItem.cpp)
