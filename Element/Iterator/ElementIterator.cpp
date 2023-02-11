//
// Created by yousi on 2023-02-09.
//

#include "ElementIterator.h"
template<typename T, typename U>
ElementIterator<T, U>::ElementIterator(U *elementsIn, bool reverse) : elements(elementsIn){
    iterator = elements->elementList.begin();
}
template<typename T, typename U>
void ElementIterator<T, U>::First() {
    iterator = elements->elementList.begin();
}
template<typename T, typename U>
void ElementIterator<T, U>::Next() {
    iterator++;
}
template<typename T, typename U>
bool ElementIterator<T, U>::IsDone() {
    return (iterator == elements->elementList.end());
}

template<typename T, typename U>
typename ElementIterator<T, U>::iter_type ElementIterator<T, U>::Current() {
    return iterator;
}