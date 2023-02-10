//
// Created by yousi on 2023-02-09.
//

#include "ElementCreator.h"


ElementCreator::ElementCreator()
{
    ElementType type = ET_Paragraph;
    pElement = Element::Create(type);
}

ElementCreator::~ElementCreator() {
    if (pElement) {
        delete[] pElement;
        pElement = NULL;
    }
}

Element* ElementCreator::getElement()  {
    return pElement;
}