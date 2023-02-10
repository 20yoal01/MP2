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

std::string Header::getColor() const{
    return color_;
}
std::string Header::getText() const{
    return text_;
}
int Header::getFontSize() const{
    return fontSize_;
}