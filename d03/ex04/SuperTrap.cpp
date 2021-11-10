/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 15:41:29 by ashea             #+#    #+#             */
/*   Updated: 2021/03/21 15:41:30 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string _name): ClapTrap(_name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(_name), NinjaTrap(_name)
{
    std::cout << name << ": this is my first message!" << "(SuperTrap)" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << name << ": this is my last message..." << "(SuperTrap)" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &supertrap): ClapTrap(supertrap.name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(supertrap.name), NinjaTrap(supertrap.name)
{
    *this = supertrap;
}

SuperTrap &SuperTrap::operator = (const SuperTrap &supertrap)
{
    if (this == &supertrap)
        return (*this);
    hit_points = supertrap.hit_points;
    energy_points = supertrap.energy_points;  
    level = supertrap.level;
    return (*this);
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}