//
// Created by yousi on 2023-02-15.
//

#include "ListElement.h"

ListElement::ListElement() : parent() {}

ListElement::~ListElement() {}

void ListElement::SetParent(ListElement *parent) {
    this->parent = parent;
}

ListElement *ListElement::GetParent() const {
    return this->parent;
}

void ListElement::Add(ListElement *component) {}

void ListElement::Remove(ListElement *component) {}

bool ListElement::IsComposite() const {
    return false;
}
