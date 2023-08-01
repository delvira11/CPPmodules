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

Zombie* zombieHorde( int N, std::string name );
