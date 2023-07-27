#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = copy.target;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &copy)
{
    this->target = copy.target;
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGrade_exec())
    {
        throw AForm::GradeTooLowException();
    }
    else if (this->getFilled() == false)
    {
        throw AForm::FormNotSigned();
    }
    else
    {
        std::srand(std::time(0));
        int randomNumber = std::rand() % (100 - 1 + 1) + 1;

        if ((randomNumber % 2) == 0)
        {
            std::cout << this->target << " has been robotomized" << std::endl;
        }
        else
        {
            std::cout << "failed to robotomize " << this->target << std::endl;
        }
    }
}