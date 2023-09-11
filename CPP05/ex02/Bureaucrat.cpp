/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:30:28 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/11 19:30:29 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"

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

int Bureaucrat::getGrade() const
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
    return ("Bureaucrat grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat grade is too low");
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& copy)
{
    os << copy.getName() << ", bureaucrat grade " << copy.getGrade() << std::endl;
    return (os);
}


void    Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << "Bureaucrat " << this->getName() << " signed form " << form.getName() << std::endl;
    }
    catch(std::exception& ex)
    {
        std::cout << "Bureaucrat " << this->getName() << " couldn't sign form " << form.getName() << " because grade it's too low" << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute( *this );
        std::cout << "Bureaucrat " << this->getName() << " executed form " << form.getName() << std::endl;
    } catch ( std::exception& ex )
    {
        std::cout <<  "Bureaucrat " << this->getName() << " couldn't execute form " << form.getName()  << std::endl;
    }
}
