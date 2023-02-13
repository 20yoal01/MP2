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
    std::string title;

public:
    void reset();
    void addElement(ElementType element, std::string text);
    void setNewLine();
    void setTitle(std::string title);
    void replaceText(std::string previousText, std::string newText);
    std::string getTitle() const;
    Document* getDocument();
    ConcreteDocumentBuilder();
    ~ConcreteDocumentBuilder();
};


#endif //MP2_CONCRETEDOCUMENTBUILDER_H
