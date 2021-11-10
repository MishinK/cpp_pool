/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 16:18:02 by ashea             #+#    #+#             */
/*   Updated: 2021/03/20 16:18:04 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap{
public:
    ScavTrap(std::string _name);
    ~ScavTrap();
    ScavTrap(const ScavTrap &scavtrap);
    ScavTrap &operator = (const ScavTrap &scavtrap);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void challengeNewcomer();

    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
private:
    ScavTrap();
    unsigned int hit_points;
    unsigned int max_hit_points;
    unsigned int energy_points;
    unsigned int max_energy_points;
    unsigned int level;
    std::string name;
    unsigned int melee_attack_damage;
    unsigned int ranged_attack_damage;
    unsigned int armor_damage_reduction;
    std::string not_jokes[5]; 
};


#endif
