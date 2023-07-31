#ifndef CURE_HPP
#define CURE_HPP

#include "./AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure( void );
    Cure( Cure& copy );
    void operator=( Cure& other );
    ~Cure();
    AMateria* clone();
    void use(ICharacter& target);
private:
    std::string type;
};

#endif