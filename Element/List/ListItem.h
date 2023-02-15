//
// Created by yousi on 2023-02-15.
//

#ifndef MP2_LISTITEM_H
#define MP2_LISTITEM_H

#include "./ListElement.h"

class ListItem : public ListElement {

public:
    void setText(std::string text) override;
    void setColor(std::string color) override;
    std::string getText() const override;
    std::string getColor() const override;
};


#endif //MP2_LISTITEM_H
