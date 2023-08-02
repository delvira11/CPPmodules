/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:25:39 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/02 11:26:34 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

char *to_upper(char *str)
{
    int i = 0;
    char *new_str;

    new_str = str;
    while (str[i] != '\0')
    {
        str[i] = std::toupper(str[i]);
        i++;
    }
    return (new_str);
}

int main(int nargs, char **args)
{
    int i = 1;
    std::string str;

    if (nargs == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (args[i])
    {
        args[i] = to_upper(args[i]);
        std::cout << (args[i]);
        i++;
    }
    std::cout << std::endl;
    return (0);
}
