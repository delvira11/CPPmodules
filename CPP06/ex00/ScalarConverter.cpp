/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:30:49 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/28 16:58:41 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>

// ScalarConverter::ScalarConverter(std::string num) : number(num)
// {
//     std::cout << "ScalarConverter constructor called" << std::endl;
// }
ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructor called" << std::endl;
}
// ScalarConverter::ScalarConverter(ScalarConverter &copy)
// {
//     this->number = copy.number;
// }
// ScalarConverter & ScalarConverter::operator=(ScalarConverter &copy)
// {
//     this->number = copy.number;
//     return *this;
// }

std::string ScalarConverter::getStrNum()
{
    return (ScalarConverter::number);
}

void    ScalarConverter::displayInfo()
{
    std::cout << "char: " << ScalarConverter::convertChar() << std::endl;
    std::cout << "int: " << ScalarConverter::convertInt() << std::endl;
    std::cout << "float: " << ScalarConverter::convertFloat() << std::endl;
    std::cout << "double: " << ScalarConverter::convertDouble() << std::endl;
}

int StringToInt(const std::string& str) {
    std::istringstream iss(str);
    int result;
    if (!(iss >> result)) {
        throw ScalarConverter::IntOutRange();
    }
    return result;
}

std::string CharToString(char c) {
    char charArray[2] = {c, '\0'};
    return std::string(charArray);
}

std::string ScalarConverter::convertChar()
{
    char    a;
    std::string array[4] = {"-inff", "+inff", "nanf", "nan"};
    int var;
    try
    {
        var = StringToInt(ScalarConverter::number);
    }
    catch(std::exception& e)
    {
        return(e.what());
    }

    for (int i = 0; i < 4; i++)
    {
        if (ScalarConverter::number == array[i])
        {
            return ("impossible");
        }
    }
    
    if (var > 127 || var < 32)
    {
        return ("Non displayable");
    }
    a = var;
    return ("\'" + CharToString(a) + "\'");
}

std::string ScalarConverter::convertInt()
{
    std::string array[4] = {"-inff", "+inff", "nanf", "nan"};
    int var;
    try
    {
        var = StringToInt(ScalarConverter::number);
    }
    catch(std::exception& e)
    {
        return(e.what());
    }
    for (int i = 0; i < 4; i++)
    {
        if (ScalarConverter::number == array[i])
        {
            return ("impossible");
        }
    }
    return (std::to_string(var));
}
const char *ScalarConverter::IntOutRange::what() const throw()
{
    return ("impossible");
}


float stringToFloat(const std::string& str) {
    float result;
    int numConverted = sscanf(str.c_str(), "%f", &result);
    if (numConverted != 1)
    {
        throw ScalarConverter::IntOutRange();
    }
    return result;
}

std::string ScalarConverter::convertFloat()
{
    int var;

    std::string array[4] = {"-inff", "+inff", "nanf", "nan"};

    for (int i = 0; i < 4; i++)
    {
        if (ScalarConverter::number == array[i])
        {
            return ("nanf");
        }
    }
    float num;
    try
    {    
        num = stringToFloat(ScalarConverter::number);
        var = StringToInt(ScalarConverter::number);

    }
    catch(std::exception &ex)
    {
        return(ex.what());
    }
    Fixed check(num);
    
    if (check.checkRounded() == true)
        std::cout << num << ".0f";
    else
        std::cout << num << "f";

    //std::cout << "TEST: " << 24321232.234123f << std::endl;
    return ("");
}

double stringToDouble(const std::string& str)
{
    double result;
    int numConverted = sscanf(str.c_str(), "%lf", &result);
    if (numConverted != 1)
    {
        throw ScalarConverter::IntOutRange();
    }
    return result;
}

std::string ScalarConverter::convertDouble()
{

    int var;

    std::string array[4] = {"-inff", "+inff", "nanf", "nan"};

    for (int i = 0; i < 4; i++)
    {
        if (ScalarConverter::number == array[i])
        {
            return ("nanf");
        }
    }
    double num;
    try
    {    
        num = stringToDouble(ScalarConverter::number);
        var = StringToInt(ScalarConverter::number);

    }
    catch(std::exception &ex)
    {
        return(ex.what());
    }
    Fixed check(num);
    
    if (check.checkRounded() == true)
        std::cout << num << ".0";
    else
        std::cout << num;

    //std::cout << "TEST: " << 24321232.234123f << std::endl;
    return ("");
}