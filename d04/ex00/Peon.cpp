/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:46:34 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 15:46:35 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string _name): Victim(_name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..."  << std::endl;
}

Peon::Peon(const Peon &peon): Victim(peon.name)
{
    *this = peon;
}

Peon &Peon::operator = (const Peon &peon)
{
    if (this == &peon)
        return (*this);
    name = peon.name;
    return (*this);
}

void Peon::getPolymorphed() const
{
    std::cout << name << " has been turned into a pink pony!"  << std::endl;
}