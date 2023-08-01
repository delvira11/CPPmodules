#include "Zombie.hpp"

int main()
{
    Zombie *horde;
    int i;

    i = 0;
    horde = zombieHorde(10, "John");
    while (i < 10)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
    //system("leaks -q zombieHorde");
}