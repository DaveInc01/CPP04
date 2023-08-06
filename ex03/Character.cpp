#include "./includes/Character.hpp"

Character::Character( void )
{
    _used_slots = 0;
}

Character::Character (Character & copy){
    this->_used_slots = copy._used_slots;
    this->name = copy.name;
    // this->slot = copy.slot;
}

Character::Character (std::string n)
{
    this->name = n;
}

void Character::operator=(Character &other)
{
    this->_used_slots = other._used_slots;
    this->name = other.name;
    // this->slot = other.slot;
}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    if (this->_used_slots < 4)
    {
        this->slot[this->_used_slots] = m;
        this->_used_slots++;
        std::cout << "the " << this->_used_slots - 1 << " slot was equiped" << std::endl; 
    }
}

void Character::unequip(int idx)
{
    std::cout << "The " << idx << " slot is uneqiped" << std::endl;
}

 void Character::use(int idx, ICharacter& target)
{
    std::cout << "the " << idx << " slot was used to " << target.getName() << std::endl;
}