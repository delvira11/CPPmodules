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
    first_name = "x";
    last_name = "x";
}

void Contact::fill_info(void)
{
    std::string input;

    std::cout << "Nombre : ";
    std::cin.ignore();
    std::getline(std::cin, input);
    first_name = input;
    std::cout << "Apellido : ";
    std::getline(std::cin, input);
    last_name = input;
    std::cout << "Nickname : ";
    std::getline(std::cin, input);
    nickname = input;
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
    std::getline(std::cin, input);
    darkest_secret = input;
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