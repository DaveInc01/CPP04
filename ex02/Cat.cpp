#include "includes/Cat.hpp"

Cat::Cat( void )
{
    std::cout << "Default constructor of Cat was called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat( const Cat &copy ) : AAnimal(copy)
{
    this->type = copy.type;
    this->brain = new Brain();
    *(this->brain) = *(copy.brain);
    std::cout << "Copy constructor of Cat was called" << std::endl;
}

Cat & Cat::operator=( const Cat &other )
{
    std::cout<<"Cat assignment operator was called"<<std::endl;
    this->type = other.type;
    this->brain = new Brain();
    *(this->brain) = *(other.brain);
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Meow-Meow ˶ᵔ ᵕ ᵔ˶ " << std::endl;
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "The Cat was destroyed" << std::endl;
}
