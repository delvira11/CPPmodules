/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:16:30 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/31 17:17:05 by delvira-         ###   ########.fr       */
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