//
// Created by yousi on 2023-02-09.
//

#include "Document.h"
#include "../Element/Paragraph/Paragraph.h"

Document::Document() : elementCreator(new ElementCreator()), elements(){
    elementIterator = elements.CreateIterator();
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

void Document::printContent() {
    for (elementIterator->First(); !elementIterator->IsDone(); elementIterator->Next()) {
        std::cout << (*elementIterator->Current())->getText()<< std::endl;
        Paragraph* cast_paragraph = dynamic_cast<Paragraph*>(*elementIterator->Current());
        if (cast_paragraph) {
            std::cout << "FontSize: " << cast_paragraph->getFontSize() << std::endl;
        }
    }
}

const std::string &Document::getTitle() const {
    return title;
}

void Document::setTitle(const std::string &title) {
    Document::title = title;
}
