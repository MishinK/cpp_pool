/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 20:02:25 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 20:02:27 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap{
public:
    FragTrap(std::string _name);
    ~FragTrap();
    FragTrap(const FragTrap &fragtrap);
    FragTrap &operator = (const FragTrap &fragtrap);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void vaulthunter_dot_exe(std::string const & target);
    
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:
    FragTrap();
    unsigned int hit_points;
    unsigned int max_hit_points;
    unsigned int energy_points;
    unsigned int max_energy_points;
    unsigned int level;
    std::string name;
    unsigned int melee_attack_damage;
    unsigned int ranged_attack_damage;
    unsigned int armor_damage_reduction;
    std::string jokes[5]; 
};



#endif
