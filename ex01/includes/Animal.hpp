#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#pragma once


class Animal {
public:
    Animal( void );
    Animal( Animal &copy );
    void operator=(Animal &other);
    virtual ~Animal();
    //setters and getters
    void setType( std::string tp );
    std::string getType( void );
    virtual void makeSound( void );
protected:
    std::string type;
};

#endif