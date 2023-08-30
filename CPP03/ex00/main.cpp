#include "ClapTrap.hpp"

int main(int nargs, char **args)
{
    if (nargs != 1)
    {
        std::cout << "This program doesn't need arguments" << std::endl;
        return (0);
    }
    (void)args;

    ClapTrap player1 ("David");
    ClapTrap player2( "Juan" );

    // Introduce players
    std::cout << "Player 1: ";
    player1.printName();
    std::cout << "Player 2: ";
    player2.printName();
    std::cout << "------------------------------" << std::endl;

    // Player 1 attacks player 2 and it takes damage
    player1.attack("Juan");
    player2.takeDamage(6);
    // Player 2 repairs 1 damage
    player2.beRepaired(1);

    player1.attack("Juan");
    player2.takeDamage(8);
    // Player 2 dead can't do actions
    player2.beRepaired(1);
    player2.attack("David");
}