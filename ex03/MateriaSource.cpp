#include "./includes/MateriaSource.hpp"
#include "./includes/AMateria.hpp"
#include "./includes/Cure.hpp"
#include "./includes/Ice.hpp"

MateriaSource::MateriaSource()
{
    slots[0] = 0;
    slots[1] = 0;
    slots[2] = 0;
    slots[3] = 0;
    _slots_id = 0;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    int  i = 0;

    if (this != &obj)
    {
        while (i < obj.getId())
        {
            *(this->slots[i]) = *(obj.slots[i]);
            i++;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    int i = 0;

    while (i < this->_slots_id)
    {
        delete slots[i];
        i++;
    }
    
}

//--------------------------------------------

void MateriaSource::learnMateria(AMateria *a)
{
    if (!a || _slots_id == 4)
        return ;
    if (a->getType().compare("ice") == 0)
    {
        slots[_slots_id] = new Ice();
        *(slots[_slots_id]) = *a;
    }
    if (a->getType().compare("cure") == 0)
    {
        slots[_slots_id] = new Cure();
        *(slots[_slots_id]) = *a;
    }
    _slots_id++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    AMateria *tmp = 0;

    int i = 0;
    while (i < this->_slots_id)
    {
        if (this->slots[i] && this->slots[i]->getType().compare(type) == 0)
        {
            if (type.compare("ice") == 0)
            {
                tmp = new Ice();
            }
            if (type.compare("cure") == 0)
            {
                tmp = new Cure();
            }
            return tmp;
        }
        i++;
    }
    return tmp;
}

int MateriaSource::getId() const
{
    return _slots_id;
}