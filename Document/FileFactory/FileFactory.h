//
// Created by yousi on 2023-02-21.
//

#ifndef MP2_FILEFACTORY_H
#define MP2_FILEFACTORY_H

#include <unordered_map>
#include <memory>
#include <string>
#include "File.h"
#include "AbstractFactory.h"
#include "./HTMLFile/HTMLFile.h"
#include "./MarkDownFile/MarkDownFile.h"
#include "./TextFile//TextFile.h"

class FileFactory : public AbstractFactory<std::unique_ptr<File>> {
public:
    std::unique_ptr<File> createFile(const std::string& filename, ExtensionType type) const override;
};


#endif //MP2_FILEFACTORY_H
