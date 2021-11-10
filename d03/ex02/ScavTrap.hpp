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
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
public:
    ScavTrap(std::string _name);
    virtual ~ScavTrap();
    ScavTrap(const ScavTrap &scavtrap);
    ScavTrap &operator = (const ScavTrap &scavtrap);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void challengeNewcomer();
private:
    ScavTrap();
    std::string not_jokes[5]; 
};


#endif
