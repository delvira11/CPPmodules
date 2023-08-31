/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:18:46 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 17:22:46 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "WrongCat.hpp"

int main(int nargs, char **args)
{
    if (nargs != 1)
    {
        std::cout << "This program doesn't need arguments" << std::endl;
        return (0);
    }
    (void)args;

    Animal *doog = new Dog();
    //Animal *caat = new Animal();

    doog->makeSound();
    delete doog;
}
