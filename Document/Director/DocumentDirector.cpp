//
// Created by yousi on 2023-02-09.
//

#include "DocumentDirector.h"

void DocumentDirector::setBuilder(DocumentBuilder* builder){
    this->builder = builder;
}
void DocumentDirector::createMailTemplate(){
    this->builder->addElement(ET_Paragraph, "----------------------------");
    this->builder->addElement(ET_Header, "This is a mail template!");
    this->builder->setNewLine();
    this->builder->addElement(ET_Paragraph, "----------------------------");
}
void DocumentDirector::createThesisTemplate(){
    this->builder->addElement(ET_Paragraph, "----------------------------");
    this->builder->addElement(ET_Header, "This is a thesis template!");
    this->builder->setNewLine();
    this->builder->addElement(ET_Paragraph, "----------------------------");
}
void DocumentDirector::createCalendar(){
    this->builder->addElement(ET_Paragraph, "----------------------------");
    this->builder->addElement(ET_Header, "This is a calendar template!");
    this->builder->setNewLine();
    this->builder->addElement(ET_Paragraph, "----------------------------");
}
void DocumentDirector::createTextDocument(){
    this->builder->addElement(ET_Paragraph, "----------------------------");
    this->builder->addElement(ET_Header, "This is a text document!");
    this->builder->setNewLine();
    this->builder->addElement(ET_Paragraph, "----------------------------");
}