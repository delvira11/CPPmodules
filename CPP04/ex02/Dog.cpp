/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:55:30 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/05 00:02:03 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain();
    this->type = "Dog";
    *this->brain = *copy.brain;
}

Dog &Dog::operator=(Dog &copy)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = copy.type;
    *this->brain = *copy.brain;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}


// std::string Dog::getType() const
// {
//     return this->type;
// }

void Dog::makeSound() const
{
    std::cout << "wof wof" << std::endl;
}
