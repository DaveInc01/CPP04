#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main(){
    // std::cout << "ok\n";
    Animal *mia = new Cat();
    Animal *rex = new Dog();
    // mia->setType("koshka");
    // rex->setType("sobaka");
    mia->makeSound();
    rex->makeSound();
    WrongAnimal *kitty = new WrongCat();
    kitty->makeSound();
    return (0);
}
