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
    List();
    List(std::string text);
    void setOrdered(bool ordered);
    void setText(std::string text);
    std::string getText() const;
    bool isOrdered() const;
};


#endif //MP2_LIST_H
