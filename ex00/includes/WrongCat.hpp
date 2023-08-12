#ifndef WrongCat_HPP
# define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
public:
    WrongCat( void );
    WrongCat( WrongCat &copy );
    void operator=(WrongCat &other);
    void makeSound();
    ~WrongCat( void );
};

#endif
