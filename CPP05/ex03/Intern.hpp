/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:31:35 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/11 19:31:36 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{

    public:
        Intern();
        ~Intern();
        Intern(Intern &copy);
        Intern &operator=(Intern &copy);

        AForm *makeForm(std::string formname, std::string formtarget);
};

#endif