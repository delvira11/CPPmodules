#include "AForm.hpp"


AForm::AForm(std::string const name, int grade_sign, int grade_exec) : name(name), filled(false), grade_sign(grade_sign), grade_exec(grade_exec)
{
    std::cout << "Constructor called" << std::endl;
    if (this->grade_sign < 1 || this->grade_exec < 1)
        throw AForm::GradeTooHighException();
    if (this->grade_sign > 150 || this->grade_exec > 150)
        throw AForm::GradeTooLowException();
}

AForm::~AForm()
{
    std::cout << "Destructor called" << std::endl;
}

AForm::AForm(AForm &copy) : name(copy.name), filled(copy.filled), grade_sign(copy.grade_sign), grade_exec(copy.grade_exec)
{
}

AForm &AForm::operator=(AForm &copy)
{
    this->filled = copy.filled;
    const_cast<std::string&>(name) = copy.name;
    const_cast<int&>(grade_sign) = copy.grade_sign;
    const_cast<int&>(grade_exec) = copy.grade_exec;
    return *this;
}

std::string const AForm::getName()
{
    return(this->name);
}

bool    AForm::getFilled() const
{
    return (this->filled);
}

int AForm::getGrade_sign()
{
    return (this->grade_sign);
}

int AForm::getGrade_exec() const
{
    return (this->grade_exec);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return("Grade is too high to do this action");
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return("Grade is too low to do this action");
}

const char *AForm::FormNotSigned::what() const throw()
{
    return("Form is not signed");
}

std::ostream& operator<<(std::ostream& os, AForm& copy)
{
    os << copy.getName() << " filled : " << copy.getFilled() << " grade_sign : " << copy.getGrade_sign() << " grade_exec : " << copy.getGrade_exec() << std::endl;
    return (os);
}

void    AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGrade_sign())
    {
        this->filled = true;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}
