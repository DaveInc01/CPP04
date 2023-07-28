#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"

int main(){
    Animal giraf;
    Cat mia;
    mia.setType("koshka");
    mia.makeSound();
    Dog rex;
    rex.setType("sobaka");
    rex.makeSound();
    giraf.makeSound();
}