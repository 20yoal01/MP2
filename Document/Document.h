//
// Created by yousi on 2023-02-09.
//

#ifndef MP2_DOCUMENT_H
#define MP2_DOCUMENT_H

#include "../Element/Container/ElementContainer.h"
#include "../Element/Element.h"
#include "../Element/Creator/ElementCreator.h"
#include "../Element/Iterator/ElementIterator.h"
#include "../Element/Container/ElementContainer.cpp"
#include "../Element/Iterator/ElementIterator.cpp"

class Document {

private:
    ElementContainer<Element*> elements;
    ElementCreator* elementCreator;
    ElementIterator<Element*, ElementContainer<Element*>> *elementIterator;

public:
    Document();
    void replaceText(std::string previousText, std::string newText);
    void addElement(ElementType element, std::string text);
    void printContent();
};


#endif //MP2_DOCUMENT_H
