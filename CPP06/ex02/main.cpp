/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:50:13 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/12 18:00:05 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime> 

Base    *generate(void)
{
    std::srand(static_cast<unsigned int>(std::time(nullptr) + 42));


    int random_num = (std::rand() % 3) + 1;

    if (random_num == 1)
        return (new(A));
    else if (random_num == 2)
        return (new(B));
    else
        return (new(C));
}


void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << "A" << std::endl;
    }
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "B" << std::endl;
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "C" << std::endl;
    }
    else
        std::cout << "Couldn't convert to any of the classes" << std::endl;
}


void identify(Base& p)
{
    try
    {
        A& ja = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)ja;

    }
    catch( std::exception& ex)
    {
    }
    try
    {
        B& ja = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)ja;
    }
    catch( std::exception& ex)
    {
    }
    try
    {
        C& ja = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)ja;

    }
    catch( std::exception& ex)
    {
    }
    

}

int main()
{
    Base *jordan;

    jordan = generate();


    //Passing pointer to identify
    identify(jordan);

    //Passing reference to identyfy

    identify(*jordan);


    
    return (0);
}