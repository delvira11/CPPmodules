#include "Form.hpp"


Form::Form(std::string const name) : name(name), filled(false), grade_sign(1), grade_exec(1)
{
    std::cout << "Constructor called" << std::endl;
    if (this->grade_sign < 1 || grade_exec < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->grade_sign > 150 || grade_exec > 150)
        throw Bureaucrat::GradeTooLowException();
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}

Form::Form(Form &copy) : name(copy.name), filled(copy.filled), grade_sign(copy.grade_sign), grade_exec(copy.grade_exec)
{
}

Form &Form::operator=(Form &copy)
{
    this->filled = copy.filled;
    const_cast<std::string&>(name) = copy.name;
    const_cast<int&>(grade_sign) = copy.grade_sign;
    const_cast<int&>(grade_exec) = copy.grade_exec;
    return *this;
}

std::string const Form::getName()
{
    return(this->name);
}

bool    Form::getFilled()
{
    return (this->filled);
}

int Form::getGrade_sign()
{
    return (this->grade_sign);
}

int Form::getGrade_exec()
{
    return (this->grade_exec);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return("Grade is too high");
}
const char *Form::GradeTooLowException::what() const throw()
{
    return("Grade is too low");
}

std::ostream& operator<<(std::ostream& os, Form& copy)
{
    os << copy.getName() << " filled : " << copy.getFilled() << " grade_sign : " << copy.getGrade_sign() << " grade_exec : " << copy.getGrade_exec() << std::endl;
    return (os);
}

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGrade_sign())
    {
        this->filled = true;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}
