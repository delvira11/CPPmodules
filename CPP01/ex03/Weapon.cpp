/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:55:05 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:55:08 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    std::cout << "Weapon constructor called" << std::endl;
    this->type = type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destructor called" << std::endl;
}

void    Weapon::setType(std::string settype)
{
    type = settype;
}

const std::string  &Weapon::getType()
{
    return (type);
}