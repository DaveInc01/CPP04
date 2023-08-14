#include "includes/Cat.hpp"

Cat::Cat( void )
{
    std::cout << "Default constructor of Cat was called" << std::endl;
    this->type = "Cat";
}

Cat::Cat( const Cat &copy ) : Animal(copy)
{
    this->type = copy.type;
    std::cout << "Copy constructor of Cat was called" << std::endl;
}

Cat & Cat::operator=( const Cat &other )
{
    this->type = other.type;
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Meow-Meow ˶ᵔ ᵕ ᵔ˶ " << std::endl;
}

Cat::~Cat(){
    std::cout << "The Cat was destroyed" << std::endl;
}