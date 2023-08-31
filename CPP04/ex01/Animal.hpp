/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:53:10 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 16:53:55 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

    class Animal {
        
        protected:
            std::string type;

        public:
            Animal();
            Animal(Animal &copy);
            virtual ~Animal();
            Animal &operator=(Animal &copy);

            std::string getType() const;
            virtual void makeSound() const;

    };

#endif