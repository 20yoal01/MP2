//
// Created by Gorillaspluch on 2023-02-20.
//

#include "DefaultVisitor.h"
std::string DefaultVisitor::convertParagraph(const Paragraph *element) const {
    return element->getText();
}

std::string DefaultVisitor::convertHeader(const Header *element) const {
    return element->getText();
}

std::string DefaultVisitor::convertList(std::string text) const {
    return text;
}

std::string DefaultVisitor::convertListItem(const ListItem *element) const {
    return element->getText();
}