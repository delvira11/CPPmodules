/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:02:34 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/13 14:18:50 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <exception>

template <typename T>

class Array
{
    private:
        T   *data;
        unsigned int len;
    
    public:
        Array();
        Array(unsigned int n);
        Array &operator=( Array &copy);
        Array(Array &copy);
        T& operator[](unsigned int index);
        unsigned int size();
        ~Array();
    
    class ArrayException : public std::exception
    {
        public:
            const char *what() const throw();
    };

};

template <typename T>

Array<T>::Array()
{
    this->data = new T;
    this->len = 0;
}

template <typename T>

Array<T>::Array(unsigned int n)
{
    this->data = new T[n];
    this->len = n;
}

template <typename T>

Array<T>::~Array()
{
    delete[] this->data;
}

template <typename T>

Array<T>::Array(Array &copy)
{
    this->data = new T[copy.len];
    this->len = copy.len;

    for(unsigned int i = 0; i < this->len; i++)
    {
        this->data[i] = copy.data[i];
    }
}

template <typename T>

Array<T> &Array<T>::operator=( Array &copy)
{
    //Array new_array(copy.len);
    delete[] this->data;

    this->data = new T[copy.len];

    for(unsigned int i = 0; i < copy.len; i++)
    {
        this->data[i] = copy.data[i];
    }
    return (*this);
}

template <typename T>

T& Array<T>::operator[](unsigned int index)
{
    if (index >= this->len)
        throw Array<T>::ArrayException();
    return (this->data[index]);
}

template <typename T>

const char *Array<T>::ArrayException::what() const throw()
{
    return ("Index out of range");
}

template <typename T>

unsigned int Array<T>::size()
{
    return(this->len);
}

#endif