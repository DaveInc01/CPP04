#ifndef ANIMAL_HPP
# define ANIAL_HPP

#include <iostream>
#pragma once


class Animal {
public:
    Animal( void );
    Animal( Animal &copy );
    void operator=(Animal &other);
    ~Animal();
    //setters and getters
    void setType( std::string tp );
    std::string getType( void );
protected:
    std::string type;
};

#endif