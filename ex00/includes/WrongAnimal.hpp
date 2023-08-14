#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#pragma once


class WrongAnimal {
public:
    WrongAnimal( void );
    WrongAnimal( WrongAnimal &copy );
    WrongAnimal & operator=(WrongAnimal &other);
    virtual ~WrongAnimal();
    //setters and getters
    void setType( std::string tp );
    std::string getType( void );
    virtual void makeSound( void ) const;
protected:
    std::string type;
};

#endif