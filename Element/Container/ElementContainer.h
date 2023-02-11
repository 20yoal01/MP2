//
// Created by yousi on 2023-02-09.
//

#ifndef MP2_ELEMENTCONTAINER_H
#define MP2_ELEMENTCONTAINER_H
#include "../Iterator/ElementIterator.h"

template<class T>

class ElementContainer {
    friend class ElementIterator<T, ElementContainer>;

public:
    void Add(T a);
    ElementIterator<T, ElementContainer> *CreateIterator();

private:
    std::vector <T> elementList;
};


#endif //MP2_ELEMENTCONTAINER_H
