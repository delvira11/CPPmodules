#include "Character.hpp"

Character::Character(std::string const &name)
{
    std::cout << "Character name constructor called" << std::endl;
    this->name = name;
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

Character::Character(Character &copy)
{
    std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = copy.inventory[i];
    }
    this->name = copy.name;
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
}

Character&          Character::operator=(Character &copy)
{
    std::cout << "Character asignation operator called" << std::endl;

    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = copy.inventory[i];
    }
    this->name = copy.name;
    return *this;
}

std::string const&  Character::getName() const
{
    return this->name;
}

void                Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            return ;
        }
    }
    std::cout << "Inventory is full, can't equip this materia" << std::endl;
}

void                Character::unequip(int idx)
{
    if (this->inventory[idx] != NULL)
    {
        this->inventory[idx] = NULL;
        return ;
    }
    std::cout << "There is nothing in this slot to unequip" << std::endl;
}

void                Character::use(int idx, ICharacter& target)
{
    if (this->inventory[idx] != NULL)
        this->inventory[idx]->use(target);
    else
        std::cout << "Can't do the attack because the that ability slot is empty" << std::endl;
}
