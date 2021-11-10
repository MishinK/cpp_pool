/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.ipp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:20:20 by ashea             #+#    #+#             */
/*   Updated: 2021/03/27 00:20:22 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename Iterator>
void Span::addNumber(Iterator begin, Iterator end)
{
	if (limit < mset.size() + std::distance(begin, end))
		throw(Span::FewNumbersException());
	mset.insert(begin, end);
}