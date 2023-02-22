//
// Created by Medoo on 2/22/2023.
//

#ifndef MP2_ICOMMAND_H
#define MP2_ICOMMAND_H

#include <stack>
#include <iostream>
#include <memory>
#include "../../Element/Visitor/ExtensionType.h"
#include "../DocumentFacade.h"

class ICommand {
public:
    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual void redo() = 0;
};


class CommandManager {
    typedef std::stack<std::shared_ptr<ICommand> > commandStack_t;
    commandStack_t mUndoStack;
    commandStack_t mRedoStack;

public:
    CommandManager() {}
    void executeCmd(std::shared_ptr<ICommand> command);
    void undo();
    void redo();
};

class SetExtensionCommand : public ICommand {
private:
    DocumentFacade *document;
    ExtensionType oldExtension;
    ExtensionType newExtension;

public:
    ~SetExtensionCommand();
    SetExtensionCommand(DocumentFacade *document, ExtensionType extension);
    void execute() override;
    void undo() override;
    void redo() override;
};

class RenderElementCommand : public ICommand {
private:
    DocumentFacade *document;
    Element *oldElement;
    Element *newElement;

public:
    void execute() override;
    void undo() override;
    void redo() override;
    RenderElementCommand(DocumentFacade *document, Element *element);
    ~RenderElementCommand();

};
class SetTitleCommand: public ICommand {
private:
    DocumentFacade *document;
    std::string oldTitle;
    std::string newTitle;

public:
    void execute() override;
    void undo() override;
    void redo() override;
    SetTitleCommand(DocumentFacade *document, std::string title);
    ~SetTitleCommand();

};
class AddParagraphCommand: public ICommand {
private:
    DocumentFacade *document;
    Element *oldElement;
    Element *newElement;
public:
    void execute() override;
    void undo() override;
    void redo() override;
    AddParagraphCommand(DocumentFacade *document, Element *element);
    ~AddParagraphCommand();

};
class AddHeaderCommand : public ICommand {
private:
    DocumentFacade *document;
    Element *oldElement;
    Element *newElement;
public:
    void execute() override;
    void undo() override;
    void redo() override;
    AddHeaderCommand(DocumentFacade *document, Element *element);
    ~AddHeaderCommand();

};
class ReplaceTextCommand : public ICommand {
private:
    DocumentFacade *document;
    std::string oldText;
    std::string newText;

public:
    void execute() override;
    void undo() override;
    void redo() override;
    ReplaceTextCommand(DocumentFacade *document, std::string text);
    ~ReplaceTextCommand();
};

#endif //MP2_ICOMMAND_H
