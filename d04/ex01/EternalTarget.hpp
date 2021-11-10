/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EternalTarget.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 22:12:20 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 22:12:21 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ETERNALTARGET_HPP
# define ETERNALTARGET_HPP

# include "Enemy.hpp"

class EternalTarget: public Enemy
{
public:
    EternalTarget();
    virtual ~EternalTarget();
    EternalTarget(const EternalTarget &eternaltarget);
    EternalTarget &operator = (const EternalTarget &eternaltarget);

    virtual void takeDamage(int damage);
};

#endif
