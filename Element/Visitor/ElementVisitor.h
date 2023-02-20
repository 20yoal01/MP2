//
// Created by yousi on 2023-02-20.
//

#ifndef MP2_ELEMENTVISITOR_H
#define MP2_ELEMENTVISITOR_H



#include "../Element.h"

class Paragraph;
class Header;
class List;
class ListItem;

class ElementVisitor {
public:
    virtual std::string convertParagraph(const Paragraph* element) const = 0;
    virtual std::string convertHeader(const Header* element) const = 0;
    virtual std::string convertList(std::string text) const = 0;
    virtual std::string convertListItem(const ListItem* element) const = 0;
};


#endif //MP2_ELEMENTVISITOR_H
