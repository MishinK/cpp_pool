/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.ipp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:58:54 by ashea             #+#    #+#             */
/*   Updated: 2021/03/26 16:58:56 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<class T>
Array<T>::Array(): size(0), array(NULL){}

template<class T>
Array<T>::Array(int _size): size(_size), array(new T[_size]){}

template<class T>
Array<T>::~Array()
{
    if (size)
        delete[] array;
}

template<class T>
Array<T>::Array(Array<T> const &_array): size(_array.getSize()), array(new T[_array.getSize()])
{
    unsigned int i = 0;
    while (i < _array.getSize())
    {
        array[i] = _array.array[i];
        i++;
    }
}

template<class T>
Array<T> &Array<T>::operator = (Array<T> const &_array)
{
    if (this == &_array)
        return (*this);
    unsigned int i = 0;
    if (size)
        delete[] array;
    array = NULL;
    if (_array.getSize())
        array = new T[_array.getSize()];
    size = _array.getSize();
    while (i < _array.getSize())
    {
        array[i] = _array.array[i];
        i++;
    }
    return (*this);
}

template<class T>
unsigned int Array<T>::getSize() const
{
    return (size);
}

template<class T>
T &Array<T>::operator[](unsigned int const i)
{
    if (i >= size)
		throw Array<T>::ArrayException();
	return (array[i]);
}

template<class T>
const char* Array<T>::ArrayException::what() const throw()
{
    return ("Exception: index is out of bounds of the array");
}

template<class T>
Array<T>::ArrayException::~ArrayException() throw(){};
