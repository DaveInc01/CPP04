#include "includes/Ice.hpp"

Ice::Ice( void )
{
    this->type = "ice";
}

Ice::Ice(Ice &copy)
{
    this->type = copy.type;
}

void Ice::operator=(Ice& other)
{
    this->type = other.type;
}

AMateria* Ice::clone()
{
    AMateria *icePtr = new Ice(); 
    return (icePtr);
}

void Ice:use(ICharacter& target)
{
    std:cout << "* shoots an ice bolt at " << target.name << " *" << std::endl;
}