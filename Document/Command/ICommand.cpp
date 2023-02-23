//
// Created by Medoo on 2/22/2023.
//

#include "ICommand.h"

void CommandManager::executeCmd(std::shared_ptr<ICommand> command) {
    mRedoStack = commandStack_t(); // clear the redo stack
    command->execute();
    mUndoStack.push(command);
}

void CommandManager::undo() {
    if (mUndoStack.size() <= 0) {
        return;
    }
    mUndoStack.top()->undo(); // undo most recently executed command
    mRedoStack.push(mUndoStack.top()); // add undone command to undo stack
    mUndoStack.pop();                  // remove top entry from undo stack
}

void CommandManager::redo() {
    if (mRedoStack.size() <= 0) {
        return;
    }
    mRedoStack.top()->redo();          // redo most recently executed command
    mUndoStack.push(mRedoStack.top()); // add undone command to redo stack
    mRedoStack.pop();                  // remove top entry from redo stack
}

/*
 * Extension Command
 * */

SetExtensionCommand::SetExtensionCommand(DocumentFacade *document, ExtensionType extension) {
    this->document = document;
    newExtension = extension;
};

void SetExtensionCommand::execute() {
    oldExtension = document->getExtension();
    document->documentBuilder->getDocument()->setExtension(newExtension);
}

void SetExtensionCommand::redo() {
    document->documentBuilder->getDocument()->setExtension(oldExtension);
}

void SetExtensionCommand::undo() {
    document->documentBuilder->getDocument()->setExtension(oldExtension);
}


RenderElementCommand::RenderElementCommand(DocumentFacade *document, ElementBuilder* elementBuilder){
    this->document = document;
    element = elementBuilder->getElement();
};

void RenderElementCommand::execute() {
    document->documentBuilder->renderElement(element);
}

void RenderElementCommand::redo() {
    document->documentBuilder->renderElement(element);
}

void RenderElementCommand::undo() {
    document->documentBuilder->getDocument()->popElement();
}



SetTitleCommand::SetTitleCommand(DocumentFacade *document, std::string title){
    this->document = document;
    this->newTitle = title;
};

void SetTitleCommand::execute() {
    oldTitle = document->getTitle();
    document->documentBuilder->setTitle(newTitle);
}

void SetTitleCommand::redo() {
    document->documentBuilder->getDocument()->setTitle(newTitle);
}

void SetTitleCommand::undo() {
    document->documentBuilder->getDocument()->setTitle(oldTitle);
}




AddParagraphCommand::AddParagraphCommand(DocumentFacade *document, std::string text){
    this->document = document;
    this->text = text;
};

void AddParagraphCommand::execute() {
    document->documentBuilder->addParagraph(text);
}

void AddParagraphCommand::redo() {
    document->documentBuilder->addParagraph(text);
}

void AddParagraphCommand::undo() {
    document->documentBuilder->getDocument()->popElement();
}



AddHeaderCommand::AddHeaderCommand(DocumentFacade *document, std::string text){
    this->document = document;
    this->text = text;
};

void AddHeaderCommand::execute() {
    document->documentBuilder->addHeader(text);
}

void AddHeaderCommand::redo() {
    document->documentBuilder->addHeader(text);
}

void AddHeaderCommand::undo() {
    document->documentBuilder->getDocument()->popElement();
}



ReplaceTextCommand::ReplaceTextCommand(DocumentFacade *document, std::string prevText, std::string newText){
    this->document = document;
    this->newText = newText;
    this->prevText = prevText;
};

void ReplaceTextCommand::execute() {
    document->documentBuilder->replaceText(prevText, newText);
    std::swap(newText, prevText);
}

void ReplaceTextCommand::redo() {
    std::swap(newText, prevText);
    document->documentBuilder->replaceText(prevText, newText);
}


void ReplaceTextCommand::undo() {
    std::swap(newText, prevText);
    document->documentBuilder->replaceText(prevText, newText);
}