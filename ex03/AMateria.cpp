#include "./includes/AMateria.hpp"

AMateria::AMateria (void)
{
    this->type = "unknown";
}

AMateria::AMateria (const AMateria &copy)
{
    this->type = copy.type;
}

AMateria & AMateria::operator=(const AMateria &other)
{
    this->type = other.type;
    return *this;
}

AMateria::~AMateria ()
{

}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << " Definition use  " << target.getName() << std::endl;
}

