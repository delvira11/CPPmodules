/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:50:26 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 16:50:27 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wronganimal = new WrongAnimal();
    const WrongAnimal* wrongcat = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << wrongcat->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();
    wronganimal->makeSound();
    wrongcat->makeSound();

    delete meta;
    delete j;
    delete i;
    delete wronganimal;
    delete wrongcat;

}