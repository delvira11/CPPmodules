#include <iostream>
#include "ShrubberyCreationForm.hpp"


class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm &copy);
        RobotomyRequestForm &operator=(RobotomyRequestForm &copy);

        void execute(Bureaucrat const & executor) const;
};