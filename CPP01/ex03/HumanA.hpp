/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:54:45 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/24 16:54:46 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
    private:
        Weapon      &weapon;
        std::string name;

    public:
        HumanA(std::string name, Weapon &human_weapon);
        void    attack();
        ~HumanA();
};

#endif