/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:36:25 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/28 13:35:17 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(Fixed x, Fixed y);
        ~Point();
        Point(Point &copy);
        Point operator=(Point copy);

        const Fixed getX() const;
        const Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);