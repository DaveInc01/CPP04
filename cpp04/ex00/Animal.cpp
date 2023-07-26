#include "./includes/Animal.hpp"

Animal::Animal( void )
{
    std::cout << "Default constructor of Animal was called" << std::endl;
}

Animal::Animal( Animal &copy )
{
    *this = copy;
    std::cout << "Copy constructor of Animal was called" << std::endl;
}

void Animal::operator=( Animal &other )
{
    this->type = other.type;
}
//getters and setters
void Animal::setType(std::string tp)
{
    this->type = tp;
}

std::string Animal::getType( void )
{
    return (this->type);
}

Animal::~Animal(){
    std::cout << "The Animal was destroyed" << std::endl;
}