//
// Created by yousi on 2023-02-13.
//

#ifndef MP2_DOCUMENTFACADE_H
#define MP2_DOCUMENTFACADE_H

#include "./Builder/ConcreteDocumentBuilder.h"
#include "./Director/DocumentDirector.h"
#include "../Element/ElementBuilder/ElementBuilder.h"
#include <iostream>

class DocumentFacade {
private:
    DocumentDirector* director;
    ConcreteDocumentBuilder* documentBuilder;

public:
    DocumentFacade();
    std::string exportToFile(std::string fileName) const;
    void setExtension(ExtensionType extension);
    void setElementBuilder(ElementType element);
    void renderElement(ElementBuilder* elementBuilder);
    void setTitle(std::string text);
    void createMailTemplate();
    void createThesisTemplate();
    void createCalendar();
    void createTextDocument();
    void addParagraph(std::string text);
    void addHeader(std::string text);
    void replaceText(std::string previousText, std::string newText);
    void previewDocument();
    ExtensionType getExtension() const;
    std::string getTitle() const;
    void reset();

    friend class SetExtensionCommand;
    friend class RenderElementCommand;
    friend class SetTitleCommand;
    friend class AddParagraphCommand;
    friend class AddHeaderCommand;
    friend class ReplaceTextCommand;
};


#endif //MP2_DOCUMENTFACADE_H
