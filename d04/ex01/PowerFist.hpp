/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:06:52 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 19:06:53 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
    PowerFist();
    virtual ~PowerFist();
    PowerFist(const PowerFist &powerfist);
    PowerFist &operator = (const PowerFist &powerfist);

    virtual void attack() const;
};

#endif
