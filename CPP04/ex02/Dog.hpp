#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

    private:
        Brain *brain;

    public:
        Dog();
        Dog(Dog &copy);
        ~Dog();
        Dog &operator=(Dog &copy);

        // std::string getType() const;
        void makeSound() const;
};