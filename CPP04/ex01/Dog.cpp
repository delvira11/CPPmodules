/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:55:30 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 19:52:29 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain();
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(Dog &copy)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = copy.type;
    *this->brain = *copy.brain;
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
