//
// Created by yousi on 2023-02-09.
//

#include "Header.h"

Header::Header(std::string text){
    text_ = text;
}

void Header::setColor(std::string color){
    color_ = color;
}

void Header::setText(std::string text){
    text_ = text;
}