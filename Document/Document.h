//
// Created by yousi on 2023-02-09.
//

#ifndef MP2_DOCUMENT_H
#define MP2_DOCUMENT_H

#include <iostream>
#include "../Element/Container/ElementContainer.h"
#include "../Element/Element.h"
#include "../Element/Creator/ElementCreator.h"
#include "../Element/Iterator/ElementIterator.h"
#include "../Element/Container/ElementContainer.cpp"
#include "../Element/Iterator/ElementIterator.cpp"
#include "../Element/Visitor/ExtensionType.h"

class Document {

private:
    ElementContainer<Element*> elements;
    ElementCreator* elementCreator;
    ElementIterator<Element*, ElementContainer<Element*>> *elementIterator;
    std::string title;
    ElementVisitor *visitor;

public:
    Document();
    void replaceText(std::string previousText, std::string newText);
    void renderElement(Element* element);
    void addElement(ElementType element, std::string text);
    void printContent();
    const std::string &getTitle() const;
    void setTitle(const std::string &title);
    void setExtension(ExtensionType extension);
};


#endif //MP2_DOCUMENT_H
