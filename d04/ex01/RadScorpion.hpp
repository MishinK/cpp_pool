/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:58:55 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 19:58:57 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
    RadScorpion();
    virtual ~RadScorpion();
    RadScorpion(const RadScorpion &radscorpion);
    RadScorpion &operator = (const RadScorpion &radscorpion);

    virtual void takeDamage(int damage);
};

#endif
