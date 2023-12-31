#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#pragma once
// #include "AMateria.hpp"
// #include <iostream>

// #include "AMateria.hpp"
// #include "Ice.hpp"
// #include "Cure.hpp"
// #include <iostream>
// #include <string>
#include "ICharacter.hpp"


// class ICharacter;

class Character : public ICharacter
{
public:
    Character ( void );
    Character ( const Character &copy);
    Character ( std::string );
    Character& operator=(const Character &other);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
private:
    AMateria* slots[4];
    int _used_slots;
    std::string name;
};

# endif
