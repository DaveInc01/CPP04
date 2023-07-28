#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#pragma once


class WrongAnimal {
public:
    WrongAnimal( void );
    WrongAnimal( WrongAnimal &copy );
    void operator=(WrongAnimal &other);
    ~WrongAnimal();
    //setters and getters
    void setType( std::string tp );
    std::string getType( void );
    void makeSound( void );
protected:
    std::string type;
};

#endif