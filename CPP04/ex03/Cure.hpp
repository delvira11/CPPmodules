/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:18:26 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/04 16:08:34 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
    public: 
        Cure();
        Cure(Cure &copy);
        Cure &operator=(Cure &copy);
        ~Cure();

    virtual AMateria* clone() const;
    virtual void    use(ICharacter& target);

};

#endif