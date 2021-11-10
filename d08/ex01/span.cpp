/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:20:29 by ashea             #+#    #+#             */
/*   Updated: 2021/03/27 00:20:31 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(size_t _limit): limit(_limit){}

Span::~Span()
{
    mset.clear();
}

Span::Span(Span const &span): limit(span.limit), mset(span.mset){}

Span &Span::operator=(Span const &span)
{
    if (this == &span)
        return (*this);
    limit = span.limit;
    mset.clear();
    mset = span.mset;
    return (*this);
}

void Span::addNumber(int n)
{
    if (limit == mset.size())
        throw(Span::OvermuchNumbersException());
    else
        mset.insert(n);
}

size_t Span::shortestSpan() const
{
    if (mset.size() < 2)
        throw(Span::FewNumbersException());

    size_t shortest_span = *(++mset.begin()) - *(mset.begin()); 
    
    for(std::multiset<int>::const_iterator it = mset.begin(), it2 = ++mset.begin(), end = mset.end(); it2 != end; ++it, ++it2)
        shortest_span = std::min(*(it2) - *it,  (int)shortest_span);  

    return (shortest_span);
}

size_t Span::longestSpan() const
{
    if (mset.size() < 2)
        throw(Span::FewNumbersException());

    return (*(--mset.end()) - *(mset.begin()));
}

const char *Span::OvermuchNumbersException::what() const throw()
{
    return ("Exception: overmuch numbers");
}

const char *Span::FewNumbersException::what() const throw()
{
    return ("Exception: few numbers");
}