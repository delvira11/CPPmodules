/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:50:47 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 16:52:34 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal {

    public:
        WrongCat();
        WrongCat(WrongCat &copy);
        ~WrongCat();
        WrongCat &operator=(WrongCat &copy);

        // std::string getType() const;

        void makeSound() const;

};

#endif