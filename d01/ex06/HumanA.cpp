/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:04:29 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 01:04:30 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _clab): name(_name), club(_clab){}

void HumanA::attack()
{
    std::cout << name << " attacks with his " << club.getType() << std::endl;
}