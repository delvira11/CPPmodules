/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:29:47 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/28 16:46:36 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int nargs, char **args)
{
    if (nargs != 2)
    {
        std::cout << "This program needs one argument" << std::endl;
        return(0);
    }
    //ScalarConverter   convert(args[1]);
    ScalarConverter::number = (std::string(args[1]));
    ScalarConverter::displayInfo();
    
}