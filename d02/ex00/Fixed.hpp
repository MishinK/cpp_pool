/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:50:03 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 13:50:05 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed{
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &fixed);
    Fixed &operator = (const Fixed &fixed);
    int getRawBits(void) const;
    void setRawBits(int const raw);
private:
    int fixed_point_value;
    static const int litteral = 8;
};

#endif