/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:54:50 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:54:51 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destructor called" << std::endl;
}

void    HumanB::setWeapon(Weapon &setweapon)
{
    this->weapon = &setweapon;
}


void    HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}