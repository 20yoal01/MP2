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
    mUndoStack.top()->undo();          // undo most recently executed command
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

    document->documentBuilder->getDocument()->setExtension(newExtension);

}

void SetExtensionCommand::redo() {

}

void SetExtensionCommand::undo() {

}


RenderElementCommand::RenderElementCommand(DocumentFacade *document, Element *element){
    this->document = document;
    newElement = element;
};

void RenderElementCommand::execute() {

}

void RenderElementCommand::redo() {

}

void RenderElementCommand::undo() {

}



SetTitleCommand::SetTitleCommand(DocumentFacade *document, std::string title){
    this->document = document;
    this->newTitle = title;
};

void SetTitleCommand::execute() {

}

void SetTitleCommand::redo() {

}

void SetTitleCommand::undo() {

}




AddParagraphCommand::AddParagraphCommand(DocumentFacade *document, Element *element){
    this->document = document;
    newElement = element;
};

void AddParagraphCommand::execute() {

}

void AddParagraphCommand::redo() {

}

void AddParagraphCommand::undo() {

}



AddHeaderCommand::AddHeaderCommand(DocumentFacade *document, Element *element){
    this->document = document;
    newElement = element;
};

void AddHeaderCommand::execute() {

}

void AddHeaderCommand::redo() {

}

void AddHeaderCommand::undo() {

}



ReplaceTextCommand::ReplaceTextCommand(DocumentFacade *document, std::string text){
    this->document = document;
    this->newText = text;
};

void ReplaceTextCommand::execute() {

}

void ReplaceTextCommand::redo() {

}

void ReplaceTextCommand::undo() {

}