/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:25:59 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/14 19:14:12 by delvira-         ###   ########.fr       */
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

PmergeMe::PmergeMe(PmergeMe &copy)
{
        this->vec = copy.vec;
        this->lst = copy.lst;
        this->N = copy.N;
}
PmergeMe & PmergeMe::operator=(PmergeMe &copy)
{
    this->vec = copy.vec;
    this->lst = copy.lst;
    this->N = copy.N;
    return *this;
}

int PmergeMe::get_N()
{
    return (this->N);
}

void PmergeMe::print_data()
{
    std::vector<int> sorted_vec;
    
    std::cout << "After : "; 

    for (std::vector<int>::iterator it = this->vec.begin(); it != this->vec.end(); ++it)
    {
        sorted_vec.push_back(*it);
    } 
    std::sort(sorted_vec.begin(), sorted_vec.end());
    for (std::vector<int>::iterator it = sorted_vec.begin(); it != sorted_vec.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
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
        if ((i % 2) == 0)
        {
        while ((*itr > *(itr + 2) && (itr + 2) < this->vec.end()))
        {

            aux = *itr;
            aux2 = *(itr + 1);
            *itr = *(itr + 2);
            *(itr + 1) = *(itr + 3);
            *(itr + 2) = aux;
            *(itr + 3) = aux2;
            itr-=2;
            i-=2;
        }
            
            
        }
            i++;
            itr++;
    }
    
    
    // while (itr != (this->vec.end() - 1))
    // {
    //     if ((i % 2 == 0) && (*itr > *(itr + 2) && (itr + 2) < this->vec.end()))
    //     {

    //         aux = *itr;
    //         aux2 = *(itr + 1);
    //         *itr = *(itr + 2);
    //         *(itr + 1) = *(itr + 3);
    //         *(itr + 2) = aux;
    //         *(itr + 3) = aux2;
    //         itr = this->vec.begin();
    //         i = 0;
    //     }
    //     else
    //     {
    //         i++;
    //         itr++;
    //     }
    // }

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

    // std::cout << "----VECTOR----" << std::endl;
    // for (std::vector<int>::iterator it = this->vec.begin(); it != this->vec.end(); ++it)
    // {
    //     std::cout << *it << std::endl;
    // } 
}

///////// LIST FUNCTIONS //////////////




void PmergeMe::l_order_pairs()
{
std::list<int>::iterator itr = this->lst.begin();
int i = 0;

while (itr != std::prev(this->lst.end()))
{
    if (*itr < *std::next(itr) && (i % 2 == 0))
    {
        int temp = *itr;
        *itr = *std::next(itr);
        *std::next(itr) = temp;
    }
    
    ++itr;
    ++i;
        
}
}


void PmergeMe::l_order_highest_pairs()
{
    std::list<int>::iterator itr = this->lst.begin();
    std::list<int>::iterator itr1 = this->lst.begin();
    std::list<int>::iterator itr2 = this->lst.begin();
    std::list<int>::iterator itr3 = this->lst.begin();
    int len = this->N;
    int i = 0;
    int aux;
    int aux2;
    int save_num = 0;

    // Condition if the vector is not odd

    if ((this->N % 2) != 0)
    {
        save_num = *(--this->lst.end());
        this->lst.pop_back();
        len -= 1;
    }


    while (i < (len - 3))
    {
    itr1 = itr;
    itr2 = itr;
    itr3 = itr;    
    std::advance(itr1, 1);
    std::advance(itr2, 2);
    std::advance(itr3, 3);
    if ((i % 2) == 0)
    {
        while ((*(itr) > *(itr2)) && i >= 0)
        {

            aux = *itr;
            aux2 = *(itr1);
            *itr = *(itr2);
            *(itr1) = *(itr3);
            *(itr2) = aux;
            *(itr3) = aux2;
    
            for (int j = 0; j < 2; ++j)
            {      
            --itr;
            --itr1;
            --itr2;
            --itr3;
            i--;
            }
        }
        
    }

            std::advance(itr, 1);
            i++;
    }

    // Add the number back to the vector
    if ((this->N % 2) != 0)
        this->lst.push_back(save_num);
}

void l_insert_first_num(std::list<int> *main, std::list<int> *sub)
{
    main->insert(main->begin(), *(sub->begin()));
    sub->erase(sub->begin());
}

void l_insert_sub_vector(std::list<int> *main, std::list<int> *sub)
{
    while (!sub->empty())
    {
    std::list<int>::iterator it = main->begin();

        while (it != main->end() && *it < *(sub->begin()))
        {
            it++;
        }

        main->insert(it, *(sub->begin()));
        sub->erase(sub->begin());
    }  
}

void PmergeMe::l_split_into_vecs()
{
    std::list<int> main_list;
    std::list<int> sub_list;
    int i = 0;
    int save_num = 0;


    if ((this->N % 2) != 0)
    {
        save_num = *(--this->lst.end());
        this->lst.pop_back();
        // len -= 1;
    }

    for (std::list<int>::iterator it = this->lst.begin(); it != this->lst.end(); ++it)
    {
        if ((i % 2) == 0)
            main_list.push_back(*it);
        else
            sub_list.push_back(*it);
        i++;
    }

    if ((this->N % 2) != 0)
        sub_list.push_back(save_num);


    l_insert_first_num(&main_list, &sub_list);
    l_insert_sub_vector(&main_list, &sub_list);

    this->lst = main_list;

    // std::cout << "Main vec -------------" << std::endl; 
    // for (std::list<int>::iterator it = main_list.begin(); it != main_list.end(); ++it)
    // {
    //     std::cout << *it << std::endl;
    // }     
    // std::cout << "Sub vec -------------" << std::endl; 
    // for (std::list<int>::iterator it = sub_list.begin(); it != sub_list.end(); ++it)
    // {
    //     std::cout << *it << std::endl;
    // } 
    
}

void    PmergeMe::list_algorithm()
{

    this->l_order_pairs();
    this->l_order_highest_pairs();
    this->l_split_into_vecs();

    // std::cout << "--LIST---" << std::endl;
    // for (std::list<int>::iterator it = this->lst.begin(); it != this->lst.end(); ++it)
    // {
    //     std::cout << *it << std::endl;
    // } 

}