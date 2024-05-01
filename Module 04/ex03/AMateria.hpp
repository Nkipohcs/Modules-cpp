#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
class ICharacter; // Déclaration avancée correcte

class AMateria {
protected:
    std::string type;

public:
    AMateria(std::string const & type);
    virtual ~AMateria();
    std::string const & getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif
