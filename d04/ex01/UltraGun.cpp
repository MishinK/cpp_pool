/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UltraGun.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 22:00:38 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 22:00:39 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UltraGun.hpp"

UltraGun::UltraGun(): AWeapon("Ultra Gun", 0, 200)
{
}

UltraGun::~UltraGun()
{
}

UltraGun::UltraGun(const UltraGun &ultragun): AWeapon(ultragun.getName(), ultragun.getAPCost(), ultragun.getDamage())
{
    *this = ultragun;
}

UltraGun &UltraGun::operator = (const UltraGun &ultragun)
{
    if (this == &ultragun)
        return (*this);
    AWeapon::operator=(ultragun);
    return (*this);
}

void UltraGun::attack() const
{
    std::cout << "\x1b[1;35m* Ultra PUH *\x1b[0m" << std::endl;
}