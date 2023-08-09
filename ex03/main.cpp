#include "./includes/AMateria.hpp"
#include "./includes/Ice.hpp"
#include "./includes/Cure.hpp"
#include "./includes/ICharacter.hpp"
#include "./includes/Character.hpp"

int main()
{
    // AMateria *gold = new Ice();
    AMateria *ice1 = new Ice();
    AMateria *cure2 = new Cure();
    AMateria *cure1 = new Cure();
    // AMateria *cure2 = new Cure();
    // AMateria *clone = silver->clone();
    ICharacter *hero = new Character("hero");
    hero->equip(ice1);
    hero->equip(cure2);
    hero->unequip(0);
    hero->equip(cure1);
    return (0);
}
