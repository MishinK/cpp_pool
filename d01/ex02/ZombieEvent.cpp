/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:36:26 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 00:36:27 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string z_type)
{
    type = z_type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    return(new Zombie(name, type));
}

void ZombieEvent::randomChump()
{
    srand (rand());
    char name[6];
    for (int i = 0; i < 5; i++)
        name[i] = rand() % 26 + 65;
    name[5] = '\0';
        
    Zombie *ptr_zombie = newZombie(name);
    
    (*ptr_zombie).announce();
    delete ptr_zombie;
}
