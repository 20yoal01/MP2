//
// Created by yousi on 2023-02-14.
//

#ifndef MP2_ELEMENTBUILDER_H
#define MP2_ELEMENTBUILDER_H

#include <iostream>
#include "../Element.h"

class ElementBuilder {
public:
    virtual ~ElementBuilder(){}
    virtual Element* getElement() = 0;
};


#endif //MP2_ELEMENTBUILDER_H
