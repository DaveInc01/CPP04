#include "./includes/AMateria.hpp"
#include "./includes/Ice.hpp"
#include "./includes/Cure.hpp"
#include "./includes/ICharacter.hpp"
#include "./includes/Character.hpp"
#include "./includes/IMateriaSource.hpp"
#include "./includes/MateriaSource.hpp"

int main()
{
    // AMateria *ice1 = new Ice();
    // AMateria *cure1 = new Cure();
    // ICharacter *hero = new Character("hero");
    // ICharacter *badGuy = new Character("badGuy");
    // hero->equip(ice1);
    // badGuy->equip(cure1);
    // badGuy->use(0, *hero);
    // hero->use(0, *hero);
    // delete hero;
    // delete badGuy;


    //-----------
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    return (0);
}
