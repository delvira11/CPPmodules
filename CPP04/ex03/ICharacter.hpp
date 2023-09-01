/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:54:27 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/01 19:12:33 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class ICharacter
{
    private:
        std::string name;
        AMateria *inventory[4];
    public:
        ICharacter(std::string name);
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        // virtual void equip(AMateria* m) = 0;
        // virtual void unequip(int idx) = 0;
        // virtual void use(int idx, ICharacter& target) = 0;
};