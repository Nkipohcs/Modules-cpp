#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    static const int maxMateria = 4;
    AMateria* learnedMaterias[maxMateria];

public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource& operator=(const MateriaSource& other);
    virtual ~MateriaSource();

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const &type);
};

#endif
