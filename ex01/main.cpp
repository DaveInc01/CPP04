#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main(){
    Animal animals[10];
    for (int i = 0; i < 10; i++)
    {
        if(i >=5 )
        {
            animals[i] = new Dog();
        }
    }
    // mia.setType("koshka");
    // mia.makeSound();
    // Dog rex;
    // rex.setType("sobaka");
    // rex.makeSound();
    // WrongCat kitty;
    // kitty.makeSound();
    return (0);
}