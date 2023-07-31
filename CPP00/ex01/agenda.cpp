/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agenda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:25:51 by delvira-          #+#    #+#             */
/*   Updated: 2023/07/29 12:25:52 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Contact.Class.hpp"
#include "PhoneBook.Class.hpp"


int main()
{
    PhoneBook   agenda;
    std::string      cmd;
    int         i;
    int         contact;

    i = 0;
    while (!std::cin.eof())
    {
    std::cout << "Introduce un comando : ADD, SEARCH o EXIT" << std::endl;
    std::cin >> cmd;
    if (cmd == "ADD")
    {
        agenda.add_contact(i);
        i++;
        if (i > 7)
            i = 0;
    }
    else if (cmd == "SEARCH")
    {
        agenda.show_contacts();
        std::cout << "Introduce el numero del contacto para ver la información: ";
        std::cin >> contact;
        while (contact > 8 || contact < 1)
        {
        std::cout << "Numbero fuera de rango, introduce un numero entre 1 y 8" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> contact;
        }
        agenda.contact_info(contact);

    }
    else if (cmd == "EXIT")
    {
        return (0);
    }
    }
}