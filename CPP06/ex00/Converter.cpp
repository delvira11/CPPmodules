/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:29:40 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/02 13:58:11 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <sstream>

Converter::Converter(std::string num) : number(num)
{
    std::cout << "Converter constructor called" << std::endl;
}
Converter::~Converter()
{
    std::cout << "Converter destructor called" << std::endl;
}
Converter::Converter(Converter &copy)
{
    this->number = copy.number;
}
Converter & Converter::operator=(Converter &copy)
{
    this->number = copy.number;
    return *this;
}

std::string Converter::getStrNum()
{
    return (this->number);
}

int StringToInt(const std::string& str) {
    std::istringstream iss(str);
    int result;
    if (!(iss >> result)) {
        // Handle the conversion error here if necessary
        // For example, you can throw an exception or return a default value.
        // For simplicity, we'll just return 0 in case of an error.
        return 0;
    }
    return result;
}

std::string CharToString(char c) {
    char charArray[2] = {c, '\0'}; // Create a character array with the character and a null terminator
    return std::string(charArray); // Convert the character array to a std::string
}

std::string Converter::convertChar()
{
    char    a;
    int var = StringToInt(this->number);
    std::string array[4] = {"-inff", "+inff", "nanf", "nan"};

    for (int i = 0; i < 4; i++)
    {
        if (this->number == array[i])
        {
            return ("impossible");
        }
    }
    
    if (var > 127 || var < 32)
    {
        return ("Non displayable");
    }
    a = var;
    return (CharToString(a));
}

std::string Converter::convertInt()
{
    int var = StringToInt(this->number);

    if (var > )
}
