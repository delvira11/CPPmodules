/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:29:40 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/03 17:31:42 by delvira-         ###   ########.fr       */
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

void    Converter::displayInfo()
{
    std::cout << "char: " << this->convertChar() << std::endl;
    std::cout << "int: " << this->convertInt() << std::endl;
    std::cout << "float: " << this->convertFloat() << std::endl;
}

int StringToInt(const std::string& str) {
    std::istringstream iss(str);
    int result;
    if (!(iss >> result)) {
        throw Converter::IntOutRange();
    }
    return result;
}

std::string CharToString(char c) {
    char charArray[2] = {c, '\0'};
    return std::string(charArray);
}

std::string Converter::convertChar()
{
    char    a;
    std::string array[4] = {"-inff", "+inff", "nanf", "nan"};
    int var;
    try
    {
        var = StringToInt(this->number);
    }
    catch(std::exception& e)
    {
        return(e.what());
    }

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
    std::string array[4] = {"-inff", "+inff", "nanf", "nan"};
    int var;
    try
    {
        var = StringToInt(this->number);
    }
    catch(std::exception& e)
    {
        return(e.what());
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->number == array[i])
        {
            return ("impossible");
        }
    }
    return (std::to_string(var));
}
const char *Converter::IntOutRange::what() const throw()
{
    return ("impossible");
}

std::string Converter::convertFloat()
{
    std::stringstream ss(this->number);
    float num;
    ss >> num;

    Fixed fix(num);
    std::cout << "TEST: " << fix.toFloat() << std::endl;

    return ("hola");
}