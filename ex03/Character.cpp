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
    // this->slots = copy.slots;
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
        if (m->getType() == "ice")
        {
            for (int i = 0; i < 4; i++)
            {
                if(!(this->slots[i]))
                {
                    this->slots[this->_used_slots] = new Ice();
                    std::cout << "The ice type AMateria was aded to position: " << i << std::endl;
                    this->_used_slots++;
                    break ;
                }
            }

        }
        else if (m->getType() == "cure")
        {
            for (int i = 0; i < 4; i++)
            {
                if (!this->slots[i])
                {
                    this->slots[this->_used_slots] = new Cure();
                    std::cout << "The cure type AMateria was aded  to position: " << i  << std::endl;
                    this->_used_slots++;
                    break ;
                }
            }
        }
        else{
            std::cout << "Unknown type of AMateria" << std::endl;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx <= this->_used_slots)
    {
        if (this->slots[idx])
        {
            delete this->slots[idx];
            while (idx + 1 < this->_used_slots)
            {
                this->slots[idx] = this->slots[idx + 1];
                idx++;
            }
            this->slots[idx] = 0;
            this->_used_slots--;
            std::cout << "The " << idx << " slot is uneqiped" << std::endl;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    std::cout << "the " << idx << " slot was used to " << target.getName() << std::endl;
}

// void Character::show_slot_type(int idx)
// {
//     if(this->slot[idx])
//     {
//         std::cout << "the slot type is " << this->slot[idx]->getType() << std::endl;
//     }
//     else{
//         std::cout << "the slot is not exist" << std::endl;
//     }
// }

