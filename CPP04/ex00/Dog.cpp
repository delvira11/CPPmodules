/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:50:14 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 16:50:18 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog &copy)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

// std::string Dog::getType() const
// {
//     return this->type;
// }

void Dog::makeSound() const
{
    std::cout << "wof wof" << std::endl;
}
