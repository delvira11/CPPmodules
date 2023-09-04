#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->materias[i] = NULL;
    }
}
MateriaSource::MateriaSource(MateriaSource &copy)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->materias[i] = copy.materias[i];
    }

}
MateriaSource &MateriaSource::operator=(MateriaSource &copy)
{
    std::cout << "MateriaSource asignation operator called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->materias[i] = copy.materias[i];
    }
    return *this;
}
MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4;i++)
    {
        delete this->materias[i];
    }
}

void MateriaSource::learnMateria(AMateria*materia)
{
    for (int i = 0 ; i < 4; i++)
    {
        if (this->materias[i] == NULL)
        {
            this->materias[i] = materia;
            return ;
        }
    }
    std::cout << "Materias array is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i]->getType() == type)
            return this->materias[i];
    }
    return (0);
}