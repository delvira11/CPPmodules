/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:19:31 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/04 16:11:12 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure base constructor called" << std::endl;

}

Cure::~Cure()
{
    std::cout << "Ice destructor called" << std::endl;
}
AMateria* Cure::clone() const
{
    return (AMateria *)this;
}


void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::Cure(Cure &copy) : AMateria("cure")
{
    *this = copy;
}

Cure & Cure::operator=(Cure &copy)
{
    return copy;
}
