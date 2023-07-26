#include <iostream>
#include "AForm.hpp"

class Aform;

class ShrubberyCreationForm : public AForm
{
    private:



    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &copy);

};