/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:30:43 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/11 19:30:44 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = copy.target;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &copy)
{
    this->target = copy.target;
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
}