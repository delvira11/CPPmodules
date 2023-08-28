/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:26:11 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/28 14:43:06 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
    pointint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed &copy)
{
    std::cout << "Asignation operator called" << std::endl;
    this->pointint = copy.getRawBits();
    return(*this);
}

Fixed::Fixed(Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->pointint = copy.getRawBits();
}

int Fixed::getRawBits( void )const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->pointint);
}

void Fixed::setRawBits ( int const raw )
{
    this->pointint = raw;
}
