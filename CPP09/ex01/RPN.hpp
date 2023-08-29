/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:01:42 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/29 18:03:17 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <exception>

class RPN
{
    private:
        std::stack<int> stack;
        std::string *array;
        int size;
    public:
        RPN(std::string *line, int size);
        ~RPN();
        RPN(RPN &copy);
        RPN &operator=(RPN &copy);

        void execute(void);

    class EmptyStack : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

int array_size(std::string line);
