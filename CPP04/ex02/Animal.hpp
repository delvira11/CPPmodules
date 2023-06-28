#include <iostream>

    class Animal {
        
        protected:
            std::string type;
            Animal();

        public:
            Animal(Animal &copy);
            virtual ~Animal();
            Animal &operator=(Animal &copy);

            std::string getType() const;
            virtual void makeSound() const;

    };