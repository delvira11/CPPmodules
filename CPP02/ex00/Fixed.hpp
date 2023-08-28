/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:26:15 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/28 14:37:33 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int                 pointint;
        static const int    fracbits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed( Fixed &copy );
        /////////
        Fixed& operator=(Fixed &copy);
        int getRawBits( void )const;
        void setRawBits ( int const raw );

};

//std::ostream& operator<<(std::ostream& os, const Fixed& copy);

#endif