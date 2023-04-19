#include <iostream>
#include "Contact.Class.hpp"
#include "PhoneBook.Class.hpp"

using namespace std;


int main()
{
    PhoneBook   agenda;
    string      cmd;
    int         i;
    int         contact;

    i = 0;
    while (1)
    {
    cout << "Introduce un comando : ADD, SEARCH o EXIT" << endl;
    cin >> cmd;
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
        cout << "Introduce el numero del contacto para ver la información: ";
        cin >> contact;
        while (contact > 8 || contact < 1)
        {
        cout << "Numbero fuera de rango, introduce un numero entre 1 y 8" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> contact;
        }
        agenda.contact_info(contact);

    }
    else if (cmd == "EXIT")
    {
        break ;
    }
    }
}