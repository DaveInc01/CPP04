#ifndef ICE_HPP
#define ICE_HPP

#include "./AMateria.hpp"
// #include "./ICharacter.hpp"

class ICharacter;
class AMateria;

class Ice : public AMateria
{
public:
    Ice( void );
    Ice( Ice& copy );
    void operator=( Ice& other );
    virtual ~Ice();
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

};

#endif