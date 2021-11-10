/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:06:59 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 19:07:01 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(const PowerFist &powerfist): AWeapon(powerfist.getName(), powerfist.getAPCost(), powerfist.getDamage())
{
    *this = powerfist;
}

PowerFist &PowerFist::operator = (const PowerFist &powerfist)
{
    if (this == &powerfist)
        return (*this);
    AWeapon::operator=(powerfist);
    return (*this);
}

void PowerFist::attack() const
{
    std::cout << "\x1b[1;34m* pschhh... SBAM! *\x1b[0m" << std::endl;
}
