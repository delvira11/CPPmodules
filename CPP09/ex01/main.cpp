/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:46:11 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/29 18:07:15 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int array_size(std::string line)
{
    int i = 0;
    int size = 0;
    while (line[i] != '\0')
    {
        while (line[i] == ' ' || line[i] == '\t')
            i++;
        while (line[i] != ' ' && line[i] != '\t' && line[i] != '\0')
            i++;
        size++;
    }
    return (size);
}

std::string *string_split(std::string line)
{
    std::string *array = new std::string[array_size(line)];
    int i = 0;
    int x = 0;
    int j = 0;

    while (line[i] != '\0')
    {
        x = 0;
        while (line[i] == ' ' || line[i] == '\t')
            i++;
        while (line[i + x] != ' ' && line[i + x] != '\t' && line[i + x] != '\0')
            x++;
        array[j] = line.substr(i, x);
        j++;
        i += x;
    }
    return (array);
}

void    parseLine(std::string line)
{
    int i = 0;

    while (line[i] != '\0')
    {
        if ((line[i] > '9' || line[i] < '0') && (line[i] != '+' && line[i] != '-' && line[i] != '*' && line[i] != '/' && line[i] != ' '))
        {
            std::cout << "Parse error" << std::endl;
            exit (1);
        }
        if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/')
        {
            if (line[i + 1] != ' ' && line[i + 1] != '\0' && (line[i + 1] < '0' || line [i + 1] > '9'))
            {
                std::cout << "Operators must be followed by spaces" << std::endl;
                exit (1);
            }
        }
        if (line[i] <= '9' && line[i] >= '0')
        {
            if ((line[i + 1] > '9' || line[i + 1] < '0') && line[i + 1] != ' ' && line[i + 1] != '\0')
            {
                std::cout << "space must follow after a number" << std::endl;
                exit(1);
            }
        }
        i++;
    }
}

int main(int nargs, char **args)
{
    if (nargs != 2)
    {
        std::cout << "This program needs one argument" << std::endl;
        return (0);
    }

    std::string line(args[1]);
    parseLine(line);
    std::string *array = string_split(line);
    RPN rpn(array, array_size(line));
    try
    {
    rpn.execute();    
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    return (0);
}