/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UltraGun.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 22:00:50 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 22:00:52 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ULTRAGUN_HPP
# define ULTRAGUN_HPP

# include "AWeapon.hpp"

class UltraGun: public AWeapon
{
public:
    UltraGun();
    virtual ~UltraGun();
    UltraGun(const UltraGun &ultragun);
    UltraGun &operator = (const UltraGun &ultragun);

    virtual void attack() const;
};

#endif
