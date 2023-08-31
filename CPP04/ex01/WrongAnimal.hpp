/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:56:18 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 16:56:52 by delvira-         ###   ########.fr       */
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