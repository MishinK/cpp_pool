/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:05:25 by ashea             #+#    #+#             */
/*   Updated: 2021/03/26 19:05:26 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <algorithm>

template <template <typename, typename> class T>
typename T<int, std::allocator<int> >::iterator easyfind(T<int, std::allocator<int> > &container, int n)
{   
    typename T<int, std::allocator<int> >::iterator i;
    
    i = std::find(container.begin(), container.end(), n);
    if (i == container.end())
        throw ("Not found in the container");
    return (i);
}

#endif
