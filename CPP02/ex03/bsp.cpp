/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:35:29 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/28 14:24:34 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed const absFixed(Fixed const n)
{
    if (n < 0)
        return (n * -1);
    return (n);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed totalarea;
    Fixed half(0.5f);
    Fixed firstarea;
    Fixed secondarea;
    Fixed thirdarea;

    totalarea = half * absFixed(a.getX()*(b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));
    firstarea = half * absFixed(point.getX()*(b.getY() - c.getY()) + b.getX() * (c.getY() - point.getY()) + c.getX() * (point.getY() - b.getY()));
    secondarea = half * absFixed(a.getX()*(point.getY() - c.getY()) + point.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - point.getY()));
    thirdarea = half * absFixed(a.getX()*(b.getY() - point.getY()) + b.getX() * (point.getY() - a.getY()) + point.getX() * (a.getY() - b.getY()));

    if ((firstarea + secondarea + thirdarea) != totalarea)
        return (false);
    else
        return (true);
}