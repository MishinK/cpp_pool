/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 16:17:47 by ashea             #+#    #+#             */
/*   Updated: 2021/03/20 16:17:49 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name)
{
    std::cout << _name << ": this is my first message!" << "(ScavTrap)" << std::endl;
    hit_points = 100;
    max_hit_points = 100;
    energy_points = 50;
    max_energy_points = 50;
    level = 1;
    name = _name;
    melee_attack_damage = 20;
    ranged_attack_damage = 15;
    armor_damage_reduction = 3;
    not_jokes[0] = "guarding corn";
    not_jokes[1] = "wash the wall";
    not_jokes[2] = "sell air";
    not_jokes[3] = "kiss tomato";
    not_jokes[4] = "sing in the shower";
}

ScavTrap::~ScavTrap()
{
    std::cout << name << ": this is my last message..." << "(ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
    *this = scavtrap;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scavtrap)
{
    if (this == &scavtrap)
        return (*this);
    hit_points = scavtrap.hit_points;
    max_hit_points = scavtrap.max_hit_points;
    energy_points = scavtrap.energy_points;
    max_energy_points = scavtrap.max_energy_points;
    level = scavtrap.level;
    name = scavtrap.name;
    melee_attack_damage = scavtrap.melee_attack_damage;
    ranged_attack_damage = scavtrap.ranged_attack_damage;
    armor_damage_reduction = scavtrap.armor_damage_reduction;
    not_jokes[0] = scavtrap.not_jokes[0];
    not_jokes[1] = scavtrap.not_jokes[1];
    not_jokes[2] = scavtrap.not_jokes[2];
    not_jokes[3] = scavtrap.not_jokes[3];
    not_jokes[4] = scavtrap.not_jokes[4];
    return (*this);
}

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << name << ": attacks " << target << " at range, causing " << ranged_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << name << ": attacks " << target << " at melee, causing " << melee_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    if (energy_points >= 25)
    {
        energy_points -= 25;
        std::cout << name << ": " << not_jokes[rand() % 5] << ". My energy = " << energy_points << std::endl;
    }
    else
    {
        std::cout << name << ": the energy is over, I am charging" << std::endl;
        energy_points = max_energy_points;
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << name << ": received damage " << amount;
    if (hit_points + armor_damage_reduction >= amount && amount > armor_damage_reduction)
        hit_points -= amount - armor_damage_reduction;
    else if (hit_points + armor_damage_reduction <= amount)
            hit_points = 0;
    std::cout << ", my health " << hit_points << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    hit_points += amount;
    if (hit_points > max_hit_points)
        hit_points = max_hit_points;
    std::cout << name << ": repaired  " << amount << ", my health " << hit_points << std::endl;
}