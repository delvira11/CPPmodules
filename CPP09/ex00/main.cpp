#include "BitcoinExchange.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdio>

//Queue porque se puede iterar de forma normal y no va a afectar la forma de entrada y salida y dejo otros containers para otro ex
//tiene sentido porque se itera desde el principio hasta el final

float stringToFloat1(const std::string& str) 
{
    std::istringstream iss(str);
    float result;
    
    iss >> result;
    
    return (result);
}
std::string   get_date1(std::string data)
{
    int i = 0;


    while (data[i] != '|' && data[i] != '\n')
    {
        i++;
    }
    return (data.substr(0, i - 1));
}

float   get_value1(std::string data)
{
    int i = 0;
    while (data[i] != '|')
    {
        i++;
    }
    std::istringstream convert(data.substr(i + 2));
    std::istringstream check_(data.substr(i + 2));
    float value;
    int check;

    if (!(check_ >> check))
    {
        throw BitcoinExchange::LargeNumber();
    }
    convert >> value;
    if (value < 0)
        throw BitcoinExchange::NegativeEx();
    if (value > 1000)
        throw BitcoinExchange::LargeNumber();
    return (value);
}

/*
bool    compare_date(std::string date1, BitcoinExchange node)
{
    int date1_year;
    int date1_month;
    int date1_day;

    date1_year = stringToFloat1(date1.substr(0, 4));
    date1_month = stringToFloat1(date1.substr(5, 7));
    date1_day = stringToFloat1(date1.substr(8,10));

}*/

int isDateOlder(const std::string &date1Str, const std::string &date2Str) {
    struct tm date1;
    struct tm date2;

    date1.tm_sec = 0;
    date1.tm_min = 0;
    date1.tm_hour = 0;
    date1.tm_mday = 0;
    date1.tm_mon = 0;
    date1.tm_year = 0;
    date1.tm_wday = 0;
    date1.tm_yday = 0;
    date1.tm_isdst = -1;

    date2.tm_sec = 0;
    date2.tm_min = 0;
    date2.tm_hour = 0;
    date2.tm_mday = 0;
    date2.tm_mon = 0;
    date2.tm_year = 0;
    date2.tm_wday = 0;
    date2.tm_yday = 0;
    date2.tm_isdst = -1;

    std::sscanf(date1Str.c_str(), "%d-%d-%d", &date1.tm_year, &date1.tm_mon, &date1.tm_mday);
    std::sscanf(date2Str.c_str(), "%d-%d-%d", &date2.tm_year, &date2.tm_mon, &date2.tm_mday);

    // Adjust years and months to match the struct tm format
    date1.tm_year -= 1900;
    date1.tm_mon -= 1;
    date2.tm_year -= 1900;
    date2.tm_mon -= 1;

    std::time_t time1 = std::mktime(&date1);
    std::time_t time2 = std::mktime(&date2);

    return (time1 - time2);
}

bool isValidDate(const std::string &dateStr)
{
    struct tm date;
    date.tm_sec = 0;
    date.tm_min = 0;
    date.tm_hour = 0;
    date.tm_mday = 0;
    date.tm_mon = 0;
    date.tm_year = 0;
    date.tm_wday = 0;
    date.tm_yday = 0;
    date.tm_isdst = -1;

    std::sscanf(dateStr.c_str(), "%d-%d-%d", &date.tm_year, &date.tm_mon, &date.tm_mday);

    // Adjust years and months to match the struct tm format
    date.tm_year -= 1900;
    date.tm_mon -= 1;

    if (date.tm_mon < 0 || date.tm_mon > 11) {
        return false;  // Invalid month
    }

    if (date.tm_mday < 1) {
        return false;  // Invalid day
    }

    // Calculate the maximum number of days in the month
    static const int maxDaysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int maxDays = maxDaysInMonth[date.tm_mon];

    // Adjust for leap years
    if (date.tm_mon == 1 && (date.tm_year % 4 == 0 && (date.tm_year % 100 != 0 || date.tm_year % 400 == 0))) {
        maxDays = 29;
    }

    if (date.tm_mday > maxDays) {
        return false;  // Invalid day for the month
    }

    return true;
}

void    parse_line(std::string line)
{
    int date1_year;
    int date1_month;
    int date1_day;


    if (isValidDate(line.substr(0, 10)) == false)
    {
        std::cout << "Error: bad input => " << line.substr(0, 10);
        throw BitcoinExchange::BadDate();
    }
    date1_year = stringToFloat1(line.substr(0, 4));
    if (date1_year < 0 || date1_year > 2023)
    {
        std::cout << "Error: bad input => " << line.substr(0, 10);
        throw BitcoinExchange::BadDate();
    }
    date1_month = stringToFloat1(line.substr(5, 7));
    if (date1_month < 0 || date1_month > 12)
    {
        std::cout << "Error: bad input => " << line.substr(0, 10);
        throw BitcoinExchange::BadDate();
    }
    date1_day = stringToFloat1(line.substr(8,10));
    if (date1_day < 0 || date1_day > 31)
    {
        std::cout << "Error: bad input => " << line.substr(0, 10);
        throw BitcoinExchange::BadDate();
    }
}

int main(int nargs, char **args)
{
    if (nargs != 2)
    {
        (void)(args);
        std::cout << "This program needs one argument" << std::endl;
        return (0);
    }

    std::vector<BitcoinExchange> data;
    std::ifstream data_file("data.csv");
    std::ifstream infile(args[1]);
    std::string line;

    while (std::getline(data_file, line))
    {
        if (line != "date,exchange_rate")
        {
        BitcoinExchange data_line;
        data_line.fill_data(line);
        data.push_back(data_line);
        //std::cout << data_line.getDate() << " | ";
        //std::cout << data_line.getValue() << std::endl;
        }
    }

    while (std::getline(infile, line))
    {
        try
        {
        if (line != "date | value")
        {
        float in_value;
        std::string in_date;

        parse_line(line);
        in_date = get_date1(line);
        in_value = get_value1(line);
        //std::cout << "value: " << in_value << std::endl;
        //std::cout << "date: " << in_date << std::endl;

        float prev_value = 0;
        for (std::vector<BitcoinExchange>::iterator i = data.begin(); i < data.end(); i++)
        {
            if (isDateOlder(in_date,"2009-01-02") < 0)
                prev_value = 0;
            else if (isDateOlder(in_date, (*i).getDate()) < 0)
            {
                prev_value = (*(i - 1)).getValue();
                //std::cout <<  (*(i - 1)).getDate() << std::endl;
                break;
            }
        }
        //std::cout << "prev_value: " << prev_value << std::endl; 
        std::cout << in_date << " => " << in_value << " = " << (in_value * prev_value) << std::endl;
        }
        }
        catch (std::exception &ex)
        {
            std::cout << ex.what() << std::endl;
        }
    }
}