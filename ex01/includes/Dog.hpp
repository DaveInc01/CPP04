#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
public:
    Dog();
    Dog( const Dog &copy );
    Dog & operator=(const Dog &other);
    void makeSound() const;
    ~Dog( void );
private:
    Brain* brain;
};

#endif
