#include <iostream>


class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
   void announce(void);
   void set_name(std::string zname);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );
