/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:29:47 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/03 13:03:55 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int nargs, char **args)
{
    if (nargs != 2)
    {
        std::cout << "This program needs one argument" << std::endl;
        return(0);
    }
    Converter   convert(args[1]);

    convert.displayInfo();
    
}