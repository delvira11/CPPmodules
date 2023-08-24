/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:44:09 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:44:10 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
   void announce(void);
   void set_name(std::string zname);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif