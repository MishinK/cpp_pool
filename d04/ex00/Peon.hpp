/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:46:42 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 15:46:43 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon: public Victim
{
public:
    Peon(std::string _name);
    virtual ~Peon();
    Peon(const Peon &peon);
    Peon &operator = (const Peon &peon);

    virtual void getPolymorphed() const;
private:
    Peon();
};

#endif
