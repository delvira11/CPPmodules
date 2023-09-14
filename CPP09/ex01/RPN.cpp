/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:01:53 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/14 19:48:16 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string *line, int size)
{
    this->array = line;
    this->size = size;
}
RPN::~RPN()
{
}

RPN::RPN(RPN &copy)
{
    this->array = copy.array;
    this->size = copy.size;
    this->array = copy.array;

}

RPN &RPN::operator=(RPN &copy)
{
    this->array = copy.array;
    this->size = copy.size;
    this->array = copy.array;

    return *this;
}


int suma(int a, int b)
{
    return (a + b);
}

int resta(int a, int b)
{
    return (a - b);
}
int mult(int a, int b)
{
    return (a * b);
}
int divide(int a, int b)
{
    return (a / b);
}

const char *RPN::EmptyStack::what() const throw()
{
    return ("This operation can't be done");
}

void RPN::execute(void)
{
    int i = 0;
    int x = 0;
    std::string operators[4] = {"+", "-", "*", "/"};
    int (*ptrfunct[4])(int, int) = {&suma, &resta, &mult, &divide};
        

    while (i < this->size)
    {
        if ((this->array[i][0] >= '0' && this->array[i][0] <= '9') || ((this->array[i][0] == '+' || this->array[i][0] == '-') && (this->array[i][1] >= '0' && this->array[i][1] <= '9')))
        {
            int number = std::atoi(this->array[i].c_str());
            this->stack.push(number);
        }
        else if (this->array[i] == "+" || this->array[i] == "-" || this->array[i] == "*" || this->array[i] == "/")
        {
            x = 0;
            while (x < 4)
            {
                if (this->array[i] == operators[x])
                    break ;
                x++;
            }
            if (this->stack.empty())
                throw RPN::EmptyStack();
            int a = this->stack.top();
            this->stack.pop();
            if (this->stack.empty())
                throw RPN::EmptyStack();
            int b = this->stack.top();
            this->stack.pop();
            int result = ptrfunct[x](b, a);
            this->stack.push(result);
        }
        i++;
    }

    if (this->stack.size() == 1)
    {   
    std::cout << this->stack.top() << std::endl;
    }
    else
        throw RPN::EmptyStack();
}