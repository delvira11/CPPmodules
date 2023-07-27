#include "ShrubberyCreationForm.hpp"

int main()
{

    try
    {
    ShrubberyCreationForm home("home");
    Bureaucrat me("me", 5);

    me.signForm(home);
    home.execute(me);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}