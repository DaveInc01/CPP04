#include "includes/WrongCat.hpp"

WrongCat::WrongCat( void )
{
    std::cout << "Default constructor of WrongCat was called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat( WrongCat &copy ) : WrongAnimal(copy)
{
    this->type = copy.type;
    std::cout << "Copy constructor of WrongCat was called" << std::endl;
}

void WrongCat::makeSound(){
    std::cout << "Wrong cat says: Meow-Meow ˶ᵔ ᵕ ᵔ˶ " << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "The WrongCat was destroyed" << std::endl;
}