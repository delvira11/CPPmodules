/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:56:08 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:56:09 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(int nargs, char **args)
{
    Harl variable;
    std::string level;
    int code;

    if (nargs != 2)
    {
        std::cout << "Arguments error";
        return (0);
    }
    level = args[1];
    if (level == "DEBUG")
        code = 1;
    else if (level == "INFO")
        code = 2;
    else if (level == "WARNING")
        code = 3;
    else if (level == "ERROR")
        code = 4;
    else
        code = 5;
    switch (code)
    {
        case 1:
            variable.complain("DEBUG");
            variable.complain("INFO");
            variable.complain("WARNING");
            variable.complain("ERROR");
            break;
        case 2:
            variable.complain("INFO");
            variable.complain("WARNING");
            variable.complain("ERROR");
            break;
        case 3:
            variable.complain("WARNING");
            variable.complain("ERROR");
            break;
        case 4:
            variable.complain("ERROR");
            break;
        case 5:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}