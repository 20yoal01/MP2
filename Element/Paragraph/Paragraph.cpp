//
// Created by yousi on 2023-02-09.
//

#include "Paragraph.h"
Paragraph::Paragraph(std::string text) {
    text_ = text;
}
void Paragraph::setColor(std::string color){
    color_ = color;
}
void Paragraph::setText(std::string text){
    text_ = text;
}
void Paragraph::setBold(bool bold) {
    this->bold = bold;
}
void Paragraph::setItalics(bool italics) {
    this->italics = italics;
}
void Paragraph::setFontSize(int fontSize) {
    this->fontSize = fontSize;
}
std::string Paragraph::getText() const{
    return text_;
}
int Paragraph::getFontSize() const {
    return fontSize;
}
bool Paragraph::isBold() const {
    return bold;
}
bool Paragraph::isItalics() const {
    return italics;
}
std::string Paragraph::getColor() const {
    return color_;
}