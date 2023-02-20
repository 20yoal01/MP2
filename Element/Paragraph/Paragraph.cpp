//
// Created by yousi on 2023-02-09.
//

#include "Paragraph.h"
Paragraph::Paragraph(std::string text) : fontSize(0), bold(false), italics(false), color("black"){
    this->text = text;
}
void Paragraph::setColor(std::string color){
    this->color = color;
}
void Paragraph::setText(std::string text){
    this->text = text;
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
    return this->text;
}
int Paragraph::getFontSize() const {
    return this->fontSize;
}
bool Paragraph::isBold() const {
    return this->bold;
}
bool Paragraph::isItalics() const {
    return this->italics;
}
std::string Paragraph::getColor() const {
    return this->color;
}

std::string Paragraph::Accept(ElementVisitor *visitor) const {
    return visitor->convertParagraph(this);
}