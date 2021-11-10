/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 03:51:03 by ashea             #+#    #+#             */
/*   Updated: 2021/03/21 03:51:05 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string _name): ClapTrap(_name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << name << ": this is my first message!" << "(NinjaTrap)" <<std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << name << ": this is my last message..." << "(NinjaTrap)" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjatrap): ClapTrap(ninjatrap.name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    *this = ninjatrap;
}

NinjaTrap &NinjaTrap::operator = (const NinjaTrap &ninjatrap)
{
    if (this == &ninjatrap)
        return (*this);
    hit_points = ninjatrap.hit_points;
    energy_points = ninjatrap.energy_points;  
    level = ninjatrap.level;
    return (*this);
}

void NinjaTrap::rangedAttack(std::string const & target)
{
    std::cout << name << ": attacks " << target << " at range, causing " << ranged_attack_damage << " points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
    std::cout << name << ": attacks " << target << " at melee, causing " << melee_attack_damage << " points of damage!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninjatrap)
{
    std::cout << name << ": called on NinjaTrap: " << ninjatrap.getname() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &scavtrap)
{
    std::cout << name << ": called on ScavTrap: " << scavtrap.getname() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &fragtrap)
{
    std::cout << name << ": called on FragTrap: " << fragtrap.getname() << std::endl;
}

