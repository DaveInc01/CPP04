#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#pragma once

class AAnimal {
public:
    AAnimal( void );
    AAnimal( const AAnimal &copy );
    AAnimal & operator=( const AAnimal &other);
    virtual ~AAnimal();
    //setters and getters
    void setType( std::string tp );
    std::string getType( void ) const;
    virtual void makeSound() const = 0;
protected:
    std::string type;
};

#endif
