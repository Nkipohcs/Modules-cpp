#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <string>

class FileReplacer {
public:
    FileReplacer();  // Déclaration du constructeur par défaut
    ~FileReplacer(); // Déclaration du destructeur

    bool replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2);

    // Autres membres de la classe...
};

#endif // FILEREPLACER_HPP