#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#pragma once

class AAnimal {
public:
    AAnimal( void );
    AAnimal( AAnimal &copy );
    void operator=(AAnimal &other);
    virtual ~AAnimal();
    //setters and getters
    void setType( std::string tp );
    std::string getType( void );
    virtual void makeSound( void ) = 0;
protected:
    std::string type;
};

#endif
