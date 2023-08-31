/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:49:55 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 16:49:56 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "";
}

Animal::Animal(Animal &copy) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal &copy) {
    std::cout << "Animal assignment operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "undefined animal sound" << std::endl;
}
