/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:20:36 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 18:20:37 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
    PlasmaRifle();
    virtual ~PlasmaRifle();
    PlasmaRifle(const PlasmaRifle &plasmarifle);
    PlasmaRifle &operator = (const PlasmaRifle &plasmarifle);

    virtual void attack() const;
};

#endif
