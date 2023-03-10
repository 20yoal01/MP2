//
// Created by yousi on 2023-02-09.
//

#ifndef MP2_ELEMENT_H
#define MP2_ELEMENT_H

#include <iostream>
#include "ElementType.h"

class Element {
protected:
    std::string color;
    std::string text;

public:
    virtual ~Element() {}
    virtual void setColor(std::string color);
    virtual void setText(std::string text);
    virtual std::string getText() const;
    virtual std::string getColor() const;
    static Element* Create(ElementType type);
};
#endif //MP2_ELEMENT_H
