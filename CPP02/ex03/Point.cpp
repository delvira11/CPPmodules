/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:40:20 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/28 13:54:10 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
    std::cout << "Point constructor called" << std::endl;
}
Point::Point(Fixed x, Fixed y) : x(x), y(y) 
{
    std::cout << "Point constructor called" << std::endl;
}

Point::~Point()
{
    std::cout << "Point destructor called" << std::endl;
}

Point::Point(Point &copy) : x(copy.x), y(copy.y)
{
    std::cout << "Point copy constructor called" << std::endl; 
}
Point  Point::operator=(Point copy)
{
    std::cout << "Asignation operator called" << std::endl;

    return copy;
}

const Fixed Point::getX() const
{
    return (this->x);
}

const Fixed Point::getY() const
{
    return (this->y);
}