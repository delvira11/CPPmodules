/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:46:24 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/28 19:46:25 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <exception>

class BitcoinExchange
{
    private:
        std::string date;
        float       value;
        int         year;
        int         month;
        int         day;

    public:
        BitcoinExchange();
        //BitcoinExchange(BitcoinExchange &copy);
        BitcoinExchange &operator=(BitcoinExchange &copy);
        ~BitcoinExchange();
        
        void setDate(std::string date);
        void setValue(float value);
        std::string getDate();
        float getValue();
        int     getYear();
        int     getMonth();
        int     getDay();
        void fill_data(std::string data);

        class NegativeEx : public std::exception
        {
            const char *what() const throw();
        };
        class BadDate : public std::exception
        {
            public :
                const char *what() const throw();
        };
        class LargeNumber : public std::exception
        {
            public :
                const char *what() const throw();
        };
        class InputError : public std::exception
        {
            public :
                const char *what() const throw();
        };
};