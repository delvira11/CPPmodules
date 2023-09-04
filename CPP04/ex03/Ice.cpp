/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:20:15 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/04 16:11:44 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

class ICharacter;

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice base constructor called" << std::endl;
}
Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}
AMateria* Ice::clone() const
{
    return (AMateria *)this;
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice(Ice &copy) : AMateria("ice")
{
    *this = copy;
}

Ice & Ice::operator=(Ice &copy)
{
    return copy;
}