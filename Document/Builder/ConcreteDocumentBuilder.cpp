//
// Created by yousi on 2023-02-13.
//

#include "ConcreteDocumentBuilder.h"
ConcreteDocumentBuilder::ConcreteDocumentBuilder() {
    this->reset();
}

void ConcreteDocumentBuilder::replaceText(std::string previousText, std::string newText) {
    document->replaceText(previousText, newText);
}

void ConcreteDocumentBuilder::reset(){
    this->document = new Document();
    if((getTitle()).empty()){
        document->setTitle(title);
    }
}

std::string ConcreteDocumentBuilder::getTitle() const {
    return title;
}

void ConcreteDocumentBuilder::setTitle(std::string title) {
    this->title = title;
}

void ConcreteDocumentBuilder::addParagraph(std::string text) {
    document->addElement(ET_Paragraph, text);
}

void ConcreteDocumentBuilder::addHeader(std::string text) {
    document->addElement(ET_Header, text);
}

void ConcreteDocumentBuilder::setNewLine(){
    document->addElement(ET_Paragraph, "");
}

Document* ConcreteDocumentBuilder::getDocument() {
    return document;
}

ConcreteDocumentBuilder::~ConcreteDocumentBuilder(){
    delete document;
}

void ConcreteDocumentBuilder::renderElement(Element* element) {
    document->renderElement(element);
}