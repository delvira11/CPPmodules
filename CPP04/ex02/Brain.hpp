#include <iostream>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain &copy);
        ~Brain();
        Brain &operator=(Brain &copy);
};