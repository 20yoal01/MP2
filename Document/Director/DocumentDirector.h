//
// Created by yousi on 2023-02-09.
//

#ifndef MP2_DOCUMENTDIRECTOR_H
#define MP2_DOCUMENTDIRECTOR_H

#include "../Builder/DocumentBuilder.h"

class DocumentDirector {
private:
    DocumentBuilder* builder;

public:
    void setBuilder(DocumentBuilder* builder);
    void createMailTemplate();
    void createThesisTemplate();
    void createCalendar();
    void createTextDocument();
};


#endif //MP2_DOCUMENTDIRECTOR_H
