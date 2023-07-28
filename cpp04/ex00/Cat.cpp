#include "includes/Cat.hpp"

Cat::Cat( void )
{
    std::cout << "Default constructor of Cat was called" << std::endl;
    this->type = "Cat";
}

Cat::Cat( Cat &copy ) : Animal(copy)
{
    this->type = copy.type;
    std::cout << "Copy constructor of Cat was called" << std::endl;
}

void Cat::makeSound(){
    std::cout << "Meow-Meow ˶ᵔ ᵕ ᵔ˶ " << std::endl;
}

Cat::~Cat(){
    std::cout << "The Cat was destroyed" << std::endl;
}