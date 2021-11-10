/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:05:20 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 01:05:22 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <sstream>
# include <string>

class Weapon{
public:
    Weapon(std::string str);
    const std::string& getType();
    void setType(std::string str);
private:
    std::string type;
};

#endif