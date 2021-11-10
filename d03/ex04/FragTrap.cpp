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

FragTrap::FragTrap(std::string _name): ClapTrap(_name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    std::cout << name << ": this is my first message!" << "(FragTrap)" << std::endl;
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

FragTrap::FragTrap(const FragTrap &fragtrap): ClapTrap(fragtrap.name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    *this = fragtrap;
}

FragTrap &FragTrap::operator = (const FragTrap &fragtrap)
{
    if (this == &fragtrap)
        return (*this);
    hit_points = fragtrap.hit_points;
    energy_points = fragtrap.energy_points;  
    level = fragtrap.level;
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