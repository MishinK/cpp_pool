/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 20:02:16 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 20:02:18 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name)
{
    std::cout << _name << ": this is my first message!" << "(FragTrap)" << std::endl;
    hit_points = 100;
    max_hit_points = 100;
    energy_points = 100;
    max_energy_points = 100;
    level = 1;
    name = _name;
    melee_attack_damage = 30;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
    jokes[0] = "Are you god? Am I dead?";
    jokes[1] = "Sooooo... how are things?";
    jokes[2] = "Away with thee!";
    jokes[3] = "Hocus pocus!";
    jokes[4] = "Alaka-ZAM!";
}

FragTrap::~FragTrap()
{
    std::cout << name << ": this is my last message..." <<  "(FragTrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
    *this = fragtrap;
}

FragTrap &FragTrap::operator = (const FragTrap &fragtrap)
{
    if (this == &fragtrap)
        return (*this);
    hit_points = fragtrap.hit_points;
    max_hit_points = fragtrap.max_hit_points;
    energy_points = fragtrap.energy_points;
    max_energy_points = fragtrap.max_energy_points;
    level = fragtrap.level;
    name = fragtrap.name;
    melee_attack_damage = fragtrap.melee_attack_damage;
    ranged_attack_damage = fragtrap.ranged_attack_damage;
    armor_damage_reduction = fragtrap.armor_damage_reduction;
    jokes[0] = fragtrap.jokes[0];
    jokes[1] = fragtrap.jokes[1];
    jokes[2] = fragtrap.jokes[2];
    jokes[3] = fragtrap.jokes[3];
    jokes[4] = fragtrap.jokes[4];
    return (*this);
}

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << name << ": attacks " << target << " at range, causing " << ranged_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << name << ": attacks " << target << " at melee, causing " << melee_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int i = rand() % 5;
    if (energy_points >= 25)
    {
        energy_points -= 25;
        std::cout << name << ": attacks " << target << " at random, causing " << i * 10 << " points of damage! " << jokes[i] << ". My energy = " << energy_points << std::endl;
    }
    else
    {
        std::cout << name << ": the energy is over, I am charging" << std::endl;
        energy_points = max_energy_points;
    }
}

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << name << ": received damage " << amount;
    if (hit_points + armor_damage_reduction >= amount && amount > armor_damage_reduction)
        hit_points -= amount - armor_damage_reduction;
    else if (hit_points + armor_damage_reduction <= amount)
            hit_points = 0;
    std::cout << ", my health " << hit_points << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    hit_points += amount;
    if (hit_points > max_hit_points)
        hit_points = max_hit_points;
    std::cout << name << ": repaired  " << amount << ", my health " << hit_points << std::endl;
}
