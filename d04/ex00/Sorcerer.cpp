/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:06:55 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 14:06:57 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string _name, std::string _title): name(_name), title(_title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
    *this = sorcerer;
}

Sorcerer &Sorcerer::operator = (const Sorcerer &sorcerer)
{
    if (this == &sorcerer)
        return (*this);
    name = sorcerer.name;
    title = sorcerer.title;
    return (*this);
}

std::string Sorcerer::introduce_himself() const
{
    return ("I am " + name + ", " + title + ", and I like ponies!\n");
}

std::ostream &operator << (std::ostream &out, Sorcerer const &sorcerer)
{
    out << sorcerer.introduce_himself();
    return (out);
}

void Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
}

