#include <iostream>
#include "Document/DocumentFacade.h"
#include "Document/Document.h"
#include "Element/ElementBuilder/ParagraphBuilder/ParagraphBuilder.h"
#include "Element/ElementBuilder/ElementBuilder.h"
#include "Element/List/ListElement.h"
#include "Element/List/ListItem.h"
#include "Element/List/List.h"
#include "Element/ElementBuilder/ListBuilder/ListBuilder.h"
#include "Document/FileFactory/HTMLFile/HTMLFile.h"
#include "Document/FileFactory/MarkDownFile/MarkDownFile.h"
#include "Document/FileFactory/FileFactory.h"

using namespace std;

int main(){
    DocumentFacade* document = new DocumentFacade();
    document->createThesisTemplate();
    document->previewDocument();
    document->reset();
    document->addHeader("Welcome");
    document->replaceText("Welcome", "Hejsan");
    document->addParagraph("JAAAA");

    //Paragraph tillägg
    ParagraphBuilder* builder = new ParagraphBuilder();
    builder->setFontSize(12);
    builder->setText("C++ suger");
    document->renderElement(builder);

    //List tillägg
    ListBuilder* listBuilder = new ListBuilder();
    for(int i = 0; i < 3; i++){
        listBuilder->addListItem(to_string(i));
    }
    ListElement* lElement = (ListElement*) listBuilder->getElement();
    for(int i = 0; i < 3; i++){
        listBuilder->addListItem(to_string(i));
    }
    listBuilder->addList(lElement);
    document->renderElement(listBuilder);


    document->setExtension(HTML);

    document->reset();
    document->undo();
    document->redo();
    document->undo();

    document->previewDocument();


    /*
    document->setExtension(MARKDOWN);
    document->previewDocument();
    document->setTitle("Test123");
    document->exportToFile("1");
    */
    return 0;
};