//
// Created by yousi on 2023-02-14.
//

#ifndef MP2_PARAGRAPHBUILDER_H
#define MP2_PARAGRAPHBUILDER_H

#include <iostream>
#include "../ElementBuilder.h"
#include "../../Paragraph/Paragraph.h"
#include "../../Creator/ElementCreator.h"

class ParagraphBuilder : public ElementBuilder{
private:
    Paragraph* paragraph;
    ElementCreator* elementCreator;


public:
    ParagraphBuilder();
    ~ParagraphBuilder();
    void reset();
    Element* getElement() override;
    void setColor(std::string color);
    void setText(std::string text);
    void setBold(bool bold);
    void setItalics(bool italics);
    void setFontSize(int fontSize);
};


#endif //MP2_PARAGRAPHBUILDER_H
