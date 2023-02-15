
#include <iostream>
#include "Document/DocumentFacade.h"
#include "Document/Document.h"
#include "Element/ElementBuilder/ParagraphBuilder/ParagraphBuilder.h"
#include "Element/ElementBuilder/ElementBuilder.h"
#include "Element/List/ListElement.h"
#include "Element/List/ListItem.h"
#include "Element/List/List.h"

using namespace std;

int main(){
/*    DocumentFacade* document = new DocumentFacade();
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
    document->previewDocument();*/
    ListElement *tree = new List;
    ListElement *branch1 = new List;

    ListElement *leaf_4 = new ListItem;
    ListElement *leaf_5 = new ListItem;
    leaf_4->setText("LMAO");
    leaf_5->setText("LOL");
    tree->Add(leaf_4);
    tree->Add(leaf_5);

    ListElement *leaf_1 = new ListItem;
    ListElement *leaf_2 = new ListItem;
    ListElement *leaf_3 = new ListItem;
    leaf_1->setText("Hej 1");
    leaf_2->setText("Hej 2");
    leaf_3->setText("Hej 3");
    branch1->Add(leaf_1);
    branch1->Add(leaf_2);
    ListElement *branch2 = new List;
    branch2->Add(leaf_3);
    tree->Add(branch1);
    tree->Add(branch2);
    std::cout << "Client: Now I've got a composite tree:\n";
    std::cout << "RESULT: \n" << tree->getText();
    std::cout << "\n\n";



    return 0;
};
