//
// Created by yousi on 2023-02-21.
//

#ifndef MP2_HTMLFILE_H
#define MP2_HTMLFILE_H

#include "../File.h"

class HTMLFile : public File {
public:
    HTMLFile(const std::string& fileName);

    bool exists() const override;

    bool write(const std::string& data) override;

    std::string read() const override;

    void setTitle(const std::string& title);

private:
    std::string title;
    std::string fileName;
};
#endif //MP2_HTMLFILE_H
