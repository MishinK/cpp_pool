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
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
public:
    FragTrap(std::string _name);
    virtual ~FragTrap();
    FragTrap(const FragTrap &fragtrap);
    FragTrap &operator = (const FragTrap &fragtrap);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void vaulthunter_dot_exe(std::string const & target);
private:
    FragTrap();
    std::string jokes[5];
};

#endif
