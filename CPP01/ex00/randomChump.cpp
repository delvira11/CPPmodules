/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:43:59 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:44:00 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie zombie;

    zombie.set_name(name);
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    //zombie.~Zombie();
}