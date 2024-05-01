#include "FileReplacer.hpp"
#include <fstream>
#include <sstream>

FileReplacer::FileReplacer() {}

FileReplacer::~FileReplacer() {}

bool FileReplacer::replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open()) {
        return false;
    }

    std::stringstream buffer;
    buffer << inFile.rdbuf();
    std::string content = buffer.str();
    inFile.close();

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.replace(pos, s1.length(), s2);
        pos += s2.length();
    }

    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile.is_open()) {
        return false;
    }

    outFile << content;
    outFile.close();

    return true;
}
