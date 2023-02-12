
#include <iostream>
#include "Document/Document.h"

int main(){
    Document *d = new Document();
    d->addElement(ET_Paragraph, "Lmao");
    d->addElement(ET_Paragraph, "Lmao");
    d->addElement(ET_Paragraph, "Lmao");
    d->addElement(ET_Paragraph, "Lmao");
    d->addElement(ET_Paragraph, "Lmao");
    d->addElement(ET_Paragraph, "Lmao");

    d->printContent();
    d->replaceText("Lmao", "Kos omak");
    d->printContent();
    return 0;
};
