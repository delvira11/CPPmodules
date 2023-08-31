/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:55:41 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 16:55:57 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal {

    private:
        Brain *brain;

    public:
        Dog();
        Dog(Dog &copy);
        ~Dog();
        Dog &operator=(Dog &copy);

        // std::string getType() const;
        void makeSound() const;
};

#endif