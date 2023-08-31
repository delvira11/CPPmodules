/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:50:10 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 16:51:31 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {

    public:
        Cat();
        Cat(Cat &copy);
        ~Cat();
        Cat &operator=(Cat &copy);

        // std::string getType() const;

        void makeSound() const;

};

#endif