#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"

class Cat: public Animal{
public:
    Cat( );
    Cat( const Cat &copy );
    Cat & operator=(const Cat &other);
    void makeSound() const;
    ~Cat( void );
};

#endif