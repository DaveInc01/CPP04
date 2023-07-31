#ifndef AMATERIA
# define AMATERIA

#include <iostream>

class AMateria
{
    AMateria( void );
    AMateria( AMateria& copy );
    void operator=( AMateria& other );
    ~AMateria();
public:
    AMateria(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif