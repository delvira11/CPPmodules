/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:30:56 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/07 16:17:54 by delvira-         ###   ########.fr       */
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

int main(int nargs, char **args)
{
    if (nargs == 0)
    {
        std::cout << "This program needs arguments" << std::endl;
        return (1);
    }
    
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