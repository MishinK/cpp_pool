/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:14:06 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 15:14:08 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
public:
    Victim(std::string _name);
    virtual ~Victim();
    Victim(const Victim &victim);
    Victim &operator = (const Victim &victim);
    
    std::string introduce_himself() const;
    virtual void getPolymorphed() const;
    std::string getname() const;
private:
    Victim();
protected:
    std::string name;
};

std::ostream &operator << (std::ostream &out, Victim const &victim);

#endif
