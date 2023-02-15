//
// Created by yousi on 2023-02-14.
//

#ifndef MP2_ELEMENTBUILDER_H
#define MP2_ELEMENTBUILDER_H

#include <iostream>

class ElementBuilder {
public:
    virtual ~ElementBuilder(){}
    virtual void setColor(std::string color) = 0;
    virtual void setText(std::string text) = 0;
};


#endif //MP2_ELEMENTBUILDER_H
