#include "./includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
    std::cout << "Default constructor of WrongAnimal was called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal &copy )
{
    *this = copy;
    std::cout << "Copy constructor of WrongAnimal was called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal &other )
{
    this->type = other.type;
    return *this;
}

void WrongAnimal::makeSound() const{
    std::cout << "The WrongAnimal sounds ..." << std::endl;
}
//getters and setters
void WrongAnimal::setType(std::string tp)
{
    this->type = tp;
}

std::string WrongAnimal::getType( void )
{
    return (this->type);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "The WrongAnimal was destroyed" << std::endl;
}