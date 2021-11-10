/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 01:41:52 by ashea             #+#    #+#             */
/*   Updated: 2021/03/21 01:41:53 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(
    std::string _name,
    unsigned int _hit_points,
    unsigned int _max_hit_points,
    unsigned int _energy_points,
    unsigned int _max_energy_points,
    unsigned int _level,
    unsigned int _melee_attack_damage,
    unsigned int _ranged_attack_damage,
    unsigned int _armor_damage_reduction):
	name(_name),
    hit_points(_hit_points),
    max_hit_points(_max_hit_points),
    energy_points(_energy_points),
    max_energy_points(_max_energy_points),
    level(_level),
    melee_attack_damage(_melee_attack_damage),
    ranged_attack_damage(_ranged_attack_damage),
    armor_damage_reduction(_armor_damage_reduction)
{
    std::cout << name << ": this is my first message!" << "(ClapTrap)" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << ": this is my last message..." << "(ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    *this = claptrap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &claptrap)
{
	if (this == &claptrap)
        return (*this);
    hit_points = claptrap.hit_points;
    energy_points = claptrap.energy_points;
    level = claptrap.level;
    return (*this);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << name << ": received damage " << amount;
    if (hit_points + armor_damage_reduction >= amount && amount > armor_damage_reduction)
        hit_points -= amount - armor_damage_reduction;
    else if (hit_points + armor_damage_reduction <= amount)
            hit_points = 0;
    std::cout << ", my health " << hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hit_points += amount;
    if (hit_points > max_hit_points)
        hit_points = max_hit_points;
    std::cout << name << ": repaired  " << amount << ", my health " << hit_points << std::endl;
}

std::string ClapTrap::getname()
{
    return (name);
}
