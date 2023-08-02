/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:29:42 by delvira-          #+#    #+#             */
/*   Updated: 2023/08/02 13:54:57 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Converter
{
    
    private:
        std::string number;
    public:
        Converter(std::string num);
        Converter(Converter &copy);
        Converter &operator=(Converter &copy);
        ~Converter();

        std::string getStrNum();
        
        std::string convertChar();
        std::string convertInt();
};