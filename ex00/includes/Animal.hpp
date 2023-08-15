#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#pragma once


class Animal {
public:
    Animal( void );
    Animal( const Animal &copy );
    Animal & operator=(const Animal &other);
    virtual ~Animal();
    //setters and getters
    void setType( std::string tp );
    std::string getType( void ) const;
    virtual void makeSound() const;
protected:
    std::string type;
};

#endif
