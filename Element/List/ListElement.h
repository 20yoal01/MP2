//
// Created by yousi on 2023-02-15.
//

#ifndef MP2_LISTELEMENT_H
#define MP2_LISTELEMENT_H

#include "../Element.h"

class ListElement : public Element{
protected:
    ListElement *parent;

public:
    ListElement();
    virtual ~ListElement();
    void SetParent(ListElement *parent);
    ListElement *GetParent() const;
    virtual void Add(ListElement *component);
    virtual void Remove(ListElement *component);
    virtual bool IsComposite() const;
};



#endif //MP2_LISTELEMENT_H
