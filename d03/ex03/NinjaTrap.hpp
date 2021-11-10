/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 03:51:10 by ashea             #+#    #+#             */
/*   Updated: 2021/03/21 03:51:11 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap{
public:
    NinjaTrap(std::string _name);
    virtual ~NinjaTrap();
    NinjaTrap(const NinjaTrap &ninjatrap);
    NinjaTrap &operator = (const NinjaTrap &ninjatrap);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    
    void ninjaShoebox(NinjaTrap &ninjatrap);
    void ninjaShoebox(ScavTrap &scavtrap);
    void ninjaShoebox(FragTrap &fragtrap);
private:
    NinjaTrap();
};


#endif