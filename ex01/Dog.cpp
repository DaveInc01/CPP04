#include "includes/Dog.hpp"

Dog::Dog( void )
{
    std::cout << "Default constructor of Dog was called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog( const Dog &copy ) : Animal(copy)
{
    this->type = copy.type;
    this->brain = new Brain();
    *(this->brain) = *(copy.brain);
    std::cout << "Copy constructor of Dog was called" << std::endl;
}

Dog & Dog::operator=( const Dog &other )
{
    std::cout<<"Dog assignment operator was called"<<std::endl;
    this->type = other.type;
    this->brain = new Brain();
    *(this->brain) = *(other.brain);
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Haf-Haf (＾ᴥ＾)" << std::endl;
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "The Dog was destroyed" << std::endl;
}
