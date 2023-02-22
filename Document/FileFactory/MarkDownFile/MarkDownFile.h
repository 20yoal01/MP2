//
// Created by yousi on 2023-02-21.
//

#ifndef MP2_MARKDOWNFILE_H
#define MP2_MARKDOWNFILE_H


#include "../File.h"

class MarkDownFile : public File {
public:
    MarkDownFile(const std::string& fileName);

    virtual bool exists() const override;

    virtual bool write(const std::string& data) override;

    virtual std::string read() const override;

private:
    std::string fileName;
};


#endif //MP2_MARKDOWNFILE_H
