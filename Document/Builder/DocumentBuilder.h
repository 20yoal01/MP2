//
// Created by yousi on 2023-02-13.
//

#ifndef MP2_DOCUMENTBUILDER_H
#define MP2_DOCUMENTBUILDER_H

#include "../Document.h"

class DocumentBuilder {
public:
    virtual void reset() = 0;
    virtual void addElement(ElementType element, std::string text) = 0;
    virtual void setNewLine() = 0;
    virtual ~DocumentBuilder(){}

};


#endif //MP2_DOCUMENTBUILDER_H
