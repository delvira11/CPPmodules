/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:05:04 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/04 16:05:30 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "AMateria base constructor called" << std::endl;
}

AMateria::AMateria(AMateria &copy)
{
    this->type = copy.type;
}
AMateria & AMateria::operator=(AMateria &copy)
{
    this->type = copy.type;
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}


std::string const & AMateria::getType() const
{
    return (this->type);
}

AMateria* AMateria::clone() const
{
    return (AMateria *)this;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    std::cout << "I may have to fix this" << std::endl;
}