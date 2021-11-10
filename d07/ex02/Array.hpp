/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:57:28 by ashea             #+#    #+#             */
/*   Updated: 2021/03/26 16:57:29 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T>
class Array
{
public:
    Array();
    Array(int _size);
    virtual ~Array();
    Array(Array<T> const &_array);
    Array<T> &operator = (Array<T> const &_array);

    unsigned int getSize() const;
    T &operator[](unsigned int const i);

    class ArrayException : public std::exception
    {
    public:
        virtual ~ArrayException() throw();
		virtual const char* what() const throw();
    };
private:
    unsigned int size;
    T *array;
};

# include "Array.ipp"

#endif
