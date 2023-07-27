#include "PresidentialPardonForm.hpp"

int main()
{

    try
    {
    ShrubberyCreationForm home("home");
    Bureaucrat me("me", 1);
    RobotomyRequestForm yoo("yoo");
    PresidentialPardonForm noo("noo");


    me.signForm(noo);
    noo.execute(me);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}