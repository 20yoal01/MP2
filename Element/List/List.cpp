//
// Created by yousi on 2023-02-09.
//

#include "List.h"

void List::Add(ListElement *listElement) {
    this->children.push_back(listElement);
    listElement->SetParent(this);
}

void List::Remove(ListElement *listElement) {
    this->children.remove(listElement);
    listElement->SetParent(nullptr);
}

bool List::IsComposite() const {
    return true;
}

std::string List::getText() const {
    std::string result;
    std::string indentation = "";
    ListElement* currentParent = this->GetParent();

    while (currentParent != nullptr) {
        indentation += "\t";
        currentParent = currentParent->GetParent();
    }
    for (const ListElement* c : children) {
        if (c == children.back()) {
            result += indentation + c->getText();
        } else {
            result += indentation + c->getText() + "\n";
        }
    }

    ListElement* topParent = this->GetParent();
    if(topParent == nullptr){
        return "List:\n" + result;
    }

    return "\tList:\n" + result;
}