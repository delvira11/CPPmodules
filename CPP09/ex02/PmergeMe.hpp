/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:31:00 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/06 18:00:02 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>


class PmergeMe
{
    private:
        std::vector<int> vec;
        std::list<int> lst;
        int N;
        
    public:
        PmergeMe(char **args);
        ~PmergeMe();

        void vector_algorithm();
        void order_pairs();
        void order_highest_pairs();
        void split_into_vecs();



};




#endif