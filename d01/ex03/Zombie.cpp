/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:41:05 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 00:41:07 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    name = random_name();
    type = "Random";
    std::cout << "<" << name << " (" << type << ")> creat!" << std::endl;
}

Zombie::Zombie(std::string z_name, std::string z_type)
{
    name = z_name;
    type = z_type;
    std::cout << "<" << name << " (" << type << ")> creat!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "<" << name << " (" << type << ")> diad((" << std::endl;
}

void Zombie::announce()
{
    std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::random_name()
{
    srand (rand());
    char name[6];
    for (int i = 0; i < 5; i++)
        name[i] = rand() % 26 + 65;
    name[5] = '\0';
    return(name);
}