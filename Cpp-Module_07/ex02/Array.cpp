/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:17:54 by enja              #+#    #+#             */
/*   Updated: 2023/09/06 19:17:55 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<class T>
Array<T>::Array(unsigned int n)
{
    array[n];
    std::cout << "Array Constructor" << std::endl;
}

template<class T>
Array<T>::Array()
{
     array[];
    std::cout << "Array Constructor" << std::endl;
}

template<class T>
Array<T>::~Array()
{
    std::cout << "Array Destructor" << std::endl;
}

template<class T>
Array<T>::Array(const Array& obj)
{
    *this = obj;
}

template<class T>
const Array<T>& Array<T>::operator = (const Array& obj)
{
    
}