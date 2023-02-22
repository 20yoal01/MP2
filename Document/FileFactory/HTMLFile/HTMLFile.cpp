//
// Created by yousi on 2023-02-21.
//

#include "HTMLFile.h"
#include <iostream>
#include <fstream>

HTMLFile::HTMLFile(const std::string& fileName) : fileName(fileName) {}

bool HTMLFile::exists() const {
    std::ifstream file(fileName);
    return file.good();
}

bool HTMLFile::write(const std::string& data) {
    std::ofstream file(fileName, std::ios::out | std::ios::trunc);
    if (!file.is_open()) {
        return false;
    }
    file << data;
    file.close();
    return true;
}

std::string HTMLFile::read() const {
    std::ifstream file(fileName, std::ios::in);
    if (!file.is_open()) {
        return "";
    }
    std::string data((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    file.close();
    return data;
}
