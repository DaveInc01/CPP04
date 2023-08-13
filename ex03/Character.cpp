#include "./includes/Character.hpp"
#include "./includes/AMateria.hpp"
#include "./includes/Ice.hpp"
#include "./includes/Cure.hpp"

Character::Character( void )
{
    for(int i = 0; i < 4; i++)
    {
        this->slots[i] = 0;
    }
    this->_used_slots = 0;
}

Character::Character (Character & copy){
    this->_used_slots = copy._used_slots;
    this->name = copy.name;
    int i = -1;
    while (this->slots[++i])
    {
        delete slots[i];
    }
    i = -1;
    while (copy.slots[++i])
    {
        if (copy.slots[i]->getType() == "cure")
        {
            this->slots[i] = new Cure();
            this->slots[i] = copy.slots[i];
        }
        else
        {
            this->slots[i] = new Ice();
            this->slots[i] = copy.slots[i];
        }
    }
}

Character& Character::operator=(const Character & other)
{
    int i = 0;
    while (i < this->_used_slots)
    {
        delete this->slots[i];
        i++;
    }
    this->_used_slots = other._used_slots;
    this->name = other.name;
    i = 0;
    while (i < this->_used_slots)
    {
        if (other.slots[i]->getType() == "cure")
        {
            this->slots[i] = new Cure();
        }
        else if (other.slots[i]->getType() == "ice")
        {
            this->slots[i] = new Ice();
        }
        i++;
    }
    return *this;
}

Character::Character (std::string n)
{
    this->name = n;
    for(int i = 0; i < 4; i++)
    {
        this->slots[i] = 0;
    }
    this->_used_slots = 0;
}


std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    if (m && _used_slots < 4)
    {
        if (m->getType().compare("ice") == 0)
            this->slots[_used_slots] = new Ice();
        else if (m->getType().compare("cure") == 0)
            this->slots[_used_slots] = new Cure();
        else
            return ;
        *(this->slots[_used_slots]) = *m;
        _used_slots++;
    }
}

void Character::unequip(int idx)
{
    if (idx <= this->_used_slots)
    {
        if (this->slots[idx])
        {
            delete this->slots[idx];
            this->slots[idx] = NULL;
            while (idx + 1 < this->_used_slots)
            {
                this->slots[idx] = this->slots[idx + 1];
                idx++;
            }
            this->slots[idx] = 0;
            this->_used_slots--;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (slots[idx])
        this->slots[idx]->use(target);
}

Character::~Character(){
    int i = 0;
    while (i < _used_slots)
    {
        delete slots[i];
        slots[i] = nullptr;
        i++;
    }
}
