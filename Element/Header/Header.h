//
// Created by yousi on 2023-02-09.
//

#ifndef MP2_HEADER_H
#define MP2_HEADER_H
#include <iostream>
#include "../Element.h"

class Header : public Element{
private:
    int fontSize;
    std::string color;
    std::string text;

public:
    Header(std::string text);
    std::string Accept(ElementVisitor *visitor) const;
    void setColor(std::string color) override;
    void setText(std::string text);
    void setFontSize(int fontSize);
    std::string getColor() const;
    std::string getText() const;
    int getFontSize() const;
};


#endif //MP2_HEADER_H
