/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:05:10 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 01:05:12 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type): type(_type) {}

const std::string& Weapon::getType()
{
    return(type);
}

void Weapon::setType(std::string str)
{
    type = str;
}