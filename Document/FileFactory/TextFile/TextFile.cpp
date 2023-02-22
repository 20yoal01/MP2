//
// Created by yousi on 2023-02-21.
//

#include "TextFile.h"
#include <iostream>
#include <fstream>

TextFile::TextFile(const std::string& fileName) : fileName(fileName) {}

bool TextFile::exists() const {
    std::ifstream file(fileName);
    return file.good();
}

bool TextFile::write(const std::string& data) {
    std::ofstream file(fileName, std::ios::out | std::ios::trunc);
    if (!file.is_open()) {
        return false;
    }
    file << data;
    file.close();
    return true;
}

std::string TextFile::read() const {
    std::ifstream file(fileName, std::ios::in);
    if (!file.is_open()) {
        return "";
    }
    std::string data((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    file.close();
    return data;
}