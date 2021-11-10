/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:41:19 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 00:41:21 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde{
public:
    ZombieHorde();
    ZombieHorde(int N);
    ~ZombieHorde();
    void announce();
private:
    int     count;
    Zombie  *array_zombie;
};

#endif
