//
// Created by yousi on 2023-02-09.
//

#include "Document.h"
#include "../Element/Paragraph/Paragraph.h"
#include "../Element/List/ListElement.h"
#include "../Element/List/List.h"
#include "../Element/List/ListItem.h"
#include "../Element/Visitor/HTMLVisitor/HTMLVisitor.h"
#include "../Element/Visitor/DefaultVisitor/DefaultVisitor.h"
#include "../Element/Visitor/MarkDownVisitor/MarkDownVisitor.h"

Document::Document() : elementCreator(new ElementCreator()), elements(){
    visitor = new DefaultVisitor;
    elementIterator = elements.CreateIterator();
}

void Document::setExtension(ExtensionType extension) {
    this->extension = extension;
    switch (extension) {
        case DEFAULT:
            visitor = new DefaultVisitor;
            break;
        case HTML:
            visitor = new HTMLVisitor;
            break;
        case MARKDOWN:
            visitor = new MarkDownVisitor;
    }
}

ExtensionType Document::getExtension() const {
    return extension;
}

void Document::renderElement(Element* element) {
    elements.Add(element);
}

void Document::addElement(ElementType element, std::string text) {
    elementCreator->createElement(element);
    Element *e = elementCreator->getElement();
    e->setText(text);
    elements.Add(e);
}

void Document::replaceText(std::string previousText, std::string newText) {
    bool elementFound = false;
    for (elementIterator->First(); !elementIterator->IsDone(); elementIterator->Next()) {
        std::string current = (*elementIterator->Current())->getText();
        if (current == previousText) {
            (*elementIterator->Current())->setText(newText);
            elementFound = true;
        }
    }

    if (!elementFound) {
        std::cout << "Element not found!" << std::endl;
    }
}

std::string Document::getContent() {
    std::string data;
    for (elementIterator->First(); !elementIterator->IsDone(); elementIterator->Next()) {
        data += (*elementIterator->Current())->Accept(visitor) + "\n";
    }
    return data;
}

void Document::printContent() {
    for (elementIterator->First(); !elementIterator->IsDone(); elementIterator->Next()) {
        std::cout << (*elementIterator->Current())->Accept(visitor)<< std::endl;
    }
}

const std::string &Document::getTitle() const {
    return title;
}

void Document::setTitle(const std::string &title) {
    Document::title = title;
}