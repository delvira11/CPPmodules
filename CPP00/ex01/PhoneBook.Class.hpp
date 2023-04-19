#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.Class.hpp"

class PhoneBook
{
    private:
        Contact agenda[8];
    public:
        PhoneBook(void);
        void    add_contact(int i);
        void    contact_info(int i);
        void    show_contacts();

};

PhoneBook::PhoneBook(void)
{
}

void PhoneBook::add_contact(int i)
{
    Contact contacto;
    contacto.fill_info();
    agenda[i] = contacto;
}

void PhoneBook::contact_info(int i)
{
    cout << "INFORMACION DEL CONTACTO "  << i << ":" << endl;
    agenda[i - 1].print_info();
}

void PhoneBook::show_contacts()
{
    int i;

    i = 0;
    while (i < 8)
    {
        agenda[i].print_basic_info(i);
        i++;
    }
}

#endif