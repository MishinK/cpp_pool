/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:14:07 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 19:14:09 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
public:
    Enemy(int _hp, std::string const & _type);
    virtual ~Enemy();
    Enemy(const Enemy &enemy);
    Enemy &operator = (const Enemy &enemy);

    std::string getType() const;
    int getHP() const;

    virtual void takeDamage(int damage);
private:
    Enemy();
    int hp;
    std::string type;
};

#endif
