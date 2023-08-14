#include "includes/Dog.hpp"

Dog::Dog( void )
{
    std::cout << "Default constructor of Dog was called" << std::endl;
    this->type = "Dog";
}

Dog::Dog( const Dog &copy ) : Animal(copy)
{
    this->type = copy.type;
    std::cout << "Copy constructor of Dog was called" << std::endl;
}

Dog & Dog::operator=( const Dog &other )
{
    this->type = other.type;
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Haf-Haf (＾ᴥ＾)" << std::endl;
}

Dog::~Dog(){
    std::cout << "The Dog was destroyed" << std::endl;
}