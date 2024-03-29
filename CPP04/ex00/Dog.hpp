/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:50:20 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 16:51:49 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal {

    public:
        Dog();
        Dog(Dog &copy);
        ~Dog();
        Dog &operator=(Dog &copy);

        // std::string getType() const;
        void makeSound() const;
};

#endif