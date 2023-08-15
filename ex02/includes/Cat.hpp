#ifndef Cat_HPP
# define Cat_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal{
public:
    Cat();
    Cat( const Cat &copy );
    Cat & operator=(const Cat &other);
    void makeSound() const;
    ~Cat( void );
private:
    Brain* brain;
};

#endif
