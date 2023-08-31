/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:19:09 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 17:19:29 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

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