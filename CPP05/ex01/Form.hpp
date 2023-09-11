/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:30:08 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/11 19:30:10 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"


class Form
{
    private:
        std::string const   name;
        bool                filled;
        int const           grade_sign;
        int const           grade_exec;

    public:
        Form(std::string const name);
        Form(Form &copy);
        Form &operator=(Form &copy);
        ~Form();

        std::string const   getName();
        bool                getFilled();
        int                 getGrade_sign();
        int                 getGrade_exec();
        void                beSigned(Bureaucrat &bureaucrat);


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

std::ostream& operator<<(std::ostream& os, Form& copy);

#endif