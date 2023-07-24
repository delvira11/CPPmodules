#include <iostream>

class Bureaucrat
{
    private:
        std::string const   name;
        int                 grade;
    public:
        // Bureaucrat();
        Bureaucrat(std::string name);
        Bureaucrat(Bureaucrat &copy);
        Bureaucrat &operator=(Bureaucrat &copy);
        ~Bureaucrat();

        std::string const   getName();
        int                 getGrade();
        void                incrementGrade();
        void                decrementGrade();
};