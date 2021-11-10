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

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <algorithm>

template< typename T > 
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    virtual ~MutantStack();
    MutantStack(const MutantStack& mstack);
    MutantStack &operator=(const MutantStack& mstack);

    typedef typename std::stack<T>::container_type::iterator                iterator;
    iterator begin();
    iterator end();
    typedef typename std::stack<T>::container_type::const_iterator          const_iterator;
    const_iterator begin() const;
    const_iterator end() const;
    typedef typename std::stack<T>::container_type::reverse_iterator        reverse_iterator;
    reverse_iterator rbegin();
    reverse_iterator rend();
    typedef typename std::stack<T>::container_type::const_reverse_iterator  const_reverse_iterator;
    const_reverse_iterator rbegin() const;
    const_reverse_iterator rend() const;
};

# include "mutantstack.ipp"
#endif
