/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:54:32 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/05 00:04:55 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat &copy) :Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain();
    this->type = "Cat";
    *this->brain = *copy.brain;
}
Cat &Cat::operator=(Cat &copy)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = copy.type;
    *this->brain = *copy.brain;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}


// std::string Cat::getType() const
// {
//     return this->type;
// }

void Cat::makeSound() const
{
    std::cout << "miau" << std::endl;
}

