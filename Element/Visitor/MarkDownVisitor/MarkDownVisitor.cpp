//
// Created by Gorillaspluch on 2023-02-20.
//

#include "MarkDownVisitor.h"

std::string MarkDownVisitor::convertParagraph(const Paragraph *element) const {
    return element->getText();
}

std::string MarkDownVisitor::convertHeader(const Header *element) const {
    return "# " + element->getText();
}

std::string MarkDownVisitor::convertList(std::string text) const {
    return text;
}

std::string MarkDownVisitor::convertListItem(const ListItem *element) const {
    return "- " + element->getText();
}