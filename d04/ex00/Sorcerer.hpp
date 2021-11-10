/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:07:03 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 14:07:09 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
public:
    Sorcerer(std::string _name, std::string _title);
    ~Sorcerer();
    Sorcerer(const Sorcerer &sorcerer);
    Sorcerer &operator = (const Sorcerer &sorcerer);
    
    std::string introduce_himself() const;
    void polymorph(Victim const &victim) const;
private:
    Sorcerer();
    std::string name;
    std::string title;
};

std::ostream &operator << (std::ostream &out, Sorcerer const &sorcerer);

#endif
