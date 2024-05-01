#include <iostream>
#include <string>
#include "FileReplacer.hpp"

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    FileReplacer replacer;
    if (!replacer.replaceInFile(filename, s1, s2)) {
        std::cerr << "Error replacing text in file." << std::endl;
        return 1;
    }

    return 0;
}
