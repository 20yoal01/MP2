//
// Created by yousi on 2023-02-21.
//

#include "FileFactory.h"

std::unique_ptr<File> FileFactory::createFile(const std::string& fileName, ExtensionType type) const {
    std::string fileFormat;
    std::unique_ptr<File> file;
    switch(type){
        case DEFAULT:  fileFormat =   ".txt";
        file = std::make_unique<TextFile>(fileName + fileFormat);
        break;
        case MARKDOWN: fileFormat =    ".md";
        file = std::make_unique<MarkDownFile>(fileName + fileFormat);
        break;
        case HTML:     fileFormat =  ".html";
        file = std::make_unique<HTMLFile>(fileName + fileFormat);
        break;
    }
    return file;
}
