//
// Created by yousi on 2023-02-09.
//

#include "Element.h"
#include "./List/List.h"
#include "./Header/Header.h"
#include "./Paragraph/Paragraph.h"
#include "./Table/Table.h"

Element* Element::Create(ElementType type) {
    if (type == ET_List)
        return new List("");
    else if (type == ET_Paragraph)
        return new Paragraph("");
    else if (type == ET_Header)
        return new Header("");
    else return NULL;
}

void Element::setColor(std::string color){
    color = color;
}
void Element::setText(std::string text){
    text = text;
}

std::string Element::getText(){
    return text;
}