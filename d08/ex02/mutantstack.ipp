/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:33:58 by ashea             #+#    #+#             */
/*   Updated: 2021/03/27 16:34:11 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template< typename T > 
MutantStack<T>::MutantStack(): std::stack<T>() {}

template< typename T > 
MutantStack<T>::~MutantStack(){}

template< typename T > 
MutantStack<T>::MutantStack(const MutantStack& mstack): std::stack<T>(mstack) {}

template< typename T > 
MutantStack<T> &MutantStack<T>::operator=(const MutantStack& mstack)
{
    if (this == &mstack)
        return (*this);
    std::stack<T>::c = mstack.c;
    return (*this);
}

template< typename T > 
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (std::stack<T>::c.begin());
}

template< typename T > 
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (std::stack<T>::c.end());
}

template< typename T > 
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return (std::stack<T>::c.begin());
}

template< typename T > 
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return (std::stack<T>::c.end());
}

template< typename T > 
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return (std::stack<T>::c.rbegin());
}

template< typename T > 
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return (std::stack<T>::c.rend());
}

template< typename T > 
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
    return (std::stack<T>::c.rbegin());
}

template< typename T > 
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
    return (std::stack<T>::c.rend());
}