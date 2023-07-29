#include "includes/Cat.hpp"

Cat::Cat( void )
{
    std::cout << "Default constructor of Cat was called" << std::endl;
    this->type = "Cat";
    this->brn = new Brain();
}

Cat::Cat( Cat &copy ) : Animal(copy)
{
    this->type = copy.type;
    std::cout << "Copy constructor of Cat was called" << std::endl;
}

void Cat::operator=( Cat &other )
{
    this->brn = other.brn;
    this->type = other.type;
}

void Cat::makeSound(){
    std::cout << "Meow-Meow ˶ᵔ ᵕ ᵔ˶ " << std::endl;
}

void Cat::foo(){
    std::cout << "I am the Cat class method :)" << std::endl;
}

Cat::~Cat(){
    std::cout << "The Cat was destroyed" << std::endl;
    delete this->brn;
}