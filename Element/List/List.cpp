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
    std::string indent = "\t";  // Define the indentation string
    for (const ListElement *c : children) {
        result += "\n" + indent + c->getText();  // Add a new line and indent each child's text
    }
    return "Branch(" + result + "\n)";  // Add a new line before closing the branch
}