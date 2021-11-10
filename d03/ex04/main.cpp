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
#include "SuperTrap.hpp"

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
    st.beRepaired(60);
    st.beRepaired(60);

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

    SuperTrap super ("Sup");
    super.rangedAttack("Bob");
    super.meleeAttack("Bob");
    super.vaulthunter_dot_exe("Kek");
    super.vaulthunter_dot_exe("Kek");
    super.vaulthunter_dot_exe("Kek");
    super.vaulthunter_dot_exe("Kek");
    super.vaulthunter_dot_exe("Kek");
    super.ninjaShoebox(ft);
    super.ninjaShoebox(st);
    super.ninjaShoebox(nt);
    super.takeDamage(60);
    super.takeDamage(60);
    super.beRepaired(60);
    super.beRepaired(60);
    return (0);
}