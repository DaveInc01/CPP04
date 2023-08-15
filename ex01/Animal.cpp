#include "./includes/Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor of Animal was called" << std::endl;
}

Animal::Animal( const Animal &copy )
{
    this->type = copy.type;
    std::cout << "Copy constructor of Animal was called" << std::endl;
}

Animal & Animal::operator=( const Animal &other )
{
    this->type = other.type;
    std::cout<<"Animal assigment operator call"<<std::endl;
    return *this;
}

void Animal::makeSound() const{
    std::cout << "Some animal sounds ..." << std::endl;
}
//getters and setters
void Animal::setType(std::string tp)
{
    this->type = tp;
}

std::string Animal::getType( void ) const
{
    return (this->type);
}

Animal::~Animal(){
    std::cout << "The Animal was destroyed" << std::endl;
}