#include "Dog.hpp"

class Cat : public Animal {

    private:
        Brain *brain;
    public:
        Cat();
        Cat(Cat &copy);
        ~Cat();
        Cat &operator=(Cat &copy);

        // std::string getType() const;

        void makeSound() const;

};
