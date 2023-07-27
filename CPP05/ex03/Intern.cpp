#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern &copy)
{
    *this = copy;
}

Intern &Intern::operator=(Intern &copy)
{
    (void)copy;
    return *this;
}

AForm *Intern::makeForm(std::string formname, std::string formtarget)
{
    std::string FormNames[3];
    AForm *Forms[] = 
    {
        new ShrubberyCreationForm(formtarget), new RobotomyRequestForm(formtarget), new PresidentialPardonForm(formtarget)
    };

    FormNames[0] = "shrubbery creation";
    FormNames[1] = "robotomy request";
    FormNames[2] = "presidential pardon";



    int i = 0;
    while (i < 3)
    {
        if (FormNames[i] == formname)
        {
            std::cout << "Intern creates " << Forms[i]->getName() << std::endl;
            return Forms[i];
        }
        i++;
    }
    std::cout << "Formname doesn't match with any existent Form" << std::endl;
    return (NULL);
}
