//
// Created by yousi on 2023-02-09.
//

#include "ElementCreator.h"

ElementCreator::ElementCreator() {

}

void ElementCreator::createElement(ElementType element){
    pElement = Element::Create(element);
}

ElementCreator::~ElementCreator() {
    if (pElement) {
        delete[] pElement;
        pElement = NULL;
    }
}

Element* ElementCreator::getElement() const{
    return pElement;
}