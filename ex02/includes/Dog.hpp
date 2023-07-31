#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal{
public:
    Dog( void );
    Dog( Dog &copy );
    void operator=(Dog &other);
    void makeSound();
    ~Dog( void );
private:
    Brain *brn;
};

#endif