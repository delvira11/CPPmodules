/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:43:49 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:43:50 by delvira-         ###   ########.fr       */
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

    // CREACION DE ZOMBIE EN HEAP

    Zombie  *zombieheap;
    zombieheap = newZombie("Carlos");

    // SE ANUNCIA EL ZOMBIE DEL HEAP

    zombieheap->announce();

    // CREACION DE ZOMBIE EN STACK (SE ANUNCIA Y MUERE)
    randomChump("David");

    //BORRAR MEMORIA DEL HEAP
    delete zombieheap;
    return (0);
}