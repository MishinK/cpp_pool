/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:38:38 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 18:38:39 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "UltraGun.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "EternalTarget.hpp"
#include "Character.hpp"

int main (void)
{
    {
        Character* me = new Character("me");
        std::cout << *me;
        Enemy* b = new RadScorpion();
        AWeapon* pr = new PlasmaRifle();
        AWeapon* pf = new PowerFist();

        me->equip(pr);
        std::cout << *me;
        me->equip(pf);
        me->attack(b);
        std::cout << *me;
        me->equip(pr);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
    }
    std::cout << "-----------\n";
    {
        Character* me = new Character("me");
        AWeapon* pr = new PlasmaRifle();
        AWeapon* pf = new PowerFist();
        Enemy* rs = new RadScorpion();
        Enemy* sm = new SuperMutant();
        
        std::cout << *me;
        
        
        me->equip(pf);
        std::cout << *me;

        int i = 0;
        while (i < 2)
        {
            i++;
            std::cout << i << ") ";
            me->attack(rs);
        }
        i = 0;
        std::cout << *me;
        while (i < 3)
        {
            i++;
            std::cout << i << ") ";
            me->recoverAP();
            std::cout << *me;
        }

        me->equip(pr);
        std::cout << *me;
        
        i = 0;
        while (i < 9)
        {
            i++;
            std::cout << i << ") ";
            me->attack(sm);
        }
        i = 0;
        std::cout << *me;
        while (i < 3)
        {
            i++;
            std::cout << i << ") ";
            me->recoverAP();
            std::cout << *me;
        }
        me->attack(sm);
        me->attack(sm);

        AWeapon* ug = new UltraGun();
        Enemy* et = new EternalTarget();

        me->equip(ug);
        std::cout << *me;
        me->attack(et);
        me->attack(et);
        std::cout << *me;

    }
    return 0;
}
