/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 15:41:17 by ashea             #+#    #+#             */
/*   Updated: 2021/03/21 15:41:19 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
public:
    SuperTrap(std::string _name);
    virtual ~SuperTrap();
    SuperTrap(const SuperTrap &supertrap);
    SuperTrap &operator = (const SuperTrap &supertrap);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
private:
    SuperTrap();
};

#endif
