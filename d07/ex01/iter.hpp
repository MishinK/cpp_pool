/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:19:30 by ashea             #+#    #+#             */
/*   Updated: 2021/03/26 16:19:31 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void iter(T(*array), int len, void (*f)(T &t))
{
    int i = 0;
    while (i < len)
        f(array[i++]);
}

template<typename T>
void decrement(T &t)
{
    std::cout << --t << " ";
}

template<typename T>
void increment(T &t)
{
     std::cout << ++t << " ";
}

#endif
