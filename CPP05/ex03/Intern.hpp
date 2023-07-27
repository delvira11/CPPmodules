#include <iostream>
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{

    public:
        Intern();
        Intern(Intern &copy);
        Intern &operator=(Intern &copy);
        ~Intern();

        AForm *makeForm(std::string formname, std::string formtarget);
};