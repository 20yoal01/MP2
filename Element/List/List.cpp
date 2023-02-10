//
// Created by yousi on 2023-02-09.
//

#include "List.h"

List::List(std::string text) {
    text_ = text;
}

void List::setOrdered(bool ordered){
    ordered_ = ordered;
}
void List::setText(std::string text){
    text_ = text;
}