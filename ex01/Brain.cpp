#include "includes/Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Default constructor of Brain was called" << std::endl;
}

Brain::Brain( const Brain &copy )
{
    *this = copy;
    std::cout << "Copy constructor of Brain was called" << std::endl;
}

Brain & Brain::operator=( const Brain &other )
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    std::cout << "Brain assignment operator was called" << std::endl;
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain destuctor was called" << std::endl;
}

