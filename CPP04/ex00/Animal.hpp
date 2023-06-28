#include <iostream>

    class Animal {
        
        protected:
            std::string type;

        public:
            Animal();
            Animal(Animal &copy);
            ~Animal();
            Animal &operator=(Animal &copy);

            std::string getType() const;
            virtual void makeSound() const;

    };