//
// Created by yousi on 2023-02-09.
//

#ifndef MP2_ELEMENTITERATOR_H
#define MP2_ELEMENTITERATOR_H
#include <iostream>
#include <vector>
#include <string>

template<typename T, typename U>
class ElementIterator {
public:
    typedef typename std::vector<T>::iterator iter_type;

    ElementIterator(U *elementsIn, bool reverse = false);

    void First();

    void Next();

    bool IsDone();

    iter_type Current();

private:
    U *elements;
    iter_type iterator;
};


#endif //MP2_ELEMENTITERATOR_H
