cmake_minimum_required(VERSION 3.24)
project(MP2)

set(CMAKE_CXX_STANDARD 17)

add_executable(MP2 main.cpp Element/Paragraph/Paragraph.cpp Element/Header/Header.cpp Element/Element.cpp Element/List/List.cpp Element/List/ListElement.cpp Element/List/ListItem.cpp Document/Builder/ConcreteDocumentBuilder.cpp Document/Director/DocumentDirector.cpp Document/Document.cpp Document/DocumentFacade.cpp Element/Creator/ElementCreator.cpp Element/ElementBuilder/HeaderBuilder/HeaderBuilder.cpp Element/ElementBuilder/ParagraphBuilder/ParagraphBuilder.cpp Element/ElementBuilder/ListBuilder/ListBuilder.cpp Element/Visitor/HTMLVisitor/HTMLVisitor.cpp Element/Visitor/MarkDownVisitor/MarkDownVisitor.cpp Element/Visitor/DefaultVisitor/DefaultVisitor.cpp)
