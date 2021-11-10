/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EternalTarget.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 22:12:27 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 22:12:28 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EternalTarget.hpp"

EternalTarget::EternalTarget(): Enemy(100, "Eternal Target")
{
    std::cout << "This target cannot be killed!!!" << std::endl;
}

EternalTarget::~EternalTarget()
{
    std::cout << "It's impossible!!!" << std::endl;
}

EternalTarget::EternalTarget(const EternalTarget &eternaltarget): Enemy(eternaltarget.getHP(), eternaltarget.getType())
{
    *this = eternaltarget;
}

EternalTarget &EternalTarget::operator = (const EternalTarget &eternaltarget)
{
    if (this == &eternaltarget)
        return (*this);
    Enemy::operator=(eternaltarget);
    return (*this);
}

void EternalTarget::takeDamage(int damage)
{
    Enemy::takeDamage(damage - damage);
}
