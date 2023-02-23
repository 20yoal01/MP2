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
}

std::string ConcreteDocumentBuilder::getTitle() const {
    document->getTitle();
}

void ConcreteDocumentBuilder::setTitle(std::string title) {
    document->setTitle(title);
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

void ConcreteDocumentBuilder::setDocument(Document *document){
    this->document = document;
}

ConcreteDocumentBuilder::~ConcreteDocumentBuilder(){
    delete document;
}

void ConcreteDocumentBuilder::renderElement(Element* element) {
    document->renderElement(element);
}