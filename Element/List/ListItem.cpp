//
// Created by yousi on 2023-02-15.
//

#include "ListItem.h"

void ListItem::setText(std::string text) {
    this->text = text;
}

void ListItem::setColor(std::string color) {
    this->color = color;
}

std::string ListItem::getText() const {
    return "\xFA" + text;
}

std::string ListItem::getColor() const {
    return this->color;
}