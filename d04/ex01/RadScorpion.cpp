/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:59:04 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 19:59:07 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "Rad Scorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &radscorpion): Enemy(radscorpion.getHP(), radscorpion.getType())
{
    *this = radscorpion;
}

RadScorpion &RadScorpion::operator = (const RadScorpion &radscorpion)
{
    if (this == &radscorpion)
        return (*this);
    Enemy::operator=(radscorpion);
    return (*this);
}

void RadScorpion::takeDamage(int damage)
{
    Enemy::takeDamage(damage);
}