/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:54:59 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:55:00 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(int nargs, char **args)
{

    if (nargs != 1)
    {
        std::cout << "This program doesn't need arguments" << std::endl;
        return (0);
    }
    (void)args;

{
Weapon club = Weapon("crude spiked club");

HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
std::cout << "----------------------------" << std::endl;
{
Weapon club = Weapon("crude spiked club");

HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
return 0;
}