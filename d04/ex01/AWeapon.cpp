/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:55:27 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 17:55:28 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & _name, int _apcost, int _damage): name(_name), apcost(_apcost), damage(_damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(const AWeapon &aweapon)
{
    *this = aweapon;
}

AWeapon &AWeapon::operator = (const AWeapon &aweapon)
{
    if (this == &aweapon)
        return (*this);
    name = aweapon.name;
    apcost = aweapon.apcost;
    damage = aweapon.damage;
    return (*this);
}

std::string AWeapon::getName() const
{
    return (name);
}

int AWeapon::getAPCost() const
{
    return (apcost);
}

int AWeapon::getDamage() const
{
    return (damage);
}

