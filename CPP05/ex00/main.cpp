/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:05:47 by delvira-          #+#    #+#             */
/*   Updated: 2023/07/28 15:43:12 by delvira-         ###   ########.fr       */
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
        Bureaucrat jacob("Jacob", 0);
        //jacob.decrementGrade();
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