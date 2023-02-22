//
// Created by yousi on 2023-02-21.
//

#include "MarkDownFile.h"
#include <iostream>
#include <fstream>

MarkDownFile::MarkDownFile(const std::string& fileName) : fileName(fileName) {}

bool MarkDownFile::exists() const {
    std::ifstream file(fileName);
    return file.good();
}

bool MarkDownFile::write(const std::string& data) {
    std::ofstream file(fileName, std::ios::out | std::ios::trunc);
    if (!file.is_open()) {
        return false;
    }
    file << data;
    file.close();
    return true;
}

std::string MarkDownFile::read() const {
    std::ifstream file(fileName, std::ios::in);
    if (!file.is_open()) {
        return "";
    }
    std::string data((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    file.close();
    return data;
}