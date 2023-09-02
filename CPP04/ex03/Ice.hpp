/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:18:23 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/01 18:23:25 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef ICE_HPP
#define ICE_HPP

class Ice : public AMateria
{
    public: 
    Ice();
    ~Ice();

    virtual AMateria* clone() const;
    virtual void    use(ICharacter& target);


};

#endif