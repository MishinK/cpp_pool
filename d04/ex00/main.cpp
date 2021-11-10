/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:06:32 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 15:06:34 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Astra.hpp"

int main(void)
{
    {
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");

        std::cout << robert << jim << joe;

        robert.polymorph(jim);
        robert.polymorph(joe);
    }
    {
        Sorcerer robert("Robert", "the Magnificent");
        Astra bob("Bob");

        std::cout << bob;
        
        robert.polymorph(bob);
    }
    return (0);
}
