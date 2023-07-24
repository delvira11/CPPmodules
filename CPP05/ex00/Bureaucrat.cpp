#include "Bureaucrat.hpp"

// Bureaucrat::Bureaucrat() : name("")
// {
//     this->grade = 0;
// }

Bureaucrat::Bureaucrat(std::string const name) : name(name)
{
    std::cout << "Constructor called" << std::endl;
    this->grade = 150;
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
    std::cout << "getName function called" << std::endl;
    return this->name;
}

int Bureaucrat::getGrade()
{
    std::cout << "getGrade function called" << std::endl;
    return this->grade;
}

void    Bureaucrat::incrementGrade()
{
    if (this->grade - 1 < 1)
    {
        throw "Bureaucrat already has the highest grade";
    }
    this->grade -= 1;
}

void    Bureaucrat::decrementGrade()
{
    if (this->grade + 1 > 150)
    {
        throw "Bureaucrat already has the lowest grade";
    }
    this->grade += 1;
}