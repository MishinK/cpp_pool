/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:49:55 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 13:49:57 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixed_point_value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &fixed)
        return (*this);
    fixed_point_value = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    fixed_point_value = raw;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    fixed_point_value = i << Fixed::litteral;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    fixed_point_value = roundf(f * (1 << Fixed::litteral));
}

float Fixed::toFloat(void) const
{
	return ((float)fixed_point_value / (float)(1 << Fixed::litteral));
}

int Fixed::toInt(void) const
{
	return (fixed_point_value >> Fixed::litteral);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
    out << fixed.toFloat();
    return (out);
}