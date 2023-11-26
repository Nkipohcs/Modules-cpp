#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();                              // Constructeur par défaut
    Fixed(const Fixed &other);            // Constructeur de recopie
    Fixed& operator=(const Fixed &other); // Opérateur d'affectation
    ~Fixed();                             // Destructeur

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
