/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:40:48 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 19:40:49 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &supermutant): Enemy(supermutant.getHP(), supermutant.getType())
{
    *this = supermutant;
}

SuperMutant &SuperMutant::operator = (const SuperMutant &supermutant)
{
    if (this == &supermutant)
        return (*this);
    Enemy::operator=(supermutant);
    return (*this);
}

void SuperMutant::takeDamage(int damage)
{
    if (damage > 3)
        Enemy::takeDamage(damage-3);
}

