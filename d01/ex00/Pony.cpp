/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:14:23 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 00:14:25 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string str)
{
    name = str;
    std::cout << name << " came to us!" << std::endl;
}

Pony::~Pony()
{
    std::cout << name << " left us(" << std::endl;
}

void Pony::get_name()
{
    std::cout << name << ": ia..iiaa..." << std::endl;
}
