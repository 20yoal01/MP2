//
// Created by yousi on 2023-02-20.
//

#include "HTMLVisitor.h"

std::string HTMLVisitor::convertParagraph(const Paragraph *element) const {
    return "<p>" + element->getText() + "</p>";
}

std::string HTMLVisitor::convertHeader(const Header *element) const {
    return "<h1>" + element->getText() + "</h1>";
}

std::string HTMLVisitor::convertList(std::string text) const {
    return "<ul>" + text + "</ul>";
}

std::string HTMLVisitor::convertListItem(const ListItem *element) const {
    return "<li>" + element->getText() + "</li>";
}