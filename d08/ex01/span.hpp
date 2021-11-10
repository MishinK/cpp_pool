/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:20:20 by ashea             #+#    #+#             */
/*   Updated: 2021/03/27 00:20:22 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <set>
# include <algorithm>

class Span
{
public:
    Span(size_t _limit);
    virtual ~Span();
    Span(Span const &span);
    Span &operator=(Span const &span);

    void addNumber(int n);
	template<typename Iterator>
	void addNumber(Iterator begin, Iterator end);

    size_t shortestSpan() const;
	size_t longestSpan() const;

    class OvermuchNumbersException: public std::exception
    {
    public:
		virtual const char* what() const throw();
	};
	class FewNumbersException: public std::exception
    {
    public:
		virtual const char* what() const throw();
	};
private:
    Span();
    size_t limit;
    std::multiset<int> mset;
};

# include "span.ipp"

#endif
