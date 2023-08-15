#include "./includes/AMateria.hpp"
#include "./includes/Ice.hpp"
#include "./includes/Cure.hpp"
#include "./includes/ICharacter.hpp"
#include "./includes/Character.hpp"
#include "./includes/IMateriaSource.hpp"
#include "./includes/MateriaSource.hpp"


int main()
{
    AMateria *ice1 = new Ice();
    AMateria *ice2 = new Ice();
    AMateria *cure1 = new Cure();
    ICharacter *hero = new Character("hero");
    ICharacter *badGuy = new Character("badGuy");
    hero = badGuy;
    hero->equip(ice1);
    hero->equip(ice2);
    hero->use(0, *badGuy);
    badGuy->use(0, *hero);
    badGuy->equip(cure1);
    badGuy->use(0, *badGuy);
    delete hero;
    delete badGuy;
    delete ice1;
    delete ice2;
    delete cure1;
    //-----------
    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // ICharacter* me = new Character("me");
    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    // delete me;
    // delete src;

    return (0);
}
