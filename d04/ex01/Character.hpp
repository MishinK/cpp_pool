/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:04:13 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 20:04:15 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
public:
    Character(std::string const & _name);
    ~Character();
    Character(const Character &character);
    Character &operator = (const Character &character);

    void recoverAP();
    void equip(AWeapon* _aweapon);
    void attack(Enemy* enemy);

    std::string getName() const;
    int getAP() const;
    AWeapon* getAWeapon() const;
private:
    Character();
    std::string name;
    int ap;
    AWeapon* aweapon;
};

std::ostream &operator <<(std::ostream & out, const Character & charater);

#endif
