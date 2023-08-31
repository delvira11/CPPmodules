/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:56:50 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 16:56:56 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &copy)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

// std::string WrongCat::getType() const
// {
//     return this->type;
// }

void WrongCat::makeSound() const
{
    std::cout << "Wrong cat sounds" << std::endl;
}