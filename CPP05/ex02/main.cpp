#include "PresidentialPardonForm.hpp"

int main()
{

    try
    {
    ShrubberyCreationForm home("home");
    Bureaucrat me("me", 1);
    RobotomyRequestForm yoo("yoo");
    PresidentialPardonForm noo("noo");

    me.signForm(yoo);
    me.executeForm(yoo);
    }
    catch(const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    
}