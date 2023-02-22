//
// Created by yousi on 2023-02-09.
//

#include "DocumentDirector.h"

void DocumentDirector::setBuilder(DocumentBuilder* builder){
    this->builder = builder;
}
void DocumentDirector::createMailTemplate(){
    this->builder->addParagraph("----------------------------");
    this->builder->addHeader("This is a mail template!");
    this->builder->setNewLine();
    this->builder->addParagraph("----------------------------");
}
void DocumentDirector::createThesisTemplate(){
    this->builder->addParagraph("----------------------------");
    this->builder->addHeader("This is a thesis template!");
    this->builder->setNewLine();
    this->builder->addParagraph("----------------------------");
}
void DocumentDirector::createCalendar(){
    this->builder->addParagraph("----------------------------");
    this->builder->addHeader("This is a calendar template!");
    this->builder->setNewLine();
    this->builder->addParagraph("----------------------------");
}
void DocumentDirector::createTextDocument(){
    this->builder->addParagraph("----------------------------");
    this->builder->addHeader("This is a text document!");
    this->builder->setNewLine();
    this->builder->addParagraph("----------------------------");
}