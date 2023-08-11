#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "./AMateria.hpp"
#include "./IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource();
    MateriaSource(const MateriaSource&);
    MateriaSource &operator=(const MateriaSource &);
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    int getId() const;
private:
    AMateria* slots[4];
    int _slots_id;
};

#endif