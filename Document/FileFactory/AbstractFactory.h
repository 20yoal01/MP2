//
// Created by yousi on 2023-02-21.
//

#ifndef MP2_ABSTRACTFACTORY_H
#define MP2_ABSTRACTFACTORY_H


#include <memory>
#include <string>
#include "File.h"
#include "../../Element/Visitor/ExtensionType.h"

template<class T>
class AbstractFactory {
public:
    virtual T createFile(const std::string &fileName, ExtensionType type) const = 0;
    virtual ~AbstractFactory() = default;
};
#endif //MP2_ABSTRACTFACTORY_H
