/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:56:08 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/12 19:55:44 by delvira-         ###   ########.fr       */
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
    std::string strarray[4];

    strarray[0] = "DEBUG";
    strarray[1] = "INFO";
    strarray[2] = "WARNING";
    strarray[3] = "ERROR";

    code = 0;

    while (code < 4)
    {
        if (strarray[code] == level)
            break ;
        code++;
    }
    code++;
    switch (code)
    {
        case 1:
            variable.complain("DEBUG");
        case 2:
            variable.complain("INFO");
        case 3:
            variable.complain("WARNING");
        case 4:
            variable.complain("ERROR");
            break;
        case 5:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}