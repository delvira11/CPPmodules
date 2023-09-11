/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:29:44 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/11 19:29:45 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        std::string const   name;
        int                 grade;
    public:
        // Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat &copy);
        Bureaucrat &operator=(Bureaucrat &copy);
        ~Bureaucrat();


        std::string const   getName();
        int                 getGrade();
        void                incrementGrade();
        void                decrementGrade();

    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    
};
    
std::ostream& operator<<(std::ostream& os, Bureaucrat& obj);

#endif