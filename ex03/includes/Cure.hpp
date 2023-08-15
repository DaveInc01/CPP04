#ifndef CURE_HPP
#define CURE_HPP

#include "./AMateria.hpp"
// #include "./ICharacter.hpp"

class ICharacter;
class AMateria;

class Cure : public AMateria
{
public:
    Cure( void );
    Cure( Cure& );
    void operator=( Cure& other );
    virtual ~Cure();
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif
