//
// Created by yousi on 2023-02-13.
//

#include "DocumentFacade.h"
#include "../Element/ElementBuilder/ParagraphBuilder/ParagraphBuilder.h"

DocumentFacade::DocumentFacade(){
    builder = new ConcreteDocumentBuilder();
    director = new DocumentDirector();
    director->setBuilder(builder);
}

void DocumentFacade::setTitle(std::string title) {
    builder->setTitle(title);
}

void DocumentFacade::createMailTemplate() {
    director->createMailTemplate();
    builder->getDocument();
}

void DocumentFacade::createThesisTemplate() {
    director->createThesisTemplate();
    builder->getDocument();
}

void DocumentFacade::createCalendar() {
    director->createCalendar();
    builder->getDocument();
}

void DocumentFacade::createTextDocument() {
    director->createTextDocument();
    builder->getDocument();
}

void DocumentFacade::addElement(ElementType element, std::string text) {
    builder->addElement(element, text);
}

void DocumentFacade::replaceText(std::string previousText, std::string newText) {
    builder->replaceText(previousText, newText);
}

void DocumentFacade::previewDocument() {
    builder->getDocument()->printContent();
}

std::string DocumentFacade::getTitle() {
    builder->getDocument()->getTitle();
}

void DocumentFacade::reset(){
    builder->reset();
    director->setBuilder(builder);
}

void DocumentFacade::setExtension(ExtensionType extension) {
    builder->getDocument()->setExtension(extension);
}

void DocumentFacade::renderElement(ElementType element, ElementBuilder* elementBuilder) {
    Element* elementToAdd = elementBuilder->getElement();
    builder->renderElement(elementToAdd);
}