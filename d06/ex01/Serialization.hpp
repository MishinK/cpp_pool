/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:38:05 by ashea             #+#    #+#             */
/*   Updated: 2021/03/25 21:38:06 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>
# include <cstdlib>

struct Data
{
    std::string first_ptr_to_random_str;
    int         random_int;
    std::string second_ptr_to_random_str;
};

void *serialize(void);
Data *deserialize(void *raw);

#endif
