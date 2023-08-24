/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:54:53 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:54:54 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
    private:
        Weapon      *weapon;
        std::string name;

    public:
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon &setweapon);
        void    attack();
};

#endif