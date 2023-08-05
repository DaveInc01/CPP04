#include "./includes/Character.hpp"

Character::Character ( void ){
    this->slot = new AMateria (4);
}

Character::Character (Character & clone){
    this->name = clone.name;
    this->slot = clone.slot;
}

Character::Character (std::string n)
{
    this->name = n;
}

void Character::operator=(Character &other)
{
    this->name = other.name;
    this->slot = clone.slot;
}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    int len = this->slot.length();
    std::cout << "using equip length is: " << len << std::endl;
}