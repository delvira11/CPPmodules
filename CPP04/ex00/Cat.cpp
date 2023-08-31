/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:50:05 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 16:50:08 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat &copy) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat &copy)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

// std::string Cat::getType() const
// {
//     return this->type;
// }

void Cat::makeSound() const
{
    std::cout << "miau" << std::endl;
}

