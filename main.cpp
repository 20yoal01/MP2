
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
    document->renderElement(ET_Paragraph, builder);
    document->addElement(ET_List, "Hej");
    ListBuilder* listBuilder = new ListBuilder();
    for(int i = 0; i < 3; i++){
        listBuilder->addListItem(to_string(i));
    }
    ListElement* lElement = (ListElement*) listBuilder->getElement();
    for(int i = 0; i < 3; i++){
        listBuilder->addListItem(to_string(i));
    }
    listBuilder->addList(lElement);
    document->renderElement(ET_List, listBuilder);
    document->setExtension(HTML);
    document->previewDocument();
    document->setExtension(MARKDOWN);
    document->previewDocument();


    //skapa HTMLfil

    HTMLFile myfile("example1.html");

    if (!myfile.exists()) {
        std::cout << "File does not exist\n";
    }

    if (myfile.write("<html><body><h1>Hello, World!</h1></body></html>")) {
        std::cout << "File written successfully\n";
    }

    std::string data = myfile.read();
    std::cout << "File contents: " << data << "\n";

    //skapa Markdown fil
    MarkDownFile myfile1("example2.md");

    if (!myfile1.exists()) {
        std::cout << "File does not exist\n";
    }

    if (myfile1.write("#Hello, World!\nThis is a markdown file.")) {
        std::cout << "File written successfully\n";
    }

    std::string data1 = myfile1.read();
    std::cout << "File contents: " << data1 << "\n";
    return 0;
};
