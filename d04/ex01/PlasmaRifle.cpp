/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:20:47 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 18:20:48 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmarifle): AWeapon(plasmarifle.getName(), plasmarifle.getAPCost(), plasmarifle.getDamage())
{
    *this = plasmarifle;
}

PlasmaRifle &PlasmaRifle::operator = (const PlasmaRifle &plasmarifle)
{
    if (this == &plasmarifle)
        return (*this);
    AWeapon::operator=(plasmarifle);
    return (*this);
}

void PlasmaRifle::attack() const
{
    std::cout << "\x1b[1;31m* piouuu piouuu piouuu *\x1b[0m" << std::endl;
}
