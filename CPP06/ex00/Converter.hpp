/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:29:42 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/03 18:39:04 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Fixed.hpp"

class Fixed;

class Converter
{
    
    private:
        std::string number;
    public:
        Converter(std::string num);
        Converter(Converter &copy);
        Converter &operator=(Converter &copy);
        ~Converter();

        std::string getStrNum();
        
        std::string convertChar();
        std::string convertInt();
        std::string convertFloat();
        std::string convertDouble();

        void    displayInfo();

        class IntOutRange : public std::exception
        {
            public:
                const char *what() const throw();
        };
};