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

void ConcreteDocumentBuilder::addElement(ElementType element, std::string text){
    document->addElement(element, text);
}
void ConcreteDocumentBuilder::setNewLine(){
    document->addElement(ET_Paragraph, "\n");
}

Document* ConcreteDocumentBuilder::getDocument() {
    return document;
}


ConcreteDocumentBuilder::~ConcreteDocumentBuilder(){
    delete document;
}