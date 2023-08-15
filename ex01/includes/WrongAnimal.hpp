#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#pragma once


class WrongAnimal {
public:
    WrongAnimal( void );
    WrongAnimal( const WrongAnimal &copy );
    WrongAnimal & operator=(const WrongAnimal &other);
    virtual ~WrongAnimal();
    //setters and getters
    void setType( std::string tp );
    std::string getType( void );
    void makeSound() const;
protected:
    std::string type;
};

#endif
