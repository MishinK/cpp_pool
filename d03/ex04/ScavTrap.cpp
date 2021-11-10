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

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name, 100, 100, 50, 50, 1, 20, 15, 3)
{
    std::cout << name << ": this is my first message!" << "(ScavTrap)" << std::endl;

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

ScavTrap::ScavTrap(const ScavTrap &scavtrap): ClapTrap(scavtrap.name, 100, 100, 50, 50, 1, 20, 15, 3)
{
    *this = scavtrap;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scavtrap)
{
    if (this == &scavtrap)
        return (*this);
    hit_points = scavtrap.hit_points;
    energy_points = scavtrap.energy_points;  
    level = scavtrap.level;
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
