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
    ConcreteDocumentBuilder* builder;

public:
    DocumentFacade();
    std::string exportToFile(std::string fileName) const;
    void setExtension(ExtensionType extension);
    void renderElement(ElementType element, ElementBuilder* elementBuilder);
    void setTitle(std::string text);
    void createMailTemplate();
    void createThesisTemplate();
    void createCalendar();
    void createTextDocument();
    void addElement(ElementType element, std::string text);
    void replaceText(std::string previousText, std::string newText);
    void previewDocument();
    std::string getTitle();
    void reset();
};


#endif //MP2_DOCUMENTFACADE_H
