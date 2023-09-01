/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:54:30 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/01 19:11:57 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(std::string name)
{
    std::cout << "Character name constructor called" << std::endl;
    this->name = name;
}
std::string const & ICharacter::getName() const
{
    return (this->name);
}
