#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main(){
    // const Animal* d = new Dog(); 
    // const Animal* c = new Cat();

    Animal* arr[100];
    for (int i = 0; i < 100; i++)
    {
        if (i >= 50)
        {
            arr[i] = new Dog();
        }
        else{
            arr[i] = new Cat();
        }
    }
    arr[30]->makeSound();
    arr[70]->makeSound();
    for (int i = 0; i < 100; i++)
    {
        delete arr[i];
    }
    // Dog rex;
    // rex.setType("sobaka");
    // rex.makeSound();
    // WrongCat kitty;
    // kitty.makeSound();
    return (0);
}