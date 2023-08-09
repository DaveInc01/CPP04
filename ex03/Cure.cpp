#include "./includes/Cure.hpp"

Cure::Cure( void )
{
    this->type = "cure";
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
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure(){}
