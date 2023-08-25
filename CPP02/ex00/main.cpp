/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:26:21 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 17:35:38 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main(int nargs, char **args)
{

    if (nargs != 1)
    {
        std::cout << "This program doesn't need arguments" << std::endl;
        return (0);
    }
    (void)args;

    Fixed a;
    Fixed b ( a );
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return (0);
}