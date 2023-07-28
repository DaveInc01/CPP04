#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main(){
    Cat mia;
    mia.setType("koshka");
    mia.makeSound();
    Dog rex;
    rex.setType("sobaka");
    rex.makeSound();
    WrongCat kitty;
    kitty.makeSound();
    return (0);
}