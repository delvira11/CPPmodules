/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:31:32 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/11 19:31:33 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Destructor constructor" << std::endl;
}

Intern::Intern(Intern &copy)
{
    *this = copy;
}

Intern &Intern::operator=(Intern &copy)
{
    (void)copy;
    return *this;
}

AForm *create_sub(std::string formtarget)
{
    AForm *a = new ShrubberyCreationForm(formtarget);
    return (a);
}

AForm *create_robo(std::string formtarget)
{
    AForm *a = new RobotomyRequestForm(formtarget);
    return (a);
}

AForm *create_pres(std::string formtarget)
{
    AForm *a = new PresidentialPardonForm(formtarget);
    return (a);
}

AForm *Intern::makeForm(std::string formname, std::string formtarget)
{
    std::string FormNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon" };
    AForm *(*ptrarray[3])(std::string formtarget) = {&create_sub, &create_robo, &create_pres};


    int i = 0;
    while (i < 3)
    {
        if (FormNames[i] == formname)
        {
            std::cout << "Intern creates " << FormNames[i] << std::endl;
            return (ptrarray[i](formtarget));
        }
        i++;
    }
    std::cout << "Formname doesn't match with any existent Form" << std::endl;
    return (NULL);
}