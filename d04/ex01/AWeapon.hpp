/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:55:19 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 17:55:20 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
public:
    AWeapon(std::string const & _name, int _apcost, int _damage);
    virtual ~AWeapon();
    AWeapon(const AWeapon &aweapon);
    AWeapon &operator = (const AWeapon &aweapon);

    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    
    virtual void attack() const = 0;

private:
    AWeapon();    
    std::string name;
    int apcost;
    int damage;
};

#endif
