/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:55:26 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:55:27 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>


int main(int nargs, char** args)
{
    std::string name;
    std::string s1;
    std::string s2;
    std::string stringin;
    std::string mychar;
    std::string nameout;
    int position;
    std::ifstream filein(name);

    if (nargs != 4)
    {
        std::cout << "This program needs 3 arguments" << std::endl;
        return (0);
    }

    name = args[1];
    s1 = args[2];
    s2 = args[3];

    nameout = name + ".replace";

   filein.open(name);
    if (filein.is_open())
    {
        while (filein.good())
        {
            std::getline(filein, mychar);
            stringin.append(mychar);
            stringin.append("\n");
        }
    }
    else
    {
        std::cout << "Error opening file" << std::endl;
        return (0);
    }
    std::ofstream fileout(nameout);
    while (stringin[stringin.find(s1)] != '\0')
    {
    position = stringin.find(s1);
    stringin.erase(position, s1.length());
    stringin.insert(position, s2);
    }
    fileout << stringin;

    return (0);
}
