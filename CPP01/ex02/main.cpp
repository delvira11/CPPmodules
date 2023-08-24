/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:45:04 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:45:57 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int nargs, char **args)
{

    if (nargs != 1)
    {
        std::cout << "This program doesn't need argumenrts" << std::endl;
        return (0);
    }
    (void)args;

    // CREACION DEL STRING BRAIN Y VARIABLE QUE APUNTA AL STRING Y VARIABLE REFERENCIA AL STRING

    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    //PRINT DE LA DIRECCION DE MEMORIA QUE CONTIENEN TODAS LAS VARIABLES ANTERIORES

    std::cout << &brain << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    //PRINT DEL VALOR DE LA DIRECCION DE MEMORIA ANTERIOR A TRAVES DE TODAS LAS VARIABLES

    std::cout << brain << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return (0);
}