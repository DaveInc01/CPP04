#ifndef ICE_HPP
#define ICE_HPP

#include "./AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice( void );
    Ice( Ice& copy );
    void operator=( Ice& other );
    ~Ice();
    AMateria* clone();
    void use(ICharacter& target);
private:
    std::string type;
};

#endif