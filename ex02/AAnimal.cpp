#include "./includes/AAnimal.hpp"

AAnimal::AAnimal( void )
{
    std::cout << "Default constructor of AAnimal was called" << std::endl;
}

AAnimal::AAnimal( AAnimal &copy )
{
    *this = copy;
    std::cout << "Copy constructor of AAnimal was called" << std::endl;
}

void AAnimal::operator=( AAnimal &other )
{
    this->type = other.type;
}

//getters and setters
void AAnimal::setType(std::string tp)
{
    this->type = tp;
}

std::string AAnimal::getType( void )
{
    return (this->type);
}

AAnimal::~AAnimal(){
    std::cout << "The AAnimal was destroyed" << std::endl;
}
