
#include <iostream>
#include "Document/DocumentFacade.h"
#include "Document/Document.h"
#include "Element/ElementBuilder/ParagraphBuilder/ParagraphBuilder.h"
#include "Element/ElementBuilder/ElementBuilder.h"

using namespace std;

int main(){
    DocumentFacade* document = new DocumentFacade();
    document->createThesisTemplate();
    document->previewDocument();
    document->reset();
    document->addElement(ET_Header, "Welcome");
    document->replaceText("Welcome", "Hejsan");
    document->addElement(ET_Paragraph, "JAAAA");
    ParagraphBuilder* builder = new ParagraphBuilder();
    builder->setFontSize(12);
    builder->setText("C++ suger");
    document->renderElement(ET_Paragraph, (ElementBuilder*) builder);
    document->previewDocument();
    return 0;
};
