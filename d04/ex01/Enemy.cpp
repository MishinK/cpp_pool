/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:14:17 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 19:14:18 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int _hp, std::string const & _type): hp(_hp), type(_type)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(const Enemy &enemy)
{
    *this = enemy;
}

Enemy &Enemy::operator = (const Enemy &enemy)
{
    if (this == &enemy)
        return (*this);
    hp = enemy.hp;
    type = enemy.type;
    return (*this);
}

std::string Enemy::getType() const
{
    return (type);
}

int Enemy::getHP() const
{
    return (hp);
}

void Enemy::takeDamage(int damage)
{
    if (damage > 0)
        hp -= damage;
    if (hp < 0)
        hp = 0;
}
