#include <iostream>
#include "Element/Element.h"
#include "Element/Paragraph/Paragraph.h"
#include "Element/ElementType.h"
#include "Element/Creator/ElementCreator.h"
#include "Element/Container/ElementContainer.h"
#include "Element/Iterator/ElementIterator.h"
#include "Element/Container/ElementContainer.cpp"
#include "Element/Iterator/ElementIterator.cpp"

int main(){
    ElementCreator* es = new ElementCreator();

    std::vector <Element> elementList;
    ElementContainer<Element> cont2;
    for(int i = 0; i < 3; i++){
        es->createElement(ET_Header);
        Element *e = es->getElement();
        e->setText("sad");
        cont2.Add(*e);
        elementList.push_back(*e);
        std::cout << &(elementList[i]) << std::endl;
    }

    ElementIterator<Element, ElementContainer<Element>> *it2 = cont2.CreateIterator();
    for (it2->First(); !it2->IsDone(); it2->Next()) {
        std::cout << it2->Current()->getText() << std::endl;
    }
    return 0;
};
