#include "includes/Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Default constructor of Brain was called" << std::endl;
}

Brain::Brain( Brain &copy )
{
    *this = copy;
    std::cout << "Copy constructor of Brain was called" << std::endl;
}

void Brain::operator=( Brain &other )
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    std::cout << "Brain Copy assignment operator was called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destuctor was called" << std::endl;
}

