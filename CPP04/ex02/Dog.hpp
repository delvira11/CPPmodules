/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:18:29 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 17:18:42 by delvira-         ###   ########.fr       */
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