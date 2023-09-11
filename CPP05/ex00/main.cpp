/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:05:47 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/11 17:29:31 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    //Bureaucrat david("David", 1);

    //std::cout << david.getName() << std::endl;
    //david.incrementGrade();
    //std::cout << david.getGrade() << std::endl;
    try
    {
        Bureaucrat jacob("Jacob", 2);
        std::cout << "After: " << jacob.getGrade() << std::endl;
        jacob.incrementGrade();
        std::cout << "After: " << jacob.getGrade() << std::endl;
        jacob.incrementGrade();
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    // catch (Bureaucrat::GradeTooHighException &ex)
    // {
    //     std::cout << ex.what() << std::endl;
    // }
    //     Bureaucrat jacob("Jacob", 1);
}