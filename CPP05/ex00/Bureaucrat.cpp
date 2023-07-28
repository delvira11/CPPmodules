#include "Bureaucrat.hpp"

// Bureaucrat::Bureaucrat() : name("")
// {
//     this->grade = 0;
// }

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade)
{
    std::cout << "Constructor called" << std::endl;
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;

}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
    std::cout << "copy constructor called" << std::endl;
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &copy)
{
    std::cout << "Assignment operator called" << std::endl;
    const_cast<std::string&>(name) = copy.name;
    return *this;
}

std::string const Bureaucrat::getName()
{
    return this->name;
}

int Bureaucrat::getGrade()
{
    return this->grade;
}

void    Bureaucrat::incrementGrade()
{

    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade -= 1;
}

void    Bureaucrat::decrementGrade()
{

    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade += 1;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat already has the highest grade");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat already has the lowest grade");
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& copy)
{
    os << copy.getName() << ", bureaucrat grade " << copy.getGrade() << std::endl;
    return (os);
}
