#include "includes/Ice.hpp"

Ice::Ice( void ) : AMateria()
{
    this->type = "ice";
}

Ice::Ice(Ice &copy) : AMateria(copy)
{
    this->type = copy.type;
}

void Ice::operator=(Ice& other)
{
    this->type = other.type;
}

AMateria* Ice::clone() const
{
    AMateria *icePtr = new Ice(); 
    return (icePtr);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice(){}