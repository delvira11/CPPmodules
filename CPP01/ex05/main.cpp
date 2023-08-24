/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:55:41 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:55:42 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(int nargs, char **args)
{
    (void)args;
    if (nargs != 1)
    {
        std::cout << "This program doesn't need arguments" << std::endl;
        return (0);
    }

    Harl hola;

    hola.complain("DEBUG");  
    hola.complain("INFO");  
    hola.complain("WARNING");  
    hola.complain("ERROR");

    return (0);
}