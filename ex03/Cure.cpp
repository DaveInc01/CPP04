#include "./includes/Cure.hpp"

Cure::Cure( void )
{
    this->type = "Cure";
}

Cure::Cure( Cure & copy) : AMateria(copy)
{
    this->type = copy.type;
}

void Cure::operator=(Cure& other)
{
    this->type = other.type;
}

AMateria* Cure::clone () const
{
    AMateria *CurePtr = new Cure(); 
    return (CurePtr);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Cure::~Cure(){}