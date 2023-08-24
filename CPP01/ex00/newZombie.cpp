/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:43:54 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:43:55 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie *zombie1;

    zombie1 = new Zombie;
    zombie1->set_name(name);
    return (zombie1);
}
