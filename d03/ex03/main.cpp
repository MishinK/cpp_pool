/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 20:02:31 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 20:02:33 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    FragTrap ft ("Bob");

    ft.rangedAttack("Kek");
    ft.meleeAttack("Kek");
    ft.vaulthunter_dot_exe("Kek");
    ft.vaulthunter_dot_exe("Kek");
    ft.vaulthunter_dot_exe("Kek");
    ft.vaulthunter_dot_exe("Kek");
    ft.vaulthunter_dot_exe("Kek");
    ft.takeDamage(60);
    ft.takeDamage(60);
    ft.beRepaired(60);
    ft.beRepaired(60);

    ScavTrap st ("Kek");
    st.rangedAttack("Bob");
    st.meleeAttack("Bob");
    st.challengeNewcomer();
    st.challengeNewcomer();
    st.challengeNewcomer();
    st.challengeNewcomer();
    st.challengeNewcomer();
    st.takeDamage(60);
    st.takeDamage(60);
    

    ScavTrap st2 ("Kek2");
    st2 = st;
    st2.challengeNewcomer();
    st2.beRepaired(60);

    NinjaTrap nt ("Heh");
    nt.rangedAttack("Bob");
    nt.meleeAttack("Bob");
    nt.ninjaShoebox(ft);
    nt.ninjaShoebox(st);
    nt.ninjaShoebox(nt);
    nt.takeDamage(60);
    nt.takeDamage(60);
    nt.beRepaired(60);
    nt.beRepaired(60);
    return (0);
}