/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:18:26 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/01 17:46:05 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#ifndef CURE_HPP
#define CURE_HPP

class Cure : public AMateria
{
    public: 
    Cure();
    ~Cure();

    virtual AMateria* clone() const;
    virtual void    use(ICharacter& target);

};

#endif