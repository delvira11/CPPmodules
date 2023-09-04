/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:18:23 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/04 16:12:04 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public: 
    Ice();
    Ice(Ice &copy);
    Ice &operator=(Ice &copy);
    ~Ice();

    virtual AMateria* clone() const;
    virtual void    use(ICharacter& target);


};

#endif