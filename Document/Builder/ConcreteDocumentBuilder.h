//
// Created by yousi on 2023-02-13.
//

#ifndef MP2_CONCRETEDOCUMENTBUILDER_H
#define MP2_CONCRETEDOCUMENTBUILDER_H

#include "./DocumentBuilder.h"
#include <iostream>

class ConcreteDocumentBuilder : public DocumentBuilder{
private:
    Document* document;

public:
    void reset();
    void renderElement(Element* element);
    void setNewLine();
    void addParagraph(std::string text);
    void addHeader(std::string text);
    void setTitle(std::string title);
    void replaceText(std::string previousText, std::string newText);
    std::string getTitle() const;
    void setDocument(Document *document);
    Document* getDocument();
    ConcreteDocumentBuilder();
    ~ConcreteDocumentBuilder();
};


#endif //MP2_CONCRETEDOCUMENTBUILDER_H
