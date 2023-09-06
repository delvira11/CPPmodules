/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:31:00 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/06 20:00:38 by delvira-         ###   ########.fr       */
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

        //Vector functions
        void vector_algorithm();
        void order_pairs();
        void order_highest_pairs();
        void split_into_vecs();

        //List functions
        void list_algorithm();
        void l_order_pairs();
        void l_order_highest_pairs();
        // void l_split_into_vecs();



};




#endif