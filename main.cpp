#include <iostream>
#include "Element/Paragraph/Paragraph.h"
#include "Element/ElementType.h"
#include "Element/Creator/ElementCreator.h"


int main(){
    Paragraph p("lol");
    p.setText("Kos omak");
    std::cout << p.getText();
    return 0;
};
