#include "Dog.hpp"

class Cat : public Animal {

    public:
        Cat();
        Cat(Cat &copy);
        ~Cat();
        Cat &operator=(Cat &copy);

        // std::string getType() const;

        void makeSound() const;

};
