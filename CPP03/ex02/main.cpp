#include "FragTrap.hpp"

int main()
{
    ClapTrap player1("David");
    ScavTrap player2("Max");
    FragTrap player3("Vex");
    FragTrap player4(player3);

    player1.printName();
    player2.printName();
    player3.printName();
    player4.printName();


    player3.attack("Max");
    player2.takeDamage(20);

    player2.beRepaired(10);

    player2.guardGate();
    player3.highFivesGuys();
}