/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:30:56 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/14 18:08:55 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>

void    print_before(char **args)
{
    int i = 1;

    std::cout << "Before : ";
    while (args[i])
    {
        std::cout << args[i] <<  " ";
        i++;
    }
    std::cout << std::endl;
}


void    parse_arguments(char **args)
{
    int i = 1;
    int x;
    while (args[i])
    {
        x = 0;
        while (args[i][x] != '\0')
        {
            if (args[i][x] > '9' || args[i][x] < '0')
            {
                std::cout << "Arguments error" << std::endl;
                exit(1);
            }
            else if (std::atoi(args[i]) >= INT_MAX || std::atoi(args[i]) < 0)
            {
                std::cout << "Arguments error" << std::endl;
                exit(1);
            }
            x++;
        }
        i++;
    } 
}

int main(int nargs, char **args)
{
    if (nargs <= 2)
    {
        std::cout << "This program needs arguments" << std::endl;
        return (1);
    }
    
    parse_arguments(args);
    
    PmergeMe    data(args);
    print_before(args);
    data.print_data();

    clock_t start_vector = clock();
    data.vector_algorithm();
    clock_t end_vector = clock();
    

    clock_t start_list = clock();
    data.list_algorithm();
    clock_t end_list = clock();

    double vector_time = static_cast<double>(end_vector - start_vector) / CLOCKS_PER_SEC;
    double list_time = static_cast<double>(end_list - start_list) / CLOCKS_PER_SEC;

    std::cout << "Time to process a range of " << data.get_N() << " elements with std::vector : " << vector_time << std::endl;
    std::cout << "Time to process a range of " << data.get_N() << " elements with std::list : " << list_time << std::endl;

}