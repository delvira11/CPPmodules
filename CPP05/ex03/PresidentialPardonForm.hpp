#include <iostream>
#include "RobotomyRequestForm.hpp"


class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &copy);
        PresidentialPardonForm &operator=(PresidentialPardonForm &copy);

        void execute(Bureaucrat const & executor) const;
};