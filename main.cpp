#include <iostream>
#include "Element/Element.h"
#include "Element/Paragraph/Paragraph.h"
#include "Element/ElementType.h"
#include "Element/Creator/ElementCreator.h"

int main(){
    ElementCreator* es = new ElementCreator();
    Element* em = es->getElement();
    em->setText("lmao");
    std::cout << em->getText();
    return 0;
};
