#ifndef Cat_HPP
# define Cat_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal{
public:
    Cat( void );
    Cat( Cat &copy );
    void operator=( Cat &other );
    void makeSound( void );
    void foo();
    ~Cat();
private:
    Brain *brn;
};

#endif
