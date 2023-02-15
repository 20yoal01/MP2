//
// Created by yousi on 2023-02-09.
//

#include "Header.h"

Header::Header(std::string text){
    this->text = text;
}

void Header::setColor(std::string color){
    this->color = color;
}

void Header::setText(std::string text){
    this->text = text;
}

void Header::setFontSize(int fontSize) {
    this->fontSize = fontSize;
}
std::string Header::getColor() const{
    return color;
}
std::string Header::getText() const{
    return text;
}
int Header::getFontSize() const{
    return fontSize;
}