#include <iostream>

    class WrongAnimal {
        
        protected:
            std::string type;

        public:
            WrongAnimal();
            WrongAnimal(WrongAnimal &copy);
            ~WrongAnimal();
            WrongAnimal &operator=(WrongAnimal &copy);

            std::string getType() const;
            void makeSound() const;

    };