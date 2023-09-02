#include "ICharacter.hpp"

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria    *inventory[4];

    public:
        Character(std::string &name);
        Character(Character &copy);
        ~Character();
        Character&          operator=(Character &copy);

        std::string const&  getName() const;
        void                equip(AMateria* m);
        void                unequip(int idx);
        void                use(int idx, ICharacter& target);
};

#endif