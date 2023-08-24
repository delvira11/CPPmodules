/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:44:38 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:44:39 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(int nargs, char **args)
{

    if (nargs != 1)
    {
        std::cout << "This program doesn't need arguments" << std::endl;
        return (0);
    }
    (void)args;

    Zombie *horde;
    int i;

    i = 0;

    // CREACION DE HORDA DE 10 ZOMBIES LLAMADOS JOHN

    horde = zombieHorde(10, "John");

    // TODOS LOS ZOMBIES DE LA HORDA SE ANUNCIAN
    while (i < 10)
    {
        horde[i].announce();
        i++;
    }

    // SE ELIMINA LA MEMORIA RESERVADA DE LOS ZOMBIES

    delete[] horde;
    return (0);
}