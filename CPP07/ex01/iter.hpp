/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:59:19 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/13 14:17:49 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

template <typename T>

void    iter(T *array, int len, void (*func)(T &a))
{
    for (int i = 0; i < len; i++)
    {
        func(array[i]);
    }
}

template <typename T>

void    sum_1(T &num)
{
    num += 1;
}