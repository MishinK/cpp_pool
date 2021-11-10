/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:04:50 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 01:04:52 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name): name(_name){}

void HumanB::setWeapon(Weapon& _clab)
{
    club = &_clab;
}

void HumanB::attack()
{
    std::cout << name << " attacks with his " << (*club).getType() << std::endl;
}