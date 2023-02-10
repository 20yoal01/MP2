#include <iostream>
#include "Element/Paragraph/Paragraph.h"


int main(){
    Paragraph p("lol");
    p.setText("Kos omak");
    std::cout << p.getText();
    return 0;
};
