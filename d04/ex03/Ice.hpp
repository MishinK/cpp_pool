/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:02:02 by ashea             #+#    #+#             */
/*   Updated: 2021/03/23 19:02:04 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
public:
    Ice();
    virtual ~Ice();
    Ice(const Ice &ice);
    Ice &operator = (const Ice &ice);
    
    virtual Ice* clone() const;
    virtual void use(ICharacter& target);
};

#endif
