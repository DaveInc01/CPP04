#include "includes/AAnimal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main(){
    AAnimal* d = new Dog();
    AAnimal* c = new Cat();

    d->makeSound();
    c->makeSound();

    delete d;
    delete c;

    AAnimal* arr[10];
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

    return (0);
}
