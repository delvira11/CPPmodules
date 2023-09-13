/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:59:24 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/13 13:59:25 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"


int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};

    iter(array, 5, sum_1);
    iter(char_array, 5, sum_1);

    for (int i = 0; i < 5; i++)
    {
        std::cout << array[i] << std::endl;
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << char_array[i] << std::endl;
    }
}