//
// Created by yousi on 2023-02-14.
//

#include "ParagraphBuilder.h"
ParagraphBuilder::ParagraphBuilder(): elementCreator(new ElementCreator()){
    this->reset();
}

ParagraphBuilder::~ParagraphBuilder(){
    delete paragraph;
}

void ParagraphBuilder::reset() {
    elementCreator->createElement(ET_Paragraph);
    paragraph = (Paragraph *) (elementCreator->getElement());
}

Paragraph *ParagraphBuilder::getParagraph() {
    Paragraph* result= this->paragraph;
    this->reset();
    return result;
}

void ParagraphBuilder::setColor(std::string color) {
    paragraph->setColor(color);
}

void ParagraphBuilder::setText(std::string text) {
    paragraph->setText(text);
}

void ParagraphBuilder::setBold(bool bold) {
    paragraph->setBold(bold);
}

void ParagraphBuilder::setItalics(bool italics) {
    paragraph->setItalics(italics);
}

void ParagraphBuilder::setFontSize(int fontSize) {
    paragraph->setFontSize(fontSize);
}