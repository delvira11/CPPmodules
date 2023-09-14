/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:04:15 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/13 19:05:30 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

class Span
{
    private:
        unsigned int N;
        std::vector<int> vec;
    public:
        Span(unsigned int N);
        ~Span();
        Span(Span &copy);
        Span &operator=(Span &copy);

        void addNumber(int number);
        void addMultiNums(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
        void printVec();
    
    class excep : public std::exception
    {
        const char *what() const throw();
    };
};

#endif