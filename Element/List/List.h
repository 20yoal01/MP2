//
// Created by yousi on 2023-02-09.
//

#ifndef MP2_LIST_H
#define MP2_LIST_H

#include <iostream>
#include "../Element.h"

class List : public Element{
private:
    std::string text_;
    bool ordered_;

public:
    List(std::string text);
    void setOrdered(bool ordered);
    void setText(std::string text);
};


#endif //MP2_LIST_H
