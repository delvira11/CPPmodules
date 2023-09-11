/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:05:47 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/11 17:42:22 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    Form foorm("foooorm");
    std::cout << foorm;


    Bureaucrat john("John", 5);
    Bureaucrat jaaax("Jaaax", 1);
    std::cout << john;
    std::cout << jaaax;
    
    try
    {
      john.signForm(foorm);
      jaaax.signForm(foorm);
      foorm.beSigned(john);
    }
    catch(std::exception& ex)
    {
      std::cerr << ex.what() << std::endl;
    }
    

}