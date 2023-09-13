/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:55:33 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/12 19:49:47 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!" << std::endl;  
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
    std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl destructor called" << std::endl;
}

//retornoFuncion (NombreClase::*nombreVariablePunteroAMiembro)( argumentosFuncion );

void    Harl::complain( std::string level )
{
        std::string param = level;
        void (Harl::* ptrarray[4]) (void);
        int i;
        std::string strarray[4];

        strarray[0] = "DEBUG";
        strarray[1] = "INFO";
        strarray[2] = "WARNING";
        strarray[3] = "ERROR";
        //void (X::* ptfptr) (int) = &X::f;
        //void (Harl::* ptrarray) (void) = &Harl::debug;
        ptrarray[0] = &Harl::debug;
        ptrarray[1] = &Harl::info;
        ptrarray[2] = &Harl::warning;
        ptrarray[3] = &Harl::error;

        //(this->*ptrarray[0])();
        i = 0;
        while (i < 4)
        {
            if (level == strarray[i])
                (this->*ptrarray[i])();
            i++;
        }
}