//
// Created by yousi on 2023-02-09.
//

#ifndef MP2_HEADER_H
#define MP2_HEADER_H
#include <iostream>
#include "../Element.h"

class Header : public Element{
private:
    int fontSize_;
    std::string color_;
    std::string text_;

public:
    Header(std::string text);
    void setColor(std::string color) override;
    void setText(std::string text);
};


#endif //MP2_HEADER_H
