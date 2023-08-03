#include "./includes/AMateria.hpp"

AMateria::AMateria (void)
{
    this->type = "unknown";
}

AMateria::AMateria (AMateria &copy)
{
    this->type = copy.type;
}

void AMateria::operator=(AMateria &other)
{
    this->type = other.type;
}

AMateria::~AMateria () 
{}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

