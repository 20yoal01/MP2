//
// Created by yousi on 2023-02-09.
//

#include "ElementContainer.h"
template<class T>
void ElementContainer<T>::Add(T a) {
    elementList.push_back(a);
}
template<class T>
ElementIterator<T, ElementContainer<T>>* ElementContainer<T>::CreateIterator() {
    return new ElementIterator<T, ElementContainer>(this);
}