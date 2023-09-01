/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:36:53 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/01 19:12:49 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class AMateria
{
    protected:
        std::string const type;
    public:

        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        // virtual void use(ICharacter& target);
        ~AMateria();
};