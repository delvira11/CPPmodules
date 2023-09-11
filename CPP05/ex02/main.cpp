/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:30:38 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/11 19:30:39 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

int main()
{

    try
    {
    ShrubberyCreationForm home("home");
    Bureaucrat me("me", 1);
    Bureaucrat meno("meno", 149);
    RobotomyRequestForm yoo("yoo");
    PresidentialPardonForm noo("noo");

    me.signForm(yoo);
    me.executeForm(yoo);

    meno.signForm(noo);
    }
    catch(const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    
}