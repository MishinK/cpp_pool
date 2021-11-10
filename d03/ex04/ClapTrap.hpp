/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 01:41:40 by ashea             #+#    #+#             */
/*   Updated: 2021/03/21 01:41:41 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap{
public:
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getname();
protected:
    ClapTrap();
    ClapTrap(std::string _name,
    unsigned int _hit_points,
    unsigned int _max_hit_points,
    unsigned int _energy_points,
    unsigned int _max_energy_points,
    unsigned int _level,
    unsigned int _melee_attack_damage,
    unsigned int _ranged_attack_damage,
    unsigned int _armor_damage_reduction);
    virtual ~ClapTrap();
    ClapTrap(const ClapTrap &claptrap);
    ClapTrap &operator = (const ClapTrap &claptrap);
    std::string name;
    unsigned int hit_points;
    unsigned int max_hit_points;
    unsigned int energy_points;
    unsigned int max_energy_points;
    unsigned int level;
    unsigned int melee_attack_damage;
    unsigned int ranged_attack_damage;
    unsigned int armor_damage_reduction;
};

#endif
