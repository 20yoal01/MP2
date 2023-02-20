//
// Created by yousi on 2023-02-20.
//

#ifndef MP2_HTMLVISITOR_H
#define MP2_HTMLVISITOR_H


#include "../ElementVisitor.h"

class HTMLVisitor : public ElementVisitor{
    void convertParagraph(const Paragraph* element) const override;
    void convertHeader(const Header* element) const override;
    void convertList(const List* element) const override;
    void convertListItem(const ListItem* element) const override;
};


#endif //MP2_HTMLVISITOR_H
