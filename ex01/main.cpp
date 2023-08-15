#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main(){
    Animal* d = new Dog();
    Animal* c = new Cat();

    d->makeSound();
    c->makeSound();

    delete d;
    delete c;

    Animal* arr[10];
    for (int i = 0; i < 10; i++)
    {
        if (i >= 5)
        {
            arr[i] = new Dog();
        }
        else{
            arr[i] = new Cat();
        }
    }
    arr[3]->makeSound();
    arr[7]->makeSound();
    for (int i = 0; i < 10; i++)
    {
        delete arr[i];
    }

    Dog basic;
    {
        Dog tmp = basic;
    }

    return (0);
}
