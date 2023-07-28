#include "includes/Dog.hpp"

Dog::Dog( void )
{
    std::cout << "Default constructor of Dog was called" << std::endl;
    this->type = "Dog";
    this->brn = new Brain();
}

Dog::Dog( Dog &copy ) : Animal(copy)
{
    *this = copy;
    std::cout << "Copy constructor of Dog was called" << std::endl;
}

void Dog::operator=( Dog &other )
{
    this->brn = other.brn;
    this->type = other.type;
}

void Dog::makeSound(){
    std::cout << "Haf-Haf (＾ᴥ＾)" << std::endl;
}

Dog::~Dog(){
    std::cout << "The Dog was destroyed" << std::endl;
    delete this->brn;
}