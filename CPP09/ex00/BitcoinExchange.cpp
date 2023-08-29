/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:46:17 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/28 19:46:20 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

/*
BitcoinExchange::BitcoinExchange(BitcoinExchange &copy)
{
    this->date = copy.date;
    this->value = copy.value;
}
*/

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange &copy)
{
    this->date = copy.date;
    this->value = copy.value;
    return *this;
}

void    BitcoinExchange::setDate(std::string date)
{
    this->date = date;
}

void    BitcoinExchange::setValue(float value)
{
    this->value = value;
}

std::string BitcoinExchange::getDate()
{
    return (this->date);
}

float BitcoinExchange::getValue()
{
    return (this->value);
}

int     BitcoinExchange::getYear()
{
    return (this->year);
}

int     BitcoinExchange::getMonth()
{
    return (this->month);
}

int     BitcoinExchange::getDay()
{
    return (this->day);
}


std::string   get_date(std::string data)
{
    int i = 0;

    while (data[i] != ',')
    {
        i++;
    }
    return (data.substr(0, i));
}

float   get_value(std::string data)
{
    int i = 0;
    while (data[i] != ',')
    {
        i++;
    }
    std::istringstream convert(data.substr(i + 1));
    float value;
    convert >> value;
    return (value);
}

float stringToFloat(const std::string& str) 
{
    std::istringstream iss(str);
    float result;
    
    iss >> result;
    
    return (result);
}



void BitcoinExchange::fill_data(std::string data)
{
    this->date = get_date(data);
    this->value = get_value(data);
    this->year = stringToFloat(this->date.substr(0, 4));
    this->month = stringToFloat(this->date.substr(5, 7));
    this->day = stringToFloat(this->date.substr(8,10));
}


const char *BitcoinExchange::NegativeEx::what() const throw()
{
    return ("Error: not a positive number.");
}

const char *BitcoinExchange::BadDate::what() const throw()
{
    return ("");
}

const char *BitcoinExchange::LargeNumber::what() const throw()
{
    return ("Error: too large a number.");
}

const char *BitcoinExchange::InputError::what() const throw()
{
    return ("Error: Input file not formated");
}
