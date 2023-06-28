#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

    public:
        WrongCat();
        WrongCat(WrongCat &copy);
        ~WrongCat();
        WrongCat &operator=(WrongCat &copy);

        // std::string getType() const;

        void makeSound() const;

};
