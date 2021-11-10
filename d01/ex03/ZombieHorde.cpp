/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:41:31 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 00:41:33 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
    count = 0;
    array_zombie = 0;
}

ZombieHorde::ZombieHorde(int N)
{
    if (N > 0)
    {
        count = N;
        array_zombie = new Zombie[N];
    }
    else
        std::cout << "wrong count zombies" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
    count = 0;
    delete[] array_zombie;
}

void ZombieHorde::announce()
{
    for (int i = 0; i < count; i++)
        (array_zombie[i]).announce();
}
