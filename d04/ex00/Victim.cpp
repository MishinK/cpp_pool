/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:14:00 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 15:14:02 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string _name): name(_name)
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << name << " just died for no apparent reason!"  << std::endl;
}

Victim::Victim(const Victim &Victim)
{
    *this = Victim;
}

Victim &Victim::operator = (const Victim &victim)
{
    if (this == &victim)
        return (*this);
    name = victim.name;
    return (*this);
}

std::string Victim::introduce_himself() const
{
    return ("I'm " + name + " and I like otters!\n");
}

std::ostream &operator << (std::ostream &out, Victim const &victim)
{
    out << victim.introduce_himself();
    return (out);
}

void Victim::getPolymorphed() const
{
    std::cout << name << " has been turned into a cute little sheep!"  << std::endl;
}

std::string Victim::getname() const
{
    return(name);
}