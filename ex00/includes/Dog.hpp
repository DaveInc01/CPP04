#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
public:
    Dog( void );
    Dog( Dog &copy );
    void operator=(Dog &other);
    void makeSound();
    ~Dog( void );
};

#endif