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
    commandManager = new CommandManager;
}

void DocumentFacade::setTitle(std::string title) {
    std::shared_ptr<ICommand> c(new SetTitleCommand(this, title));
    commandManager->executeCmd(c);
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
    std::shared_ptr<ICommand> c(new ReplaceTextCommand(this, previousText, newText));
    commandManager->executeCmd(c);
}

void DocumentFacade::previewDocument() {
    documentBuilder->getDocument()->printContent();
}

void DocumentFacade::reset(){
    std::shared_ptr<ICommand> c(new ResetCommand(this, documentBuilder->getDocument()));
    commandManager->executeCmd(c);
}

void DocumentFacade::setExtension(ExtensionType extension) {
    std::shared_ptr<ICommand> c(new SetExtensionCommand(this, extension));
    commandManager->executeCmd(c);
}

std::string DocumentFacade::exportToFile(std::string fileName) const{
    FileFactory *factory = new FileFactory;
    std::unique_ptr<File> HTMLFile = factory->createFile(fileName, documentBuilder->getDocument()->getExtension());
    if (!HTMLFile->exists()) {
        return "File does not exist\n";
    }
    if (HTMLFile->write(documentBuilder->getDocument()->getContent())) {
        return "File written successfully\n";
    }

    return "Something went wrong..";
}

void DocumentFacade::addHeader(std::string text) {
    std::shared_ptr<ICommand> c(new AddHeaderCommand(this, text));
    commandManager->executeCmd(c);
}

void DocumentFacade::addParagraph(std::string text) {
    std::shared_ptr<ICommand> c(new AddParagraphCommand(this, text));
    commandManager->executeCmd(c);
}

void DocumentFacade::renderElement(ElementBuilder* elementBuilder) {
    std::shared_ptr<ICommand> c(new RenderElementCommand(this, elementBuilder));
    commandManager->executeCmd(c);

}

std::string DocumentFacade::getTitle() const {
    return documentBuilder->getDocument()->getTitle();
}

ExtensionType DocumentFacade::getExtension() const {
    return documentBuilder->getDocument()->getExtension();
}

void DocumentFacade::undo() {
    commandManager->undo();
}

void DocumentFacade::redo() {
    commandManager->redo();
}