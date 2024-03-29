/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:25:58 by delvira-          #+#    #+#             */
/*   Updated: 2023/07/29 12:25:59 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact
{
    private:
        std::string  first_name;
        std::string  last_name;
        std::string  nickname;
        int     phone_number;
        std::string  darkest_secret;
    public:
        Contact(void);
        void    fill_info(void);
        void    print_info(void);
        void    print_basic_info(int i);

};

Contact::Contact(void)
{
    phone_number = 0;
    first_name = "";
    last_name = "";
}

bool    is_empty(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] != ' ' && str[i] != '\n')
            return (false);
        i++;
    }
    return (true);
}

bool    tabs(std::string str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '\t')
        {
            std::cout << "Tabs not allowed" << std::endl;
            return (false);
        }
        i++;
    }
    return (true);
}

void Contact::fill_info(void)
{
    std::string input;
    bool        loop_var;

    loop_var = false;
    std::cout << "Nombre : ";
    std::cin.ignore();
    while (loop_var == false)
    {
    std::getline(std::cin, input);
    first_name = input;
    if (!is_empty(first_name) && tabs(first_name) == true)
        loop_var = true;
    }
    loop_var = false;
    std::cout << "Apellido : ";
    while (loop_var == false)
    {
    std::getline(std::cin, input);
    last_name = input;
    if (!is_empty(last_name) && tabs(last_name) == true)
        loop_var = true;
    }
    loop_var = false;
    std::cout << "Nickname : ";
    while (loop_var == false)
    {
    std::getline(std::cin, input);
    nickname = input;
    if (!is_empty(nickname) && tabs(nickname) == true)
        loop_var = true;
    }
    std::cout << "phone_number : ";
    std::cin >> phone_number;
    while (std::cin.fail())
    {
        std::cout << "Number not valid, please try again" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> phone_number;
    }
    std::cout << "darkest secret : ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    loop_var = false;
    while (loop_var == false)
    {
    std::getline(std::cin, input);
    darkest_secret = input;
    if (!is_empty(darkest_secret) && tabs(darkest_secret) == true)
        loop_var = true;
    }
}

void Contact::print_info(void)
{
    std::cout << "Nombre: " << first_name << std::endl;
    std::cout << "Apellido: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phone_number << std::endl;
    std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

std::string    ft_print_10_chars(std::string arg)
{
    char    str[11];
    int     i;
    int     len;
    i = 0;

    len = arg.length();
    while (i < 11)
    {
        str[i] = ' ';
        i++;
    }
    if (arg.length() > 10)
    {
        i = 0;
        while (i < 10)
        {
            str[i] = arg[i];
            i++;
        }
        str[9] = '.';
    }
    else
    {
        len = arg.length();
        i = 9;
        while (len > 0)
        {
            str[i] = arg[len - 1];
            i--;
            len--;
        }
    }
    str[10] = '\0';
    return (str);
}

void Contact::print_basic_info(int i)
{

    std::cout << "|" <<"         " <<(i + 1) << "|" << ft_print_10_chars(first_name) << "|" <<
         ft_print_10_chars(last_name) << "|" << ft_print_10_chars(nickname) << "|" << std::endl;
}


#endif