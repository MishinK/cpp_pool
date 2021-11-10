/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:27:03 by ashea             #+#    #+#             */
/*   Updated: 2021/03/23 18:27:04 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & _type): type(_type), xp(0)
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(const AMateria &amateria)
{
    *this = amateria;
}

AMateria &AMateria::operator = (const AMateria &amateria)
{
    if (this == &amateria)
        return (*this);
    type = amateria.type;
    xp = amateria.xp;
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (type);
}

unsigned int AMateria::getXP() const
{
    return (xp);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    xp += 10;
}

