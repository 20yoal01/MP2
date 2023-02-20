//
// Created by Gorillaspluch on 2023-02-15.
//

#include "ListBuilder.h"
ListBuilder::ListBuilder() : elementCreator(new ElementCreator()){
    this->reset();
}

ListBuilder::~ListBuilder(){
    delete list;
}

void ListBuilder::reset() {
    elementCreator->createElement(ET_List);
    list = (List*) (elementCreator->getElement());
}

void ListBuilder::addListItem(std::string text) {
    ListElement *item = new ListItem;
    item->setText(text);
    list->Add(item);
}

void ListBuilder::addList(ListElement *list) {
    this->list->Add(list);
}

Element *ListBuilder::getElement(){
    ListElement* result= this->list;
    this->reset();
    return result;
}