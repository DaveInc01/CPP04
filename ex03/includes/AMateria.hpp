#ifndef AMATERIA
# define AMATERIA

#include <iostream>
#include "ICharacter.hpp"

// class ICharacter;

class AMateria
{
public:
    AMateria( void );
    AMateria( const AMateria& copy );
    AMateria & operator=( const AMateria& other );
    virtual ~AMateria();
    AMateria(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
protected:
    std::string type;
};

#endif
