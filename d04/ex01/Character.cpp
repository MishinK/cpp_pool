/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:04:20 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 20:04:21 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & _name): name(_name), ap(40) 
{
    aweapon = NULL;
}

Character::~Character()
{
}

Character::Character(const Character &character)
{
    *this = character;
}

Character &Character::operator = (const Character &character)
{
    if (this == &character)
        return (*this);
    name = character.name;
    ap = character.ap;
    aweapon = character.aweapon;
    return (*this);
}

void Character::recoverAP()
{
    ap += 10;
    if (ap > 40)
        ap = 40;
}

void Character::equip(AWeapon* _aweapon)
{
    aweapon = _aweapon;
}

std::string Character::getName() const
{
    return (name);
}

int Character::getAP() const
{
    return (ap);
}

AWeapon* Character::getAWeapon() const
{
    return (aweapon);
}

void Character::attack(Enemy* enemy)
{
    if (aweapon == NULL || enemy == NULL)
        return ;
    if (ap < aweapon->getAPCost())
        return ;
    std::cout << name << " attacks " << enemy->getType() << " with a " << aweapon->getName() << std::endl;
    ap -= aweapon->getAPCost();
    aweapon->attack();
    enemy->takeDamage(aweapon->getDamage());
    if (enemy->getHP() == 0)
        delete enemy;
}

std::ostream  &operator<<(std::ostream & out, const Character & charater)
{
    if (charater.getAWeapon() == NULL)
        out << charater.getName() << " has " << charater.getAP() << " AP and is unarmed" << std::endl;
    else
        out << charater.getName() << " has " << charater.getAP() << " AP and wields a " << charater.getAWeapon()->getName() << std::endl;
    return (out);
}