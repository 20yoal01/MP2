//
// Created by Gorillaspluch on 2023-02-20.
//

#ifndef MP2_MARKDOWNVISITOR_H
#define MP2_MARKDOWNVISITOR_H

#include "../../Paragraph/Paragraph.h"
#include "../../Header/Header.h"
#include "../../List/List.h"
#include "../../List/ListItem.h"
#include "../ElementVisitor.h"

class MarkDownVisitor : public ElementVisitor{
    std::string convertParagraph(const Paragraph* element) const override;
    std::string convertHeader(const Header* element) const override;
    std::string convertList(std::string text) const override;
    std::string convertListItem(const ListItem* element) const override;
};


#endif //MP2_MARKDOWNVISITOR_H
