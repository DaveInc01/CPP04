#include "./includes/AAnimal.hpp"

AAnimal::AAnimal( void )
{
    std::cout << "Default constructor of AAnimal was called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &copy )
{
    *this = copy;
    std::cout << "Copy constructor of AAnimal was called" << std::endl;
}

AAnimal & AAnimal::operator=( const AAnimal &other )
{
    this->type = other.type;
    std::cout << "Asignment operator of AAnimal was called" << std::endl;
    return *this;
}

//getters and setters
void AAnimal::setType(std::string tp)
{
    this->type = tp;
}

std::string AAnimal::getType( void ) const
{
    return (this->type);
}

AAnimal::~AAnimal(){
    std::cout << "The AAnimal was destroyed" << std::endl;
}
