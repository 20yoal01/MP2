//
// Created by yousi on 2023-02-09.
//

#ifndef MP2_LIST_H
#define MP2_LIST_H

#include <iostream>
#include <list>
#include "./ListElement.h"

class List : public ListElement{
protected:
    std::list<ListElement *> children;

public:
    void Add(ListElement* listElement) override;
    void Remove(ListElement* listElement) override;
    bool IsComposite() const override;
    std::string getText() const override;
    void Accept(ElementVisitor *visitor) const;
};


#endif //MP2_LIST_H
