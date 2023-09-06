/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:30:56 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/06 19:44:58 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int nargs, char **args)
{
    if (nargs == 0)
    {
        std::cout << "This program needs arguments" << std::endl;
        return (1);
    }
    PmergeMe    data(args);
    data.vector_algorithm();
    std::cout << "------" << std::endl;
    data.list_algorithm();
}