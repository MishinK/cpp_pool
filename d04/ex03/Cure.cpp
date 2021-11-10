/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:02:24 by ashea             #+#    #+#             */
/*   Updated: 2021/03/23 19:02:25 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << "New Cure materia" << std::endl;
}

Cure::~Cure()
{
    std::cout << "DELETE Cure materia" << std::endl;
}

Cure::Cure(const Cure &cure): AMateria("cure")
{
    *this = cure;
}

Cure &Cure::operator = (const Cure &cure)
{
    if (this == &cure)
        return (*this);
    AMateria::operator=(cure);
    return (*this);
}

Cure* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
