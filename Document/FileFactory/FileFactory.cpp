//
// Created by yousi on 2023-02-21.
//

#include "FileFactory.h"
#include "./HTMLFile/HTMLFile.h"
#include "/MarkDownFile/MarkDownFile.h"
#include "/TextFile//TextFile.h"

std::unique_ptr<File> FileFactory::createFile(const std::string& fileName, ExtensionType type) const {
    std::string fileFormat;
    File *file;
    switch(type){
        case DEFAULT:  fileFormat =   ".txt";
        file = new TextFile(fileName + fileFormat);
        break;
        case MARKDOWN: fileFormat =    ".md";
        file = new MarkDownFile(fileName + fileFormat);
        break;
        case HTML:     fileFormat =  ".html";
        file = new HTMLFile(fileName + fileFormat);
        break;
    }
    return std::unique_ptr<File> file;
}
