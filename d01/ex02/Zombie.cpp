/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:32:56 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 00:32:58 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
