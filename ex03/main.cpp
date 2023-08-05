#include "./includes/AMateria.hpp"
#include "./includes/Ice.hpp"
#include "./includes/Cure.hpp"
#include "./includes/ICharacter.hpp"

int main()
{
    AMateria *gold = new Ice();
    AMateria *silver = new Cure();
    AMateria *clone = silver->clone();
    std::cout << "vars: " << silver->getType() << gold->getType() << clone->getType() << std::endl;
    return (0);
}