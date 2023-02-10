//
// Created by yousi on 2023-02-09.
//

#ifndef MP2_ELEMENTCREATOR_H
#define MP2_ELEMENTCREATOR_H
#include "../Element.h"


class ElementCreator {
public:

    // Client doesn't explicitly create objects
    // but passes type to factory method "Create()"
    ElementCreator();
    ~ElementCreator();
    Element* getElement() const;
    void createElement(ElementType element);

private:
    Element *pElement;
};


#endif //MP2_ELEMENTFACTORY_H
