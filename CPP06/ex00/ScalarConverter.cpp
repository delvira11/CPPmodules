/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:30:49 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/08 20:00:07 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <cstdlib>



ScalarConverter::~ScalarConverter()
{
    
}
bool isChar(const std::string& str)
{
    if (str.length() == 1 && (str[0] > '9' || str[0] < '0'))
        return (true);
    else
        return (false);
}

bool isInt(const std::string& str)
{
    for (unsigned long i = 0; i < str.length(); i++)
    {
        if ((str[i] > '9' || str[i] < '0') && str[i] != '-')
            return (false);
    }
    int minus = 0;
    unsigned int i = 0;
    
    while (i < str.length())
    {
        if (str[i] == '.')
            minus++;
        i++;
    }
    if (minus > 1)
        return (false);
    return (true);
}

bool isFloat(const std::string& str)
{
    for (unsigned long i = 0; i < str.length() - 1; i++)
    {
        if ((str[i] > '9' || str[i] < '0') && str[i] != '.' && str[i] != 'f')
            return (false);
    }
    int f = 0;
    int dot = 0;
    unsigned int i = 0;
    
    while (i < str.length())
    {
        if (str[i] == 'f')
            f++;
        else if (str[i] == '.')
            dot++;
        i++;
    }
    if (dot > 1 || f != 1)
        return (false);
    if (str[str.length() - 1] == 'f')
        return (true);
    else
        return (false);
}

bool isDouble(const std::string& str)
{
    for (unsigned long i = 0; i < str.length() - 1; i++)
    {
        if ((str[i] > '9' || str[i] < '0') && str[i] != '.')
            return (false);
    }
    int dot = 0;
    unsigned int i = 0;
    
    while (i < str.length())
    {
        if (str[i] == '.')
            dot++;
        i++;
    }
    if (dot != 1)
        return (false);
    return (true);
}
std::string    get_type(std::string str)
{
    if (isChar(str) == true)
    {
        std::cout << "The input is a character." << std::endl;
        return ("char");
    } else if (isInt(str) == true)
    {
        std::cout << "The input is an integer." << std::endl;
        return ("int");
    } else if (isFloat(str) == true)
    {
        std::cout << "The input is a float." << std::endl;
        return ("float");

    } else if (isDouble(str) == true)
    {
        std::cout << "The input is a double." << std::endl;
        return ("double");
    } else
    {
        std::cout << "The input is not a recognized type." << std::endl;
        return ("none");
    }     
}

ScalarConverter::ScalarConverter()
{
}

char stringToChar(const std::string& str)
{
    return str[0];
}
void printchar(std::string input)
{
    char c = stringToChar(input);
    if ((static_cast<int>(c) < 32 || static_cast<int>(c) > 126))
        std::cout << "char : impossible" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void printint(std::string input)
{
    int c = std::atoi(input.c_str());
    if ((std::atoi(input.c_str()) < 32) || (std::atoi(input.c_str()) > 126))
        std::cout << "char : Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(c) << std::endl;
    
    long long k = std::atol(input.c_str());
    if (k > INT_MAX || k < INT_MIN)
        std::cout << "int: Impossible" << std::endl;
    else
        std::cout << "int: " << c << std::endl;
    if (k > INT_MAX || k < INT_MIN)
        std::cout << "float : Impossible" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    if (k > INT_MAX || k < INT_MIN)
        std::cout << "double : Impossible" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    
}

void printfloat(std::string input)
{
    float c = std::atof(input.c_str());

    if ((std::atoi(input.c_str()) < 32) || (std::atoi(input.c_str()) > 126))
        std::cout << "char : Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(c) << std::endl;
    
    long long k = std::atol(input.c_str());
    if (k > INT_MAX || k < INT_MIN)
        std::cout << "int: Impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(c) << std::endl;
    if (k > INT_MAX || k < INT_MIN)
        std::cout << "float : Impossible" << std::endl;
    else
        std::cout << "float: " << c << "f" << std::endl;
    if (k > INT_MAX || k < INT_MIN)
        std::cout << "double : Impossible" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(c) << std::endl;
    
}

void printdouble(std::string input)
{
    double c = std::atof(input.c_str());

    if ((std::atoi(input.c_str()) < 32) || (std::atoi(input.c_str()) > 126))
        std::cout << "char : Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(c) << std::endl;
    
    long long k = std::atol(input.c_str());
    if (k > INT_MAX || k < INT_MIN)
        std::cout << "int: Impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(c) << std::endl;
    if (k > INT_MAX || k < INT_MIN)
        std::cout << "float : Impossible" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    if (k > INT_MAX || k < INT_MIN)
        std::cout << "double : Impossible" << std::endl;
    else
        std::cout << "double: " << c << std::endl;
    
}

void    printnan()
{
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    std::cout << "float : nanf" << std::endl;
    std::cout << "double : nan" << std::endl;
}

void    printinfadd()
{
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    std::cout << "float : +inff" << std::endl;
    std::cout << "double : +inf" << std::endl;
}

void    printinfminus()
{
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    std::cout << "float : -inff" << std::endl;
    std::cout << "double : -inf" << std::endl;
}



void    handlenone(std::string input)
{
    std::string array[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
    void (*ptr_array[6])(void)= {&printinfminus, &printinfadd, &printnan, &printinfminus, &printinfadd, &printnan};


    for (int i = 0; i < 6; i++)
    {
        if (input == array[i])
        {
            ptr_array[i]();
            return ;
        }
    }
    std::cout << "PARSE ERROR" << std::endl;
    return ;
}

void ScalarConverter::print_nums(std::string input)
{
    std::string type = get_type(input);

    std::string type_array[5] = {"char", "int", "float", "double", "none"};
    void (*ptr_array[6])(std::string in)= {&printchar, &printint, &printfloat, &printdouble, &handlenone};

    for (int i = 0; i < 5; i++)
    {
        if (type == type_array[i])
        {
            ptr_array[i](input);
        }
    }

    
}