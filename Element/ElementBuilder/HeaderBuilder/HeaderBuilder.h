//
// Created by yousi on 2023-02-14.
//

#ifndef MP2_HEADERBUILDER_H
#define MP2_HEADERBUILDER_H

#include <iostream>
#include "../ElementBuilder.h"
#include "../../Header/Header.h"
#include "../../Creator/ElementCreator.h"

class HeaderBuilder : public ElementBuilder{
private:
    Header* header;
    ElementCreator* elementCreator;

public:
    HeaderBuilder();
    ~HeaderBuilder();
    void reset();
    Header* getHeader();
    void setColor(std::string color);
    void setText(std::string text);
    void setFontSize(int fontSize);
};


#endif //MP2_HEADERBUILDER_H
