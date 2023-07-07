#include "Zombie.hpp"

int main()
{
    Zombie *horde;
    int i;

    i = 0;
    horde = zombieHorde(5, "John");
    while (i < 5)
    {
        horde[i].announce();
        //horde[i].~Zombie();
        i++;
    }
    delete[] horde;
    //system("leaks -q zombieHorde");
}