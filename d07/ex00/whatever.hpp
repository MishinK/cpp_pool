/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 12:58:23 by ashea             #+#    #+#             */
/*   Updated: 2021/03/26 12:58:24 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
   T c = a;
   a = b;
   b = c;
}

template <typename T>
T min(const T& a, const T& b)
{
    return (a < b ? a : b);
}

template <typename T>
T max(const T& a, const T& b)
{
    return (a > b ? a : b);
}

#endif