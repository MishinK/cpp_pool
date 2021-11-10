/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:40:57 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 19:40:58 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
    SuperMutant();
    virtual ~SuperMutant();
    SuperMutant(const SuperMutant &supermutant);
    SuperMutant &operator = (const SuperMutant &supermutant);

    virtual void takeDamage(int damage);
};

#endif