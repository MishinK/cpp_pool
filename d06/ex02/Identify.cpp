/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 03:27:22 by ashea             #+#    #+#             */
/*   Updated: 2021/03/26 03:27:24 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base *generate(void)
{
    int i = rand() % 3;
    if (i == 0)
        return (new A);
    if (i == 1)
        return (new B);
    return (new C);
}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;
}