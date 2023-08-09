#ifndef AMATERIA
# define AMATERIA

#include <iostream>
#include "ICharacter.hpp"

// class ICharacter;

class AMateria
{
public:
    AMateria( void );
    AMateria( AMateria& copy );
    void operator=( AMateria& other );
    virtual ~AMateria();
    AMateria(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
protected:
    std::string type;
};

#endif
