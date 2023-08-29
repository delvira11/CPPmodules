/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:21:42 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/28 16:47:30 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Fixed.hpp"

class Fixed;

class ScalarConverter
{
    
    private:
    public:
        // ScalarConverter(std::string num);
        // ScalarConverter(ScalarConverter &copy);
        // ScalarConverter &operator=(ScalarConverter &copy);
        ~ScalarConverter();

        static std::string number;
        static std::string getStrNum(); 
        static std::string convertChar();
        static std::string convertInt();
        static std::string convertFloat();
        static std::string convertDouble();

        static void    displayInfo();

        class IntOutRange : public std::exception
        {
            public:
                const char *what() const throw();
        };
};