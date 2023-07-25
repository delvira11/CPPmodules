/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:05:47 by delvira-          #+#    #+#             */
/*   Updated: 2023/07/24 19:00:49 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    Form jacob("Jacob");

//    std::cout << jacob.getGrade_sign() << std::endl;
    Bureaucrat john("John", 5);
  //  std::cout << john.getGrade() << std::endl;
    

    john.signForm(jacob);
}