//
// Created by yousi on 2023-02-13.
//

#include "DocumentFacade.h"
#include "../Element/ElementBuilder/ParagraphBuilder/ParagraphBuilder.h"
#include "FileFactory/FileFactory.h"
#include "../Element/ElementBuilder/ListBuilder/ListBuilder.h"
#include "../Element/ElementBuilder/HeaderBuilder/HeaderBuilder.h"

DocumentFacade::DocumentFacade(){
    documentBuilder = new ConcreteDocumentBuilder();
    director = new DocumentDirector();
    director->setBuilder(documentBuilder);
}

void DocumentFacade::setTitle(std::string title) {
    documentBuilder->setTitle(title);
}

void DocumentFacade::createMailTemplate() {
    director->createMailTemplate();
    documentBuilder->getDocument();
}

void DocumentFacade::createThesisTemplate() {
    director->createThesisTemplate();
    documentBuilder->getDocument();
}

void DocumentFacade::createCalendar() {
    director->createCalendar();
    documentBuilder->getDocument();
}

void DocumentFacade::createTextDocument() {
    director->createTextDocument();
    documentBuilder->getDocument();
}

void DocumentFacade::replaceText(std::string previousText, std::string newText) {
    documentBuilder->replaceText(previousText, newText);
}

void DocumentFacade::previewDocument() {
    documentBuilder->getDocument()->printContent();
}

void DocumentFacade::reset(){
    documentBuilder->reset();
    director->setBuilder(documentBuilder);
}

void DocumentFacade::setExtension(ExtensionType extension) {
    documentBuilder->getDocument()->setExtension(extension);
}

std::string DocumentFacade::exportToFile(std::string fileName) const{
    FileFactory *factory = new FileFactory;
    std::unique_ptr<File> HTMLFile = factory->createFile(fileName, documentBuilder->getDocument()->getExtension());
    if (!HTMLFile->exists()) {
        std::cout << "File does not exist\n";
    }
    if (HTMLFile->write(documentBuilder->getDocument()->getContent())) {
        std::cout << "File written successfully\n";
    }
}

void DocumentFacade::addHeader(std::string text) {
    documentBuilder->addHeader(text);
}

void DocumentFacade::addParagraph(std::string text) {
    documentBuilder->addParagraph(text);
}

void DocumentFacade::renderElement(ElementBuilder* elementBuilder) {
    Element* elementToAdd = elementBuilder->getElement();
    documentBuilder->renderElement(elementToAdd);
}

std::string DocumentFacade::getTitle() const {
    return documentBuilder->getDocument()->getTitle();
}

ExtensionType DocumentFacade::getExtension() const {
    return documentBuilder->getDocument()->getExtension();
}
