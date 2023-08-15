#ifndef WrongCat_HPP
# define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
public:
    WrongCat( void );
    WrongCat( const WrongCat &copy );
    WrongCat & operator=(const WrongCat &other);
    void makeSound() const;
    ~WrongCat( void );
};

#endif
