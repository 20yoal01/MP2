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
    std::string output = "<!DOCTYPE html>\n"
                         "<html lang=\"en\">\n"
                         "<head>\n"
                         "  <meta charset=\"UTF-8\" />\n"
                         "  <title>" + title + "</title>\n"
                         "  <meta name=\"viewport\" content=\"width=device-width,initial-scale=1\" />\n"
                         "  <meta name=\"description\" content=\"\" />\n"
                         "  <link rel=\"icon\" href=\"favicon.png\">\n"
                         "</head>\n"
                         "<body>\n"
                         + data + "\n"
                         "</body>\n"
                         "</html>";
    file << output;
    file.close();
    return true;
}

void HTMLFile::setTitle(const std::string& title) {
    this->title = title;
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
