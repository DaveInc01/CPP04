#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
public:
    Cat( void );
    Cat( Cat &copy );
    void operator=( Cat &other );
    void makeSound();
    ~Cat( void );
private:
    Brain *brn;
};

#endif