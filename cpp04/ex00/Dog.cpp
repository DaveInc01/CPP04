#include "includes/Dog.hpp"

Dog::Dog( void )
{
    std::cout << "Default constructor of Dog was called" << std::endl;
    this->type = "Dog";
}

Dog::Dog( Dog &copy ) : Animal(copy)
{
    *this = copy;
    std::cout << "Copy constructor of Dog was called" << std::endl;
}

void Dog::makeSound(){
    std::cout << "Haf-Haf (＾ᴥ＾)" << std::endl;
}

Dog::~Dog(){
    std::cout << "The Dog was destroyed" << std::endl;
}