
#include <iostream>
#include "Document/DocumentFacade.h"
#include "Document/Document.h"

int main(){
    DocumentFacade* document = new DocumentFacade();
    document->createThesisTemplate();
    document->previewDocument();
    document->reset();
    document->addElement(ET_Header, "Welcome");
    document->replaceText("Welcome", "Hejsan");
    document->addElement(ET_Paragraph, "JAAAA");
    document->previewDocument();

    return 0;
};
