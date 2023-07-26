#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"

int main(){
    Cat mia;
    Dog ostin;
    mia.setType("koshka");
    std::cout << "mia type is still " << mia.getType() << std::endl;
    mia.makeSound();
    ostin.makeSound();
}