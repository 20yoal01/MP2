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
    virtual void convertParagraph(const Paragraph* element) const = 0;
    virtual void convertHeader(const Header* element) const = 0;
    virtual void convertList(const List* element) const = 0;
    virtual void convertListItem(const ListItem* element) const = 0;
};


#endif //MP2_ELEMENTVISITOR_H
