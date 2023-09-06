/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:25:59 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/06 19:23:10 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe(char **args)
{

    std::cout << "PmergeMe constructor called" << std::endl;

    int i = 0;

    while (args[i])
        i++;
    this->N = i - 1;

    for (int x = 1; x < (this->N + 1); x++)
    {
        this->vec.push_back(std::atoi(args[x]));
        this->lst.push_back(std::atoi(args[x]));
    }

    // for (std::list<int>::iterator it = this->lst.begin(); it != this->lst.end(); ++it)
    // {
    // std::cout << *it << std::endl;
    // }
}

PmergeMe::~PmergeMe()
{
    std::cout << "PmergeMe destructor called" << std::endl;
}


void PmergeMe::order_pairs()
{
    std::vector<int>::iterator itr = this->vec.begin();
    int i = 0;
    int aux;

    while (itr != this->vec.end())
    {
        if (*itr < *(itr + 1) && (i % 2 == 0))
        {
            aux = *itr;
            *itr = *(itr + 1);
            *(itr + 1) = aux;
        }
        
        i++;
        itr++;
    }
        
}

void PmergeMe::order_highest_pairs()
{
    std::vector<int>::iterator itr = this->vec.begin();
    int i = 0;
    int aux;
    int aux2;
    int save_num = 0;

    // Condition if the vector is not odd

    if ((this->N % 2) != 0)
    {
        save_num = *(this->vec.end() - 1);
        this->vec.pop_back();
    }

    while (itr != (this->vec.end() - 1))
    {
        if ((i % 2 == 0) && (*itr > *(itr + 2) && (itr + 2) < this->vec.end()))
        {

            aux = *itr;
            aux2 = *(itr + 1);
            *itr = *(itr + 2);
            *(itr + 1) = *(itr + 3);
            *(itr + 2) = aux;
            *(itr + 3) = aux2;
            itr = this->vec.begin();
            i = 0;
        }
        else
        {
            i++;
            itr++;
        }
    }

    // Add the number back to the vector
    if ((this->N % 2) != 0)
        this->vec.push_back(save_num);
}

void insert_first_num(std::vector<int> *main, std::vector<int> *sub)
{
    main->insert(main->begin(), *(sub->begin()));
    sub->erase(sub->begin());
}

void insert_sub_vector(std::vector<int> *main, std::vector<int> *sub)
{
    while (!sub->empty())
    {
    std::vector<int>::iterator it = main->begin();

        while (it != main->end() && *it < *(sub->begin()))
        {
            it++;
        }

        main->insert(it, *(sub->begin()));
        sub->erase(sub->begin());
    }  
}

void PmergeMe::split_into_vecs()
{
    std::vector<int> main_vector;
    std::vector<int> sub_vector;
    int i = 0;
    int save_num = 0;


    if ((this->N % 2) != 0)
    {
        save_num = *(this->vec.end() - 1);
        this->vec.pop_back();
    }

    for (std::vector<int>::iterator it = this->vec.begin(); it != this->vec.end(); ++it)
    {
        if ((i % 2) == 0)
            main_vector.push_back(*it);
        else
            sub_vector.push_back(*it);
        i++;
    }

    if ((this->N % 2) != 0)
        sub_vector.push_back(save_num);


    insert_first_num(&main_vector, &sub_vector);
    insert_sub_vector(&main_vector, &sub_vector);

    this->vec = main_vector;

    // std::cout << "Main vec -------------" << std::endl; 
    // for (std::vector<int>::iterator it = main_vector.begin(); it != main_vector.end(); ++it)
    // {
    //     std::cout << *it << std::endl;
    // }     
    // std::cout << "Sub vec -------------" << std::endl; 
    // for (std::vector<int>::iterator it = sub_vector.begin(); it != sub_vector.end(); ++it)
    // {
    //     std::cout << *it << std::endl;
    // } 
    
}


void    PmergeMe::vector_algorithm()
{

    this->order_pairs();
    this->order_highest_pairs();
    this->split_into_vecs();

    
    for (std::vector<int>::iterator it = this->vec.begin(); it != this->vec.end(); ++it)
    {
        std::cout << *it << std::endl;
    } 
}