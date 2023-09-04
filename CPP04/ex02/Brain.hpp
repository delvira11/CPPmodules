/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:54:05 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/04 19:52:46 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain &copy);
        ~Brain();
        Brain &operator=(Brain &copy);
};

#endif