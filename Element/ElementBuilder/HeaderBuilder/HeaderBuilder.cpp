//
// Created by yousi on 2023-02-14.
//

#include "HeaderBuilder.h"
//
// Created by yousi on 2023-02-14.
//

#include "HeaderBuilder.h"
HeaderBuilder::HeaderBuilder(): elementCreator(new ElementCreator()){
    this->reset();
}
HeaderBuilder::~HeaderBuilder(){
    delete header;
}
void HeaderBuilder::reset() {
    elementCreator->createElement(ET_Paragraph);
    header = (Header *) (elementCreator->getElement());
}
Header *HeaderBuilder::getHeader() {
    Header* result= this->header;
    this->reset();
    return result;
}
void HeaderBuilder::setColor(std::string color) {
    header->setColor(color);
}
void HeaderBuilder::setText(std::string text) {
    header->setText(text);
}
void HeaderBuilder::setFontSize(int fontSize) {
    header->setFontSize(fontSize);
}