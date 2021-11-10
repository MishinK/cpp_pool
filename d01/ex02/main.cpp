/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:13:43 by ashea             #+#    #+#             */
/*   Updated: 2021/01/19 12:13:51 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
    Zombie z1("Bob", "Stack");
    z1.announce();

    ZombieEvent z2;
    z2.setZombieType("Heap");
    
    z2.randomChump();
    z2.randomChump();
    return (0);
}
