#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

using namespace std;

class Contact
{
    private:
        string  first_name;
        string  last_name;
        string  nickname;
        int     phone_number;
        string  darkest_secret;
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

void Contact::fill_info(void)
{
    cout << "Nombre : ";
    cin >> first_name;
    cout << "Apellido : ";
    cin >> last_name;
    cout << "Nickname : ";
    cin >> nickname;
    cout << "phone_number : ";
    cin >> phone_number;
    while (cin.fail())
    {
        cout << "Number not valid, please try again" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> phone_number;
    }
    cout << "darkest secret : ";
    cin >> darkest_secret;
}

void Contact::print_info(void)
{
    cout << "Nombre: " << first_name << endl;
    cout << "Apellido: " << last_name << endl;
    cout << "Nickname: " << nickname << endl;
    cout << "Phone number: " << phone_number << endl;
    cout << "Darkest secret: " << darkest_secret << endl;
}

string    ft_print_10_chars(string arg)
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

    cout << "|" <<"         " <<(i + 1) << "|" << ft_print_10_chars(first_name) << "|" <<
         ft_print_10_chars(last_name) << "|" << ft_print_10_chars(nickname) << "|" <<endl;
}


#endif