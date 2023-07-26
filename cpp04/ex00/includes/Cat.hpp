#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"

class Cat: public Animal{
public:
    Cat( void );
    Cat( Cat &copy );
    void makeSound();
    ~Cat( void );
};

#endif