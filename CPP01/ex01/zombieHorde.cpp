/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:44:52 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:44:53 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde;
    int i;

    i = 0;
    horde = new Zombie[N];

    while (i < N)
    {
        horde[i].set_name(name);
        i++;
    }
    return (horde);
}