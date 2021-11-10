/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:02:13 by ashea             #+#    #+#             */
/*   Updated: 2021/03/23 19:02:14 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << "New Ice materia" << std::endl;
}

Ice::~Ice()
{
    std::cout << "DELETE Ice materia" << std::endl;
}

Ice::Ice(const Ice &ice): AMateria("ice")
{
    *this = ice;
}

Ice &Ice::operator = (const Ice &ice)
{
    if (this == &ice)
        return (*this);
    AMateria::operator=(ice);
    return (*this);
}

Ice* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
