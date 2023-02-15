
#include <iostream>
#include "Document/DocumentFacade.h"
#include "Document/Document.h"
#include "Element/ElementBuilder/ParagraphBuilder/ParagraphBuilder.h"
#include "Element/ElementBuilder/ElementBuilder.h"
#include "Element/List/ListElement.h"
#include "Element/List/ListItem.h"
#include "Element/List/List.h"
#include "Element/ElementBuilder/ListBuilder/ListBuilder.h"

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
    document->addElement(ET_List, "Hej");
    ListBuilder* listBuilder = new ListBuilder();
    for(int i = 0; i < 3; i++){
        listBuilder->addListItem(to_string(i));
    }
    ListElement* lElement = listBuilder->getList();
    for(int i = 0; i < 3; i++){
        listBuilder->addListItem(to_string(i));
    }
    listBuilder->addList(lElement);
    document->renderElement(ET_List, (ElementBuilder*) listBuilder);
    document->previewDocument();
    return 0;
};
