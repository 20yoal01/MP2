//
// Created by Gorillaspluch on 2023-02-15.
//

#ifndef MP2_LISTBUILDER_H
#define MP2_LISTBUILDER_H

#include "../../List/ListElement.h"
#include "../../List/List.h"
#include "../../List/ListItem.h"
#include "../ElementBuilder.h"
#include "../../Creator/ElementCreator.h"


class ListBuilder : public ElementBuilder{

private:
    ListElement* list;
    ElementCreator* elementCreator;

public:
    ListBuilder();
    ~ListBuilder();
    void reset();
    ListElement* getList();
    void addList(ListElement* list);
    void addListItem(std::string text);
};


#endif //MP2_LISTBUILDER_H
