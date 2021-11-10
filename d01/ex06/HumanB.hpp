/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:04:58 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 01:04:59 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB{
public:
    HumanB(std::string _name);
    void setWeapon(Weapon& _clab);
    void attack();
private:
    std::string name;
    Weapon* club;
};

#endif
