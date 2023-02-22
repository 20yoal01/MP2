//
// Created by yousi on 2023-02-21.
//

#ifndef MP2_FILE_H
#define MP2_FILE_H

#include <string>

class File {
public:
    virtual ~File() {}

    virtual bool exists() const = 0;

    virtual bool write(const std::string& data) = 0;

    virtual std::string read() const = 0;
};


#endif //MP2_FILE_H
