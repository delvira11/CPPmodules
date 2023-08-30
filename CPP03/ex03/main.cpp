#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap player1("David");

    player1.printInfo();
    std::cout << "---------------------" << std::endl;
    player1.whoAmI();
    player1.attack("AAA");
}