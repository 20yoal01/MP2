//
// Created by yousi on 2023-02-09.
//

#ifndef MP2_ELEMENT_H
#define MP2_ELEMENT_H

#include <iostream>
#include "ElementType.h"
#include "Visitor/ElementVisitor.h"

class ElementVisitor;

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
    virtual void Accept(ElementVisitor *visitor) const = 0;
};
#endif //MP2_ELEMENT_H
