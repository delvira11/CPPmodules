/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:50:39 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 16:52:15 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

    class WrongAnimal {
        
        protected:
            std::string type;

        public:
            WrongAnimal();
            WrongAnimal(WrongAnimal &copy);
            ~WrongAnimal();
            WrongAnimal &operator=(WrongAnimal &copy);

            std::string getType() const;
            void makeSound() const;

    };

#endif