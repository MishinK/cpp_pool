/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Astra.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:47:14 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 16:47:16 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Astra.hpp"

Astra::Astra(std::string _name): Victim(_name)
{
    std::cout << "Astra piastra!" << std::endl;
}

Astra::~Astra()
{
    std::cout << "Plak plak..."  << std::endl;
}

Astra::Astra(const Astra &astra): Victim(astra.name)
{
    *this = astra;
}

Astra &Astra::operator = (const Astra &astra)
{
    if (this == &astra)
        return (*this);
    name = astra.name;
    return (*this);
}

void Astra::getPolymorphed() const
{
    std::cout << name << " has been turned into a gold fish!"  << std::endl;
}
