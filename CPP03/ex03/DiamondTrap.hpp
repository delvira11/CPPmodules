#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap& copy);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap& copy);
        void    printInfo();
        void whoAmI();
};